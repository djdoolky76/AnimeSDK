#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::Client::FateRin::Battle { class IFateRinBattleHudHandCardViewModel; }

#define JMCEHJCEHEB_BGPLHPNDJGM_OFFSET UNITYSDK_OFFSET(0x3E59160)
#define JMCEHJCEHEB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1A0A6A30)

inline static constexpr unsigned int JMCEHJCEHEB_TypeDefinitionIndex = 83743;

	struct alignas(8) JMCEHJCEHEB
	{
		::RPG::Client::FateRin::Battle::IFateRinBattleHudHandCardViewModel* NBBACHCJOCL; // 0x10
		static ::JMCEHJCEHEB* StaticGet_GPKBJPNFGKI()
		{
			return (::JMCEHJCEHEB*)UnitySDK::FromName("", "JMCEHJCEHEB")->GetStaticField(0x1F480);
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
