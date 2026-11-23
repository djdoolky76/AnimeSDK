#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BD3A9F619D176EFE.h"

class AB642D1382756991;
namespace System { class String; }

#define F81C1C46F699528A__CTOR_OFFSET UNITYSDK_OFFSET(0x1678540)

inline static constexpr unsigned int F81C1C46F699528A_TypeDefinitionIndex = 2126;

class F81C1C46F699528A : public ::BD3A9F619D176EFE
{
public:
	::AB642D1382756991* B3BAC4DE50BEAB9C; // 0x18
	::System::String* AEDF565CE654EE81; // 0x20
	::System::Single B37DF5FE45EC385E; // 0x28
	::System::Single A90845AFE2BFBD99; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F81C1C46F699528A__CTOR_OFFSET))(this);
	}
};
