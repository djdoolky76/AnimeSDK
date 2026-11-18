#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HOCDHMEPPEG.h"
#include "unitysdk/System/Object.h"

#define PGCEFFAGLEB_JMAONBAEJPI_LIDNPLMPHAL_OFFSET UNITYSDK_OFFSET(0x17327DD0)
#define PGCEFFAGLEB_JMAONBAEJPI__CTOR_OFFSET UNITYSDK_OFFSET(0x17327DC0)

inline static constexpr unsigned int PGCEFFAGLEB_JMAONBAEJPI_TypeDefinitionIndex = 51862;

class PGCEFFAGLEB_JMAONBAEJPI : public ::System::Object
{
public:
	::HOCDHMEPPEG ABMKEFPKPMD; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGCEFFAGLEB_JMAONBAEJPI__CTOR_OFFSET))(this);
	}

	::System::Void LIDNPLMPHAL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGCEFFAGLEB_JMAONBAEJPI_LIDNPLMPHAL_OFFSET))(this);
	}
};
