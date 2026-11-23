#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FEDC48EB6D39B681_FA3CFC8218B71BD2.h"
#include "unitysdk/System/Object.h"

class FEDC48EB6D39B681;
namespace System { class String; }

#define AKCOMMONCOMMSETTINGS_COPYTO_OFFSET UNITYSDK_OFFSET(0x28F7FA0)
#define AKCOMMONCOMMSETTINGS__CCTOR_OFFSET UNITYSDK_OFFSET(0x28F82B0)
#define AKCOMMONCOMMSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x28F82F0)

inline static constexpr unsigned int AkCommonCommSettings_TypeDefinitionIndex = 19773;

class AkCommonCommSettings : public ::System::Object
{
public:
	static ::System::UInt16* StaticGet_DefaultDiscoveryBroadcastPort()
	{
		return (::System::UInt16*)Il2CppClass::FromTypeDefinitionIndex(AkCommonCommSettings_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	::System::UInt32 m_PoolSize; // 0x10
	::System::UInt16 m_DiscoveryBroadcastPort; // 0x14
	::System::UInt16 m_CommandPort; // 0x16
	::System::UInt16 m_NotificationPort; // 0x18
	::System::Boolean m_InitializeSystemComms; // 0x1A
	::System::Byte _padding0[0x5];
	::System::String* m_NetworkName; // 0x20
	::FEDC48EB6D39B681_FA3CFC8218B71BD2 m_commSystem; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKCOMMONCOMMSETTINGS__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AKCOMMONCOMMSETTINGS__CCTOR_OFFSET))();
	}

	::System::Void CopyTo(::FEDC48EB6D39B681* B657584D50B81BBF)
	{
		return ((::System::Void(*)(::PVOID, ::FEDC48EB6D39B681*))((::PBYTE)hIl2Cpp + AKCOMMONCOMMSETTINGS_COPYTO_OFFSET))(this, B657584D50B81BBF);
	}
};
