#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/SignalAnimationStateConnection_StateConditionType.h"
#include "unitysdk/RPG/Client/SignalAnimationStateConnection_TransitionTiming.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class SignalAnimationState; }

#define RPG_CLIENT_SIGNALANIMATIONSTATECONNECTION_CTOR_OFFSET UNITYSDK_OFFSET(0xE0BF450)
#define RPG_CLIENT_SIGNALANIMATIONSTATECONNECTION_DDBNEBPPJGP_OFFSET UNITYSDK_OFFSET(0xE0BF810)
#define RPG_CLIENT_SIGNALANIMATIONSTATECONNECTION_GBJNGCMHDDB_OFFSET UNITYSDK_OFFSET(0xE0BF8D0)
#define RPG_CLIENT_SIGNALANIMATIONSTATECONNECTION_GET_NEXTSTATEINDEX_OFFSET UNITYSDK_OFFSET(0xE0BF8B0)
#define RPG_CLIENT_SIGNALANIMATIONSTATECONNECTION_HMHHJDCBGAL_OFFSET UNITYSDK_OFFSET(0xE0BF6F0)
#define RPG_CLIENT_SIGNALANIMATIONSTATECONNECTION_IGFHIGLFAPG_OFFSET UNITYSDK_OFFSET(0xE0BF5A0)
#define RPG_CLIENT_SIGNALANIMATIONSTATECONNECTION_NIIDKJDMCDF_OFFSET UNITYSDK_OFFSET(0xE0BF470)
#define RPG_CLIENT_SIGNALANIMATIONSTATECONNECTION_PMMOJDEDBBE_OFFSET UNITYSDK_OFFSET(0xE0BF090)
#define RPG_CLIENT_SIGNALANIMATIONSTATECONNECTION_SET_NEXTSTATEINDEX_OFFSET UNITYSDK_OFFSET(0xE0BF8C0)

namespace RPG::Client
{
	class SignalAnimationStateConnection : public ::System::Object
	{
	public:
		::System::Int32 _nextStateIndex; // 0x10
		::RPG::Client::SignalAnimationStateConnection_TransitionTiming TransitionTimingType; // 0x14
		::System::Boolean UseCondition; // 0x18
		::System::Boolean _conditionSatisfiedPendingAnimation; // 0x19
		::System::Byte _padding0[0x2];
		::System::Single _lastAnimationProgress; // 0x1C
		::System::Boolean _animationCycleCompleted; // 0x20
		::System::Byte _padding1[0x3];
		::RPG::Client::SignalAnimationStateConnection_StateConditionType StateCondition; // 0x24
		::System::Single ThresholdValue; // 0x28
		::System::Single TransitionDuration; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIGNALANIMATIONSTATECONNECTION_CTOR_OFFSET))(this);
		}

		::System::Boolean PMMOJDEDBBE(::System::Single a1, ::System::Single a2, ::RPG::Client::SignalAnimationState* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single, ::RPG::Client::SignalAnimationState*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIGNALANIMATIONSTATECONNECTION_PMMOJDEDBBE_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean IGFHIGLFAPG(::System::Single a1, ::System::Single a2, ::RPG::Client::SignalAnimationState* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single, ::RPG::Client::SignalAnimationState*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIGNALANIMATIONSTATECONNECTION_IGFHIGLFAPG_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean HMHHJDCBGAL(::System::Single a1, ::System::Single a2, ::RPG::Client::SignalAnimationState* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single, ::RPG::Client::SignalAnimationState*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIGNALANIMATIONSTATECONNECTION_HMHHJDCBGAL_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean DDBNEBPPJGP(::RPG::Client::SignalAnimationState* a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::SignalAnimationState*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIGNALANIMATIONSTATECONNECTION_DDBNEBPPJGP_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean NIIDKJDMCDF(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIGNALANIMATIONSTATECONNECTION_NIIDKJDMCDF_OFFSET))(this, a1, a2);
		}

		::System::Int32 get_NextStateIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIGNALANIMATIONSTATECONNECTION_GET_NEXTSTATEINDEX_OFFSET))(this);
		}

		::System::Void set_NextStateIndex(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIGNALANIMATIONSTATECONNECTION_SET_NEXTSTATEINDEX_OFFSET))(this, a1);
		}

		::System::Void GBJNGCMHDDB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIGNALANIMATIONSTATECONNECTION_GBJNGCMHDDB_OFFSET))(this);
		}

	};
}
