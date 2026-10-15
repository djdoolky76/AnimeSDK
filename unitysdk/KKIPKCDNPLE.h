#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelTeamType.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::LittleGame::ChimeraDuel { class ChimeraDuelChimeraCache; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KKIPKCDNPLE_CTOR_OFFSET UNITYSDK_OFFSET(0xB4CE4D0)
#define KKIPKCDNPLE_DJJJMLNDNHH_OFFSET UNITYSDK_OFFSET(0xB4CD9E0)
#define KKIPKCDNPLE_EOJLNDIPOHK_OFFSET UNITYSDK_OFFSET(0xB4CDEB0)
#define KKIPKCDNPLE_GAMKJOEPBKO_OFFSET UNITYSDK_OFFSET(0xB4CDF10)
#define KKIPKCDNPLE_GET_ALLYCHIMERAS_OFFSET UNITYSDK_OFFSET(0xB4CD9A0)
#define KKIPKCDNPLE_GET_ENEMYCHIMERAS_OFFSET UNITYSDK_OFFSET(0xB4CD9C0)
#define KKIPKCDNPLE_MMFOLOJJFIA_OFFSET UNITYSDK_OFFSET(0xB4CE250)
#define KKIPKCDNPLE_NAGCIEFMPGA_OFFSET UNITYSDK_OFFSET(0xB4CE150)
#define KKIPKCDNPLE_PDMGEKCCJNK_OFFSET UNITYSDK_OFFSET(0xB4CDA40)
#define KKIPKCDNPLE_SET_ALLYCHIMERAS_OFFSET UNITYSDK_OFFSET(0xB4CD9B0)
#define KKIPKCDNPLE_SET_ENEMYCHIMERAS_OFFSET UNITYSDK_OFFSET(0xB4CD9D0)

	class KKIPKCDNPLE : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>* _AllyChimeras_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>* _EnemyChimeras_k__BackingField; // 0x18
		::System::UInt32 MHOGLAHCCED; // 0x20
		::System::UInt32 ODNLKFEADMI; // 0x24
		::System::Boolean PAKNNEFOEON; // 0x28
		::System::Byte _padding0[0x3];
		::System::Int32 IAKDNNCLGAN; // 0x2C
		// static const ::System::Object MMGGPJHNDNF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKIPKCDNPLE_CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>* get_AllyChimeras()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KKIPKCDNPLE_GET_ALLYCHIMERAS_OFFSET))(this);
		}

		::System::Void set_AllyChimeras(::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>*))((::PBYTE)hIl2Cpp + KKIPKCDNPLE_SET_ALLYCHIMERAS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>* get_EnemyChimeras()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KKIPKCDNPLE_GET_ENEMYCHIMERAS_OFFSET))(this);
		}

		::System::Void set_EnemyChimeras(::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>*))((::PBYTE)hIl2Cpp + KKIPKCDNPLE_SET_ENEMYCHIMERAS_OFFSET))(this, a1);
		}

		::System::Void DJJJMLNDNHH(::System::Collections::Generic::IEnumerable_1<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>*))((::PBYTE)hIl2Cpp + KKIPKCDNPLE_DJJJMLNDNHH_OFFSET))(this, a1);
		}

		::System::Void EOJLNDIPOHK(::System::Collections::Generic::IEnumerable_1<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>*))((::PBYTE)hIl2Cpp + KKIPKCDNPLE_EOJLNDIPOHK_OFFSET))(this, a1);
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>* PDMGEKCCJNK(::System::Collections::Generic::IEnumerable_1<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>* a1, ::RPG::GameCore::ChimeraDuelTeamType a2)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>*(*)(::System::Collections::Generic::IEnumerable_1<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>*, ::RPG::GameCore::ChimeraDuelTeamType))((::PBYTE)hIl2Cpp + KKIPKCDNPLE_PDMGEKCCJNK_OFFSET))(a1, a2);
		}

		::System::Int32 GAMKJOEPBKO()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KKIPKCDNPLE_GAMKJOEPBKO_OFFSET))(this);
		}

		::System::String* NAGCIEFMPGA()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KKIPKCDNPLE_NAGCIEFMPGA_OFFSET))(this);
		}

		static ::System::String* MMFOLOJJFIA(::System::UInt32 a1, ::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>* a2)
		{
			return ((::System::String*(*)(::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>*))((::PBYTE)hIl2Cpp + KKIPKCDNPLE_MMFOLOJJFIA_OFFSET))(a1, a2);
		}

	};
