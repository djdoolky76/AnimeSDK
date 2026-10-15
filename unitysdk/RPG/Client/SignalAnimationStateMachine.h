#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class SignalAnimationState; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animation; }

#define RPG_CLIENT_SIGNALANIMATIONSTATEMACHINE_AOBMHNHONFL_OFFSET UNITYSDK_OFFSET(0xE0BFEA0)
#define RPG_CLIENT_SIGNALANIMATIONSTATEMACHINE_CTOR_OFFSET UNITYSDK_OFFSET(0xE0C0910)
#define RPG_CLIENT_SIGNALANIMATIONSTATEMACHINE_DPDJNAHGDPO_OFFSET UNITYSDK_OFFSET(0xE0BF9D0)
#define RPG_CLIENT_SIGNALANIMATIONSTATEMACHINE_GET_PREVIOUSSIGNAL_OFFSET UNITYSDK_OFFSET(0xE0BF920)
#define RPG_CLIENT_SIGNALANIMATIONSTATEMACHINE_HFKFNFKIEON_OFFSET UNITYSDK_OFFSET(0xE0C0020)
#define RPG_CLIENT_SIGNALANIMATIONSTATEMACHINE_IECIAPPANHI_OFFSET UNITYSDK_OFFSET(0xE0C04E0)
#define RPG_CLIENT_SIGNALANIMATIONSTATEMACHINE_JDAGFHEPMHF_OFFSET UNITYSDK_OFFSET(0xE0BFF60)
#define RPG_CLIENT_SIGNALANIMATIONSTATEMACHINE_JEAIHCDNJAN_OFFSET UNITYSDK_OFFSET(0xE0BFAC0)
#define RPG_CLIENT_SIGNALANIMATIONSTATEMACHINE_JIFPPKNBGMH_OFFSET UNITYSDK_OFFSET(0xE0BF160)
#define RPG_CLIENT_SIGNALANIMATIONSTATEMACHINE_KMEEEJDBIBH_OFFSET UNITYSDK_OFFSET(0xE0BFF00)
#define RPG_CLIENT_SIGNALANIMATIONSTATEMACHINE_MCIJCDNIODO_OFFSET UNITYSDK_OFFSET(0xE0BFDD0)
#define RPG_CLIENT_SIGNALANIMATIONSTATEMACHINE_OHMHJFANEIF_OFFSET UNITYSDK_OFFSET(0xE0C0080)
#define RPG_CLIENT_SIGNALANIMATIONSTATEMACHINE_OINBDMGFFJL_OFFSET UNITYSDK_OFFSET(0xE0BF940)
#define RPG_CLIENT_SIGNALANIMATIONSTATEMACHINE_SET_PREVIOUSSIGNAL_OFFSET UNITYSDK_OFFSET(0xE0BF930)

namespace RPG::Client
{
	class SignalAnimationStateMachine : public ::System::Object
	{
	public:
		::System::Boolean IsSignalNeedTransfer; // 0x10
		::System::Byte _padding0[0x7];
		::System::Collections::Generic::List_1<::RPG::Client::SignalAnimationState*>* SignalAnimationStates; // 0x18
		::RPG::Client::SignalAnimationState* _currentState; // 0x20
		::RPG::Client::SignalAnimationState* _previousState; // 0x28
		::System::Single _PreviousSignal_k__BackingField; // 0x30
		::System::Byte _padding1[0x4];
		::UnityEngine::Animation* _animationComponent; // 0x38
		::System::Boolean _initialized; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIGNALANIMATIONSTATEMACHINE_CTOR_OFFSET))(this);
		}

		::System::Single get_PreviousSignal()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIGNALANIMATIONSTATEMACHINE_GET_PREVIOUSSIGNAL_OFFSET))(this);
		}

		::System::Void set_PreviousSignal(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIGNALANIMATIONSTATEMACHINE_SET_PREVIOUSSIGNAL_OFFSET))(this, a1);
		}

		::System::Void OINBDMGFFJL(::UnityEngine::Animation* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animation*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIGNALANIMATIONSTATEMACHINE_OINBDMGFFJL_OFFSET))(this, a1);
		}

		::System::Void JIFPPKNBGMH(::RPG::Client::SignalAnimationState* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SignalAnimationState*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIGNALANIMATIONSTATEMACHINE_JIFPPKNBGMH_OFFSET))(this, a1, a2);
		}

		::System::Void JEAIHCDNJAN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIGNALANIMATIONSTATEMACHINE_JEAIHCDNJAN_OFFSET))(this);
		}

		::System::Single MCIJCDNIODO(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIGNALANIMATIONSTATEMACHINE_MCIJCDNIODO_OFFSET))(this, a1);
		}

		::System::String* KMEEEJDBIBH()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIGNALANIMATIONSTATEMACHINE_KMEEEJDBIBH_OFFSET))(this);
		}

		::System::Void JDAGFHEPMHF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIGNALANIMATIONSTATEMACHINE_JDAGFHEPMHF_OFFSET))(this);
		}

		::System::Void HFKFNFKIEON()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIGNALANIMATIONSTATEMACHINE_HFKFNFKIEON_OFFSET))(this);
		}

		::System::Void OHMHJFANEIF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIGNALANIMATIONSTATEMACHINE_OHMHJFANEIF_OFFSET))(this);
		}

		::System::Void IECIAPPANHI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIGNALANIMATIONSTATEMACHINE_IECIAPPANHI_OFFSET))(this);
		}

		::System::Void DPDJNAHGDPO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIGNALANIMATIONSTATEMACHINE_DPDJNAHGDPO_OFFSET))(this);
		}

		::System::UInt32 AOBMHNHONFL(::System::Single a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIGNALANIMATIONSTATEMACHINE_AOBMHNHONFL_OFFSET))(this, a1);
		}

	};
}
