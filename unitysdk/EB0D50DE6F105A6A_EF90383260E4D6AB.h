#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }
namespace System { class String; }

#define EB0D50DE6F105A6A_EF90383260E4D6AB_INVOKE_OFFSET UNITYSDK_OFFSET(0x1FE7F90)
#define EB0D50DE6F105A6A_EF90383260E4D6AB__CTOR_OFFSET UNITYSDK_OFFSET(0x29BD7B0)

inline static constexpr unsigned int EB0D50DE6F105A6A_EF90383260E4D6AB_TypeDefinitionIndex = 15643;

class EB0D50DE6F105A6A_EF90383260E4D6AB : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EB0D50DE6F105A6A_EF90383260E4D6AB__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
	}

	::System::Void Invoke(::System::String* EF7C9F47C930BAD6, ::System::String* B513951677D1FD70)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + EB0D50DE6F105A6A_EF90383260E4D6AB_INVOKE_OFFSET))(this, EF7C9F47C930BAD6, B513951677D1FD70);
	}
};
