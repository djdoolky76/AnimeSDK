#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIBangkovBagPageController_LocalBangkovItemInfo.h"
#include "unitysdk/System/Object.h"

class DONGCBIGJJL;
class IFOHGNLIAKH;

#define DONGCBIGJJL_KOBDEPILBDM_PDLNLOCMLJC_OFFSET UNITYSDK_OFFSET(0x12BD8150)
#define DONGCBIGJJL_KOBDEPILBDM__CTOR_OFFSET UNITYSDK_OFFSET(0x12BD8140)

inline static constexpr unsigned int DONGCBIGJJL_KOBDEPILBDM_TypeDefinitionIndex = 70495;

class DONGCBIGJJL_KOBDEPILBDM : public ::System::Object
{
public:
	::DONGCBIGJJL* KLHPEBKNIFB; // 0x10
	::MoleMole::UIBangkovBagPageController_LocalBangkovItemInfo NOGPCDJLEEL; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DONGCBIGJJL_KOBDEPILBDM__CTOR_OFFSET))(this);
	}

	::System::Void PDLNLOCMLJC(::IFOHGNLIAKH* JOLDOMEIKEF)
	{
		return ((::System::Void(*)(::PVOID, ::IFOHGNLIAKH*))((::PBYTE)hIl2Cpp + DONGCBIGJJL_KOBDEPILBDM_PDLNLOCMLJC_OFFSET))(this, JOLDOMEIKEF);
	}
};
