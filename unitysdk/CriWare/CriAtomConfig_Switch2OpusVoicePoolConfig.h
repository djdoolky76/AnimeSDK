#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CRIWARE_CRIATOMCONFIG_SWITCH2OPUSVOICEPOOLCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x175119D0)

namespace CriWare
{
	inline static constexpr unsigned int CriAtomConfig_Switch2OpusVoicePoolConfig_TypeDefinitionIndex = 41140;

	class CriAtomConfig_Switch2OpusVoicePoolConfig : public ::System::Object
	{
	public:
		::System::Int32 memoryVoices; // 0x10
		::System::Int32 streamingVoices; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMCONFIG_SWITCH2OPUSVOICEPOOLCONFIG_CTOR_OFFSET))(this);
		}

	};
}
