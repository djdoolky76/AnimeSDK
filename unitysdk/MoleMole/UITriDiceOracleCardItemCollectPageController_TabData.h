#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NBJLLOBDKHH_HEJPJGKLADK.h"
#include "unitysdk/Share/ENotificationBadgeType.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace MoleMole
{
	inline static constexpr unsigned int UITriDiceOracleCardItemCollectPageController_TabData_TypeDefinitionIndex = 74376;

	struct alignas(8) UITriDiceOracleCardItemCollectPageController_TabData
	{
		::NBJLLOBDKHH_HEJPJGKLADK type; // 0x10
		::System::Byte _padding0[0x4];
		::System::String* typeName; // 0x18
		::Share::ENotificationBadgeType badgeType; // 0x20
	};
}
