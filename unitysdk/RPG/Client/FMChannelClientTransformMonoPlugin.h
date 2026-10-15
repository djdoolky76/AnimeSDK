#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FMChannelClientTransformMode.h"
namespace System { class String; }

#define RPG_CLIENT_FMCHANNELCLIENTTRANSFORMMONOPLUGIN_CTOR_OFFSET UNITYSDK_OFFSET(0xCE55E60)

namespace RPG::Client
{
	inline static constexpr unsigned int FMChannelClientTransformMonoPlugin_TypeDefinitionIndex = 70287;

	class FMChannelClientTransformMonoPlugin
	{
	public:
		::RPG::Client::FMChannelClientTransformMode Mode; // 0x30
		::System::Byte _padding0[0x4];
		::System::String* Name; // 0x38
		::System::Single Delay; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FMCHANNELCLIENTTRANSFORMMONOPLUGIN_CTOR_OFFSET))(this);
		}

	};
}
