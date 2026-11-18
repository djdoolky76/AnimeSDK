#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FJFOMLLPEDI.h"
#include "unitysdk/System/Object.h"

#define PPNCPCBKJKO_HJNGAMBABOP_OFFSET UNITYSDK_OFFSET(0x1374BF10)
#define PPNCPCBKJKO__CTOR_OFFSET UNITYSDK_OFFSET(0x1374BF20)

inline static constexpr unsigned int PPNCPCBKJKO_TypeDefinitionIndex = 84492;

class PPNCPCBKJKO : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPNCPCBKJKO__CTOR_OFFSET))(this);
	}

	::FJFOMLLPEDI HJNGAMBABOP()
	{
		return ((::FJFOMLLPEDI(*)(::PVOID))((::PBYTE)hIl2Cpp + PPNCPCBKJKO_HJNGAMBABOP_OFFSET))(this);
	}
};
