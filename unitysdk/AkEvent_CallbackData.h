#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class A1D0AD9E2B3E19D9;
namespace AK::Wwise { class CallbackFlags; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define AKEVENT_CALLBACKDATA_CALLFUNCTION_OFFSET UNITYSDK_OFFSET(0x2928C20)
#define AKEVENT_CALLBACKDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int AkEvent_CallbackData_TypeDefinitionIndex = 20463;

class AkEvent_CallbackData : public ::System::Object
{
public:
	::AK::Wwise::CallbackFlags* Flags; // 0x10
	::System::String* FunctionName; // 0x18
	::UnityEngine::GameObject* GameObject; // 0x20

	::System::Void CallFunction(::A1D0AD9E2B3E19D9* B67CCB70965C800E)
	{
		return ((::System::Void(*)(::PVOID, ::A1D0AD9E2B3E19D9*))((::PBYTE)hIl2Cpp + AKEVENT_CALLBACKDATA_CALLFUNCTION_OFFSET))(this, B67CCB70965C800E);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKEVENT_CALLBACKDATA__CTOR_OFFSET))(this);
	}
};
