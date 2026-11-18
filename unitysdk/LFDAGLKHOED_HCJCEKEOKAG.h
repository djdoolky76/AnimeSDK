#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define LFDAGLKHOED_HCJCEKEOKAG_FEBMEACLEBG_OFFSET UNITYSDK_OFFSET(0x16842C40)
#define LFDAGLKHOED_HCJCEKEOKAG_IIDCJIFPJOD_OFFSET UNITYSDK_OFFSET(0x16842C50)
#define LFDAGLKHOED_HCJCEKEOKAG__CTOR_OFFSET UNITYSDK_OFFSET(0x16842C30)

inline static constexpr unsigned int LFDAGLKHOED_HCJCEKEOKAG_TypeDefinitionIndex = 53713;

class LFDAGLKHOED_HCJCEKEOKAG : public ::System::Object
{
public:
	::System::Boolean PCIEHDPJIDE; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFDAGLKHOED_HCJCEKEOKAG__CTOR_OFFSET))(this);
	}

	::System::Boolean FEBMEACLEBG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LFDAGLKHOED_HCJCEKEOKAG_FEBMEACLEBG_OFFSET))(this);
	}

	::System::Void IIDCJIFPJOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFDAGLKHOED_HCJCEKEOKAG_IIDCJIFPJOD_OFFSET))(this);
	}
};
