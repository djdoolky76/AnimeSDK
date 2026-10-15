#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class StageHarmonyBaseLinkSlot;
namespace System { class String; }

#define RPG_CLIENT_STAGEHARMONYTRAFFICLIGHTMONOPLUGIN_INTERSECTIONPHASE_PHASEVALUEACTIONPAIR_CTOR_OFFSET UNITYSDK_OFFSET(0xE112190)
#define RPG_CLIENT_STAGEHARMONYTRAFFICLIGHTMONOPLUGIN_INTERSECTIONPHASE_PHASEVALUEACTIONPAIR_HKHLKMJFFOA_OFFSET UNITYSDK_OFFSET(0xE111130)

namespace RPG::Client
{
	inline static constexpr unsigned int StageHarmonyTrafficLightMonoPlugin_IntersectionPhase_PhaseValueActionPair_TypeDefinitionIndex = 71002;

	class StageHarmonyTrafficLightMonoPlugin_IntersectionPhase_PhaseValueActionPair : public ::System::Object
	{
	public:
		::System::Int32 PhaseValue; // 0x10
		::System::Byte _padding0[0x4];
		::Il2CppArray<::System::Int32>* _PhaseValues; // 0x18
		::System::String* Description; // 0x20
		::StageHarmonyBaseLinkSlot* ExecuteBehavior; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYTRAFFICLIGHTMONOPLUGIN_INTERSECTIONPHASE_PHASEVALUEACTIONPAIR_CTOR_OFFSET))(this);
		}

		::System::Void HKHLKMJFFOA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYTRAFFICLIGHTMONOPLUGIN_INTERSECTIONPHASE_PHASEVALUEACTIONPAIR_HKHLKMJFFOA_OFFSET))(this);
		}

	};
}
