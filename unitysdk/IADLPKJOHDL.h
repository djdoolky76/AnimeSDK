#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define IADLPKJOHDL__CTOR_OFFSET UNITYSDK_OFFSET(0x15BEE000)

inline static constexpr unsigned int IADLPKJOHDL_TypeDefinitionIndex = 48258;

class IADLPKJOHDL : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IADLPKJOHDL__CTOR_OFFSET))(this);
	}
};
