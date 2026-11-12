#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightEquipItemConfig; }
namespace RPG::Client { class GridFightRole; }
namespace RPG::Client { class GridFightSeasonDivision; }
namespace RPG::Client { class GridFightSeasonTrait; }
namespace RPG::Client { class ScheduleData; }
namespace RPG::GameCore { class GridFightSeasonModuleConfigRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTSEASON_CTOR_OFFSET UNITYSDK_OFFSET(0xDC65E60)
#define RPG_CLIENT_GRIDFIGHTSEASON_GETEQUIPBYTRAIT_OFFSET UNITYSDK_OFFSET(0xDC673D0)
#define RPG_CLIENT_GRIDFIGHTSEASON_GETROLESBYTRAIT_OFFSET UNITYSDK_OFFSET(0xDC66D60)
#define RPG_CLIENT_GRIDFIGHTSEASON_GET_ACTIVITYMODULEID_OFFSET UNITYSDK_OFFSET(0xDC67920)
#define RPG_CLIENT_GRIDFIGHTSEASON_GET_CUROFFERINGID_OFFSET UNITYSDK_OFFSET(0xDC67500)
#define RPG_CLIENT_GRIDFIGHTSEASON_GET_ENDTIMESTAMP_OFFSET UNITYSDK_OFFSET(0xDC67610)
#define RPG_CLIENT_GRIDFIGHTSEASON_GET_FURTHESTTUTORIALSTAGEID_OFFSET UNITYSDK_OFFSET(0xDC674E0)
#define RPG_CLIENT_GRIDFIGHTSEASON_GET_SEASONDIVISION_OFFSET UNITYSDK_OFFSET(0xDC674A0)
#define RPG_CLIENT_GRIDFIGHTSEASON_GET_SEASONPORTALLIST_OFFSET UNITYSDK_OFFSET(0xDC674C0)
#define RPG_CLIENT_GRIDFIGHTSEASON_GET_SEASONTRAIT_OFFSET UNITYSDK_OFFSET(0xDC67480)
#define RPG_CLIENT_GRIDFIGHTSEASON_GET_SEASONUID_OFFSET UNITYSDK_OFFSET(0xDC51CC0)
#define RPG_CLIENT_GRIDFIGHTSEASON_GET_TIMELIMITREWARDCONFIGID_OFFSET UNITYSDK_OFFSET(0xDC67800)
#define RPG_CLIENT_GRIDFIGHTSEASON_GET__META_OFFSET UNITYSDK_OFFSET(0xDC675A0)
#define RPG_CLIENT_GRIDFIGHTSEASON_GET__SCHEDULEDATA_OFFSET UNITYSDK_OFFSET(0xDC676A0)
#define RPG_CLIENT_GRIDFIGHTSEASON_SET_FURTHESTTUTORIALSTAGEID_OFFSET UNITYSDK_OFFSET(0xDC674F0)
#define RPG_CLIENT_GRIDFIGHTSEASON_SET_SEASONDIVISION_OFFSET UNITYSDK_OFFSET(0xDC674B0)
#define RPG_CLIENT_GRIDFIGHTSEASON_SET_SEASONPORTALLIST_OFFSET UNITYSDK_OFFSET(0xDC674D0)
#define RPG_CLIENT_GRIDFIGHTSEASON_SET_SEASONTRAIT_OFFSET UNITYSDK_OFFSET(0xDC67490)
#define RPG_CLIENT_GRIDFIGHTSEASON__GETFURTHESTTUTORIALSTAGEID_OFFSET UNITYSDK_OFFSET(0xDC66BD0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightSeason_TypeDefinitionIndex = 66905;

	class GridFightSeason : public ::System::Object
	{
	public:
		::RPG::Client::GridFightSeasonTrait* _SeasonTrait_k__BackingField; // 0x10
		::RPG::Client::GridFightSeasonDivision* _SeasonDivision_k__BackingField; // 0x18
		::System::Collections::Generic::List_1<::System::UInt32>* _SeasonPortalList_k__BackingField; // 0x20
		::System::Int32 _FurthestTutorialStageId_k__BackingField; // 0x28
		::System::UInt32 _SeasonID; // 0x2C
		::System::UInt32 _SubSeasonID; // 0x30
		::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASON_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightRole*>* GetRolesByTrait(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightRole*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASON_GETROLESBYTRAIT_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightEquipItemConfig* GetEquipByTrait(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightEquipItemConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASON_GETEQUIPBYTRAIT_OFFSET))(this, a1);
		}

		::System::Int32 _GetFurthestTutorialStageId(::System::UInt32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASON__GETFURTHESTTUTORIALSTAGEID_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightSeasonTrait* get_SeasonTrait()
		{
			return ((::RPG::Client::GridFightSeasonTrait*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASON_GET_SEASONTRAIT_OFFSET))(this);
		}

		::System::Void set_SeasonTrait(::RPG::Client::GridFightSeasonTrait* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightSeasonTrait*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASON_SET_SEASONTRAIT_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightSeasonDivision* get_SeasonDivision()
		{
			return ((::RPG::Client::GridFightSeasonDivision*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASON_GET_SEASONDIVISION_OFFSET))(this);
		}

		::System::Void set_SeasonDivision(::RPG::Client::GridFightSeasonDivision* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightSeasonDivision*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASON_SET_SEASONDIVISION_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_SeasonPortalList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASON_GET_SEASONPORTALLIST_OFFSET))(this);
		}

		::System::Void set_SeasonPortalList(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASON_SET_SEASONPORTALLIST_OFFSET))(this, a1);
		}

		::System::Int32 get_FurthestTutorialStageId()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASON_GET_FURTHESTTUTORIALSTAGEID_OFFSET))(this);
		}

		::System::Void set_FurthestTutorialStageId(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASON_SET_FURTHESTTUTORIALSTAGEID_OFFSET))(this, a1);
		}

		::System::UInt32 get_CurOfferingID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASON_GET_CUROFFERINGID_OFFSET))(this);
		}

		::System::Int64 get_EndTimeStamp()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASON_GET_ENDTIMESTAMP_OFFSET))(this);
		}

		::System::UInt32 get_TimeLimitRewardConfigID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASON_GET_TIMELIMITREWARDCONFIGID_OFFSET))(this);
		}

		::System::UInt32 get_ActivityModuleID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASON_GET_ACTIVITYMODULEID_OFFSET))(this);
		}

		::System::UInt32 get_SeasonUID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASON_GET_SEASONUID_OFFSET))(this);
		}

		::RPG::GameCore::GridFightSeasonModuleConfigRow* get__Meta()
		{
			return ((::RPG::GameCore::GridFightSeasonModuleConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASON_GET__META_OFFSET))(this);
		}

		::RPG::Client::ScheduleData* get__ScheduleData()
		{
			return ((::RPG::Client::ScheduleData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASON_GET__SCHEDULEDATA_OFFSET))(this);
		}

	};
}
