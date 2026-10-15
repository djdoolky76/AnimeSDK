#pragma once
#include "unitysdk/unitysdk.h"
class EEHPNCLKDJH;
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define JNEEJAKPBEN_CTOR_OFFSET UNITYSDK_OFFSET(0xB27BFF0)
#define JNEEJAKPBEN_NNEALCNDKHN_OFFSET UNITYSDK_OFFSET(0xB27C300)
#define JNEEJAKPBEN__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0xB27C180)
#define JNEEJAKPBEN__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0xB27C240)

	class JNEEJAKPBEN
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::EEHPNCLKDJH* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::EEHPNCLKDJH*))((::PBYTE)hIl2Cpp + JNEEJAKPBEN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _RegisterEventCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNEEJAKPBEN__REGISTEREVENTCALLBACK_OFFSET))(this);
		}

		::System::Void _UnregisterEventCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNEEJAKPBEN__UNREGISTEREVENTCALLBACK_OFFSET))(this);
		}

		::System::Void NNEALCNDKHN(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JNEEJAKPBEN_NNEALCNDKHN_OFFSET))(this, a1);
		}

	};
