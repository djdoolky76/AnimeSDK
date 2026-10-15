#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceClass.h"
#include "unitysdk/RPG/Client/FateRin/Battle/FateRinBattleHudInputMode.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

#define PKBMFGOFMIA_IDOGNCKEJOK_OFFSET UNITYSDK_OFFSET(0xC2A4770)
#define PKBMFGOFMIA_JPKNMGAMPDI_OFFSET UNITYSDK_OFFSET(0xC2A4920)
#define PKBMFGOFMIA_LFLABJGDCBE_OFFSET UNITYSDK_OFFSET(0xC2A47D0)
#define PKBMFGOFMIA_OHNHFLKMONK_OFFSET UNITYSDK_OFFSET(0xC2A46E0)
#define PKBMFGOFMIA_PCPEHHEHLPH_OFFSET UNITYSDK_OFFSET(0xC2A48C0)

inline static constexpr unsigned int PKBMFGOFMIA_TypeDefinitionIndex = 80930;

	class PKBMFGOFMIA : public ::System::Object
	{
	public:
		static ::System::Nullable_1<::RPG::Client::FateRin::Battle::FateRinBattleHudInputMode>* StaticGet_LIFJGCHKADB()
		{
			return (::System::Nullable_1<::RPG::Client::FateRin::Battle::FateRinBattleHudInputMode>*)UnitySDK::FromName("", "PKBMFGOFMIA")->GetStaticField(0x15BD0);
		}

		static ::RPG::Client::FateRin::Battle::FateRinBattleHudInputMode OHNHFLKMONK()
		{
			return ((::RPG::Client::FateRin::Battle::FateRinBattleHudInputMode(*)())((::PBYTE)hIl2Cpp + PKBMFGOFMIA_OHNHFLKMONK_OFFSET))();
		}

		static ::RPG::Client::FateRin::Battle::FateRinBattleHudInputMode LFLABJGDCBE()
		{
			return ((::RPG::Client::FateRin::Battle::FateRinBattleHudInputMode(*)())((::PBYTE)hIl2Cpp + PKBMFGOFMIA_LFLABJGDCBE_OFFSET))();
		}

		static ::RPG::Client::FateRin::Battle::FateRinBattleHudInputMode PCPEHHEHLPH(::InControl::InputDeviceClass a1)
		{
			return ((::RPG::Client::FateRin::Battle::FateRinBattleHudInputMode(*)(::InControl::InputDeviceClass))((::PBYTE)hIl2Cpp + PKBMFGOFMIA_PCPEHHEHLPH_OFFSET))(a1);
		}

		static ::RPG::Client::FateRin::Battle::FateRinBattleHudInputMode JPKNMGAMPDI(::InControl::InputDeviceClass a1)
		{
			return ((::RPG::Client::FateRin::Battle::FateRinBattleHudInputMode(*)(::InControl::InputDeviceClass))((::PBYTE)hIl2Cpp + PKBMFGOFMIA_JPKNMGAMPDI_OFFSET))(a1);
		}

		static ::RPG::Client::FateRin::Battle::FateRinBattleHudInputMode IDOGNCKEJOK()
		{
			return ((::RPG::Client::FateRin::Battle::FateRinBattleHudInputMode(*)())((::PBYTE)hIl2Cpp + PKBMFGOFMIA_IDOGNCKEJOK_OFFSET))();
		}

	};
