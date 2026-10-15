#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MDJMLEAFJIB_LightParam.h"
#include "unitysdk/StageHarmonyLightModLinkSlot.h"
#include "unitysdk/UnityEngine/Color.h"
class DHBOGGBEMFF;
namespace RPG::Client { class EasyFog; }

#define STAGEHARMONYEASYFOGBEHAVIORLINKSLOT_AIDGGGKKGKD_OFFSET UNITYSDK_OFFSET(0xE9837C0)
#define STAGEHARMONYEASYFOGBEHAVIORLINKSLOT_CTOR_OFFSET UNITYSDK_OFFSET(0xE9840A0)
#define STAGEHARMONYEASYFOGBEHAVIORLINKSLOT_FKDABIPLDKB_OFFSET UNITYSDK_OFFSET(0xE9832C0)
#define STAGEHARMONYEASYFOGBEHAVIORLINKSLOT_GFPDJBDCIBB_OFFSET UNITYSDK_OFFSET(0xE9830F0)
#define STAGEHARMONYEASYFOGBEHAVIORLINKSLOT_JKCPLEJCBML_OFFSET UNITYSDK_OFFSET(0xE984020)
#define STAGEHARMONYEASYFOGBEHAVIORLINKSLOT_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xE983FE0)
#define STAGEHARMONYEASYFOGBEHAVIORLINKSLOT_NEKGALPLEOH_OFFSET UNITYSDK_OFFSET(0xE984060)
#define STAGEHARMONYEASYFOGBEHAVIORLINKSLOT_PKDEMCONMDA_OFFSET UNITYSDK_OFFSET(0xE983520)

inline static constexpr unsigned int StageHarmonyEasyFogBehaviorLinkSlot_TypeDefinitionIndex = 47364;

	class StageHarmonyEasyFogBehaviorLinkSlot : public ::StageHarmonyLightModLinkSlot
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGEHARMONYEASYFOGBEHAVIORLINKSLOT_CTOR_OFFSET))(this);
		}

		::System::Void GFPDJBDCIBB(::System::Int32 a1, ::DHBOGGBEMFF* a2, ::RPG::Client::EasyFog* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::DHBOGGBEMFF*, ::RPG::Client::EasyFog*))((::PBYTE)hIl2Cpp + STAGEHARMONYEASYFOGBEHAVIORLINKSLOT_GFPDJBDCIBB_OFFSET))(this, a1, a2, a3);
		}

		::System::Void FKDABIPLDKB(::System::Int32 a1, ::MDJMLEAFJIB_LightParam a2, ::System::Single a3, ::DHBOGGBEMFF* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::MDJMLEAFJIB_LightParam, ::System::Single, ::DHBOGGBEMFF*))((::PBYTE)hIl2Cpp + STAGEHARMONYEASYFOGBEHAVIORLINKSLOT_FKDABIPLDKB_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void PKDEMCONMDA(::System::Int32 a1, ::MDJMLEAFJIB_LightParam a2, ::UnityEngine::Color a3, ::DHBOGGBEMFF* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::MDJMLEAFJIB_LightParam, ::UnityEngine::Color, ::DHBOGGBEMFF*))((::PBYTE)hIl2Cpp + STAGEHARMONYEASYFOGBEHAVIORLINKSLOT_PKDEMCONMDA_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void AIDGGGKKGKD(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + STAGEHARMONYEASYFOGBEHAVIORLINKSLOT_AIDGGGKKGKD_OFFSET))(this, a1);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGEHARMONYEASYFOGBEHAVIORLINKSLOT_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void JKCPLEJCBML()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGEHARMONYEASYFOGBEHAVIORLINKSLOT_JKCPLEJCBML_OFFSET))(this);
		}

		::System::Void NEKGALPLEOH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGEHARMONYEASYFOGBEHAVIORLINKSLOT_NEKGALPLEOH_OFFSET))(this);
		}

	};
