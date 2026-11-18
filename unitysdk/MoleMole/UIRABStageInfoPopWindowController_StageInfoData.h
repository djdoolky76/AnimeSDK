#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class HFDKBNLKDNH;
namespace System { class String; }

namespace MoleMole
{
	inline static constexpr unsigned int UIRABStageInfoPopWindowController_StageInfoData_TypeDefinitionIndex = 52419;

	struct alignas(8) UIRABStageInfoPopWindowController_StageInfoData
	{
		::System::Int32 Type; // 0x10
		::System::Int32 RankId; // 0x14
		::System::Boolean IsCurrent; // 0x18
		::System::Byte _padding0[0x7];
		::System::String* TitleText; // 0x20
		::HFDKBNLKDNH* RowConfig; // 0x28
	};
}
