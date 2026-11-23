#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkCommonOutputSettings_ChannelConfiguration_A83F9868BF88E916.h"
#include "unitysdk/AkCommonOutputSettings_ChannelConfiguration_F6923C4E44454B24.h"
#include "unitysdk/System/Object.h"

class B7D268D39024F264;

#define AKCOMMONOUTPUTSETTINGS_CHANNELCONFIGURATION_COPYTO_OFFSET UNITYSDK_OFFSET(0x2911340)
#define AKCOMMONOUTPUTSETTINGS_CHANNELCONFIGURATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int AkCommonOutputSettings_ChannelConfiguration_TypeDefinitionIndex = 19744;

class AkCommonOutputSettings_ChannelConfiguration : public ::System::Object
{
public:
	::AkCommonOutputSettings_ChannelConfiguration_A83F9868BF88E916 m_ChannelConfigType; // 0x10
	::AkCommonOutputSettings_ChannelConfiguration_F6923C4E44454B24 m_ChannelMask; // 0x14
	::System::UInt32 m_NumberOfChannels; // 0x18

	::System::Void CopyTo(::B7D268D39024F264* ACDE58E97E37D13C)
	{
		return ((::System::Void(*)(::PVOID, ::B7D268D39024F264*))((::PBYTE)hIl2Cpp + AKCOMMONOUTPUTSETTINGS_CHANNELCONFIGURATION_COPYTO_OFFSET))(this, ACDE58E97E37D13C);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKCOMMONOUTPUTSETTINGS_CHANNELCONFIGURATION__CTOR_OFFSET))(this);
	}
};
