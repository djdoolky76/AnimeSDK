#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GOPHGIHIDPP.h"
#include "unitysdk/RPG/GameCore/StuffStats.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class LuaUIController; }
namespace RPG::Client { class MuseumAreaData; }
namespace RPG::Client { class MuseumStaffData; }
namespace System { class Action; }
namespace System { class Object; }

#define RPG_CLIENT_MUSEUMUTILS_CONVERTSTATTYPETOSTUFFSTATS_OFFSET UNITYSDK_OFFSET(0xD8FFCC0)
#define RPG_CLIENT_MUSEUMUTILS_CONVERTSTUFFSTATSTOSTATTYPE_OFFSET UNITYSDK_OFFSET(0xD907020)
#define RPG_CLIENT_MUSEUMUTILS_GETAREAFULLSTATNUM_OFFSET UNITYSDK_OFFSET(0xD8F63F0)
#define RPG_CLIENT_MUSEUMUTILS_GETSTAFFSTATVALUE_OFFSET UNITYSDK_OFFSET(0xD907070)
#define RPG_CLIENT_MUSEUMUTILS_SHOWMUSEUMATLASPAGE_OFFSET UNITYSDK_OFFSET(0xD907500)
#define RPG_CLIENT_MUSEUMUTILS_SHOWMUSEUMENTRANCEPAGE_OFFSET UNITYSDK_OFFSET(0xD907130)
#define RPG_CLIENT_MUSEUMUTILS_SHOWMUSEUMMARKETPAGE_OFFSET UNITYSDK_OFFSET(0xD907660)

namespace RPG::Client
{
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

		static ::System::Void ShowMuseumEntrancePage(::System::Action* a1, ::Il2CppArray<::System::Object*>* a2)
		{
			return ((::System::Void(*)(::System::Action*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMUTILS_SHOWMUSEUMENTRANCEPAGE_OFFSET))(a1, a2);
		}

		static ::System::Void ShowMuseumAtlasPage(::System::Action* a1)
		{
			return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMUTILS_SHOWMUSEUMATLASPAGE_OFFSET))(a1);
		}

		static ::System::Void ShowMuseumMarketPage(::System::Action* a1)
		{
			return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMUTILS_SHOWMUSEUMMARKETPAGE_OFFSET))(a1);
		}

		static ::System::Int32 GetAreaFullStatNum(::RPG::Client::MuseumAreaData* a1, ::System::Boolean a2)
		{
			return ((::System::Int32(*)(::RPG::Client::MuseumAreaData*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMUTILS_GETAREAFULLSTATNUM_OFFSET))(a1, a2);
		}

	};
}
