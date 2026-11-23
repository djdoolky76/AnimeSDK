#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }
namespace System { class String; }

#define A65A2E103B4AF1B3_ACFF04F24F5C3406_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CF4AC0)
#define A65A2E103B4AF1B3_ACFF04F24F5C3406__CTOR_OFFSET UNITYSDK_OFFSET(0x22B96A0)

inline static constexpr unsigned int A65A2E103B4AF1B3_ACFF04F24F5C3406_TypeDefinitionIndex = 11893;

class A65A2E103B4AF1B3_ACFF04F24F5C3406 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + A65A2E103B4AF1B3_ACFF04F24F5C3406__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
	}

	::System::Void Invoke(::System::String* F0D3F87128A7C4CA)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + A65A2E103B4AF1B3_ACFF04F24F5C3406_INVOKE_OFFSET))(this, F0D3F87128A7C4CA);
	}
};
