#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowResultInfoRowNewWidgetController_RowData_TypeDefinitionIndex = 46509;

	struct alignas(8) UIHollowResultInfoRowNewWidgetController_RowData
	{
		::System::Boolean Empty; // 0x10
		::System::Byte _padding0[0x7];
		::System::String* rowTaskNameID; // 0x18
		::System::Boolean isHideNum; // 0x20
		::System::Byte _padding1[0x7];
		::System::String* numText; // 0x28
		::System::Boolean isHideCompleteUnCompleteState; // 0x30
		::System::Boolean isComplete; // 0x31
		::System::Boolean isShowFail; // 0x32
		::System::Boolean isShowNum2; // 0x33
		::System::Byte _padding2[0x4];
		::System::String* currentNumber2Text; // 0x38
		::System::String* targetNumber2Text; // 0x40
		::System::Nullable_1<::System::Int32> costTime; // 0x48
		::System::Boolean HideProgressAndShowSpacing; // 0x50
		::System::Boolean isNew; // 0x51
	};
}
