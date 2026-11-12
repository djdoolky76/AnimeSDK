#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AHKDPCIIELA;
namespace RPG::Client { class GridFightMonsterData; }
namespace RPG::Client { class MonsterData; }
namespace RPG::GameCore { class GridFightMonsterConfigRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTMONSTERDATA_CREATE_1_OFFSET UNITYSDK_OFFSET(0xDC07770)
#define RPG_CLIENT_GRIDFIGHTMONSTERDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xDC06420)
#define RPG_CLIENT_GRIDFIGHTMONSTERDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xDC07760)
#define RPG_CLIENT_GRIDFIGHTMONSTERDATA_GET_BASEDATA_OFFSET UNITYSDK_OFFSET(0xDC079B0)
#define RPG_CLIENT_GRIDFIGHTMONSTERDATA_GET_CAMPID_OFFSET UNITYSDK_OFFSET(0xDC07930)
#define RPG_CLIENT_GRIDFIGHTMONSTERDATA_GET_CAMPLIST_OFFSET UNITYSDK_OFFSET(0xDC07910)
#define RPG_CLIENT_GRIDFIGHTMONSTERDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0xDC07970)
#define RPG_CLIENT_GRIDFIGHTMONSTERDATA_GET_ROUNDICONPATH_OFFSET UNITYSDK_OFFSET(0xDC079D0)
#define RPG_CLIENT_GRIDFIGHTMONSTERDATA_GET_STAGEINVASIONLEVEL_OFFSET UNITYSDK_OFFSET(0xDC07990)
#define RPG_CLIENT_GRIDFIGHTMONSTERDATA_GET_STAR_OFFSET UNITYSDK_OFFSET(0xDC07950)
#define RPG_CLIENT_GRIDFIGHTMONSTERDATA_GET_TIER_OFFSET UNITYSDK_OFFSET(0xDC06BA0)
#define RPG_CLIENT_GRIDFIGHTMONSTERDATA_SET_BASEDATA_OFFSET UNITYSDK_OFFSET(0xDC079C0)
#define RPG_CLIENT_GRIDFIGHTMONSTERDATA_SET_CAMPID_OFFSET UNITYSDK_OFFSET(0xDC07940)
#define RPG_CLIENT_GRIDFIGHTMONSTERDATA_SET_CAMPLIST_OFFSET UNITYSDK_OFFSET(0xDC07920)
#define RPG_CLIENT_GRIDFIGHTMONSTERDATA_SET_ID_OFFSET UNITYSDK_OFFSET(0xDC07980)
#define RPG_CLIENT_GRIDFIGHTMONSTERDATA_SET_STAGEINVASIONLEVEL_OFFSET UNITYSDK_OFFSET(0xDC079A0)
#define RPG_CLIENT_GRIDFIGHTMONSTERDATA_SET_STAR_OFFSET UNITYSDK_OFFSET(0xDC07960)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightMonsterData_TypeDefinitionIndex = 66683;

	class GridFightMonsterData : public ::System::Object
	{
	public:
		::RPG::GameCore::GridFightMonsterConfigRow* _row; // 0x10
		::RPG::Client::MonsterData* _BaseData_k__BackingField; // 0x18
		::System::Collections::Generic::List_1<::System::UInt32>* _CampList_k__BackingField; // 0x20
		::System::UInt32 _CampID_k__BackingField; // 0x28
		::System::UInt32 _Star_k__BackingField; // 0x2C
		::System::UInt32 _ID_k__BackingField; // 0x30
		::System::UInt32 _StageInvasionLevel_k__BackingField; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMONSTERDATA_CTOR_OFFSET))(this);
		}

		static ::RPG::Client::GridFightMonsterData* Create(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4, ::System::UInt32 a5)
		{
			return ((::RPG::Client::GridFightMonsterData*(*)(::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMONSTERDATA_CREATE_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::RPG::Client::GridFightMonsterData* Create_1(::AHKDPCIIELA* a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::GridFightMonsterData*(*)(::AHKDPCIIELA*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMONSTERDATA_CREATE_1_OFFSET))(a1, a2);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_CampList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMONSTERDATA_GET_CAMPLIST_OFFSET))(this);
		}

		::System::Void set_CampList(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMONSTERDATA_SET_CAMPLIST_OFFSET))(this, a1);
		}

		::System::UInt32 get_CampID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMONSTERDATA_GET_CAMPID_OFFSET))(this);
		}

		::System::Void set_CampID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMONSTERDATA_SET_CAMPID_OFFSET))(this, a1);
		}

		::System::UInt32 get_Star()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMONSTERDATA_GET_STAR_OFFSET))(this);
		}

		::System::Void set_Star(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMONSTERDATA_SET_STAR_OFFSET))(this, a1);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMONSTERDATA_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMONSTERDATA_SET_ID_OFFSET))(this, a1);
		}

		::System::UInt32 get_StageInvasionLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMONSTERDATA_GET_STAGEINVASIONLEVEL_OFFSET))(this);
		}

		::System::Void set_StageInvasionLevel(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMONSTERDATA_SET_STAGEINVASIONLEVEL_OFFSET))(this, a1);
		}

		::System::UInt32 get_Tier()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMONSTERDATA_GET_TIER_OFFSET))(this);
		}

		::RPG::Client::MonsterData* get_BaseData()
		{
			return ((::RPG::Client::MonsterData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMONSTERDATA_GET_BASEDATA_OFFSET))(this);
		}

		::System::Void set_BaseData(::RPG::Client::MonsterData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonsterData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMONSTERDATA_SET_BASEDATA_OFFSET))(this, a1);
		}

		::System::String* get_RoundIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMONSTERDATA_GET_ROUNDICONPATH_OFFSET))(this);
		}

	};
}
