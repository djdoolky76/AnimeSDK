#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define E820C206C2A91678_A6A25AF499B515E8_EB411732C99E3152_OFFSET UNITYSDK_OFFSET(0x40FE0C0)
#define E820C206C2A91678_A6A25AF499B515E8__CTOR_OFFSET UNITYSDK_OFFSET(0x40FE110)

namespace E820C206C2A91678
{
	inline static constexpr unsigned int A6A25AF499B515E8_TypeDefinitionIndex = 21219;

	struct alignas(4) A6A25AF499B515E8
	{
		::System::UInt32 A912CD2FA7B65A5D; // 0x10
		::System::UInt16 A5F81D64F204DDA5; // 0x14
		::System::UInt16 FE315A82F071000E; // 0x16

		/*
		static ::System::Void EB411732C99E3152(::System::String* BC8320911AB887F9, ::E820C206C2A91678::A6A25AF499B515E8& AD8B4585AE506C73)
		{
			return ((::System::Void(*)(::System::String*, ::E820C206C2A91678::A6A25AF499B515E8&))((::PBYTE)hIl2Cpp + E820C206C2A91678_A6A25AF499B515E8_EB411732C99E3152_OFFSET))(BC8320911AB887F9, AD8B4585AE506C73);
		}
		*/

		::System::Void _ctor(::System::String* BC8320911AB887F9)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + E820C206C2A91678_A6A25AF499B515E8__CTOR_OFFSET))(this, BC8320911AB887F9);
		}
	};
}
