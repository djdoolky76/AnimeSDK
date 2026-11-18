#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace MoleMole::SECTR
{
	inline static constexpr unsigned int SectorBinData_Item_TypeDefinitionIndex = 39513;

	struct alignas(8) SectorBinData_Item
	{
		::System::Int32 offset; // 0x10
		::System::Byte _padding0[0x4];
		::System::String* path; // 0x18
	};
}
