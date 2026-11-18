#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IBIBHALFHCD;
class IFOHGNLIAKH;
namespace MoleMole { class UIZenkovItemInfoWidgetController_Context; }

#define IBIBHALFHCD_OIPFFIBMCFB_KHHBJPGOCII_OFFSET UNITYSDK_OFFSET(0xEA10590)
#define IBIBHALFHCD_OIPFFIBMCFB__CTOR_OFFSET UNITYSDK_OFFSET(0xEA10580)

inline static constexpr unsigned int IBIBHALFHCD_OIPFFIBMCFB_TypeDefinitionIndex = 43237;

class IBIBHALFHCD_OIPFFIBMCFB : public ::System::Object
{
public:
	::MoleMole::UIZenkovItemInfoWidgetController_Context* HBMGHPEPBNC; // 0x10
	::IBIBHALFHCD* KLHPEBKNIFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBIBHALFHCD_OIPFFIBMCFB__CTOR_OFFSET))(this);
	}

	::System::Void KHHBJPGOCII(::IFOHGNLIAKH* JOLDOMEIKEF)
	{
		return ((::System::Void(*)(::PVOID, ::IFOHGNLIAKH*))((::PBYTE)hIl2Cpp + IBIBHALFHCD_OIPFFIBMCFB_KHHBJPGOCII_OFFSET))(this, JOLDOMEIKEF);
	}
};
