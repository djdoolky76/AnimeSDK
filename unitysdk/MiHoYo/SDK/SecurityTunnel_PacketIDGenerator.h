#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }

#define MIHOYO_SDK_SECURITYTUNNEL_PACKETIDGENERATOR_CCTOR_OFFSET UNITYSDK_OFFSET(0xB04D570)
#define MIHOYO_SDK_SECURITYTUNNEL_PACKETIDGENERATOR_CTOR_OFFSET UNITYSDK_OFFSET(0xB0466B0)
#define MIHOYO_SDK_SECURITYTUNNEL_PACKETIDGENERATOR_NEXTID_OFFSET UNITYSDK_OFFSET(0xB043630)

namespace MiHoYo::SDK
{
	class SecurityTunnel_PacketIDGenerator : public ::System::Object
	{
	public:
		::System::Object* locker; // 0x10
		::System::UInt64 current; // 0x18
		static ::System::UInt64* StaticGet_AutomaticNextID()
		{
			return (::System::UInt64*)UnitySDK::FromName("MiHoYo.SDK", "PacketIDGenerator")->GetStaticField(0xAEC0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_PACKETIDGENERATOR_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_PACKETIDGENERATOR_CCTOR_OFFSET))();
		}

		::System::UInt64 NextID()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_PACKETIDGENERATOR_NEXTID_OFFSET))(this);
		}

	};
}
