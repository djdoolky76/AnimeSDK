#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GOPHGIHIDPP.h"
#include "unitysdk/RPG/GameCore/StuffStats.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class LuaUIController; }
namespace RPG::Client { class MuseumAreaData; }
namespace RPG::Client { class MuseumStaffData; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_MUSEUMUTILS_CONVERTSTATTYPETOSTUFFSTATS_OFFSET UNITYSDK_OFFSET(0xE393240)
#define RPG_CLIENT_MUSEUMUTILS_CONVERTSTUFFSTATSTOSTATTYPE_OFFSET UNITYSDK_OFFSET(0xE39ABA0)
#define RPG_CLIENT_MUSEUMUTILS_GETAREAFULLSTATNUM_OFFSET UNITYSDK_OFFSET(0xE39B340)
#define RPG_CLIENT_MUSEUMUTILS_GETSTAFFSTATVALUE_OFFSET UNITYSDK_OFFSET(0xE39ABF0)
#define RPG_CLIENT_MUSEUMUTILS_SHOWMUSEUMATLASPAGE_OFFSET UNITYSDK_OFFSET(0xE39B080)
#define RPG_CLIENT_MUSEUMUTILS_SHOWMUSEUMENTRANCEPAGE_OFFSET UNITYSDK_OFFSET(0xE39ACB0)
#define RPG_CLIENT_MUSEUMUTILS_SHOWMUSEUMMARKETPAGE_OFFSET UNITYSDK_OFFSET(0xE39B1E0)

namespace RPG::Client
{
	inline static constexpr unsigned int MuseumUtils_TypeDefinitionIndex = 68290;

	class MuseumUtils : public ::System::Object
	{
	public:
		static ::GOPHGIHIDPP ConvertStuffStatsToStatType(::RPG::GameCore::StuffStats a1)
		{
			return ((::GOPHGIHIDPP(*)(::RPG::GameCore::StuffStats))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMUTILS_CONVERTSTUFFSTATSTOSTATTYPE_OFFSET))(a1);
		}

		static ::RPG::GameCore::StuffStats ConvertStatTypeToStuffStats(::GOPHGIHIDPP a1)
		{
			return ((::RPG::GameCore::StuffStats(*)(::GOPHGIHIDPP))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMUTILS_CONVERTSTATTYPETOSTUFFSTATS_OFFSET))(a1);
		}

		static ::System::UInt32 GetStaffStatValue(::RPG::Client::MuseumStaffData* a1, ::RPG::GameCore::StuffStats a2)
		{
			return ((::System::UInt32(*)(::RPG::Client::MuseumStaffData*, ::RPG::GameCore::StuffStats))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMUTILS_GETSTAFFSTATVALUE_OFFSET))(a1, a2);
		}

		static ::System::Void ShowMuseumEntrancePage(::System::Action_1<::RPG::Client::LuaUIController*>* a1, ::Il2CppArray<::System::Object*>* a2)
		{
			return ((::System::Void(*)(::System::Action_1<::RPG::Client::LuaUIController*>*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMUTILS_SHOWMUSEUMENTRANCEPAGE_OFFSET))(a1, a2);
		}

		static ::System::Void ShowMuseumAtlasPage(::System::Action_1<::RPG::Client::LuaUIController*>* a1)
		{
			return ((::System::Void(*)(::System::Action_1<::RPG::Client::LuaUIController*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMUTILS_SHOWMUSEUMATLASPAGE_OFFSET))(a1);
		}

		static ::System::Void ShowMuseumMarketPage(::System::Action_1<::RPG::Client::LuaUIController*>* a1)
		{
			return ((::System::Void(*)(::System::Action_1<::RPG::Client::LuaUIController*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMUTILS_SHOWMUSEUMMARKETPAGE_OFFSET))(a1);
		}

		static ::System::Int32 GetAreaFullStatNum(::RPG::Client::MuseumAreaData* a1, ::System::Boolean a2)
		{
			return ((::System::Int32(*)(::RPG::Client::MuseumAreaData*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMUTILS_GETAREAFULLSTATNUM_OFFSET))(a1, a2);
		}

	};
}
