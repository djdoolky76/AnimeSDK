#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EGAANNPEJCH.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_UICOMMONBATTLESCOREITEMWIDGETCONTROLLER_DATA__CTOR_OFFSET UNITYSDK_OFFSET(0x18910740)

namespace MoleMole
{
	inline static constexpr unsigned int UICommonBattleScoreItemWidgetController_Data_TypeDefinitionIndex = 53072;

	class UICommonBattleScoreItemWidgetController_Data : public ::System::Object
	{
	public:
		::System::String* DescKey; // 0x10
		::EGAANNPEJCH Rank; // 0x18
		::System::Boolean IsComplete; // 0x1C

		::System::Void _ctor(::System::String* descKey, ::EGAANNPEJCH rank, ::System::Boolean isComplete)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::EGAANNPEJCH, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMMONBATTLESCOREITEMWIDGETCONTROLLER_DATA__CTOR_OFFSET))(this, descKey, rank, isComplete);
		}
	};
}
