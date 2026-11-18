#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AKLBGAKHAOC.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/OFDKEANKAIL.h"
#include "unitysdk/System/ValueTuple_2.h"

class KFPKNGNFJNO;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class LJHFMILANJA_1;

#define MOLEMOLE_UIZENKOVWAREHOUSEPAGECONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x18F753E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovWarehousePageController_Context_TypeDefinitionIndex = 92264;

	class UIZenkovWarehousePageController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action* OnCloseAction; // 0x28
		::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* SettleTransferItemIdAndNum; // 0x30
		::LJHFMILANJA_1<::KFPKNGNFJNO*>* SelectQuestData; // 0x38
		::System::Int32 SearchEntityRid; // 0x40
		::System::UInt32 SettleDungeonId; // 0x44
		::OFDKEANKAIL PlayType; // 0x48
		::System::Boolean IsNightMode; // 0x4C
		::System::Byte _padding0[0x3];
		::AKLBGAKHAOC ShowPageType; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWAREHOUSEPAGECONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
