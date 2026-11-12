#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AOLLIDMPPKD;
namespace System { class Type; }

#define AOLLIDMPPKD_BKMEKDFEMHN_OFFSET UNITYSDK_OFFSET(0x169E8870)
#define AOLLIDMPPKD_CTOR_OFFSET UNITYSDK_OFFSET(0x169E86E0)
#define AOLLIDMPPKD_OKPMJOCEKBC_OFFSET UNITYSDK_OFFSET(0x169E8720)
#define AOLLIDMPPKD_UNITYENGINE_EVENTSYSTEMS_IEXECUTEEVENTBLOCKER_ISEVENTBLOCK_OFFSET UNITYSDK_OFFSET(0x169E88F0)

inline static constexpr unsigned int AOLLIDMPPKD_TypeDefinitionIndex = 70187;

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
