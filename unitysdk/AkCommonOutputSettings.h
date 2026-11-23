#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkCommonOutputSettings_A8F9861E5416886C.h"
#include "unitysdk/System/Object.h"

class AkCommonOutputSettings_ChannelConfiguration;
class EDD8F123A5FFEC28;
namespace System { class String; }

#define AKCOMMONOUTPUTSETTINGS_COPYTO_OFFSET UNITYSDK_OFFSET(0x28F8360)
#define AKCOMMONOUTPUTSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x28F8840)

inline static constexpr unsigned int AkCommonOutputSettings_TypeDefinitionIndex = 19745;

class AkCommonOutputSettings : public ::System::Object
{
public:
	::System::String* m_AudioDeviceShareset; // 0x10
	::System::UInt32 m_DeviceID; // 0x18
	::AkCommonOutputSettings_A8F9861E5416886C m_PanningRule; // 0x1C
	::AkCommonOutputSettings_ChannelConfiguration* m_ChannelConfig; // 0x20

	::System::Void CopyTo(::EDD8F123A5FFEC28* B657584D50B81BBF)
	{
		return ((::System::Void(*)(::PVOID, ::EDD8F123A5FFEC28*))((::PBYTE)hIl2Cpp + AKCOMMONOUTPUTSETTINGS_COPYTO_OFFSET))(this, B657584D50B81BBF);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKCOMMONOUTPUTSETTINGS__CTOR_OFFSET))(this);
	}
};
