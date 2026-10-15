#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/CakeRaceCore/LevelStateType.h"
#include "unitysdk/System/Object.h"
class NFAHODNHEKK;

#define HOCBJOJNLLC_CTOR_OFFSET UNITYSDK_OFFSET(0x1C687AD0)
#define HOCBJOJNLLC_EHIEIKKCEHJ_OFFSET UNITYSDK_OFFSET(0x1C687D90)
#define HOCBJOJNLLC_ENTER_OFFSET UNITYSDK_OFFSET(0x1C687AE0)
#define HOCBJOJNLLC_EXIT_OFFSET UNITYSDK_OFFSET(0x1C687E30)
#define HOCBJOJNLLC_FCKDPOPNLIB_OFFSET UNITYSDK_OFFSET(0x1C687D40)
#define HOCBJOJNLLC_FELDHBHNJGD_OFFSET UNITYSDK_OFFSET(0x1C687E70)
#define HOCBJOJNLLC_GET_CURSTATE_OFFSET UNITYSDK_OFFSET(0x1C688050)
#define HOCBJOJNLLC_GET_DURATIONMS_OFFSET UNITYSDK_OFFSET(0x1C688030)
#define HOCBJOJNLLC_GET_NEEDBROADCASTLEVELSTATECHANGE_OFFSET UNITYSDK_OFFSET(0x1C688070)
#define HOCBJOJNLLC_GET_STATESTARTTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x1C688010)
#define HOCBJOJNLLC_HGJKDCLBAHH_OFFSET UNITYSDK_OFFSET(0x1C687F80)
#define HOCBJOJNLLC_NIFHCDDMFBC_OFFSET UNITYSDK_OFFSET(0x1C687C50)
#define HOCBJOJNLLC_SET_CURSTATE_OFFSET UNITYSDK_OFFSET(0x1C688060)
#define HOCBJOJNLLC_SET_DURATIONMS_OFFSET UNITYSDK_OFFSET(0x1C688040)
#define HOCBJOJNLLC_SET_NEEDBROADCASTLEVELSTATECHANGE_OFFSET UNITYSDK_OFFSET(0x1C688080)
#define HOCBJOJNLLC_SET_STATESTARTTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x1C688020)
#define HOCBJOJNLLC_TICK_OFFSET UNITYSDK_OFFSET(0x1C687DE0)

	class HOCBJOJNLLC : public ::System::Object
	{
	public:
		::RPG::Client::LittleGameShare::CakeRaceCore::LevelStateType _CurState_k__BackingField; // 0x10
		::System::Boolean _NeedBroadcastLevelStateChange_k__BackingField; // 0x14
		::System::Byte _padding0[0x3];
		::System::UInt64 _StateStartTimeStamp_k__BackingField; // 0x18
		::System::UInt64 _DurationMs_k__BackingField; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOCBJOJNLLC_CTOR_OFFSET))(this);
		}

		::System::Void Enter(::NFAHODNHEKK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NFAHODNHEKK*))((::PBYTE)hIl2Cpp + HOCBJOJNLLC_ENTER_OFFSET))(this, a1);
		}

		::System::Void FCKDPOPNLIB(::NFAHODNHEKK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NFAHODNHEKK*))((::PBYTE)hIl2Cpp + HOCBJOJNLLC_FCKDPOPNLIB_OFFSET))(this, a1);
		}

		::System::Void EHIEIKKCEHJ(::NFAHODNHEKK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NFAHODNHEKK*))((::PBYTE)hIl2Cpp + HOCBJOJNLLC_EHIEIKKCEHJ_OFFSET))(this, a1);
		}

		::System::Void Tick(::NFAHODNHEKK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NFAHODNHEKK*))((::PBYTE)hIl2Cpp + HOCBJOJNLLC_TICK_OFFSET))(this, a1);
		}

		::System::Void Exit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOCBJOJNLLC_EXIT_OFFSET))(this);
		}

		::System::Boolean FELDHBHNJGD(::NFAHODNHEKK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NFAHODNHEKK*))((::PBYTE)hIl2Cpp + HOCBJOJNLLC_FELDHBHNJGD_OFFSET))(this, a1);
		}

		::System::Void NIFHCDDMFBC(::NFAHODNHEKK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NFAHODNHEKK*))((::PBYTE)hIl2Cpp + HOCBJOJNLLC_NIFHCDDMFBC_OFFSET))(this, a1);
		}

		::System::Void HGJKDCLBAHH(::NFAHODNHEKK* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::NFAHODNHEKK*, ::System::UInt32))((::PBYTE)hIl2Cpp + HOCBJOJNLLC_HGJKDCLBAHH_OFFSET))(this, a1, a2);
		}

		::System::UInt64 get_StateStartTimeStamp()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + HOCBJOJNLLC_GET_STATESTARTTIMESTAMP_OFFSET))(this);
		}

		::System::Void set_StateStartTimeStamp(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + HOCBJOJNLLC_SET_STATESTARTTIMESTAMP_OFFSET))(this, a1);
		}

		::System::UInt64 get_DurationMs()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + HOCBJOJNLLC_GET_DURATIONMS_OFFSET))(this);
		}

		::System::Void set_DurationMs(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + HOCBJOJNLLC_SET_DURATIONMS_OFFSET))(this, a1);
		}

		::RPG::Client::LittleGameShare::CakeRaceCore::LevelStateType get_CurState()
		{
			return ((::RPG::Client::LittleGameShare::CakeRaceCore::LevelStateType(*)(::PVOID))((::PBYTE)hIl2Cpp + HOCBJOJNLLC_GET_CURSTATE_OFFSET))(this);
		}

		::System::Void set_CurState(::RPG::Client::LittleGameShare::CakeRaceCore::LevelStateType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGameShare::CakeRaceCore::LevelStateType))((::PBYTE)hIl2Cpp + HOCBJOJNLLC_SET_CURSTATE_OFFSET))(this, a1);
		}

		::System::Boolean get_NeedBroadcastLevelStateChange()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOCBJOJNLLC_GET_NEEDBROADCASTLEVELSTATECHANGE_OFFSET))(this);
		}

		::System::Void set_NeedBroadcastLevelStateChange(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HOCBJOJNLLC_SET_NEEDBROADCASTLEVELSTATECHANGE_OFFSET))(this, a1);
		}

	};
