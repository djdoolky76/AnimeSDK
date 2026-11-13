#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NDPGFPEKEJN.h"
#include "unitysdk/RPG/GameCore/ChestMonsterType.h"
#include "unitysdk/RPG/GameCore/MapPregressShowType.h"
#include "unitysdk/System/Object.h"
class CAFPFNAKODN;
class FAHFBEJCKLF;
namespace RPG::Client { class ChestAndRaidInfo; }
namespace RPG::Client { class ChestAndRaidInfoCollector; }
namespace RPG::Client::NavMap { class IMapDataSource; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHESTANDRAIDINFOCOLLECTOR_CREATE_OFFSET UNITYSDK_OFFSET(0x1DFD8AE0)
#define RPG_CLIENT_CHESTANDRAIDINFOCOLLECTOR_CTOR_OFFSET UNITYSDK_OFFSET(0x1DFD8BA0)
#define RPG_CLIENT_CHESTANDRAIDINFOCOLLECTOR_GET_CHESTANDRAIDINFOLIST_OFFSET UNITYSDK_OFFSET(0x1DFD8BF0)
#define RPG_CLIENT_CHESTANDRAIDINFOCOLLECTOR_GET_CHESTINFOLIST_OFFSET UNITYSDK_OFFSET(0x1DFD99A0)
#define RPG_CLIENT_CHESTANDRAIDINFOCOLLECTOR_GET_CHESTMONSTERSTATLIST_OFFSET UNITYSDK_OFFSET(0x1DFD9AE0)
#define RPG_CLIENT_CHESTANDRAIDINFOCOLLECTOR_GET_CONTENTID_OFFSET UNITYSDK_OFFSET(0x1DFD9920)
#define RPG_CLIENT_CHESTANDRAIDINFOCOLLECTOR_GET_FLOORID_OFFSET UNITYSDK_OFFSET(0x1DFD9C20)
#define RPG_CLIENT_CHESTANDRAIDINFOCOLLECTOR_GET_STORYLINEID_OFFSET UNITYSDK_OFFSET(0x1DFD9CA0)
#define RPG_CLIENT_CHESTANDRAIDINFOCOLLECTOR__GETMAPPROGRESSSHOWTYPEBYMONSTERSTAT_OFFSET UNITYSDK_OFFSET(0x1DFD9BC0)
#define RPG_CLIENT_CHESTANDRAIDINFOCOLLECTOR__GETMAPPROGRESSSHOWTYPE_OFFSET UNITYSDK_OFFSET(0x1DFD9A80)

namespace RPG::Client
{
	inline static constexpr unsigned int ChestAndRaidInfoCollector_TypeDefinitionIndex = 68303;

	class ChestAndRaidInfoCollector : public ::System::Object
	{
	public:
		::RPG::Client::NavMap::IMapDataSource* _MapData; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::ChestAndRaidInfo*>* _ChestAndRaidInfoList; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESTANDRAIDINFOCOLLECTOR_CTOR_OFFSET))(this);
		}

		static ::RPG::Client::ChestAndRaidInfoCollector* Create(::RPG::Client::NavMap::IMapDataSource* a1)
		{
			return ((::RPG::Client::ChestAndRaidInfoCollector*(*)(::RPG::Client::NavMap::IMapDataSource*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESTANDRAIDINFOCOLLECTOR_CREATE_OFFSET))(a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ChestAndRaidInfo*>* get_ChestAndRaidInfoList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChestAndRaidInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESTANDRAIDINFOCOLLECTOR_GET_CHESTANDRAIDINFOLIST_OFFSET))(this);
		}

		::RPG::GameCore::MapPregressShowType _GetMapProgressShowType(::NDPGFPEKEJN a1)
		{
			return ((::RPG::GameCore::MapPregressShowType(*)(::PVOID, ::NDPGFPEKEJN))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESTANDRAIDINFOCOLLECTOR__GETMAPPROGRESSSHOWTYPE_OFFSET))(this, a1);
		}

		::RPG::GameCore::MapPregressShowType _GetMapProgressShowTypeByMonsterStat(::RPG::GameCore::ChestMonsterType a1)
		{
			return ((::RPG::GameCore::MapPregressShowType(*)(::PVOID, ::RPG::GameCore::ChestMonsterType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESTANDRAIDINFOCOLLECTOR__GETMAPPROGRESSSHOWTYPEBYMONSTERSTAT_OFFSET))(this, a1);
		}

		::System::UInt32 get_StoryLineID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESTANDRAIDINFOCOLLECTOR_GET_STORYLINEID_OFFSET))(this);
		}

		::System::UInt32 get_ContentID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESTANDRAIDINFOCOLLECTOR_GET_CONTENTID_OFFSET))(this);
		}

		::System::UInt32 get_FloorID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESTANDRAIDINFOCOLLECTOR_GET_FLOORID_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::CAFPFNAKODN*>* get_ChestInfoList()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::CAFPFNAKODN*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESTANDRAIDINFOCOLLECTOR_GET_CHESTINFOLIST_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::FAHFBEJCKLF*>* get_ChestMonsterStatList()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::FAHFBEJCKLF*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESTANDRAIDINFOCOLLECTOR_GET_CHESTMONSTERSTATLIST_OFFSET))(this);
		}

	};
}
