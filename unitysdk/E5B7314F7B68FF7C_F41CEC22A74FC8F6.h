#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class F8B11FF5D1DF1B0F;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define E5B7314F7B68FF7C_F41CEC22A74FC8F6_INVOKE_OFFSET UNITYSDK_OFFSET(0x1F7B8B0)
#define E5B7314F7B68FF7C_F41CEC22A74FC8F6__CTOR_OFFSET UNITYSDK_OFFSET(0x2978430)

inline static constexpr unsigned int E5B7314F7B68FF7C_F41CEC22A74FC8F6_TypeDefinitionIndex = 12827;

class E5B7314F7B68FF7C_F41CEC22A74FC8F6 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + E5B7314F7B68FF7C_F41CEC22A74FC8F6__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
	}

	::System::Void Invoke(::F8B11FF5D1DF1B0F* B304504237E804FD, ::System::Action_1<::F8B11FF5D1DF1B0F*>* E04D2BE64FCE9814, ::System::String* B818DC27A4B3B150)
	{
		return ((::System::Void(*)(::PVOID, ::F8B11FF5D1DF1B0F*, ::System::Action_1<::F8B11FF5D1DF1B0F*>*, ::System::String*))((::PBYTE)hIl2Cpp + E5B7314F7B68FF7C_F41CEC22A74FC8F6_INVOKE_OFFSET))(this, B304504237E804FD, E04D2BE64FCE9814, B818DC27A4B3B150);
	}
};
