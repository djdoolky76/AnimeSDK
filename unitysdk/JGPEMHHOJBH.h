#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FateRin/BattleAddCardReason.h"
#include "unitysdk/RPG/GameCore/FateRinCardPileType.h"
#include "unitysdk/System/Object.h"
class BJHMBGLPOLB;
class OOCCBMLAELL;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JGPEMHHOJBH_CTOR_OFFSET UNITYSDK_OFFSET(0xB1A1700)

inline static constexpr unsigned int JGPEMHHOJBH_TypeDefinitionIndex = 80538;

	class JGPEMHHOJBH : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::BJHMBGLPOLB*>* PIBKHIILLLF; // 0x10
		::OOCCBMLAELL* ELIMDKMMGBO; // 0x18
		::RPG::Client::FateRin::BattleAddCardReason KDHPKOFLNFM; // 0x20
		::RPG::GameCore::FateRinCardPileType CCFDOHBOHMG; // 0x24
		::RPG::GameCore::FateRinCardPileType CHPHAMGMKBO; // 0x26
		::System::Void _ctor(::OOCCBMLAELL* a1, ::System::Collections::Generic::List_1<::BJHMBGLPOLB*>* a2, ::RPG::GameCore::FateRinCardPileType a3, ::RPG::GameCore::FateRinCardPileType a4, ::RPG::Client::FateRin::BattleAddCardReason a5)
		{
			return ((::System::Void(*)(::PVOID, ::OOCCBMLAELL*, ::System::Collections::Generic::List_1<::BJHMBGLPOLB*>*, ::RPG::GameCore::FateRinCardPileType, ::RPG::GameCore::FateRinCardPileType, ::RPG::Client::FateRin::BattleAddCardReason))((::PBYTE)hIl2Cpp + JGPEMHHOJBH_CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

	};
