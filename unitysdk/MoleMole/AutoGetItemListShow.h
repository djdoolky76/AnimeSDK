#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/DisplayMessageBase.h"

class HGAJKHIMKJP;
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_AUTOGETITEMLISTSHOW_DIRECTSHOW_OFFSET UNITYSDK_OFFSET(0x174BC870)
#define MOLEMOLE_AUTOGETITEMLISTSHOW_DOPROCESS_OFFSET UNITYSDK_OFFSET(0x174BC8C0)
#define MOLEMOLE_AUTOGETITEMLISTSHOW_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x174BC450)
#define MOLEMOLE_AUTOGETITEMLISTSHOW_MERGEITEMLIST_OFFSET UNITYSDK_OFFSET(0x174BC5B0)
#define MOLEMOLE_AUTOGETITEMLISTSHOW_MERGESINGLEITEM_OFFSET UNITYSDK_OFFSET(0x174BC660)
#define MOLEMOLE_AUTOGETITEMLISTSHOW_ONCLICKGOTOBTN_OFFSET UNITYSDK_OFFSET(0x174BCC60)
#define MOLEMOLE_AUTOGETITEMLISTSHOW_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x174BC820)
#define MOLEMOLE_AUTOGETITEMLISTSHOW_SETGOBTN_OFFSET UNITYSDK_OFFSET(0x174BC770)
#define MOLEMOLE_AUTOGETITEMLISTSHOW_SETMESSAGECONFIG_OFFSET UNITYSDK_OFFSET(0x174BC550)
#define MOLEMOLE_AUTOGETITEMLISTSHOW_SHOWREWARDWINDOW_OFFSET UNITYSDK_OFFSET(0x174BC910)
#define MOLEMOLE_AUTOGETITEMLISTSHOW__CTOR_OFFSET UNITYSDK_OFFSET(0x174BC460)
#define MOLEMOLE_AUTOGETITEMLISTSHOW___BASE_SETMESSAGECONFIG_OFFSET UNITYSDK_OFFSET(0x174BCF30)

namespace MoleMole
{
	inline static constexpr unsigned int AutoGetItemListShow_TypeDefinitionIndex = 57986;

	class AutoGetItemListShow : public ::MoleMole::DisplayMessageBase
	{
	public:
		::System::Action* goCallback; // 0x28
		::System::String* goText; // 0x30
		::System::Collections::Generic::List_1<::HGAJKHIMKJP*>* items; // 0x38
		::System::Boolean showGoBtn; // 0x40
		::System::Boolean showOverflowHint; // 0x41
		::System::Byte _padding0[0x2];
		::System::Int32 accessID; // 0x44

		::System::Void _ctor(::System::Collections::Generic::List_1<::HGAJKHIMKJP*>* addItems)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::HGAJKHIMKJP*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_AUTOGETITEMLISTSHOW__CTOR_OFFSET))(this, addItems);
		}

		::System::Int32 get_Priority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUTOGETITEMLISTSHOW_GET_PRIORITY_OFFSET))(this);
		}

		::System::Void SetMessageConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUTOGETITEMLISTSHOW_SETMESSAGECONFIG_OFFSET))(this);
		}

		::System::Void MergeItemList(::System::Collections::Generic::List_1<::HGAJKHIMKJP*>* mergeItems)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::HGAJKHIMKJP*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_AUTOGETITEMLISTSHOW_MERGEITEMLIST_OFFSET))(this, mergeItems);
		}

		::System::Void MergeSingleItem(::HGAJKHIMKJP* targetItem)
		{
			return ((::System::Void(*)(::PVOID, ::HGAJKHIMKJP*))((::PBYTE)hIl2Cpp + MOLEMOLE_AUTOGETITEMLISTSHOW_MERGESINGLEITEM_OFFSET))(this, targetItem);
		}

		::System::Void SetGoBtn(::System::Int32 accessID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_AUTOGETITEMLISTSHOW_SETGOBTN_OFFSET))(this, accessID);
		}

		::System::Void OnProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUTOGETITEMLISTSHOW_ONPROCESS_OFFSET))(this);
		}

		::System::Void DirectShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUTOGETITEMLISTSHOW_DIRECTSHOW_OFFSET))(this);
		}

		::System::Void DoProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUTOGETITEMLISTSHOW_DOPROCESS_OFFSET))(this);
		}

		::System::Void ShowRewardWindow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUTOGETITEMLISTSHOW_SHOWREWARDWINDOW_OFFSET))(this);
		}

		::System::Void OnClickGotoBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUTOGETITEMLISTSHOW_ONCLICKGOTOBTN_OFFSET))(this);
		}

		::System::Void __base_SetMessageConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUTOGETITEMLISTSHOW___BASE_SETMESSAGECONFIG_OFFSET))(this);
		}
	};
}
