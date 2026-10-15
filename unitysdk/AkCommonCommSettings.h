#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkCommunicationSettings_AkCommSystem.h"
#include "unitysdk/System/Object.h"
class AkCommunicationSettings;
namespace System { class String; }

#define AKCOMMONCOMMSETTINGS_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F5863D0)
#define AKCOMMONCOMMSETTINGS_COPYTO_OFFSET UNITYSDK_OFFSET(0x1F585860)
#define AKCOMMONCOMMSETTINGS_CTOR_OFFSET UNITYSDK_OFFSET(0x1F586390)
#define AKCOMMONCOMMSETTINGS_VALIDATE_OFFSET UNITYSDK_OFFSET(0x1F586350)

inline static constexpr unsigned int AkCommonCommSettings_TypeDefinitionIndex = 44842;

	class AkCommonCommSettings : public ::System::Object
	{
	public:
		::System::UInt32 m_PoolSize; // 0x10
		::System::UInt16 m_DiscoveryBroadcastPort; // 0x14
		::System::UInt16 m_CommandPort; // 0x16
		::System::UInt16 m_NotificationPort; // 0x18
		::System::Boolean m_InitializeSystemComms; // 0x1A
		::System::Byte _padding0[0x5];
		::System::String* m_NetworkName; // 0x20
		::AkCommunicationSettings_AkCommSystem m_commSystem; // 0x28
		static ::System::UInt16* StaticGet_DefaultDiscoveryBroadcastPort()
		{
			return (::System::UInt16*)UnitySDK::FromName("", "AkCommonCommSettings")->GetStaticField(0x2540);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKCOMMONCOMMSETTINGS_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AKCOMMONCOMMSETTINGS_CCTOR_OFFSET))();
		}

		::System::Void CopyTo(::AkCommunicationSettings* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AkCommunicationSettings*))((::PBYTE)hIl2Cpp + AKCOMMONCOMMSETTINGS_COPYTO_OFFSET))(this, a1);
		}

		::System::Void Validate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKCOMMONCOMMSETTINGS_VALIDATE_OFFSET))(this);
		}

	};
