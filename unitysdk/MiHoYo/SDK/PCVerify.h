#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class String; }

#define MIHOYO_SDK_PCVERIFY_CTOR_OFFSET UNITYSDK_OFFSET(0xB0133A0)
#define MIHOYO_SDK_PCVERIFY_INVOKERETURN_OFFSET UNITYSDK_OFFSET(0xB013380)
#define MIHOYO_SDK_PCVERIFY_INVOKE_OFFSET UNITYSDK_OFFSET(0xB013390)

namespace MiHoYo::SDK
{
	class PCVerify : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PCVERIFY_CTOR_OFFSET))(this);
		}

		::System::String* InvokeReturn(::System::String* a1, ::System::String* a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PCVERIFY_INVOKERETURN_OFFSET))(this, a1, a2);
		}

		::System::String* Invoke(::System::String* a1, ::System::String* a2, ::System::Action* a3)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PCVERIFY_INVOKE_OFFSET))(this, a1, a2, a3);
		}

	};
}
