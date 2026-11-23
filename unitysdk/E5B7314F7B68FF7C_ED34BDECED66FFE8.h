#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace MiHoYo::SDK { class EOSParametersModel; }
namespace System { class Object; }

#define E5B7314F7B68FF7C_ED34BDECED66FFE8_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CF4AC0)
#define E5B7314F7B68FF7C_ED34BDECED66FFE8__CTOR_OFFSET UNITYSDK_OFFSET(0x3745F30)

inline static constexpr unsigned int E5B7314F7B68FF7C_ED34BDECED66FFE8_TypeDefinitionIndex = 12826;

class E5B7314F7B68FF7C_ED34BDECED66FFE8 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + E5B7314F7B68FF7C_ED34BDECED66FFE8__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
	}

	::System::Boolean Invoke(::MiHoYo::SDK::EOSParametersModel* FF6E17D9C07CA238)
	{
		return ((::System::Boolean(*)(::PVOID, ::MiHoYo::SDK::EOSParametersModel*))((::PBYTE)hIl2Cpp + E5B7314F7B68FF7C_ED34BDECED66FFE8_INVOKE_OFFSET))(this, FF6E17D9C07CA238);
	}
};
