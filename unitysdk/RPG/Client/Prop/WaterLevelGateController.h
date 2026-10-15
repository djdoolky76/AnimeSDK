#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
class KFCMGNCLHMD;
namespace RPG::Client::Prop { class WaterLevelPuzzleBoardPlus; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_PROP_WATERLEVELGATECONTROLLER_BCBKCCIEEGK_OFFSET UNITYSDK_OFFSET(0xDDD5DA0)
#define RPG_CLIENT_PROP_WATERLEVELGATECONTROLLER_CTOR_OFFSET UNITYSDK_OFFSET(0xDDD5E00)
#define RPG_CLIENT_PROP_WATERLEVELGATECONTROLLER_DISABLETRIGGER_OFFSET UNITYSDK_OFFSET(0xDDD5A80)
#define RPG_CLIENT_PROP_WATERLEVELGATECONTROLLER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDDD5900)
#define RPG_CLIENT_PROP_WATERLEVELGATECONTROLLER_ENABLETRIGGER_OFFSET UNITYSDK_OFFSET(0xDDD5B10)
#define RPG_CLIENT_PROP_WATERLEVELGATECONTROLLER_GEILKMAMDCM_OFFSET UNITYSDK_OFFSET(0xDDD5BA0)
#define RPG_CLIENT_PROP_WATERLEVELGATECONTROLLER_GET_ISGATEOPEN_OFFSET UNITYSDK_OFFSET(0xDDD5DF0)
#define RPG_CLIENT_PROP_WATERLEVELGATECONTROLLER_INIT_OFFSET UNITYSDK_OFFSET(0xDDD5380)
#define RPG_CLIENT_PROP_WATERLEVELGATECONTROLLER_RESETGATE_OFFSET UNITYSDK_OFFSET(0xDDD5A20)
#define RPG_CLIENT_PROP_WATERLEVELGATECONTROLLER_SETGATESTATE_OFFSET UNITYSDK_OFFSET(0xDDD56E0)
#define RPG_CLIENT_PROP_WATERLEVELGATECONTROLLER_TICK_OFFSET UNITYSDK_OFFSET(0xDDD5950)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int WaterLevelGateController_TypeDefinitionIndex = 78919;

	class WaterLevelGateController : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Int32 WaterLevelIndex; // 0x18
		::System::Byte _padding0[0x4];
		::UnityEngine::GameObject* GateObject; // 0x20
		::System::String* GateAnimatorParamName; // 0x28
		::System::Int32 GateAnimatorOpenValue; // 0x30
		::System::Int32 GateAnimatorCloseValue; // 0x34
		::System::String* SwitchGateCustomString; // 0x38
		::System::Single DelayAfterAnimFinish; // 0x40
		::System::Byte _padding1[0x4];
		::System::String* WaitAnimStateName; // 0x48
		::System::Collections::Generic::List_1<::System::String*>* LPIANMKADEK; // 0x50
		::System::Boolean CKLNMJPPBAA; // 0x58
		::System::Byte _padding2[0x7];
		::UnityEngine::Animator* PAEAOJKHMLG; // 0x60
		::RPG::Client::Prop::WaterLevelPuzzleBoardPlus* COAMCKILKPH; // 0x68
		::KFCMGNCLHMD* BCALOKFAJFH; // 0x70
		::System::Int32 DJDIEFLPCEO; // 0x78
		::System::Int32 LHGLGIKHMMI; // 0x7C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WATERLEVELGATECONTROLLER_CTOR_OFFSET))(this);
		}

		::System::Void Init(::RPG::Client::Prop::WaterLevelPuzzleBoardPlus* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::WaterLevelPuzzleBoardPlus*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WATERLEVELGATECONTROLLER_INIT_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WATERLEVELGATECONTROLLER_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WATERLEVELGATECONTROLLER_TICK_OFFSET))(this, a1);
		}

		::System::Void ResetGate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WATERLEVELGATECONTROLLER_RESETGATE_OFFSET))(this);
		}

		::System::Void DisableTrigger()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WATERLEVELGATECONTROLLER_DISABLETRIGGER_OFFSET))(this);
		}

		::System::Void EnableTrigger()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WATERLEVELGATECONTROLLER_ENABLETRIGGER_OFFSET))(this);
		}

		::System::Void SetGateState(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WATERLEVELGATECONTROLLER_SETGATESTATE_OFFSET))(this, a1);
		}

		::System::Void GEILKMAMDCM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WATERLEVELGATECONTROLLER_GEILKMAMDCM_OFFSET))(this);
		}

		::System::Void BCBKCCIEEGK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WATERLEVELGATECONTROLLER_BCBKCCIEEGK_OFFSET))(this);
		}

		::System::Boolean get_IsGateOpen()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WATERLEVELGATECONTROLLER_GET_ISGATEOPEN_OFFSET))(this);
		}

	};
}
