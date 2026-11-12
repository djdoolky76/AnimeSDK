#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AbilityLinearProperty.h"
#include "unitysdk/RPG/GameCore/AbilityLinearPropertyWithOverride.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/HealFormulaType.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class TurnBasedAbilityComponent; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLHNNJKABAO_CTOR_OFFSET UNITYSDK_OFFSET(0xE353A80)

inline static constexpr unsigned int CLHNNJKABAO_TypeDefinitionIndex = 55591;

	class CLHNNJKABAO : public ::System::Object
	{
	public:
		::RPG::GameCore::TurnBasedAbilityComponent* CFOAICLAMHO; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::FixPoint>* IEHDBDLFEGI; // 0x18
		::RPG::GameCore::TurnBasedAbilityComponent* MCLLALGABAB; // 0x20
		::RPG::GameCore::FixPoint KOEONAHJCOA; // 0x28
		::RPG::GameCore::FixPoint HOLDMJDNDDK; // 0x30
		::RPG::GameCore::FixPoint FBIJGGIOLNO; // 0x38
		::RPG::GameCore::FixPoint FMJDPKFGCLP; // 0x40
		::RPG::GameCore::AbilityLinearPropertyWithOverride LDOFJCKEJHB; // 0x48
		::RPG::GameCore::FixPoint PINNPLKBABH; // 0x98
		::RPG::GameCore::FixPoint IBEHAPHPEBB; // 0xA0
		::RPG::GameCore::FixPoint ADMLFGINDGP; // 0xA8
		::RPG::GameCore::FixPoint IFGMPDAOMIK; // 0xB0
		::RPG::GameCore::FixPoint JALMAHOCDNO; // 0xB8
		::RPG::GameCore::FixPoint MIDOEHHGKMN; // 0xC0
		::RPG::GameCore::FixPoint NJKBGEFFIIE; // 0xC8
		::RPG::GameCore::FixPoint DIPCHCFIPDB; // 0xD0
		::RPG::GameCore::FixPoint LDHEEDDOCDP; // 0xD8
		::RPG::GameCore::FixPoint BNNONJNHNJC; // 0xE0
		::RPG::GameCore::FixPoint DFMNAOJMODP; // 0xE8
		::RPG::GameCore::AbilityLinearProperty NMMOOCJILEC; // 0xF0
		::System::Boolean ANNFMNICHCJ; // 0x138
		::System::Boolean IBHCHCFKBEP; // 0x139
		::System::Byte _padding0[0x2];
		::RPG::GameCore::HealFormulaType HMCMMAINFDA; // 0x13C
		::RPG::GameCore::FixPoint FGBPFGEECBB; // 0x140
		::RPG::GameCore::FixPoint OHGNGNMJCEF; // 0x148
		::RPG::GameCore::FixPoint NBEEPDPFAHG; // 0x150
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLHNNJKABAO_CTOR_OFFSET))(this);
		}

	};
