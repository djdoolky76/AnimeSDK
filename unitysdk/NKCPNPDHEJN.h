#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/TextGenerationSettings.h"

#define NKCPNPDHEJN_EGNGJPMFPOJ_OFFSET UNITYSDK_OFFSET(0x114A5810)

inline static constexpr unsigned int NKCPNPDHEJN_TypeDefinitionIndex = 84880;

class NKCPNPDHEJN : public ::System::Object
{
public:
	static ::System::Void EGNGJPMFPOJ(::UnityEngine::TextGenerationSettings& AMGLHPDJKDI, ::System::Int32 GDBANLBHNJK, ::System::Int32 DNFNKBNBJHM)
	{
		return ((::System::Void(*)(::UnityEngine::TextGenerationSettings&, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NKCPNPDHEJN_EGNGJPMFPOJ_OFFSET))(AMGLHPDJKDI, GDBANLBHNJK, DNFNKBNBJHM);
	}
};
