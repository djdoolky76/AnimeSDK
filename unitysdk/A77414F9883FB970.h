#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define A77414F9883FB970__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int A77414F9883FB970_TypeDefinitionIndex = 12840;

class A77414F9883FB970 : public ::System::Object
{
public:
	::System::String* B5CF54381C4A69A1; // 0x10
	::System::String* F3BBF031386CD8B6; // 0x18
	::System::Int32 F9A684A7652A8672; // 0x20
	::System::Int32 A64EFA830592D04B; // 0x24
	::System::Int32 E9CEADA4BBBF2E5D; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A77414F9883FB970__CTOR_OFFSET))(this);
	}
};
