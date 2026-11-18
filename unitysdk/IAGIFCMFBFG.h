#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/EventArgs.h"

#define IAGIFCMFBFG__CTOR_OFFSET UNITYSDK_OFFSET(0xEA0FBC0)

inline static constexpr unsigned int IAGIFCMFBFG_TypeDefinitionIndex = 49597;

class IAGIFCMFBFG : public ::System::EventArgs
{
public:
	::System::Int32 AKJBJPDIAAA; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAGIFCMFBFG__CTOR_OFFSET))(this);
	}
};
