#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define DFJFNDMEIHK__CTOR_OFFSET UNITYSDK_OFFSET(0x13E4B2A0)

inline static constexpr unsigned int DFJFNDMEIHK_TypeDefinitionIndex = 56266;

class DFJFNDMEIHK : public ::System::Object
{
public:
	::System::Single HCANEKDAEGM; // 0x10
	::System::Single KLKJBIICMOB; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFJFNDMEIHK__CTOR_OFFSET))(this);
	}
};
