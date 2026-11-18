#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeGraph/VariantUnion.h"
#include "unitysdk/Share/ENotificationBadgeType.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGeneralTabBtnWidgetController_Data_OnClickSubItem; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIGENERALTABBTNWIDGETCONTROLLER_DATA_GET_BADGESUBID_OFFSET UNITYSDK_OFFSET(0x173D1CF0)
#define MOLEMOLE_UIGENERALTABBTNWIDGETCONTROLLER_DATA_GET_BADGETYPE_OFFSET UNITYSDK_OFFSET(0x173D1CE0)
#define MOLEMOLE_UIGENERALTABBTNWIDGETCONTROLLER_DATA_GET_ONSELECTSUBITEM_OFFSET UNITYSDK_OFFSET(0x173D1D30)
#define MOLEMOLE_UIGENERALTABBTNWIDGETCONTROLLER_DATA_GET_SUBDATAS_OFFSET UNITYSDK_OFFSET(0x173D1D10)
#define MOLEMOLE_UIGENERALTABBTNWIDGETCONTROLLER_DATA_GET_TEXT_OFFSET UNITYSDK_OFFSET(0x173D1CD0)
#define MOLEMOLE_UIGENERALTABBTNWIDGETCONTROLLER_DATA_SET_ONSELECTSUBITEM_OFFSET UNITYSDK_OFFSET(0x173D1D40)
#define MOLEMOLE_UIGENERALTABBTNWIDGETCONTROLLER_DATA_SET_SUBDATAS_OFFSET UNITYSDK_OFFSET(0x173D1D20)
#define MOLEMOLE_UIGENERALTABBTNWIDGETCONTROLLER_DATA__CTOR_OFFSET UNITYSDK_OFFSET(0x173D1D50)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralTabBtnWidgetController_Data_TypeDefinitionIndex = 82262;

	class UIGeneralTabBtnWidgetController_Data : public ::System::Object
	{
	public:
		::System::String* _text_k__BackingField; // 0x10
		::System::Nullable_1<::NodeGraph::VariantUnion> _badgeSubId_k__BackingField; // 0x18
		::System::Byte _padding0[0x18];
		::MoleMole::UIGeneralTabBtnWidgetController_Data_OnClickSubItem* _onSelectSubItem_k__BackingField; // 0x38
		::System::Collections::Generic::List_1<::System::Object*>* _subDatas_k__BackingField; // 0x40
		::System::Nullable_1<::Share::ENotificationBadgeType> _badgeType_k__BackingField; // 0x48
		::System::Int32 selectIndex; // 0x50
		::System::Boolean expand; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTABBTNWIDGETCONTROLLER_DATA__CTOR_OFFSET))(this);
		}

		::System::String* get_text()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTABBTNWIDGETCONTROLLER_DATA_GET_TEXT_OFFSET))(this);
		}

		::System::Nullable_1<::Share::ENotificationBadgeType> get_badgeType()
		{
			return ((::System::Nullable_1<::Share::ENotificationBadgeType>(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTABBTNWIDGETCONTROLLER_DATA_GET_BADGETYPE_OFFSET))(this);
		}

		::System::Nullable_1<::NodeGraph::VariantUnion> get_badgeSubId()
		{
			return ((::System::Nullable_1<::NodeGraph::VariantUnion>(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTABBTNWIDGETCONTROLLER_DATA_GET_BADGESUBID_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::Object*>* get_subDatas()
		{
			return ((::System::Collections::Generic::List_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTABBTNWIDGETCONTROLLER_DATA_GET_SUBDATAS_OFFSET))(this);
		}

		::System::Void set_subDatas(::System::Collections::Generic::List_1<::System::Object*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTABBTNWIDGETCONTROLLER_DATA_SET_SUBDATAS_OFFSET))(this, value);
		}

		::MoleMole::UIGeneralTabBtnWidgetController_Data_OnClickSubItem* get_onSelectSubItem()
		{
			return ((::MoleMole::UIGeneralTabBtnWidgetController_Data_OnClickSubItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTABBTNWIDGETCONTROLLER_DATA_GET_ONSELECTSUBITEM_OFFSET))(this);
		}

		::System::Void set_onSelectSubItem(::MoleMole::UIGeneralTabBtnWidgetController_Data_OnClickSubItem* value)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIGeneralTabBtnWidgetController_Data_OnClickSubItem*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTABBTNWIDGETCONTROLLER_DATA_SET_ONSELECTSUBITEM_OFFSET))(this, value);
		}
	};
}
