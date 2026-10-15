#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateRinCardPileType.h"
#include "unitysdk/System/Object.h"
class BJHMBGLPOLB;
class OOCCBMLAELL;

#define FDKFCICELMI_CTOR_OFFSET UNITYSDK_OFFSET(0x156DDE00)

inline static constexpr unsigned int FDKFCICELMI_TypeDefinitionIndex = 80587;

	class FDKFCICELMI : public ::System::Object
	{
	public:
		::OOCCBMLAELL* ELIMDKMMGBO; // 0x10
		::BJHMBGLPOLB* KDFKDNLNDHN; // 0x18
		::RPG::GameCore::FateRinCardPileType CHPHAMGMKBO; // 0x20
		::RPG::GameCore::FateRinCardPileType CCFDOHBOHMG; // 0x22
		::System::Void _ctor(::OOCCBMLAELL* a1, ::BJHMBGLPOLB* a2, ::RPG::GameCore::FateRinCardPileType a3, ::RPG::GameCore::FateRinCardPileType a4)
		{
			return ((::System::Void(*)(::PVOID, ::OOCCBMLAELL*, ::BJHMBGLPOLB*, ::RPG::GameCore::FateRinCardPileType, ::RPG::GameCore::FateRinCardPileType))((::PBYTE)hIl2Cpp + FDKFCICELMI_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

	};
