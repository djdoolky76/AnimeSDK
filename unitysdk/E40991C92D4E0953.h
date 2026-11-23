#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define E40991C92D4E0953__CTOR_OFFSET UNITYSDK_OFFSET(0x21F6330)

inline static constexpr unsigned int E40991C92D4E0953_TypeDefinitionIndex = 8987;

struct alignas(4) E40991C92D4E0953
{
	::System::UInt32 F125EAA7F2F27197; // 0x10
	::System::UInt32 E4214C0CD362ABA6; // 0x14
	::System::UInt32 BA96F11FC0FB6ADB; // 0x18
	::System::UInt32 AF0B8A0EE11B4352; // 0x1C

	::System::Void _ctor(::System::UInt32 A008F01F1A788048, ::System::UInt32 FD5022999AB1AC65, ::System::UInt32 B32BB854ADF80698, ::System::UInt32 F63520B883FE2AAF)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + E40991C92D4E0953__CTOR_OFFSET))(this, A008F01F1A788048, FD5022999AB1AC65, B32BB854ADF80698, F63520B883FE2AAF);
	}
};
