#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define BC78A244EC372014__CTOR_OFFSET UNITYSDK_OFFSET(0x240A3B0)

inline static constexpr unsigned int BC78A244EC372014_TypeDefinitionIndex = 11394;

class BC78A244EC372014 : public ::System::Attribute
{
public:
	::System::Int32 B1F3249C58F03ADC; // 0x10

	::System::Void _ctor(::System::Int32 BE9B161B3F3C2937)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BC78A244EC372014__CTOR_OFFSET))(this, BE9B161B3F3C2937);
	}
};
