#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/AttackFormulaType.h"
#include "unitysdk/RPG/GameCore/AttackType.h"
#include "unitysdk/RPG/GameCore/FinalDamageFormulaType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class DamageBehaviorTemplate; }
namespace RPG::GameCore { class JsonEnum; }
namespace System { class String; }

#define FBENMEMDHLE_CTOR_OFFSET UNITYSDK_OFFSET(0x165ADBB0)

inline static constexpr unsigned int FBENMEMDHLE_TypeDefinitionIndex = 55012;

	class FBENMEMDHLE : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::JsonEnum*>* IHLPNILGJFG; // 0x10
		::System::String* GEIGNKLEOBD; // 0x18
		::RPG::GameCore::DamageBehaviorTemplate* CJBFIMFEEJD; // 0x20
		::RPG::GameCore::FixPoint GOKGJINMAFC; // 0x28
		::System::Boolean BPCKKJONPCB; // 0x30
		::System::Boolean LOMIDJIEGPL; // 0x31
		::System::Boolean EJFHNCFMAJM; // 0x32
		::System::Byte _padding0[0x1];
		::RPG::GameCore::AttackType HIFKEKCELFB; // 0x34
		::RPG::GameCore::FixPoint PBDFPHELAHL; // 0x38
		::RPG::GameCore::FixPoint PIBDDOGGDKL; // 0x40
		::System::Boolean NCHIKFJFALF; // 0x48
		::System::Boolean JINNNOGPCAL; // 0x49
		::System::Byte _padding1[0x6];
		::RPG::GameCore::FixPoint HDKGKHCCEGI; // 0x50
		::RPG::GameCore::AttackDamageType PAIECOBACKB; // 0x58
		::RPG::GameCore::AttackFormulaType LGLBKAAMKDI; // 0x5C
		::RPG::GameCore::FixPoint HAGHFMMBPEF; // 0x60
		::RPG::GameCore::FixPoint DPBEMCKKBLL; // 0x68
		::RPG::GameCore::FixPoint DJGPEDODIDF; // 0x70
		::RPG::GameCore::FixPoint HKDKCLGIEPH; // 0x78
		::RPG::GameCore::AttackFormulaType DHMCBHLGOND; // 0x80
		::RPG::GameCore::FinalDamageFormulaType CMLMJOGKDNA; // 0x84
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBENMEMDHLE_CTOR_OFFSET))(this);
		}

	};
