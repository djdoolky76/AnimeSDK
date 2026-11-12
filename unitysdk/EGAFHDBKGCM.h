#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateRinCardPileType.h"
#include "unitysdk/System/Object.h"
class BJHMBGLPOLB;
class OOCCBMLAELL;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EGAFHDBKGCM_CTOR_OFFSET UNITYSDK_OFFSET(0x152D84B0)

inline static constexpr unsigned int EGAFHDBKGCM_TypeDefinitionIndex = 83360;

	class EGAFHDBKGCM : public ::System::Object
	{
	public:
		::OOCCBMLAELL* ELIMDKMMGBO; // 0x10
		::System::Collections::Generic::List_1<::BJHMBGLPOLB*>* PIBKHIILLLF; // 0x18
		::RPG::GameCore::FateRinCardPileType CCFDOHBOHMG; // 0x20
		::RPG::GameCore::FateRinCardPileType CHPHAMGMKBO; // 0x22
		::System::Void _ctor(::OOCCBMLAELL* a1, ::System::Collections::Generic::List_1<::BJHMBGLPOLB*>* a2, ::RPG::GameCore::FateRinCardPileType a3, ::RPG::GameCore::FateRinCardPileType a4)
		{
			return ((::System::Void(*)(::PVOID, ::OOCCBMLAELL*, ::System::Collections::Generic::List_1<::BJHMBGLPOLB*>*, ::RPG::GameCore::FateRinCardPileType, ::RPG::GameCore::FateRinCardPileType))((::PBYTE)hIl2Cpp + EGAFHDBKGCM_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

	};
