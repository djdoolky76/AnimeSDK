#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MEEFFCDLJKD_PDDIKAFADNF;

#define MEEFFCDLJKD_GKINFJJJODA_CPFPCMACMLL_OFFSET UNITYSDK_OFFSET(0x1F90D060)
#define MEEFFCDLJKD_GKINFJJJODA__CTOR_OFFSET UNITYSDK_OFFSET(0x1F90D050)

inline static constexpr unsigned int MEEFFCDLJKD_GKINFJJJODA_TypeDefinitionIndex = 96608;

class MEEFFCDLJKD_GKINFJJJODA : public ::System::Object
{
public:
	::MEEFFCDLJKD_PDDIKAFADNF* ELIGAFOGDBK; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEEFFCDLJKD_GKINFJJJODA__CTOR_OFFSET))(this);
	}

	::System::Void CPFPCMACMLL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEEFFCDLJKD_GKINFJJJODA_CPFPCMACMLL_OFFSET))(this);
	}
};
