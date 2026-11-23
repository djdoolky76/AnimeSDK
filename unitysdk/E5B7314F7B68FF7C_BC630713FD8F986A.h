#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define E5B7314F7B68FF7C_BC630713FD8F986A_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CF4AC0)
#define E5B7314F7B68FF7C_BC630713FD8F986A__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF4AD0)

inline static constexpr unsigned int E5B7314F7B68FF7C_BC630713FD8F986A_TypeDefinitionIndex = 12832;

class E5B7314F7B68FF7C_BC630713FD8F986A : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + E5B7314F7B68FF7C_BC630713FD8F986A__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
	}

	::System::Boolean Invoke(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* A99F9B719E600480)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + E5B7314F7B68FF7C_BC630713FD8F986A_INVOKE_OFFSET))(this, A99F9B719E600480);
	}
};
