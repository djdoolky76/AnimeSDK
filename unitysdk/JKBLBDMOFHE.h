#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CNJMJICDKJI;

#define JKBLBDMOFHE_CCJPCPODHIJ_OFFSET UNITYSDK_OFFSET(0x1384A030)
#define JKBLBDMOFHE__CTOR_OFFSET UNITYSDK_OFFSET(0x13849FB0)

inline static constexpr unsigned int JKBLBDMOFHE_TypeDefinitionIndex = 50313;

class JKBLBDMOFHE : public ::System::Object
{
public:
	::CNJMJICDKJI* MOJJKPODAFE; // 0x10

	::System::Void _ctor(::CNJMJICDKJI*& JKONFJNDGDP)
	{
		return ((::System::Void(*)(::PVOID, ::CNJMJICDKJI*&))((::PBYTE)hIl2Cpp + JKBLBDMOFHE__CTOR_OFFSET))(this, JKONFJNDGDP);
	}

	::CNJMJICDKJI* CCJPCPODHIJ()
	{
		return ((::CNJMJICDKJI*(*)(::PVOID))((::PBYTE)hIl2Cpp + JKBLBDMOFHE_CCJPCPODHIJ_OFFSET))(this);
	}
};
