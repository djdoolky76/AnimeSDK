#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HOCDHMEPPEG.h"
#include "unitysdk/System/Object.h"

#define JIAMFDKMFEJ_ACLJNABBLHL_LIDNPLMPHAL_OFFSET UNITYSDK_OFFSET(0x1945D010)
#define JIAMFDKMFEJ_ACLJNABBLHL__CTOR_OFFSET UNITYSDK_OFFSET(0x1945D000)

inline static constexpr unsigned int JIAMFDKMFEJ_ACLJNABBLHL_TypeDefinitionIndex = 39252;

class JIAMFDKMFEJ_ACLJNABBLHL : public ::System::Object
{
public:
	::HOCDHMEPPEG ECLGGGCDNKC; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIAMFDKMFEJ_ACLJNABBLHL__CTOR_OFFSET))(this);
	}

	::System::Void LIDNPLMPHAL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIAMFDKMFEJ_ACLJNABBLHL_LIDNPLMPHAL_OFFSET))(this);
	}
};
