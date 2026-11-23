#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define E5B7314F7B68FF7C_A91D398BB4E76228_INVOKE_OFFSET UNITYSDK_OFFSET(0x1FE7F90)
#define E5B7314F7B68FF7C_A91D398BB4E76228__CTOR_OFFSET UNITYSDK_OFFSET(0x29BD7B0)

inline static constexpr unsigned int E5B7314F7B68FF7C_A91D398BB4E76228_TypeDefinitionIndex = 12828;

class E5B7314F7B68FF7C_A91D398BB4E76228 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + E5B7314F7B68FF7C_A91D398BB4E76228__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
	}

	::System::Void Invoke(::System::Action_1<::System::Boolean>* E04D2BE64FCE9814, ::System::String* B818DC27A4B3B150)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Boolean>*, ::System::String*))((::PBYTE)hIl2Cpp + E5B7314F7B68FF7C_A91D398BB4E76228_INVOKE_OFFSET))(this, E04D2BE64FCE9814, B818DC27A4B3B150);
	}
};
