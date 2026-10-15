#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

#define RPG_RENDERING_SDFATLASLAYOUT_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xE8789C0)
#define RPG_RENDERING_SDFATLASLAYOUT_COAMHPGKHMK_OFFSET UNITYSDK_OFFSET(0xF70E0)
#define RPG_RENDERING_SDFATLASLAYOUT_GEMDKBPJPOH_OFFSET UNITYSDK_OFFSET(0xF7000)
#define RPG_RENDERING_SDFATLASLAYOUT_KKKIONIDKFA_OFFSET UNITYSDK_OFFSET(0xF7070)
#define RPG_RENDERING_SDFATLASLAYOUT_OAJJNBLABOI_OFFSET UNITYSDK_OFFSET(0xF6F50)
#define RPG_RENDERING_SDFATLASLAYOUT_PAIBKLIKMGF_OFFSET UNITYSDK_OFFSET(0xF6FF0)

namespace RPG::Rendering
{
	inline static constexpr unsigned int SDFAtlasLayout_TypeDefinitionIndex = 51794;

	struct alignas(4) SDFAtlasLayout
	{
		::System::Int32 sliceWidth; // 0x10
		::System::Int32 sliceHeight; // 0x14
		::System::Int32 depth; // 0x18
		::System::Int32 tilesPerRow; // 0x1C
		::System::Int32 tilesPerColumn; // 0x20
		::System::Int32 atlasWidth; // 0x24
		::System::Int32 atlasHeight; // 0x28
		/*
		static ::RPG::Rendering::SDFAtlasLayout BPLPBPMEODA(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::RPG::Rendering::SDFAtlasLayout(*)(::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_RENDERING_SDFATLASLAYOUT_BPLPBPMEODA_OFFSET))(a1, a2, a3);
		}
		*/

		::UnityEngine::Vector2Int OAJJNBLABOI(::System::Int32 a1)
		{
			return ((::UnityEngine::Vector2Int(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_RENDERING_SDFATLASLAYOUT_OAJJNBLABOI_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2 PAIBKLIKMGF(::System::Int32 a1)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_RENDERING_SDFATLASLAYOUT_PAIBKLIKMGF_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2 GEMDKBPJPOH()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_RENDERING_SDFATLASLAYOUT_GEMDKBPJPOH_OFFSET))(this);
		}

		::System::Boolean KKKIONIDKFA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_RENDERING_SDFATLASLAYOUT_KKKIONIDKFA_OFFSET))(this);
		}

		::System::Void COAMHPGKHMK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_RENDERING_SDFATLASLAYOUT_COAMHPGKHMK_OFFSET))(this);
		}

	};
}
