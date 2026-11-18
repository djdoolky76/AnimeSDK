#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/System/ValueType.h"

#define BINGPDLFKIK_HLHDDCGOKBF_FFCPIEDHBDP_OFFSET UNITYSDK_OFFSET(0x78F700)

inline static constexpr unsigned int BINGPDLFKIK_HLHDDCGOKBF_TypeDefinitionIndex = 61270;

struct alignas(4) BINGPDLFKIK_HLHDDCGOKBF
{
	::Foundation::AssetRequestHandle HHDHCLFDPEE; // 0x10
	::Foundation::AssetPath ELABHAFEEDI; // 0x30

	::System::Boolean FFCPIEDHBDP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BINGPDLFKIK_HLHDDCGOKBF_FFCPIEDHBDP_OFFSET))(this);
	}
};
