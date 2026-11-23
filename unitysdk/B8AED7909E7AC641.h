#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"
#include "unitysdk/E68AA4EB51923C98/E33D2B4077DE805D.h"

namespace System { class String; }

#define B8AED7909E7AC641__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int B8AED7909E7AC641_TypeDefinitionIndex = 1470;

class B8AED7909E7AC641 : public ::E379DE61A548837D
{
public:
	::E68AA4EB51923C98::E33D2B4077DE805D AA6AE7C7837B4AEC; // 0x38
	::System::Byte _padding0[0x4];
	::System::String* BC9C5D0F1F1D3BF7; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B8AED7909E7AC641__CTOR_OFFSET))(this);
	}
};
