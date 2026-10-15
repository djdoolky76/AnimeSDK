#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Rendering { class SDFBoundsData; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Texture2D; }

#define RPG_SIMPRTX_BAKEDSDFPREFABDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xE88A1D0)
#define RPG_SIMPRTX_BAKEDSDFPREFABDATA_KKKIONIDKFA_OFFSET UNITYSDK_OFFSET(0xE88A160)

namespace RPG::SimpRTX
{
	class BakedSDFPrefabData : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* sourcePrefab; // 0x10
		::UnityEngine::Texture2D* sdfAtlasTexture; // 0x18
		::RPG::Rendering::SDFBoundsData* sdfBoundsData; // 0x20
		::UnityEngine::Texture2D* surfaceCardInfo; // 0x28
		::UnityEngine::Texture2D* surfaceCardAtlas; // 0x30
		::System::Int32 cardInfoTexWidth; // 0x38
		::System::Int32 cardInfoTexHeight; // 0x3C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_SIMPRTX_BAKEDSDFPREFABDATA_CTOR_OFFSET))(this);
		}

		::System::Boolean KKKIONIDKFA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_SIMPRTX_BAKEDSDFPREFABDATA_KKKIONIDKFA_OFFSET))(this);
		}

	};
}
