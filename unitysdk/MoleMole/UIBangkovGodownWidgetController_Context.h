#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AKLBGAKHAOC.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/OFDKEANKAIL.h"

namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
template <typename T> class JIOLFCAGOFH_1;
template <typename T> class LGFJMNEABJP_1;
template <typename T> class LJHFMILANJA_1;

#define MOLEMOLE_UIBANGKOVGODOWNWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x159551F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangkovGodownWidgetController_Context_TypeDefinitionIndex = 63179;

	class UIBangkovGodownWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action_1<::System::Int32>* OnFilterChanged; // 0x28
		::JIOLFCAGOFH_1<::System::Int64>* SelectedItemSumValue; // 0x30
		::LJHFMILANJA_1<::System::Boolean>* IsInMultiSellMode; // 0x38
		::LGFJMNEABJP_1<::System::Object*>* SelectedItemList; // 0x40
		::AKLBGAKHAOC ShowPageType; // 0x48
		::System::Boolean outsideControlGamepad; // 0x4C
		::System::Boolean HideGoBtn; // 0x4D
		::System::Boolean IsNightMode; // 0x4E
		::System::Byte _padding0[0x1];
		::OFDKEANKAIL PlayType; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVGODOWNWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
