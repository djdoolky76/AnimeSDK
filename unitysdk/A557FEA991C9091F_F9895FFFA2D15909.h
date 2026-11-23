#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }
namespace System { class String; }

#define A557FEA991C9091F_F9895FFFA2D15909_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CF4AC0)
#define A557FEA991C9091F_F9895FFFA2D15909__CTOR_OFFSET UNITYSDK_OFFSET(0x22B96A0)

inline static constexpr unsigned int A557FEA991C9091F_F9895FFFA2D15909_TypeDefinitionIndex = 7184;

class A557FEA991C9091F_F9895FFFA2D15909 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + A557FEA991C9091F_F9895FFFA2D15909__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
	}

	::System::Void Invoke(::System::String* F79B4D487F303AB2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + A557FEA991C9091F_F9895FFFA2D15909_INVOKE_OFFSET))(this, F79B4D487F303AB2);
	}
};
