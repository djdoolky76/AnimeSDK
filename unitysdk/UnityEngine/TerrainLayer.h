#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector4.h"
namespace UnityEngine { class TerrainLayer; }
namespace UnityEngine { class Texture2D; }

#define UNITYENGINE_TERRAINLAYER_CTOR_OFFSET UNITYSDK_OFFSET(0x2092EA20)
#define UNITYENGINE_TERRAINLAYER_GET_DIFFUSETEXTURE_OFFSET UNITYSDK_OFFSET(0x2092EA40)
#define UNITYENGINE_TERRAINLAYER_GET_MASKMAPTEXTURE_OFFSET UNITYSDK_OFFSET(0x2092EA80)
#define UNITYENGINE_TERRAINLAYER_GET_METALLIC_OFFSET UNITYSDK_OFFSET(0x2092EBF0)
#define UNITYENGINE_TERRAINLAYER_GET_NORMALMAPTEXTURE_OFFSET UNITYSDK_OFFSET(0x2092EA60)
#define UNITYENGINE_TERRAINLAYER_GET_SMOOTHNESS_OFFSET UNITYSDK_OFFSET(0x2092EC10)
#define UNITYENGINE_TERRAINLAYER_GET_SPECULAR_INJECTED_OFFSET UNITYSDK_OFFSET(0x2092EBC0)
#define UNITYENGINE_TERRAINLAYER_GET_SPECULAR_OFFSET UNITYSDK_OFFSET(0x2092EB80)
#define UNITYENGINE_TERRAINLAYER_GET_TILEOFFSET_INJECTED_OFFSET UNITYSDK_OFFSET(0x2092EB40)
#define UNITYENGINE_TERRAINLAYER_GET_TILEOFFSET_OFFSET UNITYSDK_OFFSET(0x2092EB10)
#define UNITYENGINE_TERRAINLAYER_GET_TILESIZE_INJECTED_OFFSET UNITYSDK_OFFSET(0x2092EAD0)
#define UNITYENGINE_TERRAINLAYER_GET_TILESIZE_OFFSET UNITYSDK_OFFSET(0x2092EAA0)
#define UNITYENGINE_TERRAINLAYER_INTERNAL_CREATE_OFFSET UNITYSDK_OFFSET(0x2092EA30)
#define UNITYENGINE_TERRAINLAYER_SET_DIFFUSEREMAPMAX_INJECTED_OFFSET UNITYSDK_OFFSET(0x2092EC70)
#define UNITYENGINE_TERRAINLAYER_SET_DIFFUSEREMAPMAX_OFFSET UNITYSDK_OFFSET(0x2092EC60)
#define UNITYENGINE_TERRAINLAYER_SET_DIFFUSEREMAPMIN_INJECTED_OFFSET UNITYSDK_OFFSET(0x2092EC50)
#define UNITYENGINE_TERRAINLAYER_SET_DIFFUSEREMAPMIN_OFFSET UNITYSDK_OFFSET(0x2092EC40)
#define UNITYENGINE_TERRAINLAYER_SET_DIFFUSETEXTURE_OFFSET UNITYSDK_OFFSET(0x2092EA50)
#define UNITYENGINE_TERRAINLAYER_SET_MASKMAPREMAPMAX_INJECTED_OFFSET UNITYSDK_OFFSET(0x2092ECB0)
#define UNITYENGINE_TERRAINLAYER_SET_MASKMAPREMAPMAX_OFFSET UNITYSDK_OFFSET(0x2092ECA0)
#define UNITYENGINE_TERRAINLAYER_SET_MASKMAPREMAPMIN_INJECTED_OFFSET UNITYSDK_OFFSET(0x2092EC90)
#define UNITYENGINE_TERRAINLAYER_SET_MASKMAPREMAPMIN_OFFSET UNITYSDK_OFFSET(0x2092EC80)
#define UNITYENGINE_TERRAINLAYER_SET_MASKMAPTEXTURE_OFFSET UNITYSDK_OFFSET(0x2092EA90)
#define UNITYENGINE_TERRAINLAYER_SET_METALLIC_OFFSET UNITYSDK_OFFSET(0x2092EC00)
#define UNITYENGINE_TERRAINLAYER_SET_NORMALMAPTEXTURE_OFFSET UNITYSDK_OFFSET(0x2092EA70)
#define UNITYENGINE_TERRAINLAYER_SET_NORMALSCALE_OFFSET UNITYSDK_OFFSET(0x2092EC30)
#define UNITYENGINE_TERRAINLAYER_SET_SMOOTHNESS_OFFSET UNITYSDK_OFFSET(0x2092EC20)
#define UNITYENGINE_TERRAINLAYER_SET_SPECULAR_INJECTED_OFFSET UNITYSDK_OFFSET(0x2092EBE0)
#define UNITYENGINE_TERRAINLAYER_SET_SPECULAR_OFFSET UNITYSDK_OFFSET(0x2092EBD0)
#define UNITYENGINE_TERRAINLAYER_SET_TILEOFFSET_INJECTED_OFFSET UNITYSDK_OFFSET(0x2092EB70)
#define UNITYENGINE_TERRAINLAYER_SET_TILEOFFSET_OFFSET UNITYSDK_OFFSET(0x2092EB50)
#define UNITYENGINE_TERRAINLAYER_SET_TILESIZE_INJECTED_OFFSET UNITYSDK_OFFSET(0x2092EB00)
#define UNITYENGINE_TERRAINLAYER_SET_TILESIZE_OFFSET UNITYSDK_OFFSET(0x2092EAE0)

