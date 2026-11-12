#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Conflict_GroupUnitType.h"
#include "unitysdk/RPG/Client/ConflictType.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class MapDef; }
namespace RPG::Client { class MapDistrict; }
namespace RPG::Client { class MapNpc; }
namespace RPG::Client { class MapProp; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelGroupMainMissionIssuePatch; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CONFLICT_CONFLICTGROUPUNIT_ADD_1_OFFSET UNITYSDK_OFFSET(0xE90F6A0)
#define CONFLICT_CONFLICTGROUPUNIT_ADD_2_OFFSET UNITYSDK_OFFSET(0xE9104A0)
#define CONFLICT_CONFLICTGROUPUNIT_ADD_OFFSET UNITYSDK_OFFSET(0xE90E8E0)
#define CONFLICT_CONFLICTGROUPUNIT_CTOR_OFFSET UNITYSDK_OFFSET(0xE906590)
#define CONFLICT_CONFLICTGROUPUNIT_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE913640)
#define CONFLICT_CONFLICTGROUPUNIT_GET_CONFLICTTYPE_OFFSET UNITYSDK_OFFSET(0xE914240)
#define CONFLICT_CONFLICTGROUPUNIT_GET_CONNECTSUBMISSIONIDLIST_OFFSET UNITYSDK_OFFSET(0xE9142A0)
#define CONFLICT_CONFLICTGROUPUNIT_GET_FLOORID_OFFSET UNITYSDK_OFFSET(0xE9141E0)
#define CONFLICT_CONFLICTGROUPUNIT_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0xE914200)
#define CONFLICT_CONFLICTGROUPUNIT_GET_NPCID_OFFSET UNITYSDK_OFFSET(0xE914220)
#define CONFLICT_CONFLICTGROUPUNIT_GET_OWNERMAINMISSIONID_OFFSET UNITYSDK_OFFSET(0xE9141C0)
#define CONFLICT_CONFLICTGROUPUNIT_GET_PATCHMISSION_OFFSET UNITYSDK_OFFSET(0xE914280)
#define CONFLICT_CONFLICTGROUPUNIT_GET_PATCH_OFFSET UNITYSDK_OFFSET(0xE914260)
#define CONFLICT_CONFLICTGROUPUNIT_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xE9141A0)
#define CONFLICT_CONFLICTGROUPUNIT_HIDE_OFFSET UNITYSDK_OFFSET(0xE908430)
#define CONFLICT_CONFLICTGROUPUNIT_REFRESHCONNECTMAINMISSIONID_OFFSET UNITYSDK_OFFSET(0xE912070)
#define CONFLICT_CONFLICTGROUPUNIT_REMOVE_1_OFFSET UNITYSDK_OFFSET(0xE90FAD0)
#define CONFLICT_CONFLICTGROUPUNIT_REMOVE_2_OFFSET UNITYSDK_OFFSET(0xE910790)
#define CONFLICT_CONFLICTGROUPUNIT_REMOVE_OFFSET UNITYSDK_OFFSET(0xE90EDD0)
#define CONFLICT_CONFLICTGROUPUNIT_SET_CONFLICTTYPE_OFFSET UNITYSDK_OFFSET(0xE914250)
#define CONFLICT_CONFLICTGROUPUNIT_SET_FLOORID_OFFSET UNITYSDK_OFFSET(0xE9141F0)
#define CONFLICT_CONFLICTGROUPUNIT_SET_GROUPID_OFFSET UNITYSDK_OFFSET(0xE914210)
#define CONFLICT_CONFLICTGROUPUNIT_SET_NPCID_OFFSET UNITYSDK_OFFSET(0xE914230)
#define CONFLICT_CONFLICTGROUPUNIT_SET_OWNERMAINMISSIONID_OFFSET UNITYSDK_OFFSET(0xE9141D0)
#define CONFLICT_CONFLICTGROUPUNIT_SET_PATCHMISSION_OFFSET UNITYSDK_OFFSET(0xE914290)
#define CONFLICT_CONFLICTGROUPUNIT_SET_PATCH_OFFSET UNITYSDK_OFFSET(0xE914270)
#define CONFLICT_CONFLICTGROUPUNIT_SET_TYPE_OFFSET UNITYSDK_OFFSET(0xE9141B0)
#define CONFLICT_CONFLICTGROUPUNIT_SHOW_OFFSET UNITYSDK_OFFSET(0xE908530)
#define CONFLICT_CONFLICTGROUPUNIT__ISENTITYSHOW_OFFSET UNITYSDK_OFFSET(0xE9148E0)
#define CONFLICT_CONFLICTGROUPUNIT__TRYHIDEENTITY_OFFSET UNITYSDK_OFFSET(0xE9142B0)
#define CONFLICT_CONFLICTGROUPUNIT__TRYSHOWENTITY_OFFSET UNITYSDK_OFFSET(0xE9145F0)

inline static constexpr unsigned int Conflict_ConflictGroupUnit_TypeDefinitionIndex = 48179;

