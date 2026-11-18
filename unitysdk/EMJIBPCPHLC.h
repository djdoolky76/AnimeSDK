#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GHDMAEDNPAM.h"

#define EMJIBPCPHLC_GPKMPDHNCGL_OFFSET UNITYSDK_OFFSET(0xFE22450)
#define EMJIBPCPHLC__CTOR_OFFSET UNITYSDK_OFFSET(0xFE22640)

inline static constexpr unsigned int EMJIBPCPHLC_TypeDefinitionIndex = 56514;

class EMJIBPCPHLC : public ::GHDMAEDNPAM
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMJIBPCPHLC__CTOR_OFFSET))(this);
	}

	::System::Boolean GPKMPDHNCGL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EMJIBPCPHLC_GPKMPDHNCGL_OFFSET))(this);
	}
};
