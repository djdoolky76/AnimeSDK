#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/StageHarmonyBaseLinkSlot.h"
namespace RPG::CustomRP { class CustomAdditionalLightData; }
namespace UnityEngine { class Light; }

#define STAGEHARMONYLIGHTGROUPLINKSLOT_AIDGGGKKGKD_OFFSET UNITYSDK_OFFSET(0xE991F60)
#define STAGEHARMONYLIGHTGROUPLINKSLOT_CTOR_OFFSET UNITYSDK_OFFSET(0xE9925E0)
#define STAGEHARMONYLIGHTGROUPLINKSLOT_JEFGHGKMEME_OFFSET UNITYSDK_OFFSET(0xE991D50)
#define STAGEHARMONYLIGHTGROUPLINKSLOT_JKCPLEJCBML_OFFSET UNITYSDK_OFFSET(0xE991F20)
#define STAGEHARMONYLIGHTGROUPLINKSLOT_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xE991E00)
#define STAGEHARMONYLIGHTGROUPLINKSLOT_NEKGALPLEOH_OFFSET UNITYSDK_OFFSET(0xE991EE0)

	class StageHarmonyLightGroupLinkSlot : public ::StageHarmonyBaseLinkSlot
	{
	public:
		::UnityEngine::Light* TargetLight; // 0x40
		::RPG::CustomRP::CustomAdditionalLightData* lightData; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGEHARMONYLIGHTGROUPLINKSLOT_CTOR_OFFSET))(this);
		}

		::System::Void JEFGHGKMEME()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGEHARMONYLIGHTGROUPLINKSLOT_JEFGHGKMEME_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGEHARMONYLIGHTGROUPLINKSLOT_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void NEKGALPLEOH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGEHARMONYLIGHTGROUPLINKSLOT_NEKGALPLEOH_OFFSET))(this);
		}

		::System::Void JKCPLEJCBML()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGEHARMONYLIGHTGROUPLINKSLOT_JKCPLEJCBML_OFFSET))(this);
		}

		::System::Void AIDGGGKKGKD(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + STAGEHARMONYLIGHTGROUPLINKSLOT_AIDGGGKKGKD_OFFSET))(this, a1);
		}

	};