	class Conflict_ConflictGroupUnit : public ::System::Object
	{
	public:
		::RPG::GameCore::LevelGroupMainMissionIssuePatch* _Patch_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* _ConnectSubMissionIDList_k__BackingField; // 0x18
		::System::Collections::Generic::HashSet_1<::RPG::GameCore::GameEntity*>* _IncludingEntities; // 0x20
		::System::Collections::Generic::List_1<::System::UInt32>* GroupInitConflictIDs; // 0x28
		::System::Collections::Generic::List_1<::System::UInt32>* ConflictIDs; // 0x30
		::System::UInt32 _NpcID_k__BackingField; // 0x38
		::System::UInt32 _OwnerMainMissionID_k__BackingField; // 0x3C
		::System::UInt32 _PatchMission_k__BackingField; // 0x40
		::System::Boolean show; // 0x44
		::System::Byte _padding0[0x3];
		::RPG::Client::ConflictType _conflictType_k__BackingField; // 0x48
		::System::UInt32 _FloorID_k__BackingField; // 0x4C
		::Conflict_GroupUnitType _type_k__BackingField; // 0x50
		::System::UInt32 _GroupID_k__BackingField; // 0x54
		::System::Void _ctor(::Conflict_GroupUnitType a1, ::System::UInt32 a2, ::System::UInt32 a3, ::Il2CppArray<::System::UInt32>* a4, ::System::UInt32 a5, ::System::Collections::Generic::List_1<::System::UInt32>* a6)
		{
			return ((::System::Void(*)(::PVOID, ::Conflict_GroupUnitType, ::System::UInt32, ::System::UInt32, ::Il2CppArray<::System::UInt32>*, ::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CONFLICT_CONFLICTGROUPUNIT_CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::Conflict_GroupUnitType get_type()
		{
			return ((::Conflict_GroupUnitType(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFLICT_CONFLICTGROUPUNIT_GET_TYPE_OFFSET))(this);
		}

		::System::Void set_type(::Conflict_GroupUnitType a1)
		{
			return ((::System::Void(*)(::PVOID, ::Conflict_GroupUnitType))((::PBYTE)hIl2Cpp + CONFLICT_CONFLICTGROUPUNIT_SET_TYPE_OFFSET))(this, a1);
		}

		::System::UInt32 get_OwnerMainMissionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFLICT_CONFLICTGROUPUNIT_GET_OWNERMAINMISSIONID_OFFSET))(this);
		}

		::System::Void set_OwnerMainMissionID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CONFLICT_CONFLICTGROUPUNIT_SET_OWNERMAINMISSIONID_OFFSET))(this, a1);
		}

