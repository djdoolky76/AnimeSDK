#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_UIZENKOVRANKINGHISTORYSCENEROWWIDGETCONTROLLER_ROWDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xEB24B10)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovRankingHistorySceneRowWidgetController_RowData_TypeDefinitionIndex = 74446;

	class UIZenkovRankingHistorySceneRowWidgetController_RowData : public ::System::Object
	{
	public:
		::System::String* TitleText; // 0x10
		::System::String* TitleKey; // 0x18
		::System::String* RankTextKey; // 0x20
		::System::UInt32 Rank; // 0x28
		::System::UInt32 RankPercent; // 0x2C
		::System::UInt32 Score; // 0x30
		::System::Boolean IsInRank; // 0x34
		::System::Boolean HasScore; // 0x35

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVRANKINGHISTORYSCENEROWWIDGETCONTROLLER_ROWDATA__CTOR_OFFSET))(this);
		}
	};
}
