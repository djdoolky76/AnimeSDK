#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace RPG::Client { class ConditionCheckerHandle; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CONDITIONALACTIVATOR_CTOR_OFFSET UNITYSDK_OFFSET(0xCBBC880)
#define RPG_CLIENT_CONDITIONALACTIVATOR_KANMCJHEFJJ_OFFSET UNITYSDK_OFFSET(0xCBBC2E0)
#define RPG_CLIENT_CONDITIONALACTIVATOR_KEHABKAPAGH_OFFSET UNITYSDK_OFFSET(0xCBBC370)
#define RPG_CLIENT_CONDITIONALACTIVATOR_OBPMIDIEPCB_OFFSET UNITYSDK_OFFSET(0xCBBC4C0)
#define RPG_CLIENT_CONDITIONALACTIVATOR_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xCBBC830)
#define RPG_CLIENT_CONDITIONALACTIVATOR_START_OFFSET UNITYSDK_OFFSET(0xCBBC290)
#define RPG_CLIENT_CONDITIONALACTIVATOR___WAITSTATESWITCH_B__3_0_OFFSET UNITYSDK_OFFSET(0xCBBC8E0)

namespace RPG::Client
{
	class ConditionalActivator : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* UnlockIDs; // 0x18
		::RPG::Client::ConditionCheckerHandle* DMEOPMGBAGL; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONDITIONALACTIVATOR_CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONDITIONALACTIVATOR_START_OFFSET))(this);
		}

		::System::Boolean KEHABKAPAGH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONDITIONALACTIVATOR_KEHABKAPAGH_OFFSET))(this);
		}

		::System::Void KANMCJHEFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONDITIONALACTIVATOR_KANMCJHEFJJ_OFFSET))(this);
		}

		::System::Void OBPMIDIEPCB(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONDITIONALACTIVATOR_OBPMIDIEPCB_OFFSET))(this, a1);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONDITIONALACTIVATOR_ONDESTROY_OFFSET))(this);
		}

		::System::Void __WaitStateSwitch_b__3_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONDITIONALACTIVATOR___WAITSTATESWITCH_B__3_0_OFFSET))(this);
		}

	};
}
