#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NapStreaming/StreamingLayer.h"
#include "unitysdk/System/Object.h"

#define IMCAMFPFJCC_PCNDJOFDPFG__CTOR_OFFSET UNITYSDK_OFFSET(0x165897A0)

inline static constexpr unsigned int IMCAMFPFJCC_PCNDJOFDPFG_TypeDefinitionIndex = 58632;

class IMCAMFPFJCC_PCNDJOFDPFG : public ::System::Object
{
public:
	::NapStreaming::StreamingLayer KMOHKCADPNA; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMCAMFPFJCC_PCNDJOFDPFG__CTOR_OFFSET))(this);
	}
};
