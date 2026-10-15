#pragma once
#include "unitysdk/unitysdk.h"

namespace CriWare::CriMana
{
	inline static constexpr unsigned int EventPoint_TypeDefinitionIndex = 40212;

	struct alignas(4) EventPoint
	{
		::System::IntPtr cueName; // 0x10
		::System::UInt32 cueNameSize; // 0x18
		::System::Byte _padding0[0x4];
		::System::UInt64 time; // 0x20
		::System::UInt64 tunit; // 0x28
		::System::Int32 type; // 0x30
		::System::Byte _padding1[0x4];
		::System::IntPtr paramString; // 0x38
		::System::UInt32 paramStringSize; // 0x40
		::System::UInt32 cntCallback; // 0x44
	};
}
