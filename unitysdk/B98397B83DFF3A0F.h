#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/A8F73F74A274B55E.h"
#include "unitysdk/FB15B066A5E7656D.h"

#define B98397B83DFF3A0F__CTOR_OFFSET UNITYSDK_OFFSET(0x16591D0)

inline static constexpr unsigned int B98397B83DFF3A0F_TypeDefinitionIndex = 380;

class B98397B83DFF3A0F : public ::A8F73F74A274B55E
{
public:
	::FB15B066A5E7656D A84FB6E2922C5619; // 0x18
	::System::Boolean BCA611733BAC07E9; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B98397B83DFF3A0F__CTOR_OFFSET))(this);
	}
};
