#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/StageHarmonyBaseLinkSlot.h"
namespace RPG::CustomRP { class CustomAdditionalLightData; }
namespace UnityEngine { class Light; }

#define STAGEHARMONYLIGHTLINKSLOT_AIDGGGKKGKD_OFFSET UNITYSDK_OFFSET(0xE992850)
#define STAGEHARMONYLIGHTLINKSLOT_CTOR_OFFSET UNITYSDK_OFFSET(0xE992ED0)
#define STAGEHARMONYLIGHTLINKSLOT_JEFGHGKMEME_OFFSET UNITYSDK_OFFSET(0xE992640)
#define STAGEHARMONYLIGHTLINKSLOT_JKCPLEJCBML_OFFSET UNITYSDK_OFFSET(0xE992810)
#define STAGEHARMONYLIGHTLINKSLOT_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xE9926F0)
#define STAGEHARMONYLIGHTLINKSLOT_NEKGALPLEOH_OFFSET UNITYSDK_OFFSET(0xE9927D0)

inline static constexpr unsigned int StageHarmonyLightLinkSlot_TypeDefinitionIndex = 47546;

	class StageHarmonyLightLinkSlot : public ::StageHarmonyBaseLinkSlot
	{
	public:
		::UnityEngine::Light* TargetLight; // 0x40
		::RPG::CustomRP::CustomAdditionalLightData* lightData; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGEHARMONYLIGHTLINKSLOT_CTOR_OFFSET))(this);
		}

		::System::Void JEFGHGKMEME()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGEHARMONYLIGHTLINKSLOT_JEFGHGKMEME_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGEHARMONYLIGHTLINKSLOT_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void NEKGALPLEOH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGEHARMONYLIGHTLINKSLOT_NEKGALPLEOH_OFFSET))(this);
		}

		::System::Void JKCPLEJCBML()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGEHARMONYLIGHTLINKSLOT_JKCPLEJCBML_OFFSET))(this);
		}

		::System::Void AIDGGGKKGKD(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + STAGEHARMONYLIGHTLINKSLOT_AIDGGGKKGKD_OFFSET))(this, a1);
		}

	};
