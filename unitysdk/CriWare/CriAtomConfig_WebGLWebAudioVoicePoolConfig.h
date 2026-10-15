#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CRIWARE_CRIATOMCONFIG_WEBGLWEBAUDIOVOICEPOOLCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x166CD9B0)

namespace CriWare
{
	class CriAtomConfig_WebGLWebAudioVoicePoolConfig : public ::System::Object
	{
	public:
		::System::Int32 voices; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMCONFIG_WEBGLWEBAUDIOVOICEPOOLCONFIG_CTOR_OFFSET))(this);
		}

	};
}
