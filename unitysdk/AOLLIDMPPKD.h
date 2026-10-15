#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AOLLIDMPPKD;
namespace System { class Type; }

#define AOLLIDMPPKD_BKMEKDFEMHN_OFFSET UNITYSDK_OFFSET(0x158C1090)
#define AOLLIDMPPKD_CTOR_OFFSET UNITYSDK_OFFSET(0x158C0F00)
#define AOLLIDMPPKD_OKPMJOCEKBC_OFFSET UNITYSDK_OFFSET(0x158C0F40)
#define AOLLIDMPPKD_UNITYENGINE_EVENTSYSTEMS_IEXECUTEEVENTBLOCKER_ISEVENTBLOCK_OFFSET UNITYSDK_OFFSET(0x158C1110)

	class AOLLIDMPPKD : public ::System::Object
	{
	public:
		::System::Type* CDACBNBEHNL; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOLLIDMPPKD_CTOR_OFFSET))(this);
		}

		static ::AOLLIDMPPKD* OKPMJOCEKBC()
		{
			return ((::AOLLIDMPPKD*(*)())((::PBYTE)hIl2Cpp + AOLLIDMPPKD_OKPMJOCEKBC_OFFSET))();
		}

		::System::Void BKMEKDFEMHN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOLLIDMPPKD_BKMEKDFEMHN_OFFSET))(this);
		}

		::System::Boolean UnityEngine_EventSystems_IExecuteEventBlocker_IsEventBlock(::System::Type* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + AOLLIDMPPKD_UNITYENGINE_EVENTSYSTEMS_IEXECUTEEVENTBLOCKER_ISEVENTBLOCK_OFFSET))(this, a1);
		}

	};
