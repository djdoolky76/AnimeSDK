#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CJAKJJOBKDO_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x149677D0)
#define CJAKJJOBKDO__CTOR_OFFSET UNITYSDK_OFFSET(0x149677C0)

inline static constexpr unsigned int CJAKJJOBKDO_TypeDefinitionIndex = 61447;

class CJAKJJOBKDO : public ::System::Object
{
public:
	::System::Boolean NMOJBCHMKLA; // 0x10
	::System::Byte _padding0[0x3];
	::System::Single MILACIDNFAL; // 0x14
	::UnityEngine::Vector3 LNFCOJKHFMG; // 0x18
	::UnityEngine::Vector3 HMMJPKIDBBN; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJAKJJOBKDO__CTOR_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJAKJJOBKDO_PHOADBJGFBE_OFFSET))(this);
	}
};
