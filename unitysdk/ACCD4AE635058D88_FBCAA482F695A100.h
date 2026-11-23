#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class ACCD4AE635058D88;
namespace System { class Object; }

#define ACCD4AE635058D88_FBCAA482F695A100_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CF4AC0)
#define ACCD4AE635058D88_FBCAA482F695A100__CTOR_OFFSET UNITYSDK_OFFSET(0x1FE7D60)

inline static constexpr unsigned int ACCD4AE635058D88_FBCAA482F695A100_TypeDefinitionIndex = 12763;

class ACCD4AE635058D88_FBCAA482F695A100 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ACCD4AE635058D88_FBCAA482F695A100__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
	}

	::System::Void Invoke(::ACCD4AE635058D88* B8334CB64332323A)
	{
		return ((::System::Void(*)(::PVOID, ::ACCD4AE635058D88*))((::PBYTE)hIl2Cpp + ACCD4AE635058D88_FBCAA482F695A100_INVOKE_OFFSET))(this, B8334CB64332323A);
	}
};
