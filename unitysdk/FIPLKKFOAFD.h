#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"
namespace Proto { class AntiAddictScNotify; }
namespace System { class Object; }

#define FIPLKKFOAFD_BHPIGAGPJDP_OFFSET UNITYSDK_OFFSET(0x1980EE10)
#define FIPLKKFOAFD_CGKNJOINNGD_OFFSET UNITYSDK_OFFSET(0x1980EF90)
#define FIPLKKFOAFD_CTOR_OFFSET UNITYSDK_OFFSET(0x1980F370)
#define FIPLKKFOAFD_HLNOJHFNEPH_OFFSET UNITYSDK_OFFSET(0x1980F320)
#define FIPLKKFOAFD_INIT_OFFSET UNITYSDK_OFFSET(0x1980EB10)
#define FIPLKKFOAFD__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x1980EC80)
#define FIPLKKFOAFD__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x1980EB60)

inline static constexpr unsigned int FIPLKKFOAFD_TypeDefinitionIndex = 63823;

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
