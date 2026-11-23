#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define B164B81650E2073E__CTOR_OFFSET UNITYSDK_OFFSET(0x2D63C00)

inline static constexpr unsigned int B164B81650E2073E_TypeDefinitionIndex = 11392;

struct alignas(8) B164B81650E2073E
{
	::System::Object* A7596D4E5AD2D27E; // 0x10
	::System::IntPtr B4F86EDF027433DA; // 0x18

	::System::Void _ctor(::System::Object* BDF36F9092680C0B, ::System::IntPtr E38FD399E4DFEF27)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + B164B81650E2073E__CTOR_OFFSET))(this, BDF36F9092680C0B, E38FD399E4DFEF27);
	}
};
