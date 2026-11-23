#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class ACCD4AE635058D88;
namespace System { class Object; }

#define ACCD4AE635058D88_EEBEEA513106B2FB_INVOKE_OFFSET UNITYSDK_OFFSET(0x1FE7F90)
#define ACCD4AE635058D88_EEBEEA513106B2FB__CTOR_OFFSET UNITYSDK_OFFSET(0x3A00A00)

inline static constexpr unsigned int ACCD4AE635058D88_EEBEEA513106B2FB_TypeDefinitionIndex = 12764;

class ACCD4AE635058D88_EEBEEA513106B2FB : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ACCD4AE635058D88_EEBEEA513106B2FB__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
	}

	::System::Void Invoke(::ACCD4AE635058D88* B8334CB64332323A, ::System::Boolean FBF3AC291087F95C)
	{
		return ((::System::Void(*)(::PVOID, ::ACCD4AE635058D88*, ::System::Boolean))((::PBYTE)hIl2Cpp + ACCD4AE635058D88_EEBEEA513106B2FB_INVOKE_OFFSET))(this, B8334CB64332323A, FBF3AC291087F95C);
	}
};
