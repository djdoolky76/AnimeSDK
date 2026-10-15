#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BodySize.h"
#include "unitysdk/RPG/GameCore/NPCBodySize.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPGTools::Timeline::Story { class AvatarStoryMoveRunData; }
namespace RPGTools::Timeline::Story { class AvatarStoryMoveWalkData; }
namespace RPGTools::Timeline::Story { class BaseStoryMoveRunData; }
namespace RPGTools::Timeline::Story { class BaseStoryMoveWalkData; }
namespace RPGTools::Timeline::Story { class CharacterStoryMoveMap; }
namespace RPGTools::Timeline::Story { class NpcStoryMoveRunData; }
namespace RPGTools::Timeline::Story { class NpcStoryMoveWalkData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JJHLNFOJLKE_CTOR_OFFSET UNITYSDK_OFFSET(0xB2067C0)
#define JJHLNFOJLKE_EGIKNNLEGMK_1_OFFSET UNITYSDK_OFFSET(0xB206370)
#define JJHLNFOJLKE_EGIKNNLEGMK_OFFSET UNITYSDK_OFFSET(0xB206290)
#define JJHLNFOJLKE_FPNANILELJE_OFFSET UNITYSDK_OFFSET(0xB2065B0)
#define JJHLNFOJLKE_GDNLKLHOFFF_1_OFFSET UNITYSDK_OFFSET(0xB206100)
#define JJHLNFOJLKE_GDNLKLHOFFF_OFFSET UNITYSDK_OFFSET(0xB206020)
#define JJHLNFOJLKE_GGCBPBLEEKI_OFFSET UNITYSDK_OFFSET(0xB206660)
#define JJHLNFOJLKE_HKEPJLDBGIG_OFFSET UNITYSDK_OFFSET(0xB205960)
#define JJHLNFOJLKE_NDAHGBBIJJG_OFFSET UNITYSDK_OFFSET(0xB206500)
#define JJHLNFOJLKE_OMKALAHPJAI_OFFSET UNITYSDK_OFFSET(0xB206710)

	class JJHLNFOJLKE : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::NPCBodySize, ::RPGTools::Timeline::Story::NpcStoryMoveRunData*>* DLHFOGGKKFJ; // 0x10
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::BodySize, ::RPGTools::Timeline::Story::AvatarStoryMoveRunData*>* IDBBMHJLPBI; // 0x18
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::BodySize, ::RPGTools::Timeline::Story::AvatarStoryMoveWalkData*>* BCJFDOEAIBI; // 0x20
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::NPCBodySize, ::RPGTools::Timeline::Story::NpcStoryMoveWalkData*>* DNGPKBHFGCN; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJHLNFOJLKE_CTOR_OFFSET))(this);
		}

		::System::Void HKEPJLDBGIG(::RPGTools::Timeline::Story::CharacterStoryMoveMap* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::Story::CharacterStoryMoveMap*))((::PBYTE)hIl2Cpp + JJHLNFOJLKE_HKEPJLDBGIG_OFFSET))(this, a1);
		}

		::RPGTools::Timeline::Story::BaseStoryMoveWalkData* GDNLKLHOFFF(::RPG::GameCore::GameEntity* a1)
		{
			return ((::RPGTools::Timeline::Story::BaseStoryMoveWalkData*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + JJHLNFOJLKE_GDNLKLHOFFF_OFFSET))(this, a1);
		}

		::RPGTools::Timeline::Story::BaseStoryMoveRunData* EGIKNNLEGMK(::RPG::GameCore::GameEntity* a1)
		{
			return ((::RPGTools::Timeline::Story::BaseStoryMoveRunData*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + JJHLNFOJLKE_EGIKNNLEGMK_OFFSET))(this, a1);
		}

		::RPGTools::Timeline::Story::BaseStoryMoveWalkData* GDNLKLHOFFF_1(::RPG::GameCore::BodySize a1, ::RPG::GameCore::NPCBodySize a2)
		{
			return ((::RPGTools::Timeline::Story::BaseStoryMoveWalkData*(*)(::PVOID, ::RPG::GameCore::BodySize, ::RPG::GameCore::NPCBodySize))((::PBYTE)hIl2Cpp + JJHLNFOJLKE_GDNLKLHOFFF_1_OFFSET))(this, a1, a2);
		}

		::RPGTools::Timeline::Story::BaseStoryMoveRunData* EGIKNNLEGMK_1(::RPG::GameCore::BodySize a1, ::RPG::GameCore::NPCBodySize a2)
		{
			return ((::RPGTools::Timeline::Story::BaseStoryMoveRunData*(*)(::PVOID, ::RPG::GameCore::BodySize, ::RPG::GameCore::NPCBodySize))((::PBYTE)hIl2Cpp + JJHLNFOJLKE_EGIKNNLEGMK_1_OFFSET))(this, a1, a2);
		}

		::RPGTools::Timeline::Story::AvatarStoryMoveWalkData* NDAHGBBIJJG(::RPG::GameCore::BodySize a1)
		{
			return ((::RPGTools::Timeline::Story::AvatarStoryMoveWalkData*(*)(::PVOID, ::RPG::GameCore::BodySize))((::PBYTE)hIl2Cpp + JJHLNFOJLKE_NDAHGBBIJJG_OFFSET))(this, a1);
		}

		::RPGTools::Timeline::Story::AvatarStoryMoveRunData* GGCBPBLEEKI(::RPG::GameCore::BodySize a1)
		{
			return ((::RPGTools::Timeline::Story::AvatarStoryMoveRunData*(*)(::PVOID, ::RPG::GameCore::BodySize))((::PBYTE)hIl2Cpp + JJHLNFOJLKE_GGCBPBLEEKI_OFFSET))(this, a1);
		}

		::RPGTools::Timeline::Story::NpcStoryMoveWalkData* FPNANILELJE(::RPG::GameCore::NPCBodySize a1)
		{
			return ((::RPGTools::Timeline::Story::NpcStoryMoveWalkData*(*)(::PVOID, ::RPG::GameCore::NPCBodySize))((::PBYTE)hIl2Cpp + JJHLNFOJLKE_FPNANILELJE_OFFSET))(this, a1);
		}

		::RPGTools::Timeline::Story::NpcStoryMoveRunData* OMKALAHPJAI(::RPG::GameCore::NPCBodySize a1)
		{
			return ((::RPGTools::Timeline::Story::NpcStoryMoveRunData*(*)(::PVOID, ::RPG::GameCore::NPCBodySize))((::PBYTE)hIl2Cpp + JJHLNFOJLKE_OMKALAHPJAI_OFFSET))(this, a1);
		}

	};
