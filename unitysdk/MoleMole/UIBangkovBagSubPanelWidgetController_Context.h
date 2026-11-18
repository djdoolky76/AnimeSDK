#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AKLBGAKHAOC.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/OFDKEANKAIL.h"

namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
template <typename T> class JIOLFCAGOFH_1;
template <typename T> class LGFJMNEABJP_1;

#define MOLEMOLE_UIBANGKOVBAGSUBPANELWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x188846D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangkovBagSubPanelWidgetController_Context_TypeDefinitionIndex = 66500;

	class UIBangkovBagSubPanelWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::JIOLFCAGOFH_1<::System::Int64>* SelectedItemSumValue; // 0x28
		::System::Action_1<::System::Int32>* onBagTabLick; // 0x30
		::JIOLFCAGOFH_1<::System::Boolean>* IsInMultiSellMode; // 0x38
		::LGFJMNEABJP_1<::System::Object*>* SelectedItemList; // 0x40
		::System::Boolean HideEquipSection; // 0x48
		::System::Boolean IsWarehousePage; // 0x49
		::System::Boolean HideEquipEmptySlots; // 0x4A
		::System::Byte _padding0[0x1];
		::OFDKEANKAIL PlayType; // 0x4C
		::AKLBGAKHAOC ShowPageType; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVBAGSUBPANELWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
