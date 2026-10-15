#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::Client::FateRin::Battle { class IFateRinBattleHudHandCardViewModel; }

#define JMCEHJCEHEB_BGPLHPNDJGM_OFFSET UNITYSDK_OFFSET(0x11D30)
#define JMCEHJCEHEB_CCTOR_OFFSET UNITYSDK_OFFSET(0xB258140)

inline static constexpr unsigned int JMCEHJCEHEB_TypeDefinitionIndex = 80963;

	struct alignas(8) JMCEHJCEHEB
	{
		::RPG::Client::FateRin::Battle::IFateRinBattleHudHandCardViewModel* NBBACHCJOCL; // 0x10
		static ::JMCEHJCEHEB* StaticGet_GPKBJPNFGKI()
		{
			return (::JMCEHJCEHEB*)UnitySDK::FromName("", "JMCEHJCEHEB")->GetStaticField(0x20000);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JMCEHJCEHEB_CCTOR_OFFSET))();
		}

		::System::Boolean BGPLHPNDJGM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JMCEHJCEHEB_BGPLHPNDJGM_OFFSET))(this);
		}

	};
