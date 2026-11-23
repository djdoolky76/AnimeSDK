#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define E5B7314F7B68FF7C_A84964A0184611DB_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CF4AC0)
#define E5B7314F7B68FF7C_A84964A0184611DB__CTOR_OFFSET UNITYSDK_OFFSET(0x22B96A0)

inline static constexpr unsigned int E5B7314F7B68FF7C_A84964A0184611DB_TypeDefinitionIndex = 12829;

class E5B7314F7B68FF7C_A84964A0184611DB : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + E5B7314F7B68FF7C_A84964A0184611DB__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
	}

	::System::Void Invoke(::System::Action_2<::System::Int32, ::System::String*>* E04D2BE64FCE9814)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_2<::System::Int32, ::System::String*>*))((::PBYTE)hIl2Cpp + E5B7314F7B68FF7C_A84964A0184611DB_INVOKE_OFFSET))(this, E04D2BE64FCE9814);
	}
};
