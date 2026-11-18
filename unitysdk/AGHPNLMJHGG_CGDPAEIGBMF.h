#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AGHPNLMJHGG;
namespace MoleMole { class UILiveHouseInGamePerfectEffectWidgetController; }

#define AGHPNLMJHGG_CGDPAEIGBMF_LBCBNJECNGH_OFFSET UNITYSDK_OFFSET(0x17CC7C70)
#define AGHPNLMJHGG_CGDPAEIGBMF__CTOR_OFFSET UNITYSDK_OFFSET(0x17CC4480)

inline static constexpr unsigned int AGHPNLMJHGG_CGDPAEIGBMF_TypeDefinitionIndex = 79821;

class AGHPNLMJHGG_CGDPAEIGBMF : public ::System::Object
{
public:
	::MoleMole::UILiveHouseInGamePerfectEffectWidgetController* JOLDOMEIKEF; // 0x10
	::AGHPNLMJHGG* KLHPEBKNIFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGHPNLMJHGG_CGDPAEIGBMF__CTOR_OFFSET))(this);
	}

	::System::Void LBCBNJECNGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGHPNLMJHGG_CGDPAEIGBMF_LBCBNJECNGH_OFFSET))(this);
	}
};
