#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class KOIDMLPJGML;
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIURBANMAPRIGHTLISTWISHROWWIDGETCONTROLLER_DATA__CTOR_OFFSET UNITYSDK_OFFSET(0x185E6380)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapRightListWishRowWidgetController_Data_TypeDefinitionIndex = 75279;

	class UIUrbanMapRightListWishRowWidgetController_Data : public ::System::Object
	{
	public:
		::System::Action* onClickAdd; // 0x10
		::System::Action* onClickDel; // 0x18
		::System::String* title; // 0x20
		::System::Collections::Generic::List_1<::KOIDMLPJGML*>* itemList; // 0x28
		::System::Boolean isDone; // 0x30
		::System::Boolean isEmpty; // 0x31
		::System::Byte _padding0[0x2];
		::System::Int32 key1; // 0x34
		::System::Int32 key2; // 0x38
		::System::Int32 index; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPRIGHTLISTWISHROWWIDGETCONTROLLER_DATA__CTOR_OFFSET))(this);
		}
	};
}
