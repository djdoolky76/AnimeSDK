#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PlanetFesEventDataBase.h"
class OJHHACMHFKA;
namespace RPG::Client { class PlanetFesMiniGame; }

#define RPG_CLIENT_PLANETFESGAMEEVENTDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1D1C6E50)
#define RPG_CLIENT_PLANETFESGAMEEVENTDATA_GET_ACTIVEGAMEDATA_OFFSET UNITYSDK_OFFSET(0x1D1C7240)
#define RPG_CLIENT_PLANETFESGAMEEVENTDATA_GET_GAMETYPE_OFFSET UNITYSDK_OFFSET(0x1D1C7220)
#define RPG_CLIENT_PLANETFESGAMEEVENTDATA_ISINPROGRESS_OFFSET UNITYSDK_OFFSET(0x1D1C71C0)
#define RPG_CLIENT_PLANETFESGAMEEVENTDATA_SET_GAMETYPE_OFFSET UNITYSDK_OFFSET(0x1D1C7230)
#define RPG_CLIENT_PLANETFESGAMEEVENTDATA__CLEARDETAIL_OFFSET UNITYSDK_OFFSET(0x1D1C7170)
#define RPG_CLIENT_PLANETFESGAMEEVENTDATA__SYNCDETAIL_OFFSET UNITYSDK_OFFSET(0x1D1C6E80)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesGameEventData_TypeDefinitionIndex = 68494;

	class PlanetFesGameEventData : public ::RPG::Client::PlanetFesEventDataBase
	{
	public:
		::System::Boolean IsInGamePlayPage; // 0x68
		::System::Byte _padding0[0x3];
		::System::UInt32 _GameType_k__BackingField; // 0x6C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESGAMEEVENTDATA_CTOR_OFFSET))(this);
		}

		::System::Void _SyncDetail(::OJHHACMHFKA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OJHHACMHFKA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESGAMEEVENTDATA__SYNCDETAIL_OFFSET))(this, a1);
		}

		::System::Void _ClearDetail()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESGAMEEVENTDATA__CLEARDETAIL_OFFSET))(this);
		}

		::System::Boolean IsInProgress()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESGAMEEVENTDATA_ISINPROGRESS_OFFSET))(this);
		}

		::System::UInt32 get_GameType()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESGAMEEVENTDATA_GET_GAMETYPE_OFFSET))(this);
		}

		::System::Void set_GameType(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESGAMEEVENTDATA_SET_GAMETYPE_OFFSET))(this, a1);
		}

		::RPG::Client::PlanetFesMiniGame* get_ActiveGameData()
		{
			return ((::RPG::Client::PlanetFesMiniGame*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESGAMEEVENTDATA_GET_ACTIVEGAMEDATA_OFFSET))(this);
		}

	};
}
