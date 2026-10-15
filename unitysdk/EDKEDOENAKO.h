#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ExpeditionBattleFlowStateType.h"
#include "unitysdk/System/Object.h"
class GNFKIEAGDHL;

#define EDKEDOENAKO_AEICPHANMMG_OFFSET UNITYSDK_OFFSET(0x13325640)
#define EDKEDOENAKO_BKGEFAKDHDF_OFFSET UNITYSDK_OFFSET(0x133256B0)
#define EDKEDOENAKO_CTOR_OFFSET UNITYSDK_OFFSET(0x13325770)
#define EDKEDOENAKO_GET_LEVELINDEX_OFFSET UNITYSDK_OFFSET(0x133255B0)
#define EDKEDOENAKO_GET_MAPID_OFFSET UNITYSDK_OFFSET(0x13325580)
#define EDKEDOENAKO_GET_ROUTEENDDATA_OFFSET UNITYSDK_OFFSET(0x133255C0)
#define EDKEDOENAKO_GET_ROUTEID_OFFSET UNITYSDK_OFFSET(0x13325590)
#define EDKEDOENAKO_GET_STATETYPE_OFFSET UNITYSDK_OFFSET(0x133255A0)
#define EDKEDOENAKO_GET_TEAMMEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x133255D0)
#define EDKEDOENAKO_JIOPBMMHALJ_OFFSET UNITYSDK_OFFSET(0x13325720)
#define EDKEDOENAKO_PHDAFFAJDBE_OFFSET UNITYSDK_OFFSET(0x133255E0)

inline static constexpr unsigned int EDKEDOENAKO_TypeDefinitionIndex = 63885;

	class EDKEDOENAKO : public ::System::Object
	{
	public:
		::GNFKIEAGDHL* _RouteEndData_k__BackingField; // 0x10
		::System::UInt32 _LevelIndex_k__BackingField; // 0x18
		::System::UInt32 _RouteID_k__BackingField; // 0x1C
		::System::UInt32 _MapID_k__BackingField; // 0x20
		::System::UInt32 _TeamMemberCount_k__BackingField; // 0x24
		::RPG::GameCore::ExpeditionBattleFlowStateType _StateType_k__BackingField; // 0x28
		::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::GameCore::ExpeditionBattleFlowStateType a3, ::System::UInt32 a4, ::GNFKIEAGDHL* a5, ::System::UInt32 a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::RPG::GameCore::ExpeditionBattleFlowStateType, ::System::UInt32, ::GNFKIEAGDHL*, ::System::UInt32))((::PBYTE)hIl2Cpp + EDKEDOENAKO_CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::UInt32 get_MapID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EDKEDOENAKO_GET_MAPID_OFFSET))(this);
		}

		::System::UInt32 get_RouteID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EDKEDOENAKO_GET_ROUTEID_OFFSET))(this);
		}

		::RPG::GameCore::ExpeditionBattleFlowStateType get_StateType()
		{
			return ((::RPG::GameCore::ExpeditionBattleFlowStateType(*)(::PVOID))((::PBYTE)hIl2Cpp + EDKEDOENAKO_GET_STATETYPE_OFFSET))(this);
		}

		::System::UInt32 get_LevelIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EDKEDOENAKO_GET_LEVELINDEX_OFFSET))(this);
		}

		::GNFKIEAGDHL* get_RouteEndData()
		{
			return ((::GNFKIEAGDHL*(*)(::PVOID))((::PBYTE)hIl2Cpp + EDKEDOENAKO_GET_ROUTEENDDATA_OFFSET))(this);
		}

		::System::UInt32 get_TeamMemberCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EDKEDOENAKO_GET_TEAMMEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean PHDAFFAJDBE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EDKEDOENAKO_PHDAFFAJDBE_OFFSET))(this);
		}

		::System::Boolean AEICPHANMMG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EDKEDOENAKO_AEICPHANMMG_OFFSET))(this);
		}

		::System::Boolean BKGEFAKDHDF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EDKEDOENAKO_BKGEFAKDHDF_OFFSET))(this);
		}

		::System::UInt32 JIOPBMMHALJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EDKEDOENAKO_JIOPBMMHALJ_OFFSET))(this);
		}

	};
