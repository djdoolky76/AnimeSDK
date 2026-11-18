#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class PPAAHJMDPAO;

#define DNPBJNBNDPL_MPBGCGBFCMM_GGFJDHBFMCD_OFFSET UNITYSDK_OFFSET(0x148BC430)
#define DNPBJNBNDPL_MPBGCGBFCMM__CTOR_OFFSET UNITYSDK_OFFSET(0x148BC410)

inline static constexpr unsigned int DNPBJNBNDPL_MPBGCGBFCMM_TypeDefinitionIndex = 80426;

class DNPBJNBNDPL_MPBGCGBFCMM : public ::System::Object
{
public:
	::PPAAHJMDPAO* HHHNJIMDFOG; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNPBJNBNDPL_MPBGCGBFCMM__CTOR_OFFSET))(this);
	}

	::System::Boolean GGFJDHBFMCD()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DNPBJNBNDPL_MPBGCGBFCMM_GGFJDHBFMCD_OFFSET))(this);
	}
};
