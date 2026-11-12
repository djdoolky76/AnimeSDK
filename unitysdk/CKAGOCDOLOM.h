#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/AttackFormulaType.h"
#include "unitysdk/RPG/GameCore/AttackType.h"
#include "unitysdk/RPG/GameCore/AttackTypeMask.h"
#include "unitysdk/RPG/GameCore/DamageIntegerizeCategory.h"
#include "unitysdk/RPG/GameCore/FinalDamageFormulaType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class DamageBehaviorTemplate; }
namespace RPG::GameCore { class JsonEnum; }
namespace System { class String; }

#define CKAGOCDOLOM_CTOR_OFFSET UNITYSDK_OFFSET(0xE08CAB0)

inline static constexpr unsigned int CKAGOCDOLOM_TypeDefinitionIndex = 55583;

	class CKAGOCDOLOM : public ::System::Object
	{
	public:
		::RPG::GameCore::DamageBehaviorTemplate* CJBFIMFEEJD; // 0x10
		::System::String* GEIGNKLEOBD; // 0x18
		::Il2CppArray<::RPG::GameCore::JsonEnum*>* IHLPNILGJFG; // 0x20
		::RPG::GameCore::FixPoint HKDKCLGIEPH; // 0x28
		::RPG::GameCore::FixPoint PBDFPHELAHL; // 0x30
		::RPG::GameCore::FixPoint PIBDDOGGDKL; // 0x38
		::RPG::GameCore::FixPoint DPBEMCKKBLL; // 0x40
		::System::Boolean EJFHNCFMAJM; // 0x48
		::System::Boolean BPCKKJONPCB; // 0x49
		::System::Boolean LOMIDJIEGPL; // 0x4A
		::System::Boolean JINNNOGPCAL; // 0x4B
		::System::Boolean NCHIKFJFALF; // 0x4C
		::System::Byte _padding0[0x3];
		::RPG::GameCore::FixPoint HAGHFMMBPEF; // 0x50
		::RPG::GameCore::FixPoint GOKGJINMAFC; // 0x58
		::RPG::GameCore::FixPoint DJGPEDODIDF; // 0x60
		::RPG::GameCore::AttackFormulaType DHMCBHLGOND; // 0x68
		::RPG::GameCore::AttackType HIFKEKCELFB; // 0x6C
		::RPG::GameCore::AttackFormulaType LGLBKAAMKDI; // 0x70
		::RPG::GameCore::DamageIntegerizeCategory FFGPLNGCLCO; // 0x74
		::RPG::GameCore::FixPoint HDKGKHCCEGI; // 0x78
		::RPG::GameCore::AttackDamageType PAIECOBACKB; // 0x80
		::System::Byte _padding1[0x4];
		::RPG::GameCore::FixPoint CGNBOOOKGOL; // 0x88
		::RPG::GameCore::AttackTypeMask OPHEKOAMKEH; // 0x90
		::RPG::GameCore::FinalDamageFormulaType CMLMJOGKDNA; // 0x94
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKAGOCDOLOM_CTOR_OFFSET))(this);
		}

	};
