#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/CakeRaceCore/LevelStateType.h"
#include "unitysdk/System/Object.h"
class NFAHODNHEKK;

#define HOCBJOJNLLC_CTOR_OFFSET UNITYSDK_OFFSET(0x1C659720)
#define HOCBJOJNLLC_EHIEIKKCEHJ_OFFSET UNITYSDK_OFFSET(0x1C6599E0)
#define HOCBJOJNLLC_ENTER_OFFSET UNITYSDK_OFFSET(0x1C659730)
#define HOCBJOJNLLC_EXIT_OFFSET UNITYSDK_OFFSET(0x1C659A80)
#define HOCBJOJNLLC_FCKDPOPNLIB_OFFSET UNITYSDK_OFFSET(0x1C659990)
#define HOCBJOJNLLC_FELDHBHNJGD_OFFSET UNITYSDK_OFFSET(0x1C659AC0)
#define HOCBJOJNLLC_GET_CURSTATE_OFFSET UNITYSDK_OFFSET(0x1C659CA0)
#define HOCBJOJNLLC_GET_DURATIONMS_OFFSET UNITYSDK_OFFSET(0x1C659C80)
#define HOCBJOJNLLC_GET_NEEDBROADCASTLEVELSTATECHANGE_OFFSET UNITYSDK_OFFSET(0x1C659CC0)
#define HOCBJOJNLLC_GET_STATESTARTTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x1C659C60)
#define HOCBJOJNLLC_HGJKDCLBAHH_OFFSET UNITYSDK_OFFSET(0x1C659BD0)
#define HOCBJOJNLLC_NIFHCDDMFBC_OFFSET UNITYSDK_OFFSET(0x1C6598A0)
#define HOCBJOJNLLC_SET_CURSTATE_OFFSET UNITYSDK_OFFSET(0x1C659CB0)
#define HOCBJOJNLLC_SET_DURATIONMS_OFFSET UNITYSDK_OFFSET(0x1C659C90)
#define HOCBJOJNLLC_SET_NEEDBROADCASTLEVELSTATECHANGE_OFFSET UNITYSDK_OFFSET(0x1C659CD0)
#define HOCBJOJNLLC_SET_STATESTARTTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x1C659C70)
#define HOCBJOJNLLC_TICK_OFFSET UNITYSDK_OFFSET(0x1C659A30)

inline static constexpr unsigned int HOCBJOJNLLC_TypeDefinitionIndex = 37341;

	class HOCBJOJNLLC : public ::System::Object
	{
	public:
		::System::UInt64 _DurationMs_k__BackingField; // 0x10
		::System::UInt64 _StateStartTimeStamp_k__BackingField; // 0x18
		::RPG::Client::LittleGameShare::CakeRaceCore::LevelStateType _CurState_k__BackingField; // 0x20
		::System::Boolean _NeedBroadcastLevelStateChange_k__BackingField; // 0x24
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
