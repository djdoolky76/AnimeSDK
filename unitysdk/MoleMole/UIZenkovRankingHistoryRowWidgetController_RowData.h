#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIZENKOVRANKINGHISTORYROWWIDGETCONTROLLER_ROWDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1671C8A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovRankingHistoryRowWidgetController_RowData_TypeDefinitionIndex = 60386;

	class UIZenkovRankingHistoryRowWidgetController_RowData : public ::System::Object
	{
	public:
		::System::String* TimeText; // 0x10
		::System::Collections::Generic::List_1<::System::Object*>* SceneList; // 0x18
		::System::String* TitleKey; // 0x20
		::System::String* TitleText; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVRANKINGHISTORYROWWIDGETCONTROLLER_ROWDATA__CTOR_OFFSET))(this);
		}
	};
}
