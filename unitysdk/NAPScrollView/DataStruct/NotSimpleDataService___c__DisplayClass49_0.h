#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace NAPScrollView::DataStruct { class NotSimpleDataService; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEDATASERVICE___C__DISPLAYCLASS49_0__CTOR_OFFSET UNITYSDK_OFFSET(0x105A0130)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEDATASERVICE___C__DISPLAYCLASS49_0__REFRESHITEMORREPLACEDATA_B__0_OFFSET UNITYSDK_OFFSET(0x105A0140)

namespace NAPScrollView::DataStruct
{
	inline static constexpr unsigned int NotSimpleDataService___c__DisplayClass49_0_TypeDefinitionIndex = 43286;

	class NotSimpleDataService___c__DisplayClass49_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* newList; // 0x10
		::NAPScrollView::DataStruct::NotSimpleDataService* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEDATASERVICE___C__DISPLAYCLASS49_0__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshItemOrReplaceData_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEDATASERVICE___C__DISPLAYCLASS49_0__REFRESHITEMORREPLACEDATA_B__0_OFFSET))(this);
		}
	};
}