		::System::UInt32 get_FloorID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFLICT_CONFLICTGROUPUNIT_GET_FLOORID_OFFSET))(this);
		}

		::System::Void set_FloorID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CONFLICT_CONFLICTGROUPUNIT_SET_FLOORID_OFFSET))(this, a1);
		}

		::System::UInt32 get_GroupID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFLICT_CONFLICTGROUPUNIT_GET_GROUPID_OFFSET))(this);
		}

		::System::Void set_GroupID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CONFLICT_CONFLICTGROUPUNIT_SET_GROUPID_OFFSET))(this, a1);
		}

		::System::UInt32 get_NpcID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFLICT_CONFLICTGROUPUNIT_GET_NPCID_OFFSET))(this);
		}

		::System::Void set_NpcID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CONFLICT_CONFLICTGROUPUNIT_SET_NPCID_OFFSET))(this, a1);
		}

		::RPG::Client::ConflictType get_conflictType()
		{
			return ((::RPG::Client::ConflictType(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFLICT_CONFLICTGROUPUNIT_GET_CONFLICTTYPE_OFFSET))(this);
		}

		::System::Void set_conflictType(::RPG::Client::ConflictType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ConflictType))((::PBYTE)hIl2Cpp + CONFLICT_CONFLICTGROUPUNIT_SET_CONFLICTTYPE_OFFSET))(this, a1);
		}

		::RPG::GameCore::LevelGroupMainMissionIssuePatch* get_Patch()
		{
			return ((::RPG::GameCore::LevelGroupMainMissionIssuePatch*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFLICT_CONFLICTGROUPUNIT_GET_PATCH_OFFSET))(this);
		}

		::System::Void set_Patch(::RPG::GameCore::LevelGroupMainMissionIssuePatch* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelGroupMainMissionIssuePatch*))((::PBYTE)hIl2Cpp + CONFLICT_CONFLICTGROUPUNIT_SET_PATCH_OFFSET))(this, a1);
		}

		::System::UInt32 get_PatchMission()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFLICT_CONFLICTGROUPUNIT_GET_PATCHMISSION_OFFSET))(this);
		}

		::System::Void set_PatchMission(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CONFLICT_CONFLICTGROUPUNIT_SET_PATCHMISSION_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_ConnectSubMissionIDList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFLICT_CONFLICTGROUPUNIT_GET_CONNECTSUBMISSIONIDLIST_OFFSET))(this);
		}

		::System::Void Add(::RPG::Client::MapNpc* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapNpc*))((::PBYTE)hIl2Cpp + CONFLICT_CONFLICTGROUPUNIT_ADD_OFFSET))(this, a1);
		}

		::System::Void Add_1(::RPG::Client::MapProp* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapProp*))((::PBYTE)hIl2Cpp + CONFLICT_CONFLICTGROUPUNIT_ADD_1_OFFSET))(this, a1);
		}

		::System::Void Add_2(::RPG::Client::MapDistrict* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapDistrict*))((::PBYTE)hIl2Cpp + CONFLICT_CONFLICTGROUPUNIT_ADD_2_OFFSET))(this, a1);
		}

		::System::Void Remove(::RPG::Client::MapNpc* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapNpc*))((::PBYTE)hIl2Cpp + CONFLICT_CONFLICTGROUPUNIT_REMOVE_OFFSET))(this, a1);
		}

		::System::Void Remove_1(::RPG::Client::MapProp* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapProp*))((::PBYTE)hIl2Cpp + CONFLICT_CONFLICTGROUPUNIT_REMOVE_1_OFFSET))(this, a1);
		}

		::System::Void Remove_2(::RPG::Client::MapDistrict* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapDistrict*))((::PBYTE)hIl2Cpp + CONFLICT_CONFLICTGROUPUNIT_REMOVE_2_OFFSET))(this, a1);
		}

		::System::Void Show()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFLICT_CONFLICTGROUPUNIT_SHOW_OFFSET))(this);
		}

		::System::Void Hide(::RPG::Client::ConflictType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ConflictType))((::PBYTE)hIl2Cpp + CONFLICT_CONFLICTGROUPUNIT_HIDE_OFFSET))(this, a1);
		}

		::System::Void RefreshConnectMainMissionID(::RPG::Client::MapDef* a1, ::System::Collections::Generic::List_1<::System::Object*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapDef*, ::System::Collections::Generic::List_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CONFLICT_CONFLICTGROUPUNIT_REFRESHCONNECTMAINMISSIONID_OFFSET))(this, a1, a2);
		}

		static ::System::Void _TryHideEntity(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CONFLICT_CONFLICTGROUPUNIT__TRYHIDEENTITY_OFFSET))(a1);
		}

		static ::System::Void _TryShowEntity(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CONFLICT_CONFLICTGROUPUNIT__TRYSHOWENTITY_OFFSET))(a1);
		}

		static ::System::Boolean _IsEntityShow(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CONFLICT_CONFLICTGROUPUNIT__ISENTITYSHOW_OFFSET))(a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFLICT_CONFLICTGROUPUNIT_DISPOSE_OFFSET))(this);
		}

	};