namespace UnityEngine
{
	inline static constexpr unsigned int TerrainLayer_TypeDefinitionIndex = 5341;

	class TerrainLayer : public ::UnityEngine::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINLAYER_CTOR_OFFSET))(this);
		}

		static ::System::Void Internal_Create(::UnityEngine::TerrainLayer* a1)
		{
			return ((::System::Void(*)(::UnityEngine::TerrainLayer*))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINLAYER_INTERNAL_CREATE_OFFSET))(a1);
		}

		::UnityEngine::Texture2D* get_diffuseTexture()
		{
			return ((::UnityEngine::Texture2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINLAYER_GET_DIFFUSETEXTURE_OFFSET))(this);
		}

		::System::Void set_diffuseTexture(::UnityEngine::Texture2D* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture2D*))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINLAYER_SET_DIFFUSETEXTURE_OFFSET))(this, a1);
		}

		::UnityEngine::Texture2D* get_normalMapTexture()
		{
			return ((::UnityEngine::Texture2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINLAYER_GET_NORMALMAPTEXTURE_OFFSET))(this);
		}

		::System::Void set_normalMapTexture(::UnityEngine::Texture2D* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture2D*))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINLAYER_SET_NORMALMAPTEXTURE_OFFSET))(this, a1);
		}

		::UnityEngine::Texture2D* get_maskMapTexture()
		{
			return ((::UnityEngine::Texture2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINLAYER_GET_MASKMAPTEXTURE_OFFSET))(this);
		}

		::System::Void set_maskMapTexture(::UnityEngine::Texture2D* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture2D*))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINLAYER_SET_MASKMAPTEXTURE_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2 get_tileSize()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINLAYER_GET_TILESIZE_OFFSET))(this);
		}

		::System::Void set_tileSize(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINLAYER_SET_TILESIZE_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2 get_tileOffset()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINLAYER_GET_TILEOFFSET_OFFSET))(this);
		}

		::System::Void set_tileOffset(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINLAYER_SET_TILEOFFSET_OFFSET))(this, a1);
		}

		::UnityEngine::Color get_specular()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINLAYER_GET_SPECULAR_OFFSET))(this);
		}

		::System::Void set_specular(::UnityEngine::Color a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINLAYER_SET_SPECULAR_OFFSET))(this, a1);
		}

		::System::Single get_metallic()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINLAYER_GET_METALLIC_OFFSET))(this);
		}

		::System::Void set_metallic(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINLAYER_SET_METALLIC_OFFSET))(this, a1);
		}

		::System::Single get_smoothness()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINLAYER_GET_SMOOTHNESS_OFFSET))(this);
		}

		::System::Void set_smoothness(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINLAYER_SET_SMOOTHNESS_OFFSET))(this, a1);
		}

		::System::Void set_normalScale(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINLAYER_SET_NORMALSCALE_OFFSET))(this, a1);
		}

		::System::Void set_diffuseRemapMin(::UnityEngine::Vector4 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINLAYER_SET_DIFFUSEREMAPMIN_OFFSET))(this, a1);
		}

		::System::Void set_diffuseRemapMax(::UnityEngine::Vector4 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINLAYER_SET_DIFFUSEREMAPMAX_OFFSET))(this, a1);
		}

		::System::Void set_maskMapRemapMin(::UnityEngine::Vector4 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINLAYER_SET_MASKMAPREMAPMIN_OFFSET))(this, a1);
		}

		::System::Void set_maskMapRemapMax(::UnityEngine::Vector4 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINLAYER_SET_MASKMAPREMAPMAX_OFFSET))(this, a1);
		}

		::System::Void get_tileSize_Injected(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINLAYER_GET_TILESIZE_INJECTED_OFFSET))(this, a1);
		}

		::System::Void set_tileSize_Injected(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINLAYER_SET_TILESIZE_INJECTED_OFFSET))(this, a1);
		}

		::System::Void get_tileOffset_Injected(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINLAYER_GET_TILEOFFSET_INJECTED_OFFSET))(this, a1);
		}

		::System::Void set_tileOffset_Injected(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINLAYER_SET_TILEOFFSET_INJECTED_OFFSET))(this, a1);
		}

		::System::Void get_specular_Injected(::UnityEngine::Color a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINLAYER_GET_SPECULAR_INJECTED_OFFSET))(this, a1);
		}

		::System::Void set_specular_Injected(::UnityEngine::Color a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINLAYER_SET_SPECULAR_INJECTED_OFFSET))(this, a1);
		}

		::System::Void set_diffuseRemapMin_Injected(::UnityEngine::Vector4 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINLAYER_SET_DIFFUSEREMAPMIN_INJECTED_OFFSET))(this, a1);
		}

		::System::Void set_diffuseRemapMax_Injected(::UnityEngine::Vector4 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINLAYER_SET_DIFFUSEREMAPMAX_INJECTED_OFFSET))(this, a1);
		}

		::System::Void set_maskMapRemapMin_Injected(::UnityEngine::Vector4 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINLAYER_SET_MASKMAPREMAPMIN_INJECTED_OFFSET))(this, a1);
		}

		::System::Void set_maskMapRemapMax_Injected(::UnityEngine::Vector4 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINLAYER_SET_MASKMAPREMAPMAX_INJECTED_OFFSET))(this, a1);
		}

	};
}
