#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGeneralTutorialTipsRowWidgetController; }

#define LIFMGHPLLPK_NCIMIHNPNEI_EGFIFDEOCMH_OFFSET UNITYSDK_OFFSET(0x12A494E0)
#define LIFMGHPLLPK_NCIMIHNPNEI_PKGEICNFCCB_OFFSET UNITYSDK_OFFSET(0x12A494C0)
#define LIFMGHPLLPK_NCIMIHNPNEI__CTOR_OFFSET UNITYSDK_OFFSET(0x12A494B0)

inline static constexpr unsigned int LIFMGHPLLPK_NCIMIHNPNEI_TypeDefinitionIndex = 47102;

class LIFMGHPLLPK_NCIMIHNPNEI : public ::System::Object
{
public:
	::MoleMole::UIGeneralTutorialTipsRowWidgetController* JOLDOMEIKEF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIFMGHPLLPK_NCIMIHNPNEI__CTOR_OFFSET))(this);
	}

	::System::Void PKGEICNFCCB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIFMGHPLLPK_NCIMIHNPNEI_PKGEICNFCCB_OFFSET))(this);
	}

	::System::Boolean EGFIFDEOCMH(::System::Int32 JEHLHNMFMBM)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LIFMGHPLLPK_NCIMIHNPNEI_EGFIFDEOCMH_OFFSET))(this, JEHLHNMFMBM);
	}
};
