#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }
namespace System { class String; }

#define A22342C00B5DB77A_A580D8BB0952918A_INVOKE_OFFSET UNITYSDK_OFFSET(0x1FE7F90)
#define A22342C00B5DB77A_A580D8BB0952918A__CTOR_OFFSET UNITYSDK_OFFSET(0x3A1A3F0)

inline static constexpr unsigned int A22342C00B5DB77A_A580D8BB0952918A_TypeDefinitionIndex = 12843;

class A22342C00B5DB77A_A580D8BB0952918A : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + A22342C00B5DB77A_A580D8BB0952918A__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
	}

	::System::Void Invoke(::System::String* EFA4485CA93A211C, ::System::Int32 B690BFA407AF98D4)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + A22342C00B5DB77A_A580D8BB0952918A_INVOKE_OFFSET))(this, EFA4485CA93A211C, B690BFA407AF98D4);
	}
};
