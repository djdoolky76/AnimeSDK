#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AbilityLinearProperty.h"
#include "unitysdk/RPG/GameCore/AbilityLinearPropertyWithOverride.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/HealFormulaType.h"
#include "unitysdk/System/Object.h"
class BGMKDGACBNI;

#define ENLBMCKHJOG_CTOR_OFFSET UNITYSDK_OFFSET(0x164C29A0)

inline static constexpr unsigned int ENLBMCKHJOG_TypeDefinitionIndex = 55014;

	class ENLBMCKHJOG : public ::System::Object
	{
	public:
		::BGMKDGACBNI* MCLLALGABAB; // 0x10
		::BGMKDGACBNI* CFOAICLAMHO; // 0x18
		::RPG::GameCore::FixPoint FMJDPKFGCLP; // 0x20
		::RPG::GameCore::FixPoint FBIJGGIOLNO; // 0x28
		::RPG::GameCore::FixPoint OHGNGNMJCEF; // 0x30
		::RPG::GameCore::FixPoint PINNPLKBABH; // 0x38
		::RPG::GameCore::FixPoint ADMLFGINDGP; // 0x40
		::RPG::GameCore::FixPoint JALMAHOCDNO; // 0x48
		::RPG::GameCore::FixPoint FGBPFGEECBB; // 0x50
		::RPG::GameCore::AbilityLinearProperty NMMOOCJILEC; // 0x58
		::RPG::GameCore::FixPoint NLJKCNHAMDP; // 0xA0
		::RPG::GameCore::FixPoint HOLDMJDNDDK; // 0xA8
		::RPG::GameCore::FixPoint IBEHAPHPEBB; // 0xB0
		::System::Boolean IBHCHCFKBEP; // 0xB8
		::System::Byte _padding0[0x3];
		::RPG::GameCore::HealFormulaType HMCMMAINFDA; // 0xBC
		::RPG::GameCore::FixPoint NBEEPDPFAHG; // 0xC0
		::RPG::GameCore::FixPoint DIPCHCFIPDB; // 0xC8
		::RPG::GameCore::FixPoint NJKBGEFFIIE; // 0xD0
		::RPG::GameCore::FixPoint BNNONJNHNJC; // 0xD8
		::RPG::GameCore::FixPoint MIDOEHHGKMN; // 0xE0
		::RPG::GameCore::AbilityLinearPropertyWithOverride LDOFJCKEJHB; // 0xE8
		::RPG::GameCore::FixPoint IFGMPDAOMIK; // 0x138
		::RPG::GameCore::FixPoint KOEONAHJCOA; // 0x140
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENLBMCKHJOG_CTOR_OFFSET))(this);
		}

	};
