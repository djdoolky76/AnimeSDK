#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class A50409938D727BCC;
class A82FC7D8F5F547A0;
class AA87643AD0E191F4;
class AkCommonOutputSettings;
class AkCommonUserSettings_SpatialAudioSettings;
class EA5C3622417B8E60;
class F59FE867DBA6BF77;
class F6581AD44E8CBCA2;
class F963926B710ECDE0;
namespace System { class String; }

#define AKCOMMONUSERSETTINGS_COPYTO_1_OFFSET UNITYSDK_OFFSET(0x1EB8060)
#define AKCOMMONUSERSETTINGS_COPYTO_2_OFFSET UNITYSDK_OFFSET(0x28F9600)
#define AKCOMMONUSERSETTINGS_COPYTO_3_OFFSET UNITYSDK_OFFSET(0x28F92B0)
#define AKCOMMONUSERSETTINGS_COPYTO_4_OFFSET UNITYSDK_OFFSET(0x28F9730)
#define AKCOMMONUSERSETTINGS_COPYTO_5_OFFSET UNITYSDK_OFFSET(0x1EB8060)
#define AKCOMMONUSERSETTINGS_COPYTO_6_OFFSET UNITYSDK_OFFSET(0x28F97E0)
#define AKCOMMONUSERSETTINGS_COPYTO_OFFSET UNITYSDK_OFFSET(0x1EB8060)
#define AKCOMMONUSERSETTINGS_GETPLUGINPATH_OFFSET UNITYSDK_OFFSET(0x28F9D80)
#define AKCOMMONUSERSETTINGS_SETSAMPLERATE_OFFSET UNITYSDK_OFFSET(0x28F9F70)
#define AKCOMMONUSERSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x28FA010)

inline static constexpr unsigned int AkCommonUserSettings_TypeDefinitionIndex = 19724;

class AkCommonUserSettings : public ::System::Object
{
public:
	::System::String* m_BasePath; // 0x10
	::System::String* m_StartupLanguage; // 0x18
	::System::Boolean m_EngineLogging; // 0x20
	::System::Byte _padding0[0x3];
	::System::Single m_DefaultScalingFactor; // 0x24
	::System::UInt32 m_MaximumNumberOfPositioningPaths; // 0x28
	::System::UInt32 m_CommandQueueSize; // 0x2C
	::System::UInt32 m_SamplesPerFrame; // 0x30
	::System::Byte _padding1[0x4];
	::AkCommonOutputSettings* m_MainOutputSettings; // 0x38
	::System::Boolean m_usePck; // 0x40
	::System::Byte _padding2[0x3];
	::System::Single m_StreamingLookAheadRatio; // 0x44
	::System::UInt32 m_SampleRate; // 0x48
	::System::UInt16 m_NumberOfRefillsInVoice; // 0x4C
	::System::Byte _padding3[0x2];
	::AkCommonUserSettings_SpatialAudioSettings* m_SpatialAudioSettings; // 0x50

	::System::Void SetSampleRate(::F963926B710ECDE0* B657584D50B81BBF)
	{
		return ((::System::Void(*)(::PVOID, ::F963926B710ECDE0*))((::PBYTE)hIl2Cpp + AKCOMMONUSERSETTINGS_SETSAMPLERATE_OFFSET))(this, B657584D50B81BBF);
	}

	static ::System::String* GetPluginPath()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + AKCOMMONUSERSETTINGS_GETPLUGINPATH_OFFSET))();
	}

	::System::Void CopyTo(::AA87643AD0E191F4* B657584D50B81BBF)
	{
		return ((::System::Void(*)(::PVOID, ::AA87643AD0E191F4*))((::PBYTE)hIl2Cpp + AKCOMMONUSERSETTINGS_COPYTO_OFFSET))(this, B657584D50B81BBF);
	}

	::System::Void CopyTo_1(::EA5C3622417B8E60* B657584D50B81BBF)
	{
		return ((::System::Void(*)(::PVOID, ::EA5C3622417B8E60*))((::PBYTE)hIl2Cpp + AKCOMMONUSERSETTINGS_COPYTO_1_OFFSET))(this, B657584D50B81BBF);
	}

	::System::Void CopyTo_2(::F963926B710ECDE0* B657584D50B81BBF)
	{
		return ((::System::Void(*)(::PVOID, ::F963926B710ECDE0*))((::PBYTE)hIl2Cpp + AKCOMMONUSERSETTINGS_COPYTO_2_OFFSET))(this, B657584D50B81BBF);
	}

	::System::Void CopyTo_3(::F59FE867DBA6BF77* B657584D50B81BBF)
	{
		return ((::System::Void(*)(::PVOID, ::F59FE867DBA6BF77*))((::PBYTE)hIl2Cpp + AKCOMMONUSERSETTINGS_COPYTO_3_OFFSET))(this, B657584D50B81BBF);
	}

	::System::Void CopyTo_4(::F6581AD44E8CBCA2* B657584D50B81BBF)
	{
		return ((::System::Void(*)(::PVOID, ::F6581AD44E8CBCA2*))((::PBYTE)hIl2Cpp + AKCOMMONUSERSETTINGS_COPYTO_4_OFFSET))(this, B657584D50B81BBF);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKCOMMONUSERSETTINGS__CTOR_OFFSET))(this);
	}

	::System::Void CopyTo_5(::A50409938D727BCC* B657584D50B81BBF)
	{
		return ((::System::Void(*)(::PVOID, ::A50409938D727BCC*))((::PBYTE)hIl2Cpp + AKCOMMONUSERSETTINGS_COPYTO_5_OFFSET))(this, B657584D50B81BBF);
	}

	::System::Void CopyTo_6(::A82FC7D8F5F547A0* B657584D50B81BBF)
	{
		return ((::System::Void(*)(::PVOID, ::A82FC7D8F5F547A0*))((::PBYTE)hIl2Cpp + AKCOMMONUSERSETTINGS_COPYTO_6_OFFSET))(this, B657584D50B81BBF);
	}
};
