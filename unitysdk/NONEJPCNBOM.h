#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BNLHGENFEHG;
class FDPALAEIHPB;
class PGBLBOJBDGG;
namespace RPG::Client::LittleGame { class ElfRestaurantGameEntity; }
namespace RPG::Client::LittleGame::ElfRestaurant { class ElfRestaurantAIService_DelayBehavior; }
namespace RPG::GameCore { class ElfBehaviorStateContentItem; }
namespace RPG::GameCore { class RestaurantSpecialBubbleRow; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NONEJPCNBOM_AIKGGKNEEDL_OFFSET UNITYSDK_OFFSET(0xBCF60A0)
#define NONEJPCNBOM_CPPLFMNMABP_OFFSET UNITYSDK_OFFSET(0xBCF5EA0)
#define NONEJPCNBOM_CTOR_OFFSET UNITYSDK_OFFSET(0xBCF5230)
#define NONEJPCNBOM_DGHKMJNDPHP_OFFSET UNITYSDK_OFFSET(0xBCF62D0)
#define NONEJPCNBOM_ECGMMLGGNGE_OFFSET UNITYSDK_OFFSET(0xBCF6AE0)
#define NONEJPCNBOM_EGMCGDHNIBP_OFFSET UNITYSDK_OFFSET(0xBCF67D0)
#define NONEJPCNBOM_EIGJJBAJHJI_OFFSET UNITYSDK_OFFSET(0xBCF6EB0)
#define NONEJPCNBOM_EXECUTE_OFFSET UNITYSDK_OFFSET(0xBCF53C0)
#define NONEJPCNBOM_LIIEOICANAA_OFFSET UNITYSDK_OFFSET(0xBCF6570)

inline static constexpr unsigned int NONEJPCNBOM_TypeDefinitionIndex = 77267;

	class NONEJPCNBOM : public ::System::Object
	{
	public:
		::BNLHGENFEHG* PDENFEFCAGN; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* OHJPBOFPALI; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* PCIIGJEPNHP; // 0x20
		::PGBLBOJBDGG* EEFMDEHLLFI; // 0x28
		::System::Void _ctor(::FDPALAEIHPB* a1, ::BNLHGENFEHG* a2)
		{
			return ((::System::Void(*)(::PVOID, ::FDPALAEIHPB*, ::BNLHGENFEHG*))((::PBYTE)hIl2Cpp + NONEJPCNBOM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NONEJPCNBOM_EXECUTE_OFFSET))(this);
		}

		::System::Void CPPLFMNMABP(::RPG::Client::LittleGame::ElfRestaurant::ElfRestaurantAIService_DelayBehavior* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurant::ElfRestaurantAIService_DelayBehavior*))((::PBYTE)hIl2Cpp + NONEJPCNBOM_CPPLFMNMABP_OFFSET))(this, a1);
		}

		::System::Void LIIEOICANAA(::RPG::Client::LittleGame::ElfRestaurant::ElfRestaurantAIService_DelayBehavior* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurant::ElfRestaurantAIService_DelayBehavior*))((::PBYTE)hIl2Cpp + NONEJPCNBOM_LIIEOICANAA_OFFSET))(this, a1);
		}

		::System::Void EGMCGDHNIBP(::RPG::Client::LittleGame::ElfRestaurant::ElfRestaurantAIService_DelayBehavior* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurant::ElfRestaurantAIService_DelayBehavior*))((::PBYTE)hIl2Cpp + NONEJPCNBOM_EGMCGDHNIBP_OFFSET))(this, a1);
		}

		::System::Void ECGMMLGGNGE(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1, ::RPG::GameCore::ElfBehaviorStateContentItem* a2, ::System::Collections::Generic::List_1<::RPG::GameCore::RestaurantSpecialBubbleRow*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*, ::RPG::GameCore::ElfBehaviorStateContentItem*, ::System::Collections::Generic::List_1<::RPG::GameCore::RestaurantSpecialBubbleRow*>*))((::PBYTE)hIl2Cpp + NONEJPCNBOM_ECGMMLGGNGE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void AIKGGKNEEDL(::RPG::Client::LittleGame::ElfRestaurant::ElfRestaurantAIService_DelayBehavior* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurant::ElfRestaurantAIService_DelayBehavior*))((::PBYTE)hIl2Cpp + NONEJPCNBOM_AIKGGKNEEDL_OFFSET))(this, a1);
		}

		::System::Void DGHKMJNDPHP(::RPG::Client::LittleGame::ElfRestaurant::ElfRestaurantAIService_DelayBehavior* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurant::ElfRestaurantAIService_DelayBehavior*))((::PBYTE)hIl2Cpp + NONEJPCNBOM_DGHKMJNDPHP_OFFSET))(this, a1);
		}

		::System::Boolean EIGJJBAJHJI(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + NONEJPCNBOM_EIGJJBAJHJI_OFFSET))(this, a1, a2, a3);
		}

	};
