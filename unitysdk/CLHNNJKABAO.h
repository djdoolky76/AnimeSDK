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

#define CLHNNJKABAO_CTOR_OFFSET UNITYSDK_OFFSET(0x1B17A8E0)

inline static constexpr unsigned int CLHNNJKABAO_TypeDefinitionIndex = 55591;

	class CLHNNJKABAO : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::FixPoint>* IEHDBDLFEGI; // 0x10
		::RPG::GameCore::TurnBasedAbilityComponent* MCLLALGABAB; // 0x18
		::RPG::GameCore::TurnBasedAbilityComponent* CFOAICLAMHO; // 0x20
		::RPG::GameCore::FixPoint FGBPFGEECBB; // 0x28
		::RPG::GameCore::FixPoint DIPCHCFIPDB; // 0x30
		::RPG::GameCore::FixPoint IBEHAPHPEBB; // 0x38
		::RPG::GameCore::FixPoint FMJDPKFGCLP; // 0x40
		::RPG::GameCore::FixPoint LDHEEDDOCDP; // 0x48
		::RPG::GameCore::FixPoint PINNPLKBABH; // 0x50
		::RPG::GameCore::FixPoint DFMNAOJMODP; // 0x58
		::RPG::GameCore::FixPoint JALMAHOCDNO; // 0x60
		::RPG::GameCore::AbilityLinearProperty NMMOOCJILEC; // 0x68
		::RPG::GameCore::FixPoint OHGNGNMJCEF; // 0xB0
		::RPG::GameCore::AbilityLinearPropertyWithOverride LDOFJCKEJHB; // 0xB8
		::RPG::GameCore::FixPoint ADMLFGINDGP; // 0x108
		::RPG::GameCore::FixPoint BNNONJNHNJC; // 0x110
		::RPG::GameCore::FixPoint MIDOEHHGKMN; // 0x118
		::RPG::GameCore::HealFormulaType HMCMMAINFDA; // 0x120
		::System::Boolean ANNFMNICHCJ; // 0x124
		::System::Boolean IBHCHCFKBEP; // 0x125
		::System::Byte _padding0[0x2];
		::RPG::GameCore::FixPoint IFGMPDAOMIK; // 0x128
		::RPG::GameCore::FixPoint KOEONAHJCOA; // 0x130
		::RPG::GameCore::FixPoint HOLDMJDNDDK; // 0x138
		::RPG::GameCore::FixPoint NBEEPDPFAHG; // 0x140
		::RPG::GameCore::FixPoint NJKBGEFFIIE; // 0x148
		::RPG::GameCore::FixPoint FBIJGGIOLNO; // 0x150
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLHNNJKABAO_CTOR_OFFSET))(this);
		}

	};
