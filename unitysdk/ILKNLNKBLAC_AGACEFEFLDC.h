#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define ILKNLNKBLAC_AGACEFEFLDC_NJJANJKJKPI_OFFSET UNITYSDK_OFFSET(0x1870EBF0)
#define ILKNLNKBLAC_AGACEFEFLDC__CTOR_OFFSET UNITYSDK_OFFSET(0x1870EBE0)

inline static constexpr unsigned int ILKNLNKBLAC_AGACEFEFLDC_TypeDefinitionIndex = 71488;

class ILKNLNKBLAC_AGACEFEFLDC : public ::System::Object
{
public:
	::System::Boolean INBPEHDDJJA; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILKNLNKBLAC_AGACEFEFLDC__CTOR_OFFSET))(this);
	}

	::System::Void NJJANJKJKPI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILKNLNKBLAC_AGACEFEFLDC_NJJANJKJKPI_OFFSET))(this);
	}
};
