#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AGHPNLMJHGG;
namespace MoleMole { class UILiveHouseInGamePerfectEffectWidgetController; }

#define AGHPNLMJHGG_KEGDDMALFIK_PPBHJHFBEBN_OFFSET UNITYSDK_OFFSET(0x134C5680)
#define AGHPNLMJHGG_KEGDDMALFIK__CTOR_OFFSET UNITYSDK_OFFSET(0x134C5670)

inline static constexpr unsigned int AGHPNLMJHGG_KEGDDMALFIK_TypeDefinitionIndex = 79820;

class AGHPNLMJHGG_KEGDDMALFIK : public ::System::Object
{
public:
	::AGHPNLMJHGG* KLHPEBKNIFB; // 0x10
	::MoleMole::UILiveHouseInGamePerfectEffectWidgetController* JOLDOMEIKEF; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGHPNLMJHGG_KEGDDMALFIK__CTOR_OFFSET))(this);
	}

	::System::Void PPBHJHFBEBN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGHPNLMJHGG_KEGDDMALFIK_PPBHJHFBEBN_OFFSET))(this);
	}
};
