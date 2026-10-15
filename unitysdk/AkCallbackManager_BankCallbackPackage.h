#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AkCallbackManager_BankCallback;
namespace System { class Object; }

#define AKCALLBACKMANAGER_BANKCALLBACKPACKAGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1F581980)

	class AkCallbackManager_BankCallbackPackage : public ::System::Object
	{
	public:
		::AkCallbackManager_BankCallback* m_Callback; // 0x10
		::System::Object* m_Cookie; // 0x18
		::System::Void _ctor(::AkCallbackManager_BankCallback* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::AkCallbackManager_BankCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + AKCALLBACKMANAGER_BANKCALLBACKPACKAGE_CTOR_OFFSET))(this, a1, a2);
		}

	};
