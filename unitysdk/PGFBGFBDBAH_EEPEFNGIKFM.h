#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class NMPEPIMNJKI;

#define PGFBGFBDBAH_EEPEFNGIKFM_CFEBOEIPMAI_OFFSET UNITYSDK_OFFSET(0x1C1D2650)
#define PGFBGFBDBAH_EEPEFNGIKFM__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1D2640)

inline static constexpr unsigned int PGFBGFBDBAH_EEPEFNGIKFM_TypeDefinitionIndex = 46115;

class PGFBGFBDBAH_EEPEFNGIKFM : public ::System::Object
{
public:
	::NMPEPIMNJKI* JOLDOMEIKEF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGFBGFBDBAH_EEPEFNGIKFM__CTOR_OFFSET))(this);
	}

	::System::Void CFEBOEIPMAI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGFBGFBDBAH_EEPEFNGIKFM_CFEBOEIPMAI_OFFSET))(this);
	}
};
