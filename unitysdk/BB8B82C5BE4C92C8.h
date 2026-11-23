#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ABEBA93AD61764EF.h"

#define BB8B82C5BE4C92C8_FC3208D7B8C7EE04_OFFSET UNITYSDK_OFFSET(0x28E1430)
#define BB8B82C5BE4C92C8__CTOR_OFFSET UNITYSDK_OFFSET(0x28E14E0)

inline static constexpr unsigned int BB8B82C5BE4C92C8_TypeDefinitionIndex = 16400;

class BB8B82C5BE4C92C8 : public ::ABEBA93AD61764EF
{
public:
	::System::Single EA5670744BAB0989; // 0x18
	::System::Single B705CD8228979C30; // 0x1C

	::System::Boolean FC3208D7B8C7EE04(::BB8B82C5BE4C92C8* BEEE7A5A60941632)
	{
		return ((::System::Boolean(*)(::PVOID, ::BB8B82C5BE4C92C8*))((::PBYTE)hIl2Cpp + BB8B82C5BE4C92C8_FC3208D7B8C7EE04_OFFSET))(this, BEEE7A5A60941632);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BB8B82C5BE4C92C8__CTOR_OFFSET))(this);
	}
};
