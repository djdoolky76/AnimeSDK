#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class F7A83BC73F42C8A3;
namespace System { class Object; }
namespace System { class String; }

#define EEF4749D341C0546_A4E08851A53A3490_INVOKE_OFFSET UNITYSDK_OFFSET(0x1F7B8B0)
#define EEF4749D341C0546_A4E08851A53A3490__CTOR_OFFSET UNITYSDK_OFFSET(0x2EEF610)

inline static constexpr unsigned int EEF4749D341C0546_A4E08851A53A3490_TypeDefinitionIndex = 12363;

class EEF4749D341C0546_A4E08851A53A3490 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EEF4749D341C0546_A4E08851A53A3490__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
	}

	::System::Void Invoke(::System::Int32 AB46D6A196F8FF64, ::System::String* B083BE7841B347C4, ::F7A83BC73F42C8A3* AD4834887E87082A)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::F7A83BC73F42C8A3*))((::PBYTE)hIl2Cpp + EEF4749D341C0546_A4E08851A53A3490_INVOKE_OFFSET))(this, AB46D6A196F8FF64, B083BE7841B347C4, AD4834887E87082A);
	}
};
