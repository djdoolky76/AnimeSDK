#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GHJBICIBNEL.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class FPFDFMDKEFE;
class OFFPFEPIFPH;

#define MOLEMOLE_UIPLAYERZENKOVPRICEWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x17D6ED00)

namespace MoleMole
{
	inline static constexpr unsigned int UIPlayerZenkovPriceWidgetController_Context_TypeDefinitionIndex = 50191;

	class UIPlayerZenkovPriceWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::FPFDFMDKEFE* PurchaseHistoryRecord; // 0x28
		::OFFPFEPIFPH* ZenkovMarketBrief; // 0x30
		::GHJBICIBNEL FunctionType; // 0x38
		::System::Boolean IsFriendHighestPrice; // 0x3C
		::System::Boolean IsCurrentSelectFriend; // 0x3D
		::System::Boolean IsSelfCardRow; // 0x3E

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPLAYERZENKOVPRICEWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
