#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector3Int.h"
#include "unitysdk/RPG/Rendering/SDFAtlasLayout.h"
#include "unitysdk/UnityEngine/Bounds.h"

#define RPG_RENDERING_SDFBOUNDSDATA_COAMHPGKHMK_OFFSET UNITYSDK_OFFSET(0xE878E80)
#define RPG_RENDERING_SDFBOUNDSDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xE879CB0)
#define RPG_RENDERING_SDFBOUNDSDATA_GIOALAOEOGE_OFFSET UNITYSDK_OFFSET(0xE878D90)
#define RPG_RENDERING_SDFBOUNDSDATA_HJKBOOMDPJK_OFFSET UNITYSDK_OFFSET(0xE878E10)
#define RPG_RENDERING_SDFBOUNDSDATA_JNCOMLPDNHP_OFFSET UNITYSDK_OFFSET(0xE878C50)
#define RPG_RENDERING_SDFBOUNDSDATA_KKKIONIDKFA_OFFSET UNITYSDK_OFFSET(0xE8799B0)
#define RPG_RENDERING_SDFBOUNDSDATA_MONJLCIHLPE_OFFSET UNITYSDK_OFFSET(0xE878D20)
#define RPG_RENDERING_SDFBOUNDSDATA_PKMPIHINGEG_OFFSET UNITYSDK_OFFSET(0xE879C10)

namespace RPG::Rendering
{
	inline static constexpr unsigned int SDFBoundsData_TypeDefinitionIndex = 51796;

	class SDFBoundsData : public ::UnityEngine::ScriptableObject
	{
	public:
		::UnityEngine::Vector3 localToVolumeScale; // 0x18
		::UnityEngine::Vector3 localToVolumeAdd; // 0x24
		::UnityEngine::Vector3Int resolution; // 0x30
		::System::Single voxelSize; // 0x3C
		::System::Int32 sliceWidth; // 0x40
		::System::Int32 sliceHeight; // 0x44
		::System::Int32 depth; // 0x48
		::System::Int32 tilesPerRow; // 0x4C
		::System::Int32 tilesPerColumn; // 0x50
		::System::Int32 atlasWidth; // 0x54
		::System::Int32 atlasHeight; // 0x58
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_RENDERING_SDFBOUNDSDATA_CTOR_OFFSET))(this);
		}

		::UnityEngine::Bounds JNCOMLPDNHP()
		{
			return ((::UnityEngine::Bounds(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_RENDERING_SDFBOUNDSDATA_JNCOMLPDNHP_OFFSET))(this);
		}

		::RPG::Rendering::SDFAtlasLayout MONJLCIHLPE()
		{
			return ((::RPG::Rendering::SDFAtlasLayout(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_RENDERING_SDFBOUNDSDATA_MONJLCIHLPE_OFFSET))(this);
		}

		::System::Void GIOALAOEOGE(::RPG::Rendering::SDFAtlasLayout a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Rendering::SDFAtlasLayout))((::PBYTE)hIl2Cpp + RPG_RENDERING_SDFBOUNDSDATA_GIOALAOEOGE_OFFSET))(this, a1);
		}

		::System::Boolean HJKBOOMDPJK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_RENDERING_SDFBOUNDSDATA_HJKBOOMDPJK_OFFSET))(this);
		}

		::System::Void COAMHPGKHMK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_RENDERING_SDFBOUNDSDATA_COAMHPGKHMK_OFFSET))(this);
		}

		::System::Boolean KKKIONIDKFA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_RENDERING_SDFBOUNDSDATA_KKKIONIDKFA_OFFSET))(this);
		}

		::System::Boolean PKMPIHINGEG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_RENDERING_SDFBOUNDSDATA_PKMPIHINGEG_OFFSET))(this);
		}

	};
}
