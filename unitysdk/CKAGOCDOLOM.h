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

#define CKAGOCDOLOM_CTOR_OFFSET UNITYSDK_OFFSET(0x1AD34510)

inline static constexpr unsigned int CKAGOCDOLOM_TypeDefinitionIndex = 55583;

	class CKAGOCDOLOM : public ::System::Object
	{
	public:
		::System::String* GEIGNKLEOBD; // 0x10
		::RPG::GameCore::DamageBehaviorTemplate* CJBFIMFEEJD; // 0x18
		::Il2CppArray<::RPG::GameCore::JsonEnum*>* IHLPNILGJFG; // 0x20
		::RPG::GameCore::FixPoint PIBDDOGGDKL; // 0x28
		::RPG::GameCore::AttackFormulaType LGLBKAAMKDI; // 0x30
		::RPG::GameCore::FinalDamageFormulaType CMLMJOGKDNA; // 0x34
		::RPG::GameCore::DamageIntegerizeCategory FFGPLNGCLCO; // 0x38
		::System::Boolean BPCKKJONPCB; // 0x3C
		::System::Boolean NCHIKFJFALF; // 0x3D
		::System::Boolean JINNNOGPCAL; // 0x3E
		::System::Byte _padding0[0x1];
		::RPG::GameCore::FixPoint HDKGKHCCEGI; // 0x40
		::RPG::GameCore::AttackDamageType PAIECOBACKB; // 0x48
		::RPG::GameCore::AttackFormulaType DHMCBHLGOND; // 0x4C
		::RPG::GameCore::FixPoint DJGPEDODIDF; // 0x50
		::RPG::GameCore::FixPoint DPBEMCKKBLL; // 0x58
		::RPG::GameCore::FixPoint HKDKCLGIEPH; // 0x60
		::RPG::GameCore::AttackTypeMask OPHEKOAMKEH; // 0x68
		::RPG::GameCore::AttackType HIFKEKCELFB; // 0x6C
		::RPG::GameCore::FixPoint HAGHFMMBPEF; // 0x70
		::RPG::GameCore::FixPoint CGNBOOOKGOL; // 0x78
		::System::Boolean LOMIDJIEGPL; // 0x80
		::System::Boolean EJFHNCFMAJM; // 0x81
		::System::Byte _padding1[0x6];
		::RPG::GameCore::FixPoint GOKGJINMAFC; // 0x88
		::RPG::GameCore::FixPoint PBDFPHELAHL; // 0x90
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKAGOCDOLOM_CTOR_OFFSET))(this);
		}

	};
