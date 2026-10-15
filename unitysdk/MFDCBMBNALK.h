#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/RPG/GameCore/BattleTargetConfigType.h"
namespace RPG::GameCore { class BattleInstance; }
namespace RPG::GameCore { class BattleRaidTargetChangeParams; }
namespace RPG::GameCore { class BattleTargetChangeParams; }
namespace RPG::GameCore { class LevelDataComponent; }
namespace System { class Object; }

#define MFDCBMBNALK_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xB8F0600)
#define MFDCBMBNALK_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xB8F07A0)
#define MFDCBMBNALK_CFEJNILLELE_OFFSET UNITYSDK_OFFSET(0xB8F01E0)
#define MFDCBMBNALK_CNJPOJIGKGB_OFFSET UNITYSDK_OFFSET(0xB8EF270)
#define MFDCBMBNALK_CTOR_OFFSET UNITYSDK_OFFSET(0xB8F0910)
#define MFDCBMBNALK_DCEMPCICOPJ_OFFSET UNITYSDK_OFFSET(0xB8EF220)
#define MFDCBMBNALK_DKPBAEKEKIC_OFFSET UNITYSDK_OFFSET(0xB8EFAC0)
#define MFDCBMBNALK_ELJLODGEPHN_OFFSET UNITYSDK_OFFSET(0xB8EF400)
#define MFDCBMBNALK_FDGCKJGJMDD_OFFSET UNITYSDK_OFFSET(0xB8F04B0)
#define MFDCBMBNALK_GOMAJKBDKHH_OFFSET UNITYSDK_OFFSET(0xB8EF460)
#define MFDCBMBNALK_IPPHKKJKAFM_OFFSET UNITYSDK_OFFSET(0xB8EFD90)
#define MFDCBMBNALK_JFEINCILELB_OFFSET UNITYSDK_OFFSET(0xB8EFC50)
#define MFDCBMBNALK_KKBBFAIDFHP_OFFSET UNITYSDK_OFFSET(0xB8F03E0)
#define MFDCBMBNALK_NCMGCAEPEKE_OFFSET UNITYSDK_OFFSET(0xB8EFBD0)
#define MFDCBMBNALK_NIJJPBOIGBI_OFFSET UNITYSDK_OFFSET(0xB8EF0A0)
#define MFDCBMBNALK_OCNMAKONNMG_OFFSET UNITYSDK_OFFSET(0xB8EFA60)
#define MFDCBMBNALK_OJFKOKFENJD_OFFSET UNITYSDK_OFFSET(0xB8F02F0)

	class MFDCBMBNALK : public ::FMPCODLIOLG
	{
	public:
		::RPG::GameCore::BattleInstance* IFKCCHIFMOC; // 0x60
		::RPG::GameCore::LevelDataComponent* OOIDBIDKNOD; // 0x68
		::Il2CppArray<::RPG::GameCore::BattleTargetConfigType>* FFCNFDKPDEI; // 0x70
		::System::Boolean OECIIEEFKOC; // 0x78
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFDCBMBNALK_CTOR_OFFSET))(this);
		}

		::System::Void NIJJPBOIGBI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFDCBMBNALK_NIJJPBOIGBI_OFFSET))(this);
		}

		::System::Void DCEMPCICOPJ(::RPG::GameCore::BattleRaidTargetChangeParams* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleRaidTargetChangeParams*))((::PBYTE)hIl2Cpp + MFDCBMBNALK_DCEMPCICOPJ_OFFSET))(this, a1);
		}

		::System::Void ELJLODGEPHN(::RPG::GameCore::BattleTargetChangeParams* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleTargetChangeParams*))((::PBYTE)hIl2Cpp + MFDCBMBNALK_ELJLODGEPHN_OFFSET))(this, a1);
		}

		::System::Void OCNMAKONNMG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFDCBMBNALK_OCNMAKONNMG_OFFSET))(this);
		}

		::System::Void NCMGCAEPEKE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MFDCBMBNALK_NCMGCAEPEKE_OFFSET))(this, a1);
		}

		::System::Void DKPBAEKEKIC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFDCBMBNALK_DKPBAEKEKIC_OFFSET))(this);
		}

		::System::Boolean JFEINCILELB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MFDCBMBNALK_JFEINCILELB_OFFSET))(this);
		}

		::System::Void CNJPOJIGKGB(::RPG::GameCore::BattleRaidTargetChangeParams* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleRaidTargetChangeParams*))((::PBYTE)hIl2Cpp + MFDCBMBNALK_CNJPOJIGKGB_OFFSET))(this, a1);
		}

		::System::Void GOMAJKBDKHH(::RPG::GameCore::BattleTargetChangeParams* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleTargetChangeParams*))((::PBYTE)hIl2Cpp + MFDCBMBNALK_GOMAJKBDKHH_OFFSET))(this, a1);
		}

		::System::Boolean IPPHKKJKAFM(::RPG::GameCore::BattleTargetConfigType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::BattleTargetConfigType))((::PBYTE)hIl2Cpp + MFDCBMBNALK_IPPHKKJKAFM_OFFSET))(this, a1);
		}

		::System::Void CFEJNILLELE(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MFDCBMBNALK_CFEJNILLELE_OFFSET))(this, a1);
		}

		::System::Void OJFKOKFENJD(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MFDCBMBNALK_OJFKOKFENJD_OFFSET))(this, a1);
		}

		::System::Void KKBBFAIDFHP(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MFDCBMBNALK_KKBBFAIDFHP_OFFSET))(this, a1);
		}

		::System::Void FDGCKJGJMDD(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MFDCBMBNALK_FDGCKJGJMDD_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFDCBMBNALK_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFDCBMBNALK_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};
