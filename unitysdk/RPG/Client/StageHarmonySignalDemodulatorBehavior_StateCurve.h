#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/StageHarmonySignalDemodulatorBehavior_StateCurve_ToOtherStateType.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class StageHarmonySignalDemodulatorBehavior_StateCurveController; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }

#define RPG_CLIENT_STAGEHARMONYSIGNALDEMODULATORBEHAVIOR_STATECURVE_CTOR_OFFSET UNITYSDK_OFFSET(0xE10CB40)
#define RPG_CLIENT_STAGEHARMONYSIGNALDEMODULATORBEHAVIOR_STATECURVE_DPAOAFKBMEI_OFFSET UNITYSDK_OFFSET(0xE10C670)
#define RPG_CLIENT_STAGEHARMONYSIGNALDEMODULATORBEHAVIOR_STATECURVE_DPDJNAHGDPO_OFFSET UNITYSDK_OFFSET(0xE10C310)
#define RPG_CLIENT_STAGEHARMONYSIGNALDEMODULATORBEHAVIOR_STATECURVE_GET_ONESTEPDURATION_OFFSET UNITYSDK_OFFSET(0xE10C6B0)
#define RPG_CLIENT_STAGEHARMONYSIGNALDEMODULATORBEHAVIOR_STATECURVE_IECCFGIPGEJ_OFFSET UNITYSDK_OFFSET(0xE10C430)
#define RPG_CLIENT_STAGEHARMONYSIGNALDEMODULATORBEHAVIOR_STATECURVE_LFHHOIGAAKP_OFFSET UNITYSDK_OFFSET(0xE10C750)
#define RPG_CLIENT_STAGEHARMONYSIGNALDEMODULATORBEHAVIOR_STATECURVE_MCIJCDNIODO_OFFSET UNITYSDK_OFFSET(0xE10C3B0)
#define RPG_CLIENT_STAGEHARMONYSIGNALDEMODULATORBEHAVIOR_STATECURVE_PHOAPGEEIMD_OFFSET UNITYSDK_OFFSET(0xE10C360)

namespace RPG::Client
{
	inline static constexpr unsigned int StageHarmonySignalDemodulatorBehavior_StateCurve_TypeDefinitionIndex = 70989;

	class StageHarmonySignalDemodulatorBehavior_StateCurve : public ::System::Object
	{
	public:
		::System::String* StateName; // 0x10
		::System::Int32 CurveID; // 0x18
		::RPG::Client::StageHarmonySignalDemodulatorBehavior_StateCurve_ToOtherStateType ToOtherStateMode; // 0x1C
		::System::Collections::Generic::List_1<::System::Object*>* StateConnections; // 0x20
		::UnityEngine::AnimationCurve* _AnimCurve; // 0x28
		::System::Single _Timer; // 0x30
		::System::Single _LastPlayerRatio; // 0x34
		::RPG::Client::StageHarmonySignalDemodulatorBehavior_StateCurveController* Controller; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYSIGNALDEMODULATORBEHAVIOR_STATECURVE_CTOR_OFFSET))(this);
		}

		::System::Void DPDJNAHGDPO(::RPG::Client::StageHarmonySignalDemodulatorBehavior_StateCurveController* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::StageHarmonySignalDemodulatorBehavior_StateCurveController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYSIGNALDEMODULATORBEHAVIOR_STATECURVE_DPDJNAHGDPO_OFFSET))(this, a1);
		}

		::System::Void PHOAPGEEIMD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYSIGNALDEMODULATORBEHAVIOR_STATECURVE_PHOAPGEEIMD_OFFSET))(this);
		}

		::System::Single MCIJCDNIODO(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYSIGNALDEMODULATORBEHAVIOR_STATECURVE_MCIJCDNIODO_OFFSET))(this, a1);
		}

		::System::Void DPAOAFKBMEI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYSIGNALDEMODULATORBEHAVIOR_STATECURVE_DPAOAFKBMEI_OFFSET))(this);
		}

		::System::Single IECCFGIPGEJ(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYSIGNALDEMODULATORBEHAVIOR_STATECURVE_IECCFGIPGEJ_OFFSET))(this, a1);
		}

		::System::Void LFHHOIGAAKP(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYSIGNALDEMODULATORBEHAVIOR_STATECURVE_LFHHOIGAAKP_OFFSET))(this, a1);
		}

		::System::Single get_OneStepDuration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYSIGNALDEMODULATORBEHAVIOR_STATECURVE_GET_ONESTEPDURATION_OFFSET))(this);
		}

	};
}
