#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"

#define EDDB858E445006A8__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int EDDB858E445006A8_TypeDefinitionIndex = 8057;

class EDDB858E445006A8 : public ::E379DE61A548837D
{
public:
	::System::Single E0993A6349B0F8AA; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDDB858E445006A8__CTOR_OFFSET))(this);
	}
};
