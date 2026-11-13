#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HNPHKCCICPM.h"
#include "unitysdk/NOGKOJCAFAE.h"
#include "unitysdk/System/Object.h"
class CAJEBOPPMCJ;
namespace RPG::Client { class RogueAreaData; }
namespace RPG::GameCore { class RogueAreaConfigRow; }

#define RPG_CLIENT_ROGUEAREADATA_CREATE_OFFSET UNITYSDK_OFFSET(0x1C7C4440)
#define RPG_CLIENT_ROGUEAREADATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1C7C4500)
#define RPG_CLIENT_ROGUEAREADATA_GETMAXSCORE_OFFSET UNITYSDK_OFFSET(0x1C7C4630)
#define RPG_CLIENT_ROGUEAREADATA_GET_AREAID_OFFSET UNITYSDK_OFFSET(0x1C7C47E0)
#define RPG_CLIENT_ROGUEAREADATA_GET_AREAPROGRESSID_OFFSET UNITYSDK_OFFSET(0x1C7C48F0)
#define RPG_CLIENT_ROGUEAREADATA_GET_CURREACHROOMNUM_OFFSET UNITYSDK_OFFSET(0x1C7C4880)
#define RPG_CLIENT_ROGUEAREADATA_GET_DIFFICULTY_OFFSET UNITYSDK_OFFSET(0x1C7C4A20)
#define RPG_CLIENT_ROGUEAREADATA_GET_ISACTIVITY_OFFSET UNITYSDK_OFFSET(0x1C7C4B50)
#define RPG_CLIENT_ROGUEAREADATA_GET_ISDOING_OFFSET UNITYSDK_OFFSET(0x1C7C48A0)
#define RPG_CLIENT_ROGUEAREADATA_GET_ISREWARDTAKEN_OFFSET UNITYSDK_OFFSET(0x1C7C4840)
#define RPG_CLIENT_ROGUEAREADATA_GET_MAPID_OFFSET UNITYSDK_OFFSET(0x1C7C4860)
#define RPG_CLIENT_ROGUEAREADATA_GET_ROGUEAREAROW_OFFSET UNITYSDK_OFFSET(0x1C7C4770)
#define RPG_CLIENT_ROGUEAREADATA_GET_ROGUEAREASTATUS_OFFSET UNITYSDK_OFFSET(0x1C7C4800)
#define RPG_CLIENT_ROGUEAREADATA_GET_ROGUESTATUS_OFFSET UNITYSDK_OFFSET(0x1C7C4820)
#define RPG_CLIENT_ROGUEAREADATA_REFRESHSTATUS_OFFSET UNITYSDK_OFFSET(0x1C7C4510)
#define RPG_CLIENT_ROGUEAREADATA_SETTAKENREWARD_OFFSET UNITYSDK_OFFSET(0x1C7C45E0)
#define RPG_CLIENT_ROGUEAREADATA_SETUNLOCKSTATUS_OFFSET UNITYSDK_OFFSET(0x1C7C4590)
#define RPG_CLIENT_ROGUEAREADATA_SET_AREAID_OFFSET UNITYSDK_OFFSET(0x1C7C47F0)
#define RPG_CLIENT_ROGUEAREADATA_SET_CURREACHROOMNUM_OFFSET UNITYSDK_OFFSET(0x1C7C4890)
#define RPG_CLIENT_ROGUEAREADATA_SET_ISREWARDTAKEN_OFFSET UNITYSDK_OFFSET(0x1C7C4850)
#define RPG_CLIENT_ROGUEAREADATA_SET_MAPID_OFFSET UNITYSDK_OFFSET(0x1C7C4870)
#define RPG_CLIENT_ROGUEAREADATA_SET_ROGUEAREASTATUS_OFFSET UNITYSDK_OFFSET(0x1C7C4810)
#define RPG_CLIENT_ROGUEAREADATA_SET_ROGUESTATUS_OFFSET UNITYSDK_OFFSET(0x1C7C4830)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueAreaData_TypeDefinitionIndex = 69407;

	class RogueAreaData : public ::System::Object
	{
	public:
		::RPG::GameCore::RogueAreaConfigRow* _RogueAreaRow; // 0x10
		::System::Boolean _IsRewardTaken_k__BackingField; // 0x18
		::System::Byte _padding0[0x3];
		::HNPHKCCICPM _RogueAreaStatus_k__BackingField; // 0x1C
		::System::UInt32 _MapID_k__BackingField; // 0x20
		::System::UInt32 _AreaID_k__BackingField; // 0x24
		::System::UInt32 _CurReachRoomNum_k__BackingField; // 0x28
		::NOGKOJCAFAE _RogueStatus_k__BackingField; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEAREADATA_CTOR_OFFSET))(this);
		}

		static ::RPG::Client::RogueAreaData* Create(::CAJEBOPPMCJ* a1)
		{
			return ((::RPG::Client::RogueAreaData*(*)(::CAJEBOPPMCJ*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEAREADATA_CREATE_OFFSET))(a1);
		}

		::System::Void RefreshStatus(::CAJEBOPPMCJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CAJEBOPPMCJ*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEAREADATA_REFRESHSTATUS_OFFSET))(this, a1);
		}

		::System::Void SetUnlockStatus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEAREADATA_SETUNLOCKSTATUS_OFFSET))(this);
		}

		::System::Void SetTakenReward(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEAREADATA_SETTAKENREWARD_OFFSET))(this, a1);
		}

		::System::UInt32 GetMaxScore()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEAREADATA_GETMAXSCORE_OFFSET))(this);
		}

		::System::UInt32 get_AreaID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEAREADATA_GET_AREAID_OFFSET))(this);
		}

		::System::Void set_AreaID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEAREADATA_SET_AREAID_OFFSET))(this, a1);
		}

		::HNPHKCCICPM get_RogueAreaStatus()
		{
			return ((::HNPHKCCICPM(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEAREADATA_GET_ROGUEAREASTATUS_OFFSET))(this);
		}

		::System::Void set_RogueAreaStatus(::HNPHKCCICPM a1)
		{
			return ((::System::Void(*)(::PVOID, ::HNPHKCCICPM))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEAREADATA_SET_ROGUEAREASTATUS_OFFSET))(this, a1);
		}

		::NOGKOJCAFAE get_RogueStatus()
		{
			return ((::NOGKOJCAFAE(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEAREADATA_GET_ROGUESTATUS_OFFSET))(this);
		}

		::System::Void set_RogueStatus(::NOGKOJCAFAE a1)
		{
			return ((::System::Void(*)(::PVOID, ::NOGKOJCAFAE))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEAREADATA_SET_ROGUESTATUS_OFFSET))(this, a1);
		}

		::System::Boolean get_IsRewardTaken()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEAREADATA_GET_ISREWARDTAKEN_OFFSET))(this);
		}

		::System::Void set_IsRewardTaken(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEAREADATA_SET_ISREWARDTAKEN_OFFSET))(this, a1);
		}

		::System::UInt32 get_MapID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEAREADATA_GET_MAPID_OFFSET))(this);
		}

		::System::Void set_MapID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEAREADATA_SET_MAPID_OFFSET))(this, a1);
		}

		::System::UInt32 get_CurReachRoomNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEAREADATA_GET_CURREACHROOMNUM_OFFSET))(this);
		}

		::System::Void set_CurReachRoomNum(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEAREADATA_SET_CURREACHROOMNUM_OFFSET))(this, a1);
		}

		::System::Boolean get_IsDoing()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEAREADATA_GET_ISDOING_OFFSET))(this);
		}

		::RPG::GameCore::RogueAreaConfigRow* get_RogueAreaRow()
		{
			return ((::RPG::GameCore::RogueAreaConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEAREADATA_GET_ROGUEAREAROW_OFFSET))(this);
		}

		::System::UInt32 get_AreaProgressID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEAREADATA_GET_AREAPROGRESSID_OFFSET))(this);
		}

		::System::UInt32 get_Difficulty()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEAREADATA_GET_DIFFICULTY_OFFSET))(this);
		}

		::System::Boolean get_IsActivity()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEAREADATA_GET_ISACTIVITY_OFFSET))(this);
		}

	};
}
