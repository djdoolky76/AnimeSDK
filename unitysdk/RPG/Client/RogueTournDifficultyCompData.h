#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueTournMode.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class RogueTournDifficultyCompData; }
namespace RPG::Client { template <typename T1, typename T2> class RogueInstanceCacheManager_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define RPG_CLIENT_ROGUETOURNDIFFICULTYCOMPDATA_CCTOR_OFFSET UNITYSDK_OFFSET(0xEA4D5D0)
#define RPG_CLIENT_ROGUETOURNDIFFICULTYCOMPDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xEA4CDA0)
#define RPG_CLIENT_ROGUETOURNDIFFICULTYCOMPDATA_GETALLDATABYTOURN_OFFSET UNITYSDK_OFFSET(0xEA4CE60)
#define RPG_CLIENT_ROGUETOURNDIFFICULTYCOMPDATA_GETDATA_OFFSET UNITYSDK_OFFSET(0xEA4CDB0)
#define RPG_CLIENT_ROGUETOURNDIFFICULTYCOMPDATA_GET_DIFFICULTYCOMPID_OFFSET UNITYSDK_OFFSET(0xEA4D440)
#define RPG_CLIENT_ROGUETOURNDIFFICULTYCOMPDATA_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0xEA4D5B0)
#define RPG_CLIENT_ROGUETOURNDIFFICULTYCOMPDATA_SET_DIFFICULTYCOMPID_OFFSET UNITYSDK_OFFSET(0xEA4D5A0)
#define RPG_CLIENT_ROGUETOURNDIFFICULTYCOMPDATA_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0xEA4D5C0)
#define RPG_CLIENT_ROGUETOURNDIFFICULTYCOMPDATA__CREATEDATA_OFFSET UNITYSDK_OFFSET(0xEA4D2E0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournDifficultyCompData_TypeDefinitionIndex = 69526;

	class RogueTournDifficultyCompData : public ::System::Object
	{
	public:
		::System::UInt32 _DifficultyCompID_k__BackingField; // 0x10
		::System::UInt32 _Level_k__BackingField; // 0x14
		static ::RPG::Client::RogueInstanceCacheManager_2<::System::UInt32, ::RPG::Client::RogueTournDifficultyCompData*>** StaticGet__CacheManager()
		{
			return (::RPG::Client::RogueInstanceCacheManager_2<::System::UInt32, ::RPG::Client::RogueTournDifficultyCompData*>**)UnitySDK::FromName("RPG.Client", "RogueTournDifficultyCompData")->GetStaticField(0x717A0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNDIFFICULTYCOMPDATA_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNDIFFICULTYCOMPDATA_CCTOR_OFFSET))();
		}

		static ::RPG::Client::RogueTournDifficultyCompData* GetData(::System::UInt32 a1)
		{
			return ((::RPG::Client::RogueTournDifficultyCompData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNDIFFICULTYCOMPDATA_GETDATA_OFFSET))(a1);
		}

		static ::System::Collections::Generic::IEnumerable_1<::RPG::Client::RogueTournDifficultyCompData*>* GetAllDataByTourn(::RPG::GameCore::RogueTournMode a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::RogueTournDifficultyCompData*>*(*)(::RPG::GameCore::RogueTournMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNDIFFICULTYCOMPDATA_GETALLDATABYTOURN_OFFSET))(a1);
		}

		static ::RPG::Client::RogueTournDifficultyCompData* _CreateData(::System::UInt32 a1)
		{
			return ((::RPG::Client::RogueTournDifficultyCompData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNDIFFICULTYCOMPDATA__CREATEDATA_OFFSET))(a1);
		}

		::System::UInt32 get_DifficultyCompID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNDIFFICULTYCOMPDATA_GET_DIFFICULTYCOMPID_OFFSET))(this);
		}

		::System::Void set_DifficultyCompID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNDIFFICULTYCOMPDATA_SET_DIFFICULTYCOMPID_OFFSET))(this, a1);
		}

		::System::UInt32 get_Level()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNDIFFICULTYCOMPDATA_GET_LEVEL_OFFSET))(this);
		}

		::System::Void set_Level(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNDIFFICULTYCOMPDATA_SET_LEVEL_OFFSET))(this, a1);
		}

	};
}
