#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

class CALIGLPABNP;

#define MOLEMOLE_UIACTIVITYBATTLEYCLBOSSLISTROWWIDGETCONTROLLER_ROWDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1981CA40)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityBattleYCLBossListRowWidgetController_RowData_TypeDefinitionIndex = 88581;

	class UIActivityBattleYCLBossListRowWidgetController_RowData : public ::System::Object
	{
	public:
		::CALIGLPABNP* monsterConfig; // 0x10
		::System::Int32 monsterLevel; // 0x18
		::System::Nullable_1<::System::Single> perfectWidget; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYBATTLEYCLBOSSLISTROWWIDGETCONTROLLER_ROWDATA__CTOR_OFFSET))(this);
		}
	};
}
