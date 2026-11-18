#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EGCGIAHBMKE.h"

#define NMGICIGLCDM_GMMJPBEINIH_OFFSET UNITYSDK_OFFSET(0xE5929B0)
#define NMGICIGLCDM_LBMALCEMPPL_OFFSET UNITYSDK_OFFSET(0xE592CB0)
#define NMGICIGLCDM__CTOR_OFFSET UNITYSDK_OFFSET(0xE592C50)

inline static constexpr unsigned int NMGICIGLCDM_TypeDefinitionIndex = 67125;

class NMGICIGLCDM : public ::EGCGIAHBMKE
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMGICIGLCDM__CTOR_OFFSET))(this);
	}

	::System::Void GMMJPBEINIH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMGICIGLCDM_GMMJPBEINIH_OFFSET))(this);
	}

	::System::Void LBMALCEMPPL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMGICIGLCDM_LBMALCEMPPL_OFFSET))(this);
	}
};
