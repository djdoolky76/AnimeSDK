#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class ACCD4AE635058D88;
namespace System { class Object; }
namespace System { class String; }

#define ACCD4AE635058D88_FCC5996DC5132804_INVOKE_OFFSET UNITYSDK_OFFSET(0x1FE7C20)
#define ACCD4AE635058D88_FCC5996DC5132804__CTOR_OFFSET UNITYSDK_OFFSET(0x1FE7E70)

inline static constexpr unsigned int ACCD4AE635058D88_FCC5996DC5132804_TypeDefinitionIndex = 12760;

class ACCD4AE635058D88_FCC5996DC5132804 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ACCD4AE635058D88_FCC5996DC5132804__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
	}

	::System::Void Invoke(::ACCD4AE635058D88* B8334CB64332323A, ::System::String* B960AC235824C6C8, ::System::Int32 B3F53603F39CD6A9, ::System::String* A7714DE08D5D7E93)
	{
		return ((::System::Void(*)(::PVOID, ::ACCD4AE635058D88*, ::System::String*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + ACCD4AE635058D88_FCC5996DC5132804_INVOKE_OFFSET))(this, B8334CB64332323A, B960AC235824C6C8, B3F53603F39CD6A9, A7714DE08D5D7E93);
	}
};
