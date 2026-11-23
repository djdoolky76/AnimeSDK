#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }
namespace System { class String; }

#define A5646A17332E9964_BEA0CA77EAC4052B_INVOKE_OFFSET UNITYSDK_OFFSET(0x1FE7F90)
#define A5646A17332E9964_BEA0CA77EAC4052B__CTOR_OFFSET UNITYSDK_OFFSET(0x29BD7B0)

inline static constexpr unsigned int A5646A17332E9964_BEA0CA77EAC4052B_TypeDefinitionIndex = 12931;

class A5646A17332E9964_BEA0CA77EAC4052B : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + A5646A17332E9964_BEA0CA77EAC4052B__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
	}

	::System::Void Invoke(::System::String* AD4834887E87082A, ::System::String* A701B33D1D009AC6)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + A5646A17332E9964_BEA0CA77EAC4052B_INVOKE_OFFSET))(this, AD4834887E87082A, A701B33D1D009AC6);
	}
};
