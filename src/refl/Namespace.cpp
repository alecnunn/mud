//  Copyright (c) 2019 Hugo Amiard hugo.amiard@laposte.net
//  This software is provided 'as-is' under the zlib License, see the LICENSE.txt file.
//  This notice and the license may not be removed or altered from any source distribution.

#include <infra/Cpp20.h>

#ifdef MUD_MODULES
module mud.refl;
#else
#include <refl/Namespace.h>
#include <refl/System.h>
#endif

namespace mud
{
	Namespace::Namespace(cstring name, Namespace* parent)
		: m_name(name)
		, m_parent(parent)
	{
		if(parent)
		{
			m_path = parent->m_path;
			m_path.push_back(name);
		}
	}

	Namespace& namspc(std::vector<cstring> path)
	{
		return system().get_namespace(path);
	}
}
