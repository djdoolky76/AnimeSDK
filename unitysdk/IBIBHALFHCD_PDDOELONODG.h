#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IBIBHALFHCD;
namespace System { class String; }

#define IBIBHALFHCD_PDDOELONODG_GOBHHMIOPLE_OFFSET UNITYSDK_OFFSET(0x160979B0)
#define IBIBHALFHCD_PDDOELONODG__CTOR_OFFSET UNITYSDK_OFFSET(0x160979A0)

inline static constexpr unsigned int IBIBHALFHCD_PDDOELONODG_TypeDefinitionIndex = 43234;

class IBIBHALFHCD_PDDOELONODG : public ::System::Object
{
public:
	::IBIBHALFHCD* KLHPEBKNIFB; // 0x10
	::System::String* NFONKKEKPBJ; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBIBHALFHCD_PDDOELONODG__CTOR_OFFSET))(this);
	}

	::System::Void GOBHHMIOPLE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBIBHALFHCD_PDDOELONODG_GOBHHMIOPLE_OFFSET))(this);
	}
};
