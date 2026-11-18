#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/DEDDPKGLKHI_LODLFMBCLAH.h"

class FGLHEFJCDCC;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UISUIBIANDRINKTEAROWWIDGETCONTROLLER_ITEMDATA_ISCANFINISH_OFFSET UNITYSDK_OFFSET(0x15C84240)
#define MOLEMOLE_UISUIBIANDRINKTEAROWWIDGETCONTROLLER_ITEMDATA_ONCEORDERSORTMETHOD_OFFSET UNITYSDK_OFFSET(0x15C844F0)
#define MOLEMOLE_UISUIBIANDRINKTEAROWWIDGETCONTROLLER_ITEMDATA_REFRESHORDERREDSIGNBYDATA_OFFSET UNITYSDK_OFFSET(0x15C84200)
#define MOLEMOLE_UISUIBIANDRINKTEAROWWIDGETCONTROLLER_ITEMDATA_REPEATORDERSORTMETHOD_OFFSET UNITYSDK_OFFSET(0x15C845B0)
#define MOLEMOLE_UISUIBIANDRINKTEAROWWIDGETCONTROLLER_ITEMDATA_SETORDERDATA_OFFSET UNITYSDK_OFFSET(0x15C838B0)
#define MOLEMOLE_UISUIBIANDRINKTEAROWWIDGETCONTROLLER_ITEMDATA_SETPERREWARDITEM_OFFSET UNITYSDK_OFFSET(0x15C84130)
#define MOLEMOLE_UISUIBIANDRINKTEAROWWIDGETCONTROLLER_ITEMDATA_SETREPEATREWARDLIST_OFFSET UNITYSDK_OFFSET(0x15C83BC0)
#define MOLEMOLE_UISUIBIANDRINKTEAROWWIDGETCONTROLLER_ITEMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x15C84650)

namespace MoleMole
{
	inline static constexpr unsigned int UISuibianDrinkTeaRowWidgetController_ItemData_TypeDefinitionIndex = 64892;

	class UISuibianDrinkTeaRowWidgetController_ItemData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* NeedItemCountList; // 0x10
		::System::String* Title; // 0x18
		::System::String* Description; // 0x20
		::System::Collections::Generic::List_1<::System::Int32>* NeedItemIdList; // 0x28
		::System::String* TargetDescription; // 0x30
		::System::Collections::Generic::List_1<::System::Object*>* RewardList; // 0x38
		::System::Int32 OrderType; // 0x40
		::System::Int32 PrefixTitleId; // 0x44
		::System::Int32 Id; // 0x48
		::System::Int32 OrderClientId; // 0x4C
		::System::Int32 Slot; // 0x50
		::System::Boolean IsNew; // 0x54
		::System::Boolean IsFinish; // 0x55
		::System::Boolean IsOnce; // 0x56
		::System::Boolean IsTask; // 0x57
		::System::Int32 BigRewardTipsId; // 0x58
		::System::Int32 RewardCoinId; // 0x5C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANDRINKTEAROWWIDGETCONTROLLER_ITEMDATA__CTOR_OFFSET))(this);
		}

		::System::Void SetOrderData(::FGLHEFJCDCC* serverData, ::System::Boolean isOnce)
		{
			return ((::System::Void(*)(::PVOID, ::FGLHEFJCDCC*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANDRINKTEAROWWIDGETCONTROLLER_ITEMDATA_SETORDERDATA_OFFSET))(this, serverData, isOnce);
		}

		::System::Void SetRepeatRewardList(::FGLHEFJCDCC* serverData)
		{
			return ((::System::Void(*)(::PVOID, ::FGLHEFJCDCC*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANDRINKTEAROWWIDGETCONTROLLER_ITEMDATA_SETREPEATREWARDLIST_OFFSET))(this, serverData);
		}

		::System::Void SetPerRewardItem(::DEDDPKGLKHI_LODLFMBCLAH rewardItem)
		{
			return ((::System::Void(*)(::PVOID, ::DEDDPKGLKHI_LODLFMBCLAH))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANDRINKTEAROWWIDGETCONTROLLER_ITEMDATA_SETPERREWARDITEM_OFFSET))(this, rewardItem);
		}

		::System::Void RefreshOrderRedSignByData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANDRINKTEAROWWIDGETCONTROLLER_ITEMDATA_REFRESHORDERREDSIGNBYDATA_OFFSET))(this);
		}

		::System::Boolean IsCanFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANDRINKTEAROWWIDGETCONTROLLER_ITEMDATA_ISCANFINISH_OFFSET))(this);
		}

		static ::System::Int32 OnceOrderSortMethod(::MoleMole::UISuibianDrinkTeaRowWidgetController_ItemData* first, ::MoleMole::UISuibianDrinkTeaRowWidgetController_ItemData* second)
		{
			return ((::System::Int32(*)(::MoleMole::UISuibianDrinkTeaRowWidgetController_ItemData*, ::MoleMole::UISuibianDrinkTeaRowWidgetController_ItemData*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANDRINKTEAROWWIDGETCONTROLLER_ITEMDATA_ONCEORDERSORTMETHOD_OFFSET))(first, second);
		}

		static ::System::Int32 RepeatOrderSortMethod(::MoleMole::UISuibianDrinkTeaRowWidgetController_ItemData* first, ::MoleMole::UISuibianDrinkTeaRowWidgetController_ItemData* second)
		{
			return ((::System::Int32(*)(::MoleMole::UISuibianDrinkTeaRowWidgetController_ItemData*, ::MoleMole::UISuibianDrinkTeaRowWidgetController_ItemData*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANDRINKTEAROWWIDGETCONTROLLER_ITEMDATA_REPEATORDERSORTMETHOD_OFFSET))(first, second);
		}
	};
}
