#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CRIWARE_CRIATOMCONFIG_INGAMEPREVIEWCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x166CD8F0)

namespace CriWare
{
	class CriAtomConfig_InGamePreviewConfig : public ::System::Object
	{
	public:
		::System::Int32 maxPreviewObjects; // 0x10
		::System::Int32 communicationBufferSize; // 0x14
		::System::Int32 playbackPositionUpdateInterval; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMCONFIG_INGAMEPREVIEWCONFIG_CTOR_OFFSET))(this);
		}

	};
}
