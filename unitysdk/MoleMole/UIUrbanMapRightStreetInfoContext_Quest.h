#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIUrbanMapRightTastListWidget02WidgetContext.h"

class MBDAEEFAGKB;
template <typename T> class NMANHEHIJAL_1;

#define MOLEMOLE_UIURBANMAPRIGHTSTREETINFOCONTEXT_QUEST__CTOR_OFFSET UNITYSDK_OFFSET(0x13BD1950)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapRightStreetInfoContext_Quest_TypeDefinitionIndex = 45544;

	class UIUrbanMapRightStreetInfoContext_Quest : public ::MoleMole::UIUrbanMapRightTastListWidget02WidgetContext
	{
	public:
		::NMANHEHIJAL_1<::MBDAEEFAGKB*>* QuestDatas; // 0x30
		::System::Int32 MapAreaId; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPRIGHTSTREETINFOCONTEXT_QUEST__CTOR_OFFSET))(this);
		}
	};
}
