#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CKLAIIGMJLM.h"
#include "unitysdk/System/Object.h"

class HPIILKMDMFO;

#define HPIILKMDMFO_LCPPIKJDMNK_FDHGIIOBFIH_OFFSET UNITYSDK_OFFSET(0x1538ACA0)
#define HPIILKMDMFO_LCPPIKJDMNK__CTOR_OFFSET UNITYSDK_OFFSET(0x1538AC90)

inline static constexpr unsigned int HPIILKMDMFO_LCPPIKJDMNK_TypeDefinitionIndex = 58780;

class HPIILKMDMFO_LCPPIKJDMNK : public ::System::Object
{
public:
	::HPIILKMDMFO* KLHPEBKNIFB; // 0x10
	::CKLAIIGMJLM MMLAOEMOPKC; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPIILKMDMFO_LCPPIKJDMNK__CTOR_OFFSET))(this);
	}

	::System::Void FDHGIIOBFIH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPIILKMDMFO_LCPPIKJDMNK_FDHGIIOBFIH_OFFSET))(this);
	}
};
