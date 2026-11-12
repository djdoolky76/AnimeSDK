#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/RPG/GameCore/BattleTargetConfigType.h"
namespace RPG::GameCore { class BattleInstance; }
namespace RPG::GameCore { class BattleRaidTargetChangeParams; }
namespace RPG::GameCore { class BattleTargetChangeParams; }
namespace RPG::GameCore { class LevelDataComponent; }
namespace System { class Object; }

#define MFDCBMBNALK_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xC1A23D0)
#define MFDCBMBNALK_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xC1A2570)
#define MFDCBMBNALK_CFEJNILLELE_OFFSET UNITYSDK_OFFSET(0xC1A1FB0)
#define MFDCBMBNALK_CNJPOJIGKGB_OFFSET UNITYSDK_OFFSET(0xC1A1050)
#define MFDCBMBNALK_CTOR_OFFSET UNITYSDK_OFFSET(0xC1A26E0)
#define MFDCBMBNALK_DCEMPCICOPJ_OFFSET UNITYSDK_OFFSET(0xC1A1000)
#define MFDCBMBNALK_DKPBAEKEKIC_OFFSET UNITYSDK_OFFSET(0xC1A18A0)
#define MFDCBMBNALK_ELJLODGEPHN_OFFSET UNITYSDK_OFFSET(0xC1A11E0)
#define MFDCBMBNALK_FDGCKJGJMDD_OFFSET UNITYSDK_OFFSET(0xC1A2280)
#define MFDCBMBNALK_GOMAJKBDKHH_OFFSET UNITYSDK_OFFSET(0xC1A1240)
#define MFDCBMBNALK_IPPHKKJKAFM_OFFSET UNITYSDK_OFFSET(0xC1A1B60)
#define MFDCBMBNALK_JFEINCILELB_OFFSET UNITYSDK_OFFSET(0xC1A1A20)
#define MFDCBMBNALK_KKBBFAIDFHP_OFFSET UNITYSDK_OFFSET(0xC1A21B0)
#define MFDCBMBNALK_NCMGCAEPEKE_OFFSET UNITYSDK_OFFSET(0xC1A19A0)
#define MFDCBMBNALK_OCNMAKONNMG_OFFSET UNITYSDK_OFFSET(0xC1A1840)
#define MFDCBMBNALK_OJFKOKFENJD_OFFSET UNITYSDK_OFFSET(0xC1A20C0)
#define MFDCBMBNALK__INITVARONCE_OFFSET UNITYSDK_OFFSET(0xC1A0E80)

inline static constexpr unsigned int MFDCBMBNALK_TypeDefinitionIndex = 74059;

	class MFDCBMBNALK : public ::FMPCODLIOLG
	{
	public:
		::RPG::GameCore::LevelDataComponent* OOIDBIDKNOD; // 0x60
		::Il2CppArray<::RPG::GameCore::BattleTargetConfigType>* FFCNFDKPDEI; // 0x68
		::RPG::GameCore::BattleInstance* IFKCCHIFMOC; // 0x70
		::System::Boolean OECIIEEFKOC; // 0x78
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFDCBMBNALK_CTOR_OFFSET))(this);
		}

		::System::Void _InitVarOnce()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFDCBMBNALK__INITVARONCE_OFFSET))(this);
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
