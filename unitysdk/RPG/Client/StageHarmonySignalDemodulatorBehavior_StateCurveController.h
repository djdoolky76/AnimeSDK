#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class StageHarmonySignalDemodulatorBehavior_StateCurve; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_STAGEHARMONYSIGNALDEMODULATORBEHAVIOR_STATECURVECONTROLLER_CTOR_OFFSET UNITYSDK_OFFSET(0xE10D0D0)
#define RPG_CLIENT_STAGEHARMONYSIGNALDEMODULATORBEHAVIOR_STATECURVECONTROLLER_JIFPPKNBGMH_OFFSET UNITYSDK_OFFSET(0xE10CA70)
#define RPG_CLIENT_STAGEHARMONYSIGNALDEMODULATORBEHAVIOR_STATECURVECONTROLLER_JJOPJFHNHFI_OFFSET UNITYSDK_OFFSET(0xE10CD60)
#define RPG_CLIENT_STAGEHARMONYSIGNALDEMODULATORBEHAVIOR_STATECURVECONTROLLER_KFNJNFDBKFA_OFFSET UNITYSDK_OFFSET(0xE10CE50)
#define RPG_CLIENT_STAGEHARMONYSIGNALDEMODULATORBEHAVIOR_STATECURVECONTROLLER_MCIJCDNIODO_OFFSET UNITYSDK_OFFSET(0xE10B3D0)

namespace RPG::Client
{
	inline static constexpr unsigned int StageHarmonySignalDemodulatorBehavior_StateCurveController_TypeDefinitionIndex = 70993;

	class StageHarmonySignalDemodulatorBehavior_StateCurveController : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* InitStateConnections; // 0x10
		::System::Collections::Generic::List_1<::System::Object*>* StateCurves; // 0x18
		::RPG::Client::StageHarmonySignalDemodulatorBehavior_StateCurve* CurrentState; // 0x20
		::System::Boolean _FirstFrame; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYSIGNALDEMODULATORBEHAVIOR_STATECURVECONTROLLER_CTOR_OFFSET))(this);
		}

		::System::Void JIFPPKNBGMH(::RPG::Client::StageHarmonySignalDemodulatorBehavior_StateCurve* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::StageHarmonySignalDemodulatorBehavior_StateCurve*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYSIGNALDEMODULATORBEHAVIOR_STATECURVECONTROLLER_JIFPPKNBGMH_OFFSET))(this, a1);
		}

		::System::Single MCIJCDNIODO(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYSIGNALDEMODULATORBEHAVIOR_STATECURVECONTROLLER_MCIJCDNIODO_OFFSET))(this, a1);
		}

		::System::Void JJOPJFHNHFI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYSIGNALDEMODULATORBEHAVIOR_STATECURVECONTROLLER_JJOPJFHNHFI_OFFSET))(this);
		}

		::System::Void KFNJNFDBKFA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYSIGNALDEMODULATORBEHAVIOR_STATECURVECONTROLLER_KFNJNFDBKFA_OFFSET))(this, a1);
		}

	};
}
