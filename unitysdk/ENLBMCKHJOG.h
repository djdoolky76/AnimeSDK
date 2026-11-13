#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AbilityLinearProperty.h"
#include "unitysdk/RPG/GameCore/AbilityLinearPropertyWithOverride.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/HealFormulaType.h"
#include "unitysdk/System/Object.h"
class BGMKDGACBNI;

#define ENLBMCKHJOG_CTOR_OFFSET UNITYSDK_OFFSET(0x188114A0)

inline static constexpr unsigned int ENLBMCKHJOG_TypeDefinitionIndex = 55014;

	class ENLBMCKHJOG : public ::System::Object
	{
	public:
		::BGMKDGACBNI* CFOAICLAMHO; // 0x10
		::BGMKDGACBNI* MCLLALGABAB; // 0x18
		::RPG::GameCore::FixPoint FMJDPKFGCLP; // 0x20
		::RPG::GameCore::FixPoint JALMAHOCDNO; // 0x28
		::RPG::GameCore::AbilityLinearProperty NMMOOCJILEC; // 0x30
		::RPG::GameCore::FixPoint NLJKCNHAMDP; // 0x78
		::RPG::GameCore::FixPoint IBEHAPHPEBB; // 0x80
		::RPG::GameCore::FixPoint HOLDMJDNDDK; // 0x88
		::RPG::GameCore::FixPoint IFGMPDAOMIK; // 0x90
		::RPG::GameCore::HealFormulaType HMCMMAINFDA; // 0x98
		::System::Boolean IBHCHCFKBEP; // 0x9C
		::System::Byte _padding0[0x3];
		::RPG::GameCore::FixPoint FGBPFGEECBB; // 0xA0
		::RPG::GameCore::FixPoint OHGNGNMJCEF; // 0xA8
		::RPG::GameCore::FixPoint KOEONAHJCOA; // 0xB0
		::RPG::GameCore::AbilityLinearPropertyWithOverride LDOFJCKEJHB; // 0xB8
		::RPG::GameCore::FixPoint ADMLFGINDGP; // 0x108
		::RPG::GameCore::FixPoint DIPCHCFIPDB; // 0x110
		::RPG::GameCore::FixPoint PINNPLKBABH; // 0x118
		::RPG::GameCore::FixPoint FBIJGGIOLNO; // 0x120
		::RPG::GameCore::FixPoint NJKBGEFFIIE; // 0x128
		::RPG::GameCore::FixPoint MIDOEHHGKMN; // 0x130
		::RPG::GameCore::FixPoint BNNONJNHNJC; // 0x138
		::RPG::GameCore::FixPoint NBEEPDPFAHG; // 0x140
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENLBMCKHJOG_CTOR_OFFSET))(this);
		}

	};
