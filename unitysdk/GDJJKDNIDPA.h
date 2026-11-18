#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CFLFEHNOIAO.h"
#include "unitysdk/System/Object.h"

#define GDJJKDNIDPA__CTOR_OFFSET UNITYSDK_OFFSET(0xBB82CC0)

inline static constexpr unsigned int GDJJKDNIDPA_TypeDefinitionIndex = 66000;

class GDJJKDNIDPA : public ::System::Object
{
public:
	::CFLFEHNOIAO CGBCKMPLNIC; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDJJKDNIDPA__CTOR_OFFSET))(this);
	}
};
