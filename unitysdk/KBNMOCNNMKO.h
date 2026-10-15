#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KBNMOCNNMKO;
namespace RPG::Client { class EvolveBuildCard; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KBNMOCNNMKO_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xB323660)
#define KBNMOCNNMKO_CTOR_OFFSET UNITYSDK_OFFSET(0xB323720)
#define KBNMOCNNMKO_GET_CARDSDICT_OFFSET UNITYSDK_OFFSET(0xB323C50)
#define KBNMOCNNMKO_GET_CARDS_OFFSET UNITYSDK_OFFSET(0xB323C60)
#define KBNMOCNNMKO_NDEPJAHOEOL_OFFSET UNITYSDK_OFFSET(0xB3237A0)
#define KBNMOCNNMKO_SET_CARDS_OFFSET UNITYSDK_OFFSET(0xB323C70)

inline static constexpr unsigned int KBNMOCNNMKO_TypeDefinitionIndex = 63793;

	class KBNMOCNNMKO : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildCard*>* _Cards_k__BackingField; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::EvolveBuildCard*>* _CardsDict_k__BackingField; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBNMOCNNMKO_CTOR_OFFSET))(this);
		}

		static ::KBNMOCNNMKO* BPLPBPMEODA()
		{
			return ((::KBNMOCNNMKO*(*)())((::PBYTE)hIl2Cpp + KBNMOCNNMKO_BPLPBPMEODA_OFFSET))();
		}

		::System::Void NDEPJAHOEOL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBNMOCNNMKO_NDEPJAHOEOL_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::EvolveBuildCard*>* get_CardsDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::EvolveBuildCard*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KBNMOCNNMKO_GET_CARDSDICT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildCard*>* get_Cards()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildCard*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KBNMOCNNMKO_GET_CARDS_OFFSET))(this);
		}

		::System::Void set_Cards(::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildCard*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildCard*>*))((::PBYTE)hIl2Cpp + KBNMOCNNMKO_SET_CARDS_OFFSET))(this, a1);
		}

	};
