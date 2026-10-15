#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"
namespace Proto { class AntiAddictScNotify; }
namespace System { class Object; }

#define FIPLKKFOAFD_BHPIGAGPJDP_OFFSET UNITYSDK_OFFSET(0x157B1BA0)
#define FIPLKKFOAFD_CGKNJOINNGD_OFFSET UNITYSDK_OFFSET(0x157B1D20)
#define FIPLKKFOAFD_CTOR_OFFSET UNITYSDK_OFFSET(0x157B2100)
#define FIPLKKFOAFD_HLNOJHFNEPH_OFFSET UNITYSDK_OFFSET(0x157B20B0)
#define FIPLKKFOAFD_INIT_OFFSET UNITYSDK_OFFSET(0x157B18A0)
#define FIPLKKFOAFD__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x157B1A10)
#define FIPLKKFOAFD__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x157B18F0)

inline static constexpr unsigned int FIPLKKFOAFD_TypeDefinitionIndex = 62410;

	class FIPLKKFOAFD : public ::RPG::Client::BaseModule
	{
	public:
		::Proto::AntiAddictScNotify* KJBBMBPMAHK; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIPLKKFOAFD_CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIPLKKFOAFD_INIT_OFFSET))(this);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIPLKKFOAFD__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIPLKKFOAFD__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void BHPIGAGPJDP(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + FIPLKKFOAFD_BHPIGAGPJDP_OFFSET))(this, a1, a2);
		}

		::System::Void HLNOJHFNEPH(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FIPLKKFOAFD_HLNOJHFNEPH_OFFSET))(this, a1);
		}

		::System::Void CGKNJOINNGD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIPLKKFOAFD_CGKNJOINNGD_OFFSET))(this);
		}

	};
