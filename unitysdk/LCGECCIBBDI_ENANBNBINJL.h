#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class LCGECCIBBDI;

#define LCGECCIBBDI_ENANBNBINJL_BBKIFAHGANK_OFFSET UNITYSDK_OFFSET(0x15BB6470)
#define LCGECCIBBDI_ENANBNBINJL__CTOR_OFFSET UNITYSDK_OFFSET(0x15BB6460)

inline static constexpr unsigned int LCGECCIBBDI_ENANBNBINJL_TypeDefinitionIndex = 56786;

class LCGECCIBBDI_ENANBNBINJL : public ::System::Object
{
public:
	::LCGECCIBBDI* KLHPEBKNIFB; // 0x10
	::System::Boolean IHDEBJMENEP; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCGECCIBBDI_ENANBNBINJL__CTOR_OFFSET))(this);
	}

	::System::Void BBKIFAHGANK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCGECCIBBDI_ENANBNBINJL_BBKIFAHGANK_OFFSET))(this);
	}
};
