#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class ACCD4AE635058D88;
namespace System { class Object; }
namespace System { class String; }

#define ACCD4AE635058D88_E50C303706D28814_INVOKE_OFFSET UNITYSDK_OFFSET(0x1FE7F90)
#define ACCD4AE635058D88_E50C303706D28814__CTOR_OFFSET UNITYSDK_OFFSET(0x2936B70)

inline static constexpr unsigned int ACCD4AE635058D88_E50C303706D28814_TypeDefinitionIndex = 12765;

class ACCD4AE635058D88_E50C303706D28814 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ACCD4AE635058D88_E50C303706D28814__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
	}

	::System::Void Invoke(::ACCD4AE635058D88* B8334CB64332323A, ::System::String* B960AC235824C6C8)
	{
		return ((::System::Void(*)(::PVOID, ::ACCD4AE635058D88*, ::System::String*))((::PBYTE)hIl2Cpp + ACCD4AE635058D88_E50C303706D28814_INVOKE_OFFSET))(this, B8334CB64332323A, B960AC235824C6C8);
	}
};
