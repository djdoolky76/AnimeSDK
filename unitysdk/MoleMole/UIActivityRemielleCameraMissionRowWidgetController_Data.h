#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class HGIDAMPAOGK;
class MKFCCEABOBN;

#define MOLEMOLE_UIACTIVITYREMIELLECAMERAMISSIONROWWIDGETCONTROLLER_DATA__CTOR_OFFSET UNITYSDK_OFFSET(0x19D2A1F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityRemielleCameraMissionRowWidgetController_Data_TypeDefinitionIndex = 68531;

	class UIActivityRemielleCameraMissionRowWidgetController_Data : public ::System::Object
	{
	public:
		::MKFCCEABOBN* template_; // 0x10
		::HGIDAMPAOGK* GeneralLevel; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYREMIELLECAMERAMISSIONROWWIDGETCONTROLLER_DATA__CTOR_OFFSET))(this);
		}
	};
}
