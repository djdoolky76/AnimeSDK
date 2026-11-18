#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FOEFLLHAGPI;

#define FOEFLLHAGPI_AJMFJEAIOPB_AACLKPHGMLM_OFFSET UNITYSDK_OFFSET(0x10ECA1F0)
#define FOEFLLHAGPI_AJMFJEAIOPB__CTOR_OFFSET UNITYSDK_OFFSET(0x10ECA1E0)

inline static constexpr unsigned int FOEFLLHAGPI_AJMFJEAIOPB_TypeDefinitionIndex = 89520;

class FOEFLLHAGPI_AJMFJEAIOPB : public ::System::Object
{
public:
	::FOEFLLHAGPI* KLHPEBKNIFB; // 0x10
	::System::Int32 HBLGABGIIAC; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOEFLLHAGPI_AJMFJEAIOPB__CTOR_OFFSET))(this);
	}

	::System::Void AACLKPHGMLM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOEFLLHAGPI_AJMFJEAIOPB_AACLKPHGMLM_OFFSET))(this);
	}
};
