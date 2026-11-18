#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IBIBHALFHCD;
class IFOHGNLIAKH;
namespace MoleMole { class UIZenkovItemInfoWidgetController_Context; }

#define IBIBHALFHCD_DMDDIFOADPA_NMDBLBCCNBD_OFFSET UNITYSDK_OFFSET(0x1A394650)
#define IBIBHALFHCD_DMDDIFOADPA__CTOR_OFFSET UNITYSDK_OFFSET(0x1A394640)

inline static constexpr unsigned int IBIBHALFHCD_DMDDIFOADPA_TypeDefinitionIndex = 43236;

class IBIBHALFHCD_DMDDIFOADPA : public ::System::Object
{
public:
	::MoleMole::UIZenkovItemInfoWidgetController_Context* HBMGHPEPBNC; // 0x10
	::IBIBHALFHCD* KLHPEBKNIFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBIBHALFHCD_DMDDIFOADPA__CTOR_OFFSET))(this);
	}

	::System::Void NMDBLBCCNBD(::IFOHGNLIAKH* JOLDOMEIKEF)
	{
		return ((::System::Void(*)(::PVOID, ::IFOHGNLIAKH*))((::PBYTE)hIl2Cpp + IBIBHALFHCD_DMDDIFOADPA_NMDBLBCCNBD_OFFSET))(this, JOLDOMEIKEF);
	}
};
