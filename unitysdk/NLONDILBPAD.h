#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AGEOIGDFCGM;

#define NLONDILBPAD__CTOR_OFFSET UNITYSDK_OFFSET(0x16B87700)

inline static constexpr unsigned int NLONDILBPAD_TypeDefinitionIndex = 50442;

class NLONDILBPAD : public ::System::Object
{
public:
	::AGEOIGDFCGM* AFKOKHGIEMN; // 0x10
	::System::Int32 LKCPJFFAGAN; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLONDILBPAD__CTOR_OFFSET))(this);
	}
};
