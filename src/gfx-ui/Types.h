#pragma once

#include <gfx-ui/Forward.h>

#if !defined MUD_MODULES || defined MUD_TYPE_LIB
#include <type/Type.h>
#include <type/Vector.h>
#endif

#ifndef MUD_MODULES
#include <infra/Types.h>
#include <tree/Types.h>
#include <type/Types.h>
#include <math/Types.h>
#include <geom/Types.h>
#include <ctx/Types.h>
#include <ui/Types.h>
#include <gfx/Types.h>
#endif

#ifndef MUD_CPP_20
#include <string>
#include <cstdint>
#include <vector>
#endif


namespace mud
{
    // Exported types
    export_ template <> MUD_GFX_UI_EXPORT Type& type<mud::ui::OrbitMode>();
    
    export_ template <> MUD_GFX_UI_EXPORT Type& type<mud::Object>();
    export_ template <> MUD_GFX_UI_EXPORT Type& type<mud::ViewerController>();
    export_ template <> MUD_GFX_UI_EXPORT Type& type<mud::OrbitController>();
    export_ template <> MUD_GFX_UI_EXPORT Type& type<mud::FreeOrbitController>();
    export_ template <> MUD_GFX_UI_EXPORT Type& type<mud::SpaceSheet>();
    export_ template <> MUD_GFX_UI_EXPORT Type& type<mud::Viewer>();
    export_ template <> MUD_GFX_UI_EXPORT Type& type<mud::SceneViewer>();
    
    export_ template struct MUD_GFX_UI_EXPORT Typed<std::vector<mud::Object*>>;
    export_ template struct MUD_GFX_UI_EXPORT Typed<std::vector<mud::ViewerController*>>;
    export_ template struct MUD_GFX_UI_EXPORT Typed<std::vector<mud::OrbitController*>>;
    export_ template struct MUD_GFX_UI_EXPORT Typed<std::vector<mud::FreeOrbitController*>>;
    export_ template struct MUD_GFX_UI_EXPORT Typed<std::vector<mud::SpaceSheet*>>;
    export_ template struct MUD_GFX_UI_EXPORT Typed<std::vector<mud::Viewer*>>;
    export_ template struct MUD_GFX_UI_EXPORT Typed<std::vector<mud::SceneViewer*>>;
}
