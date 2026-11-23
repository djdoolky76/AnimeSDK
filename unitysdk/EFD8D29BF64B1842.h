#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"

#define EFD8D29BF64B1842__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int EFD8D29BF64B1842_TypeDefinitionIndex = 117;

class EFD8D29BF64B1842 : public ::E379DE61A548837D
{
public:
	::System::UInt32 EF0122FCE8B57425; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFD8D29BF64B1842__CTOR_OFFSET))(this);
	}
};
