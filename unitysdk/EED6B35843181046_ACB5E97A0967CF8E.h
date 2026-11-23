#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }
namespace System { class String; }

#define EED6B35843181046_ACB5E97A0967CF8E_INVOKE_OFFSET UNITYSDK_OFFSET(0x1FE7F90)
#define EED6B35843181046_ACB5E97A0967CF8E__CTOR_OFFSET UNITYSDK_OFFSET(0x29BD7B0)

inline static constexpr unsigned int EED6B35843181046_ACB5E97A0967CF8E_TypeDefinitionIndex = 11988;

class EED6B35843181046_ACB5E97A0967CF8E : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EED6B35843181046_ACB5E97A0967CF8E__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
	}

	::System::Void Invoke(::System::String* B26FB45137C102C9, ::System::String* B513951677D1FD70)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + EED6B35843181046_ACB5E97A0967CF8E_INVOKE_OFFSET))(this, B26FB45137C102C9, B513951677D1FD70);
	}
};
