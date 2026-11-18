#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JGGGPPLICEA.h"
#include "unitysdk/System/Object.h"

class MONCGGJFIFG;

#define MOLEMOLE_UIBOSSCHALLENGEREWARDITEMWIDGETCONTROLLER_ROWDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x18484FA0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBossChallengeRewardItemWidgetController_RowData_TypeDefinitionIndex = 79642;

	class UIBossChallengeRewardItemWidgetController_RowData : public ::System::Object
	{
	public:
		::MONCGGJFIFG* Template; // 0x10
		::JGGGPPLICEA PlayType; // 0x18
		::System::Int32 ZoneID; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEREWARDITEMWIDGETCONTROLLER_ROWDATA__CTOR_OFFSET))(this);
		}
	};
}
