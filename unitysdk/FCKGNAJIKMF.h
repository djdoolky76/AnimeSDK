#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateRinCardPileType.h"
#include "unitysdk/System/Object.h"
class BJHMBGLPOLB;
class OOCCBMLAELL;

#define FCKGNAJIKMF_CTOR_OFFSET UNITYSDK_OFFSET(0x156CAAE0)

inline static constexpr unsigned int FCKGNAJIKMF_TypeDefinitionIndex = 80537;

	class FCKGNAJIKMF : public ::System::Object
	{
	public:
		::BJHMBGLPOLB* KDFKDNLNDHN; // 0x10
		::OOCCBMLAELL* ELIMDKMMGBO; // 0x18
		::RPG::GameCore::FateRinCardPileType CHPHAMGMKBO; // 0x20
		::RPG::GameCore::FateRinCardPileType CCFDOHBOHMG; // 0x22
		::System::Void _ctor(::OOCCBMLAELL* a1, ::BJHMBGLPOLB* a2, ::RPG::GameCore::FateRinCardPileType a3, ::RPG::GameCore::FateRinCardPileType a4)
		{
			return ((::System::Void(*)(::PVOID, ::OOCCBMLAELL*, ::BJHMBGLPOLB*, ::RPG::GameCore::FateRinCardPileType, ::RPG::GameCore::FateRinCardPileType))((::PBYTE)hIl2Cpp + FCKGNAJIKMF_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

	};
