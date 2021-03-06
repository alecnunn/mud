#include <infra/Api.h>
#include <type/Api.h>
#include <math/Api.h>

#ifdef MUD_PLATFORM_EMSCRIPTEN
#include <emscripten.h>
#define DECL EMSCRIPTEN_KEEPALIVE
#else
#define DECL
#endif


extern "C" {
	
	// Colour
	mud::Type* DECL mud_Colour__type() {
		return &mud::type<mud::Colour>();
	}
	mud::Colour* DECL mud_Colour_Colour_0() {
		return new mud::Colour();
	}
	mud::Colour* DECL mud_Colour_Colour_1(float r) {
		return new mud::Colour(r);
	}
	mud::Colour* DECL mud_Colour_Colour_2(float r, float g) {
		return new mud::Colour(r, g);
	}
	mud::Colour* DECL mud_Colour_Colour_3(float r, float g, float b) {
		return new mud::Colour(r, g, b);
	}
	mud::Colour* DECL mud_Colour_Colour_4(float r, float g, float b, float a) {
		return new mud::Colour(r, g, b, a);
	}
	float DECL mud_Colour__get_r(mud::Colour* self) {
		return self->m_r;
	}
	void DECL mud_Colour__set_r(mud::Colour* self, float value) {
		self->m_r = value;
	}
	float DECL mud_Colour__get_g(mud::Colour* self) {
		return self->m_g;
	}
	void DECL mud_Colour__set_g(mud::Colour* self, float value) {
		self->m_g = value;
	}
	float DECL mud_Colour__get_b(mud::Colour* self) {
		return self->m_b;
	}
	void DECL mud_Colour__set_b(mud::Colour* self, float value) {
		self->m_b = value;
	}
	float DECL mud_Colour__get_a(mud::Colour* self) {
		return self->m_a;
	}
	void DECL mud_Colour__set_a(mud::Colour* self, float value) {
		self->m_a = value;
	}
	void DECL mud_Colour__destroy(mud::Colour* self) {
		delete self;
	}
	// Gauge
	mud::Type* DECL mud_Gauge__type() {
		return &mud::type<mud::Gauge>();
	}
	mud::Gauge* DECL mud_Gauge_Gauge_0() {
		return new mud::Gauge();
	}
	mud::Gauge* DECL mud_Gauge_Gauge_1(float value) {
		return new mud::Gauge(value);
	}
	void DECL mud_Gauge__destroy(mud::Gauge* self) {
		delete self;
	}
	// Image
	mud::Type* DECL mud_Image__type() {
		return &mud::type<mud::Image>();
	}
	mud::Image* DECL mud_Image_Image_0() {
		return new mud::Image();
	}
	void DECL mud_Image__destroy(mud::Image* self) {
		delete self;
	}
	// Image256
	mud::Type* DECL mud_Image256__type() {
		return &mud::type<mud::Image256>();
	}
	mud::Image256* DECL mud_Image256_Image256_0() {
		return new mud::Image256();
	}
	mud::Image256* DECL mud_Image256_Image256_1(uint16_t width) {
		return new mud::Image256(width);
	}
	mud::Image256* DECL mud_Image256_Image256_2(uint16_t width, uint16_t height) {
		return new mud::Image256(width, height);
	}
	mud::Image256* DECL mud_Image256_Image256_3(uint16_t width, uint16_t height, const mud::Palette* palette) {
		return new mud::Image256(width, height, *palette);
	}
	uint16_t DECL mud_Image256__get_width(mud::Image256* self) {
		return self->m_width;
	}
	void DECL mud_Image256__set_width(mud::Image256* self, uint16_t value) {
		self->m_width = value;
	}
	uint16_t DECL mud_Image256__get_height(mud::Image256* self) {
		return self->m_height;
	}
	void DECL mud_Image256__set_height(mud::Image256* self, uint16_t value) {
		self->m_height = value;
	}
	mud::Palette* DECL mud_Image256__get_palette(mud::Image256* self) {
		static mud::Palette temp;
		return (temp = self->m_palette, &temp);
	}
	void DECL mud_Image256__set_palette(mud::Image256* self, mud::Palette* value) {
		self->m_palette = *value;
	}
	void DECL mud_Image256__destroy(mud::Image256* self) {
		delete self;
	}
	// ImageAtlas
	mud::Type* DECL mud_ImageAtlas__type() {
		return &mud::type<mud::ImageAtlas>();
	}
	void DECL mud_ImageAtlas__destroy(mud::ImageAtlas* self) {
		delete self;
	}
	// Palette
	mud::Type* DECL mud_Palette__type() {
		return &mud::type<mud::Palette>();
	}
	mud::Palette* DECL mud_Palette_Palette_2(mud::Spectrum spectrum, size_t steps) {
		return new mud::Palette(spectrum, steps);
	}
	void DECL mud_Palette__destroy(mud::Palette* self) {
		delete self;
	}
	// Ratio
	mud::Type* DECL mud_Ratio__type() {
		return &mud::type<mud::Ratio>();
	}
	mud::Ratio* DECL mud_Ratio_Ratio_0() {
		return new mud::Ratio();
	}
	mud::Ratio* DECL mud_Ratio_Ratio_1(float value) {
		return new mud::Ratio(value);
	}
	void DECL mud_Ratio__destroy(mud::Ratio* self) {
		delete self;
	}
	// Time
	mud::Type* DECL mud_Time__type() {
		return &mud::type<mud::Time>();
	}
	mud::Time* DECL mud_Time_Time_1(double value) {
		return new mud::Time(value);
	}
	double DECL mud_Time__get_value(mud::Time* self) {
		return self->m_value;
	}
	void DECL mud_Time__set_value(mud::Time* self, double value) {
		self->m_value = value;
	}
	void DECL mud_Time__destroy(mud::Time* self) {
		delete self;
	}
	// TimeSpan
	mud::Type* DECL mud_TimeSpan__type() {
		return &mud::type<mud::TimeSpan>();
	}
	mud::TimeSpan* DECL mud_TimeSpan_TimeSpan_2(mud::Time* s, mud::Time* e) {
		return new mud::TimeSpan(*s, *e);
	}
	mud::Time* DECL mud_TimeSpan__get_start(mud::TimeSpan* self) {
		static mud::Time temp;
		return (temp = self->start, &temp);
	}
	void DECL mud_TimeSpan__set_start(mud::TimeSpan* self, mud::Time* value) {
		self->start = *value;
	}
	mud::Time* DECL mud_TimeSpan__get_end(mud::TimeSpan* self) {
		static mud::Time temp;
		return (temp = self->end, &temp);
	}
	void DECL mud_TimeSpan__set_end(mud::TimeSpan* self, mud::Time* value) {
		self->end = *value;
	}
	void DECL mud_TimeSpan__destroy(mud::TimeSpan* self) {
		delete self;
	}
	// Transform
	mud::Type* DECL mud_Transform__type() {
		return &mud::type<mud::Transform>();
	}
	mud::Transform* DECL mud_Transform_Transform_0() {
		return new mud::Transform();
	}
	mud::Transform* DECL mud_Transform_Transform_3(const mud::vec3* position, const mud::quat* rotation, const mud::vec3* scale) {
		return new mud::Transform(*position, *rotation, *scale);
	}
	mud::vec3* DECL mud_Transform__get_position(mud::Transform* self) {
		static mud::vec3 temp;
		return (temp = self->m_position, &temp);
	}
	void DECL mud_Transform__set_position(mud::Transform* self, mud::vec3* value) {
		self->m_position = *value;
	}
	mud::quat* DECL mud_Transform__get_rotation(mud::Transform* self) {
		static mud::quat temp;
		return (temp = self->m_rotation, &temp);
	}
	void DECL mud_Transform__set_rotation(mud::Transform* self, mud::quat* value) {
		self->m_rotation = *value;
	}
	mud::vec3* DECL mud_Transform__get_scale(mud::Transform* self) {
		static mud::vec3 temp;
		return (temp = self->m_scale, &temp);
	}
	void DECL mud_Transform__set_scale(mud::Transform* self, mud::vec3* value) {
		self->m_scale = *value;
	}
	void DECL mud_Transform__destroy(mud::Transform* self) {
		delete self;
	}
	// bvec3
	mud::Type* DECL mud_bvec3__type() {
		return &mud::type<mud::bvec3>();
	}
	mud::bvec3* DECL mud_bvec3_bvec3_0() {
		return new mud::bvec3();
	}
	void DECL mud_bvec3__destroy(mud::bvec3* self) {
		delete self;
	}
	// bvec4
	mud::Type* DECL mud_bvec4__type() {
		return &mud::type<mud::bvec4>();
	}
	mud::bvec4* DECL mud_bvec4_bvec4_0() {
		return new mud::bvec4();
	}
	void DECL mud_bvec4__destroy(mud::bvec4* self) {
		delete self;
	}
	// half2
	mud::Type* DECL mud_half2__type() {
		return &mud::type<mud::half2>();
	}
	mud::half2* DECL mud_half2_half2_0() {
		return new mud::half2();
	}
	void DECL mud_half2__destroy(mud::half2* self) {
		delete self;
	}
	// half3
	mud::Type* DECL mud_half3__type() {
		return &mud::type<mud::half3>();
	}
	mud::half3* DECL mud_half3_half3_0() {
		return new mud::half3();
	}
	void DECL mud_half3__destroy(mud::half3* self) {
		delete self;
	}
	// ivec2
	mud::Type* DECL mud_ivec2__type() {
		return &mud::type<mud::ivec2>();
	}
	mud::ivec2* DECL mud_ivec2_ivec2_0() {
		return new mud::ivec2();
	}
	void DECL mud_ivec2__destroy(mud::ivec2* self) {
		delete self;
	}
	// ivec3
	mud::Type* DECL mud_ivec3__type() {
		return &mud::type<mud::ivec3>();
	}
	mud::ivec3* DECL mud_ivec3_ivec3_0() {
		return new mud::ivec3();
	}
	mud::ivec3* DECL mud_ivec3_ivec3_1(int x) {
		return new mud::ivec3(x);
	}
	mud::ivec3* DECL mud_ivec3_ivec3_3(int x, int y, int z) {
		return new mud::ivec3(x, y, z);
	}
	int DECL mud_ivec3__get_x(mud::ivec3* self) {
		return self->x;
	}
	void DECL mud_ivec3__set_x(mud::ivec3* self, int value) {
		self->x = value;
	}
	int DECL mud_ivec3__get_y(mud::ivec3* self) {
		return self->y;
	}
	void DECL mud_ivec3__set_y(mud::ivec3* self, int value) {
		self->y = value;
	}
	int DECL mud_ivec3__get_z(mud::ivec3* self) {
		return self->z;
	}
	void DECL mud_ivec3__set_z(mud::ivec3* self, int value) {
		self->z = value;
	}
	void DECL mud_ivec3__destroy(mud::ivec3* self) {
		delete self;
	}
	// ivec4
	mud::Type* DECL mud_ivec4__type() {
		return &mud::type<mud::ivec4>();
	}
	mud::ivec4* DECL mud_ivec4_ivec4_0() {
		return new mud::ivec4();
	}
	void DECL mud_ivec4__destroy(mud::ivec4* self) {
		delete self;
	}
	// mat4
	mud::Type* DECL mud_mat4__type() {
		return &mud::type<mud::mat4>();
	}
	mud::mat4* DECL mud_mat4_mat4_0() {
		return new mud::mat4();
	}
	void DECL mud_mat4__destroy(mud::mat4* self) {
		delete self;
	}
	// quat
	mud::Type* DECL mud_quat__type() {
		return &mud::type<mud::quat>();
	}
	mud::quat* DECL mud_quat_quat_0() {
		return new mud::quat();
	}
	mud::quat* DECL mud_quat_quat_4(float w, float x, float y, float z) {
		return new mud::quat(w, x, y, z);
	}
	float DECL mud_quat__get_x(mud::quat* self) {
		return self->x;
	}
	void DECL mud_quat__set_x(mud::quat* self, float value) {
		self->x = value;
	}
	float DECL mud_quat__get_y(mud::quat* self) {
		return self->y;
	}
	void DECL mud_quat__set_y(mud::quat* self, float value) {
		self->y = value;
	}
	float DECL mud_quat__get_z(mud::quat* self) {
		return self->z;
	}
	void DECL mud_quat__set_z(mud::quat* self, float value) {
		self->z = value;
	}
	float DECL mud_quat__get_w(mud::quat* self) {
		return self->w;
	}
	void DECL mud_quat__set_w(mud::quat* self, float value) {
		self->w = value;
	}
	void DECL mud_quat__destroy(mud::quat* self) {
		delete self;
	}
	// uvec2
	mud::Type* DECL mud_uvec2__type() {
		return &mud::type<mud::uvec2>();
	}
	mud::uvec2* DECL mud_uvec2_uvec2_0() {
		return new mud::uvec2();
	}
	mud::uvec2* DECL mud_uvec2_uvec2_1(uint32_t x) {
		return new mud::uvec2(x);
	}
	mud::uvec2* DECL mud_uvec2_uvec2_2(uint32_t x, uint32_t y) {
		return new mud::uvec2(x, y);
	}
	uint32_t DECL mud_uvec2__get_x(mud::uvec2* self) {
		return self->x;
	}
	void DECL mud_uvec2__set_x(mud::uvec2* self, uint32_t value) {
		self->x = value;
	}
	uint32_t DECL mud_uvec2__get_y(mud::uvec2* self) {
		return self->y;
	}
	void DECL mud_uvec2__set_y(mud::uvec2* self, uint32_t value) {
		self->y = value;
	}
	void DECL mud_uvec2__destroy(mud::uvec2* self) {
		delete self;
	}
	// uvec3
	mud::Type* DECL mud_uvec3__type() {
		return &mud::type<mud::uvec3>();
	}
	mud::uvec3* DECL mud_uvec3_uvec3_0() {
		return new mud::uvec3();
	}
	mud::uvec3* DECL mud_uvec3_uvec3_1(uint32_t x) {
		return new mud::uvec3(x);
	}
	mud::uvec3* DECL mud_uvec3_uvec3_3(uint32_t x, uint32_t y, uint32_t z) {
		return new mud::uvec3(x, y, z);
	}
	uint32_t DECL mud_uvec3__get_x(mud::uvec3* self) {
		return self->x;
	}
	void DECL mud_uvec3__set_x(mud::uvec3* self, uint32_t value) {
		self->x = value;
	}
	uint32_t DECL mud_uvec3__get_y(mud::uvec3* self) {
		return self->y;
	}
	void DECL mud_uvec3__set_y(mud::uvec3* self, uint32_t value) {
		self->y = value;
	}
	uint32_t DECL mud_uvec3__get_z(mud::uvec3* self) {
		return self->z;
	}
	void DECL mud_uvec3__set_z(mud::uvec3* self, uint32_t value) {
		self->z = value;
	}
	void DECL mud_uvec3__destroy(mud::uvec3* self) {
		delete self;
	}
	// uvec4
	mud::Type* DECL mud_uvec4__type() {
		return &mud::type<mud::uvec4>();
	}
	mud::uvec4* DECL mud_uvec4_uvec4_0() {
		return new mud::uvec4();
	}
	mud::uvec4* DECL mud_uvec4_uvec4_1(uint32_t w) {
		return new mud::uvec4(w);
	}
	mud::uvec4* DECL mud_uvec4_uvec4_4(uint32_t w, uint32_t x, uint32_t y, uint32_t z) {
		return new mud::uvec4(w, x, y, z);
	}
	uint32_t DECL mud_uvec4__get_x(mud::uvec4* self) {
		return self->x;
	}
	void DECL mud_uvec4__set_x(mud::uvec4* self, uint32_t value) {
		self->x = value;
	}
	uint32_t DECL mud_uvec4__get_y(mud::uvec4* self) {
		return self->y;
	}
	void DECL mud_uvec4__set_y(mud::uvec4* self, uint32_t value) {
		self->y = value;
	}
	uint32_t DECL mud_uvec4__get_z(mud::uvec4* self) {
		return self->z;
	}
	void DECL mud_uvec4__set_z(mud::uvec4* self, uint32_t value) {
		self->z = value;
	}
	uint32_t DECL mud_uvec4__get_w(mud::uvec4* self) {
		return self->w;
	}
	void DECL mud_uvec4__set_w(mud::uvec4* self, uint32_t value) {
		self->w = value;
	}
	void DECL mud_uvec4__destroy(mud::uvec4* self) {
		delete self;
	}
	// vec2
	mud::Type* DECL mud_vec2__type() {
		return &mud::type<mud::vec2>();
	}
	mud::vec2* DECL mud_vec2_vec2_0() {
		return new mud::vec2();
	}
	mud::vec2* DECL mud_vec2_vec2_1(float x) {
		return new mud::vec2(x);
	}
	mud::vec2* DECL mud_vec2_vec2_2(float x, float y) {
		return new mud::vec2(x, y);
	}
	float DECL mud_vec2__get_x(mud::vec2* self) {
		return self->x;
	}
	void DECL mud_vec2__set_x(mud::vec2* self, float value) {
		self->x = value;
	}
	float DECL mud_vec2__get_y(mud::vec2* self) {
		return self->y;
	}
	void DECL mud_vec2__set_y(mud::vec2* self, float value) {
		self->y = value;
	}
	void DECL mud_vec2__destroy(mud::vec2* self) {
		delete self;
	}
	// vec3
	mud::Type* DECL mud_vec3__type() {
		return &mud::type<mud::vec3>();
	}
	mud::vec3* DECL mud_vec3_vec3_0() {
		return new mud::vec3();
	}
	mud::vec3* DECL mud_vec3_vec3_1(float x) {
		return new mud::vec3(x);
	}
	mud::vec3* DECL mud_vec3_vec3_3(float x, float y, float z) {
		return new mud::vec3(x, y, z);
	}
	float DECL mud_vec3__get_x(mud::vec3* self) {
		return self->x;
	}
	void DECL mud_vec3__set_x(mud::vec3* self, float value) {
		self->x = value;
	}
	float DECL mud_vec3__get_y(mud::vec3* self) {
		return self->y;
	}
	void DECL mud_vec3__set_y(mud::vec3* self, float value) {
		self->y = value;
	}
	float DECL mud_vec3__get_z(mud::vec3* self) {
		return self->z;
	}
	void DECL mud_vec3__set_z(mud::vec3* self, float value) {
		self->z = value;
	}
	void DECL mud_vec3__destroy(mud::vec3* self) {
		delete self;
	}
	// vec4
	mud::Type* DECL mud_vec4__type() {
		return &mud::type<mud::vec4>();
	}
	mud::vec4* DECL mud_vec4_vec4_0() {
		return new mud::vec4();
	}
	mud::vec4* DECL mud_vec4_vec4_1(float w) {
		return new mud::vec4(w);
	}
	mud::vec4* DECL mud_vec4_vec4_4(float w, float x, float y, float z) {
		return new mud::vec4(w, x, y, z);
	}
	float DECL mud_vec4__get_x(mud::vec4* self) {
		return self->x;
	}
	void DECL mud_vec4__set_x(mud::vec4* self, float value) {
		self->x = value;
	}
	float DECL mud_vec4__get_y(mud::vec4* self) {
		return self->y;
	}
	void DECL mud_vec4__set_y(mud::vec4* self, float value) {
		self->y = value;
	}
	float DECL mud_vec4__get_z(mud::vec4* self) {
		return self->z;
	}
	void DECL mud_vec4__set_z(mud::vec4* self, float value) {
		self->z = value;
	}
	float DECL mud_vec4__get_w(mud::vec4* self) {
		return self->w;
	}
	void DECL mud_vec4__set_w(mud::vec4* self, float value) {
		self->w = value;
	}
	void DECL mud_vec4__destroy(mud::vec4* self) {
		delete self;
	}
	// Sprite
	mud::Type* DECL mud_Sprite__type() {
		return &mud::type<mud::Sprite>();
	}
	void DECL mud_Sprite__destroy(mud::Sprite* self) {
		delete self;
	}
	// SpriteAtlas
	mud::Type* DECL mud_SpriteAtlas__type() {
		return &mud::type<mud::SpriteAtlas>();
	}
	void DECL mud_SpriteAtlas__destroy(mud::SpriteAtlas* self) {
		delete self;
	}
	// TextureAtlas
	mud::Type* DECL mud_TextureAtlas__type() {
		return &mud::type<mud::TextureAtlas>();
	}
	void DECL mud_TextureAtlas__destroy(mud::TextureAtlas* self) {
		delete self;
	}
	float DECL mud_add_float__2(float a, float b) {
		return mud::add<float>(a, b);
	}
	mud::vec3* DECL mud_add_mud_vec3__2(mud::vec3* a, mud::vec3* b) {
		static mud::vec3 temp;
		return (temp = mud::add<mud::vec3>(*a, *b), &temp);
	}
	mud::quat* DECL mud_angle_axis_2(float angle, const mud::vec3* axis) {
		static mud::quat temp;
		return (temp = mud::angle_axis(angle, *axis), &temp);
	}
	mud::quat* DECL mud_axis_angle_2(const mud::vec3* axis, float angle) {
		static mud::quat temp;
		return (temp = mud::axis_angle(*axis, angle), &temp);
	}
	double DECL _cos_1(double a) {
		return cos(a);
	}
	float DECL _cosf_1(float a) {
		return cosf(a);
	}
	float DECL glm_distance_2(const mud::vec3* a, const mud::vec3* b) {
		return glm::distance(*a, *b);
	}
	float DECL mud_divide_float__2(float a, float b) {
		return mud::divide<float>(a, b);
	}
	mud::vec3* DECL mud_divide_mud_vec3__2(mud::vec3* a, mud::vec3* b) {
		static mud::vec3 temp;
		return (temp = mud::divide<mud::vec3>(*a, *b), &temp);
	}
	mud::Colour* DECL mud_from_abgr_1(uint32_t colour) {
		static mud::Colour temp;
		return (temp = mud::from_abgr(colour), &temp);
	}
	mud::Colour* DECL mud_from_rgba_1(uint32_t colour) {
		static mud::Colour temp;
		return (temp = mud::from_rgba(colour), &temp);
	}
	mud::vec3* DECL mud_grid_center_2(const mud::uvec3* coord, const mud::vec3* cell_size) {
		static mud::vec3 temp;
		return (temp = mud::grid_center(*coord, *cell_size), &temp);
	}
	mud::Colour* DECL mud_hsl_to_rgb_3(float h, float s, float l) {
		static mud::Colour temp;
		return (temp = mud::hsl_to_rgb(h, s, l), &temp);
	}
	mud::Colour* DECL mud_hsla_to_rgba_1(const mud::Colour* colour) {
		static mud::Colour temp;
		return (temp = mud::hsla_to_rgba(*colour), &temp);
	}
	float DECL glm_length_1(const mud::vec3* v) {
		return glm::length(*v);
	}
	float DECL glm_length2_1(const mud::vec3* v) {
		return glm::length2(*v);
	}
	mud::quat* DECL mud_look_at_2(const mud::vec3* eye, const mud::vec3* target) {
		static mud::quat temp;
		return (temp = mud::look_at(*eye, *target), &temp);
	}
	mud::quat* DECL mud_look_at_3(const mud::vec3* eye, const mud::vec3* target, const mud::vec3* forward) {
		static mud::quat temp;
		return (temp = mud::look_at(*eye, *target, *forward), &temp);
	}
	mud::quat* DECL mud_look_dir_1(const mud::vec3* direction) {
		static mud::quat temp;
		return (temp = mud::look_dir(*direction), &temp);
	}
	mud::quat* DECL mud_look_dir_2(const mud::vec3* direction, const mud::vec3* forward) {
		static mud::quat temp;
		return (temp = mud::look_dir(*direction, *forward), &temp);
	}
	float DECL mud_multiply_float__2(float a, float b) {
		return mud::multiply<float>(a, b);
	}
	mud::vec3* DECL mud_multiply_mud_vec3__2(mud::vec3* a, mud::vec3* b) {
		static mud::vec3 temp;
		return (temp = mud::multiply<mud::vec3>(*a, *b), &temp);
	}
	double DECL mud_ncos_1(double a) {
		return mud::ncos(a);
	}
	float DECL mud_ncosf_1(float a) {
		return mud::ncosf(a);
	}
	double DECL mud_nsin_1(double a) {
		return mud::nsin(a);
	}
	float DECL mud_nsinf_1(float a) {
		return mud::nsinf(a);
	}
	float DECL mud_oriented_angle_3(const mud::vec3* lhs, const mud::vec3* rhs, const mud::vec3* ref) {
		return mud::oriented_angle(*lhs, *rhs, *ref);
	}
	float DECL mud_oriented_angle_2d_2(const mud::vec2* lhs, const mud::vec2* rhs) {
		return mud::oriented_angle_2d(*lhs, *rhs);
	}
	mud::Colour* DECL mud_rgb_to_hsl_3(float r, float g, float b) {
		static mud::Colour temp;
		return (temp = mud::rgb_to_hsl(r, g, b), &temp);
	}
	mud::Colour* DECL mud_rgba_to_hsla_1(const mud::Colour* colour) {
		static mud::Colour temp;
		return (temp = mud::rgba_to_hsla(*colour), &temp);
	}
	mud::quat* DECL mud_rotate_3(const mud::quat* q, const mud::vec3* axis, float angle) {
		static mud::quat temp;
		return (temp = mud::rotate(*q, *axis, angle), &temp);
	}
	double DECL _sin_1(double a) {
		return sin(a);
	}
	float DECL _sinf_1(float a) {
		return sinf(a);
	}
	float DECL mud_subtract_float__2(float a, float b) {
		return mud::subtract<float>(a, b);
	}
	mud::vec3* DECL mud_subtract_mud_vec3__2(mud::vec3* a, mud::vec3* b) {
		static mud::vec3 temp;
		return (temp = mud::subtract<mud::vec3>(*a, *b), &temp);
	}
	uint32_t DECL mud_to_abgr_1(const mud::Colour* colour) {
		return mud::to_abgr(*colour);
	}
	mud::Colour* DECL mud_to_gamma_1(const mud::Colour* colour) {
		static mud::Colour temp;
		return (temp = mud::to_gamma(*colour), &temp);
	}
	mud::Colour* DECL mud_to_linear_1(const mud::Colour* colour) {
		static mud::Colour temp;
		return (temp = mud::to_linear(*colour), &temp);
	}
	uint32_t DECL mud_to_rgba_1(const mud::Colour* colour) {
		return mud::to_rgba(*colour);
	}
	mud::Colour* DECL mud_to_srgb_1(const mud::Colour* colour) {
		static mud::Colour temp;
		return (temp = mud::to_srgb(*colour), &temp);
	}
	// Axes
	mud::Axes DECL mud_Axes_None() {
		return mud::Axes::None;
	}
	mud::Axes DECL mud_Axes_X() {
		return mud::Axes::X;
	}
	mud::Axes DECL mud_Axes_Y() {
		return mud::Axes::Y;
	}
	mud::Axes DECL mud_Axes_Z() {
		return mud::Axes::Z;
	}
	// Axis
	mud::Axis DECL mud_Axis_X() {
		return mud::Axis::X;
	}
	mud::Axis DECL mud_Axis_Y() {
		return mud::Axis::Y;
	}
	mud::Axis DECL mud_Axis_Z() {
		return mud::Axis::Z;
	}
	// Clockwise
	mud::Clockwise DECL mud_Clockwise_CLOCKWISE() {
		return mud::CLOCKWISE;
	}
	mud::Clockwise DECL mud_Clockwise_ANTI_CLOCKWISE() {
		return mud::ANTI_CLOCKWISE;
	}
	// Side
	mud::Side DECL mud_Side_Right() {
		return mud::Side::Right;
	}
	mud::Side DECL mud_Side_Left() {
		return mud::Side::Left;
	}
	mud::Side DECL mud_Side_Up() {
		return mud::Side::Up;
	}
	mud::Side DECL mud_Side_Down() {
		return mud::Side::Down;
	}
	mud::Side DECL mud_Side_Back() {
		return mud::Side::Back;
	}
	mud::Side DECL mud_Side_Front() {
		return mud::Side::Front;
	}
	// SignedAxis
	mud::SignedAxis DECL mud_SignedAxis_PlusX() {
		return mud::SignedAxis::PlusX;
	}
	mud::SignedAxis DECL mud_SignedAxis_MinusX() {
		return mud::SignedAxis::MinusX;
	}
	mud::SignedAxis DECL mud_SignedAxis_PlusY() {
		return mud::SignedAxis::PlusY;
	}
	mud::SignedAxis DECL mud_SignedAxis_MinusY() {
		return mud::SignedAxis::MinusY;
	}
	mud::SignedAxis DECL mud_SignedAxis_PlusZ() {
		return mud::SignedAxis::PlusZ;
	}
	mud::SignedAxis DECL mud_SignedAxis_MinusZ() {
		return mud::SignedAxis::MinusZ;
	}
	// Spectrum
	mud::Spectrum DECL mud_Spectrum_Value() {
		return mud::Spectrum::Value;
	}
	mud::Spectrum DECL mud_Spectrum_Hue() {
		return mud::Spectrum::Hue;
	}
	// TrackMode
	mud::TrackMode DECL mud_TrackMode_Constant() {
		return mud::TrackMode::Constant;
	}
	mud::TrackMode DECL mud_TrackMode_ConstantRandom() {
		return mud::TrackMode::ConstantRandom;
	}
	mud::TrackMode DECL mud_TrackMode_Curve() {
		return mud::TrackMode::Curve;
	}
	mud::TrackMode DECL mud_TrackMode_CurveRandom() {
		return mud::TrackMode::CurveRandom;
	}
	
}


