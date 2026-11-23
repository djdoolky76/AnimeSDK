#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }
namespace System { class String; }

#define A0F28B7671C52743_F331BCD04E81A0F0_INVOKE_OFFSET UNITYSDK_OFFSET(0x1FE7F90)
#define A0F28B7671C52743_F331BCD04E81A0F0__CTOR_OFFSET UNITYSDK_OFFSET(0x2936B70)

inline static constexpr unsigned int A0F28B7671C52743_F331BCD04E81A0F0_TypeDefinitionIndex = 12788;

class A0F28B7671C52743_F331BCD04E81A0F0 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + A0F28B7671C52743_F331BCD04E81A0F0__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
	}

	::System::Void Invoke(::System::Object* B8334CB64332323A, ::System::String* B960AC235824C6C8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + A0F28B7671C52743_F331BCD04E81A0F0_INVOKE_OFFSET))(this, B8334CB64332323A, B960AC235824C6C8);
	}
};
