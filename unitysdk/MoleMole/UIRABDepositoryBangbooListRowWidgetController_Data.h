#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/RABDepositoryBangbooBaseData.h"

class DCFKHKBLIMA;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIRABDEPOSITORYBANGBOOLISTROWWIDGETCONTROLLER_DATA__CTOR_OFFSET UNITYSDK_OFFSET(0x18FF35A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABDepositoryBangbooListRowWidgetController_Data_TypeDefinitionIndex = 45202;

	class UIRABDepositoryBangbooListRowWidgetController_Data : public ::MoleMole::RABDepositoryBangbooBaseData
	{
	public:
		::System::Collections::Generic::List_1<::DCFKHKBLIMA*>* BuddyDatas; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABDEPOSITORYBANGBOOLISTROWWIDGETCONTROLLER_DATA__CTOR_OFFSET))(this);
		}
	};
}
