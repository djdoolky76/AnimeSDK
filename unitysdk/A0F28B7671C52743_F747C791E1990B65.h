#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }

#define A0F28B7671C52743_F747C791E1990B65_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CF4AC0)
#define A0F28B7671C52743_F747C791E1990B65__CTOR_OFFSET UNITYSDK_OFFSET(0x22B9540)

inline static constexpr unsigned int A0F28B7671C52743_F747C791E1990B65_TypeDefinitionIndex = 12816;

class A0F28B7671C52743_F747C791E1990B65 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + A0F28B7671C52743_F747C791E1990B65__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
	}

	::System::Void Invoke(::System::Boolean F58AD166AB58672F)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + A0F28B7671C52743_F747C791E1990B65_INVOKE_OFFSET))(this, F58AD166AB58672F);
	}
};
