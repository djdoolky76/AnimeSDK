#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/AttackFormulaType.h"
#include "unitysdk/RPG/GameCore/AttackType.h"
#include "unitysdk/RPG/GameCore/DamageIntegerizeCategory.h"
#include "unitysdk/RPG/GameCore/FinalDamageFormulaType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class DamageBehaviorTemplate; }
namespace RPG::GameCore { class JsonEnum; }
namespace System { class String; }

#define CKAGOCDOLOM_CTOR_OFFSET UNITYSDK_OFFSET(0xD752C70)

	class CKAGOCDOLOM : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::JsonEnum*>* IHLPNILGJFG; // 0x10
		::System::String* GEIGNKLEOBD; // 0x18
		::RPG::GameCore::DamageBehaviorTemplate* CJBFIMFEEJD; // 0x20
		::RPG::GameCore::FixPoint DJGPEDODIDF; // 0x28
		::RPG::GameCore::FixPoint HKDKCLGIEPH; // 0x30
		::RPG::GameCore::FinalDamageFormulaType CMLMJOGKDNA; // 0x38
		::RPG::GameCore::AttackType HIFKEKCELFB; // 0x3C
		::RPG::GameCore::FixPoint PIBDDOGGDKL; // 0x40
		::RPG::GameCore::DamageIntegerizeCategory FFGPLNGCLCO; // 0x48
		::RPG::GameCore::AttackDamageType PAIECOBACKB; // 0x4C
		::System::Boolean EJFHNCFMAJM; // 0x50
		::System::Boolean LOMIDJIEGPL; // 0x51
		::System::Boolean BPCKKJONPCB; // 0x52
		::System::Boolean JINNNOGPCAL; // 0x53
		::System::Boolean NCHIKFJFALF; // 0x54
		::System::Byte _padding0[0x3];
		::RPG::GameCore::FixPoint CGNBOOOKGOL; // 0x58
		::RPG::GameCore::FixPoint HAGHFMMBPEF; // 0x60
		::RPG::GameCore::FixPoint PBDFPHELAHL; // 0x68
		::RPG::GameCore::FixPoint DPBEMCKKBLL; // 0x70
		::RPG::GameCore::FixPoint HDKGKHCCEGI; // 0x78
		::RPG::GameCore::FixPoint GOKGJINMAFC; // 0x80
		::RPG::GameCore::AttackFormulaType DHMCBHLGOND; // 0x88
		::RPG::GameCore::AttackFormulaType LGLBKAAMKDI; // 0x8C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKAGOCDOLOM_CTOR_OFFSET))(this);
		}

	};
