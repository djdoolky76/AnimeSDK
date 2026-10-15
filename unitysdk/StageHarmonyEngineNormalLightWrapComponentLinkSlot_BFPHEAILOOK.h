#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::CustomRP { class CustomAdditionalLightData; }
namespace UnityEngine { class Light; }

#define STAGEHARMONYENGINENORMALLIGHTWRAPCOMPONENTLINKSLOT_BFPHEAILOOK_CTOR_OFFSET UNITYSDK_OFFSET(0xE985220)

inline static constexpr unsigned int StageHarmonyEngineNormalLightWrapComponentLinkSlot_BFPHEAILOOK_TypeDefinitionIndex = 47370;

	class StageHarmonyEngineNormalLightWrapComponentLinkSlot_BFPHEAILOOK : public ::System::Object
	{
	public:
		::UnityEngine::Light* HBENAJMOKDK; // 0x10
		::RPG::CustomRP::CustomAdditionalLightData* JNDFNOIIIAG; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGEHARMONYENGINENORMALLIGHTWRAPCOMPONENTLINKSLOT_BFPHEAILOOK_CTOR_OFFSET))(this);
		}

	};
