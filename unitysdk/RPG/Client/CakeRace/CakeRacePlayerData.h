#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JNEODFOHENL;
namespace RPG::Client { class CakeRaceFieldData; }
namespace RPG::Client::CakeRace { class CakeRacePlayerData; }

#define RPG_CLIENT_CAKERACE_CAKERACEPLAYERDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x1D2E22B0)
#define RPG_CLIENT_CAKERACE_CAKERACEPLAYERDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1D2E22F0)
#define RPG_CLIENT_CAKERACE_CAKERACEPLAYERDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1D2E2300)
#define RPG_CLIENT_CAKERACE_CAKERACEPLAYERDATA_GETCOINCOUNT_OFFSET UNITYSDK_OFFSET(0x1D2E23B0)
#define RPG_CLIENT_CAKERACE_CAKERACEPLAYERDATA_GET_ISNEEDTUTORIAL_OFFSET UNITYSDK_OFFSET(0x1D2E2290)
#define RPG_CLIENT_CAKERACE_CAKERACEPLAYERDATA_ISCOINENOUGH_OFFSET UNITYSDK_OFFSET(0x1D2E2640)
#define RPG_CLIENT_CAKERACE_CAKERACEPLAYERDATA_SET_ISNEEDTUTORIAL_OFFSET UNITYSDK_OFFSET(0x1D2E22A0)
#define RPG_CLIENT_CAKERACE_CAKERACEPLAYERDATA_SYNC_OFFSET UNITYSDK_OFFSET(0x1D2E2340)

namespace RPG::Client::CakeRace
{
	inline static constexpr unsigned int CakeRacePlayerData_TypeDefinitionIndex = 78802;

	class CakeRacePlayerData : public ::System::Object
	{
	public:
		::System::Boolean _IsNeedTutorial_k__BackingField; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEPLAYERDATA_CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsNeedTutorial()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEPLAYERDATA_GET_ISNEEDTUTORIAL_OFFSET))(this);
		}

		::System::Void set_IsNeedTutorial(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEPLAYERDATA_SET_ISNEEDTUTORIAL_OFFSET))(this, a1);
		}

		static ::RPG::Client::CakeRace::CakeRacePlayerData* Create()
		{
			return ((::RPG::Client::CakeRace::CakeRacePlayerData*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEPLAYERDATA_CREATE_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEPLAYERDATA_DISPOSE_OFFSET))(this);
		}

		::System::Void Sync(::JNEODFOHENL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JNEODFOHENL*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEPLAYERDATA_SYNC_OFFSET))(this, a1);
		}

		::System::UInt32 GetCoinCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEPLAYERDATA_GETCOINCOUNT_OFFSET))(this);
		}

		::System::Boolean IsCoinEnough(::RPG::Client::CakeRaceFieldData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::CakeRaceFieldData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEPLAYERDATA_ISCOINENOUGH_OFFSET))(this, a1);
		}

	};
}
