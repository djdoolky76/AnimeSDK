#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define LLCBKNBIGPP__CTOR_OFFSET UNITYSDK_OFFSET(0x16C63EC0)

inline static constexpr unsigned int LLCBKNBIGPP_TypeDefinitionIndex = 43509;

class LLCBKNBIGPP : public ::System::Object
{
public:
	::System::Single EGEGIMGMJHN; // 0x10
	::System::Single IFJFPPLEHCF; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLCBKNBIGPP__CTOR_OFFSET))(this);
	}
};
