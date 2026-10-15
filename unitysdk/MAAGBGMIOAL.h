#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BPPLDFJGNAP.h"
#include "unitysdk/DPNFLBFDAMB.h"
#include "unitysdk/ELFCADKHIEG.h"
#include "unitysdk/NEJGBHDJFIG.h"
#include "unitysdk/OEEKHELGHKF.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/BlockAutoRebornReason.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/PlayerMuteInputReason.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/PlayerMuteSkillReason.h"
#include "unitysdk/RPG/GameCore/FiveDimGameplayMode.h"
#include "unitysdk/RPG/GameCore/FiveDimPlayerResetMode.h"
#include "unitysdk/RPG/GameCore/FiveDimPlayerResetSweepDirection.h"
#include "unitysdk/UnityEngine/Vector2.h"
class BMAGFPDPEDN;
class GLAKFODMCPH;
class HMEKPIAPOND;
class HPNAKDOGIAD;
class LKDECPLANGK;
namespace RPG { template <typename T1, typename T2> class PoolDictionary_2; }
namespace RPG { template <typename T> class PoolHashSet_1; }
namespace RPG::GameCore { class FiveDimBakedLevelConfig; }
namespace RPG::GameCore { class FiveDimBakedPresetConfig; }
namespace RPG::GameCore { class FiveDimGameConfig; }
namespace RPG::GameCore { class HoyoTagContainer; }
namespace RPG::GameCore { class LittleGameLevelConfig; }
namespace System { class String; }

inline static constexpr unsigned int MAAGBGMIOAL_TypeDefinitionIndex = 43356;

	struct alignas(8) MAAGBGMIOAL
	{
		::RPG::GameCore::FiveDimGameConfig* DPHDFKHIMEC; // 0x10
		::RPG::GameCore::LittleGameLevelConfig* PDKOBKPIBPN; // 0x18
		::System::String* JCBLMHBGPHL; // 0x20
		::RPG::GameCore::FiveDimBakedLevelConfig* KDJGGCDHNIA; // 0x28
		::RPG::GameCore::FiveDimBakedPresetConfig* AAANNFDBOMK; // 0x30
		::GLAKFODMCPH* GFCIMINHAMP; // 0x38
		::LKDECPLANGK* GPKCGOLOJKC; // 0x40
		::System::UInt32 FOAIMPPILHN; // 0x48
		::System::UInt32 MEDGDOLKKCF; // 0x4C
		::System::UInt32 JPGBNMIAIBK; // 0x50
		::ELFCADKHIEG JKHBACLKBNK; // 0x54
		::NEJGBHDJFIG FLFAHKMPGLI; // 0x55
		::System::Byte _padding0[0x2];
		::BPPLDFJGNAP DKGPOBFPNFP; // 0x58
		::RPG::GameCore::HoyoTagContainer* DPNENLKAGFL; // 0x60
		::System::Boolean APFNJLIEMKM; // 0x68
		::System::Byte _padding1[0x3];
		::RPG::GameCore::FiveDimGameplayMode OKHOLBIIGJH; // 0x6C
		::HPNAKDOGIAD* LEKJJALGAEK; // 0x70
		::RPG::PoolDictionary_2<::System::UInt32, ::DPNFLBFDAMB>* AKJDGDAIMII; // 0x78
		::RPG::PoolDictionary_2<::System::Int32, ::HMEKPIAPOND*>* IOACCFHDBMH; // 0x80
		::System::Boolean MKFAKONKILE; // 0x88
		::System::Byte _padding2[0x7];
		::BMAGFPDPEDN* FIHNFDHJGFF; // 0x90
		::RPG::PoolHashSet_1<::System::UInt32>* GJALDMOMJIG; // 0x98
		::OEEKHELGHKF JIAMNDFEIDP; // 0xA0
		::OEEKHELGHKF FFGJKJAAIOC; // 0xB0
		::OEEKHELGHKF BDMAJKCCBIK; // 0xC0
		::OEEKHELGHKF NKEFKONFKNK; // 0xD0
		::OEEKHELGHKF IPGJEGAAAPB; // 0xE0
		::OEEKHELGHKF LNIFFAONOPM; // 0xF0
		::OEEKHELGHKF MNLFCOJAKLG; // 0x100
		::OEEKHELGHKF DABKPBKGNJE; // 0x110
		::OEEKHELGHKF FKPKGNOKPLF; // 0x120
		::UnityEngine::Vector2 BMIGFAAJMEL; // 0x130
		::OEEKHELGHKF MMCPCPKALCB; // 0x138
		::RPG::GameCore::FiveDimPlayerResetMode PPBNLEBBKIA; // 0x148
		::RPG::GameCore::FiveDimPlayerResetSweepDirection DGEECKKDACO; // 0x14C
		::System::Single LFJCFELCEAJ; // 0x150
		::System::Single NJJLCFIBLMK; // 0x154
		::System::UInt32 ACCJKGEKHKP; // 0x158
		::System::Int32 MDPGLEDOIEG; // 0x15C
		::System::Single PGKFGKELKDI; // 0x160
		::System::Boolean DIEFMGHPCKP; // 0x164
		::System::Byte _padding3[0x3];
		::RPG::Client::LittleGame::FiveDim::BlockAutoRebornReason PKEOIFEIGJC; // 0x168
		::System::Byte _padding4[0x4];
		::OEEKHELGHKF HOGODEEOBKI; // 0x170
		::RPG::Client::LittleGame::FiveDim::PlayerMuteInputReason CCKAPMKFNKC; // 0x180
		::RPG::Client::LittleGame::FiveDim::PlayerMuteSkillReason IJAJPGEJJCE; // 0x184
		::System::Boolean MAEGOCFLNJB; // 0x188
	};
