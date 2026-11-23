#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkCommonAdvancedSettings_FBB5255B29B8EE80.h"
#include "unitysdk/System/Object.h"

class A50409938D727BCC;
class AA87643AD0E191F4;
class F59FE867DBA6BF77;
class F963926B710ECDE0;
namespace System { class String; }

#define AKCOMMONADVANCEDSETTINGS_COPYTO_1_OFFSET UNITYSDK_OFFSET(0x28F7D50)
#define AKCOMMONADVANCEDSETTINGS_COPYTO_2_OFFSET UNITYSDK_OFFSET(0x1EB8060)
#define AKCOMMONADVANCEDSETTINGS_COPYTO_3_OFFSET UNITYSDK_OFFSET(0x1EB8060)
#define AKCOMMONADVANCEDSETTINGS_COPYTO_OFFSET UNITYSDK_OFFSET(0x28F7A90)
#define AKCOMMONADVANCEDSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x28F7F50)

inline static constexpr unsigned int AkCommonAdvancedSettings_TypeDefinitionIndex = 19764;

class AkCommonAdvancedSettings : public ::System::Object
{
public:
	::System::UInt32 m_IOMemorySize; // 0x10
	::System::Single m_TargetAutoStreamBufferLengthMs; // 0x14
	::System::Boolean m_UseStreamCache; // 0x18
	::System::Boolean m_LoadBankAsynchronously; // 0x19
	::System::Byte _padding0[0x2];
	::System::UInt32 m_MaximumPinnedBytesInCache; // 0x1C
	::System::Boolean m_EnableGameSyncPreparation; // 0x20
	::System::Byte _padding1[0x3];
	::System::UInt32 m_ContinuousPlaybackLookAhead; // 0x24
	::System::UInt32 m_MonitorQueuePoolSize; // 0x28
	::System::UInt32 m_MaximumHardwareTimeoutMs; // 0x2C
	::System::Boolean m_DebugOutOfRangeCheckEnabled; // 0x30
	::System::Byte _padding2[0x3];
	::System::Single m_DebugOutOfRangeLimit; // 0x34
	::System::Boolean m_SuspendAudioDuringFocusLoss; // 0x38
	::System::Boolean m_RenderDuringFocusLoss; // 0x39
	::System::Byte _padding3[0x6];
	::System::String* m_SoundBankPersistentDataPath; // 0x40
	::System::UInt32 m_MemoryAllocationSizeLimit; // 0x48
	::System::UInt32 m_MemoryDebugLevel; // 0x4C
	::AkCommonAdvancedSettings_FBB5255B29B8EE80 m_MemorySpanCount; // 0x50

	::System::Void CopyTo(::F59FE867DBA6BF77* B657584D50B81BBF)
	{
		return ((::System::Void(*)(::PVOID, ::F59FE867DBA6BF77*))((::PBYTE)hIl2Cpp + AKCOMMONADVANCEDSETTINGS_COPYTO_OFFSET))(this, B657584D50B81BBF);
	}

	::System::Void CopyTo_1(::A50409938D727BCC* B657584D50B81BBF)
	{
		return ((::System::Void(*)(::PVOID, ::A50409938D727BCC*))((::PBYTE)hIl2Cpp + AKCOMMONADVANCEDSETTINGS_COPYTO_1_OFFSET))(this, B657584D50B81BBF);
	}

	::System::Void CopyTo_2(::AA87643AD0E191F4* B657584D50B81BBF)
	{
		return ((::System::Void(*)(::PVOID, ::AA87643AD0E191F4*))((::PBYTE)hIl2Cpp + AKCOMMONADVANCEDSETTINGS_COPYTO_2_OFFSET))(this, B657584D50B81BBF);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKCOMMONADVANCEDSETTINGS__CTOR_OFFSET))(this);
	}

	::System::Void CopyTo_3(::F963926B710ECDE0* B657584D50B81BBF)
	{
		return ((::System::Void(*)(::PVOID, ::F963926B710ECDE0*))((::PBYTE)hIl2Cpp + AKCOMMONADVANCEDSETTINGS_COPYTO_3_OFFSET))(this, B657584D50B81BBF);
	}
};
