#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define E5B7314F7B68FF7C_EB4AF877DC5581B5_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CF4AC0)
#define E5B7314F7B68FF7C_EB4AF877DC5581B5__CTOR_OFFSET UNITYSDK_OFFSET(0x22B96A0)

inline static constexpr unsigned int E5B7314F7B68FF7C_EB4AF877DC5581B5_TypeDefinitionIndex = 12831;

class E5B7314F7B68FF7C_EB4AF877DC5581B5 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + E5B7314F7B68FF7C_EB4AF877DC5581B5__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
	}

	::System::Void Invoke(::System::Action_2<::System::String*, ::System::String*>* E04D2BE64FCE9814)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + E5B7314F7B68FF7C_EB4AF877DC5581B5_INVOKE_OFFSET))(this, E04D2BE64FCE9814);
	}
};
