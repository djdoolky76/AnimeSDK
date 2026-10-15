#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::Client::CakeRace { class CakeRaceCatRankGameData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CAKERACE_CAKERACECATRANKGAMEDATA_ADDCATPOSITIONDATA_OFFSET UNITYSDK_OFFSET(0xC8F0430)
#define RPG_CLIENT_CAKERACE_CAKERACECATRANKGAMEDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xC8F0270)
#define RPG_CLIENT_CAKERACE_CAKERACECATRANKGAMEDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xC8F0390)
#define RPG_CLIENT_CAKERACE_CAKERACECATRANKGAMEDATA_GET_CATPOSITIONDATAS_OFFSET UNITYSDK_OFFSET(0xC8F0230)
#define RPG_CLIENT_CAKERACE_CAKERACECATRANKGAMEDATA_SORT_OFFSET UNITYSDK_OFFSET(0xC8F0510)

namespace RPG::Client::CakeRace
{
	class CakeRaceCatRankGameData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::ValueTuple>* _CatPositionDatas; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACECATRANKGAMEDATA_CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::ValueTuple>* get_CatPositionDatas()
		{
			return ((::System::Collections::Generic::List_1<::System::ValueTuple>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACECATRANKGAMEDATA_GET_CATPOSITIONDATAS_OFFSET))(this);
		}

		static ::RPG::Client::CakeRace::CakeRaceCatRankGameData* Create()
		{
			return ((::RPG::Client::CakeRace::CakeRaceCatRankGameData*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACECATRANKGAMEDATA_CREATE_OFFSET))();
		}

		::System::Void AddCatPositionData(::System::UInt32 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACECATRANKGAMEDATA_ADDCATPOSITIONDATA_OFFSET))(this, a1, a2);
		}

		::System::Void Sort()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACECATRANKGAMEDATA_SORT_OFFSET))(this);
		}

	};
}
