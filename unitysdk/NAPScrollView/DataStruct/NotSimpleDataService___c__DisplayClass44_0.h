#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace NAPScrollView::DataStruct { class NotSimpleDataService; }
namespace System::Collections { class IList; }

#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEDATASERVICE___C__DISPLAYCLASS44_0__ADDDATATOTOP_B__0_OFFSET UNITYSDK_OFFSET(0x16B46FD0)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEDATASERVICE___C__DISPLAYCLASS44_0__CTOR_OFFSET UNITYSDK_OFFSET(0x16B46FC0)

namespace NAPScrollView::DataStruct
{
	inline static constexpr unsigned int NotSimpleDataService___c__DisplayClass44_0_TypeDefinitionIndex = 43284;

	class NotSimpleDataService___c__DisplayClass44_0 : public ::System::Object
	{
	public:
		::NAPScrollView::DataStruct::NotSimpleDataService* __4__this; // 0x10
		::System::Collections::IList* datas; // 0x18
		::System::Int32 insertCount; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEDATASERVICE___C__DISPLAYCLASS44_0__CTOR_OFFSET))(this);
		}

		::System::Void _AddDataToTop_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEDATASERVICE___C__DISPLAYCLASS44_0__ADDDATATOTOP_B__0_OFFSET))(this);
		}
	};
}
