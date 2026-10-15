#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ChenLingFes/GameDayState.h"
#include "unitysdk/System/Object.h"
class DMHADFNOIGP;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define JGHGCOMJODN_CTOR_OFFSET UNITYSDK_OFFSET(0xB194340)
#define JGHGCOMJODN_GET_CHENLINGDAYCOUNTSBYPHASE_OFFSET UNITYSDK_OFFSET(0xB194280)
#define JGHGCOMJODN_GET_CURRENTGAMEDAYINDEX_OFFSET UNITYSDK_OFFSET(0xB1942C0)
#define JGHGCOMJODN_GET_CURRENTGAMEDAYSTATE_OFFSET UNITYSDK_OFFSET(0xB1942E0)
#define JGHGCOMJODN_GET_CURRENTGAMEWEEKINDEX_OFFSET UNITYSDK_OFFSET(0xB1942A0)
#define JGHGCOMJODN_GET_ISENDLESSMODE_OFFSET UNITYSDK_OFFSET(0xB194260)
#define JGHGCOMJODN_GET_LEVELDATA_OFFSET UNITYSDK_OFFSET(0xB194240)
#define JGHGCOMJODN_GET_LEVELID_OFFSET UNITYSDK_OFFSET(0xB194220)
#define JGHGCOMJODN_GET_ONCLOSE_OFFSET UNITYSDK_OFFSET(0xB194300)
#define JGHGCOMJODN_GET_ONRESTART_OFFSET UNITYSDK_OFFSET(0xB194320)
#define JGHGCOMJODN_SET_CHENLINGDAYCOUNTSBYPHASE_OFFSET UNITYSDK_OFFSET(0xB194290)
#define JGHGCOMJODN_SET_CURRENTGAMEDAYINDEX_OFFSET UNITYSDK_OFFSET(0xB1942D0)
#define JGHGCOMJODN_SET_CURRENTGAMEDAYSTATE_OFFSET UNITYSDK_OFFSET(0xB1942F0)
#define JGHGCOMJODN_SET_CURRENTGAMEWEEKINDEX_OFFSET UNITYSDK_OFFSET(0xB1942B0)
#define JGHGCOMJODN_SET_ISENDLESSMODE_OFFSET UNITYSDK_OFFSET(0xB194270)
#define JGHGCOMJODN_SET_LEVELDATA_OFFSET UNITYSDK_OFFSET(0xB194250)
#define JGHGCOMJODN_SET_LEVELID_OFFSET UNITYSDK_OFFSET(0xB194230)
#define JGHGCOMJODN_SET_ONCLOSE_OFFSET UNITYSDK_OFFSET(0xB194310)
#define JGHGCOMJODN_SET_ONRESTART_OFFSET UNITYSDK_OFFSET(0xB194330)

inline static constexpr unsigned int JGHGCOMJODN_TypeDefinitionIndex = 81400;

	class JGHGCOMJODN : public ::System::Object
	{
	public:
		::System::Collections::Generic::IReadOnlyList_1<::System::Int32>* _ChenLingDayCountsByPhase_k__BackingField; // 0x10
		::System::Action* _OnRestart_k__BackingField; // 0x18
		::DMHADFNOIGP* _LevelData_k__BackingField; // 0x20
		::System::Action* _OnClose_k__BackingField; // 0x28
		::System::UInt32 _LevelID_k__BackingField; // 0x30
		::System::Int32 _CurrentGameDayIndex_k__BackingField; // 0x34
		::System::Int32 _CurrentGameWeekIndex_k__BackingField; // 0x38
		::System::Boolean _IsEndlessMode_k__BackingField; // 0x3C
		::System::Byte _padding0[0x3];
		::RPG::Client::LittleGame::ChenLingFes::GameDayState _CurrentGameDayState_k__BackingField; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGHGCOMJODN_CTOR_OFFSET))(this);
		}

		::System::UInt32 get_LevelID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JGHGCOMJODN_GET_LEVELID_OFFSET))(this);
		}

		::System::Void set_LevelID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JGHGCOMJODN_SET_LEVELID_OFFSET))(this, a1);
		}

		::DMHADFNOIGP* get_LevelData()
		{
			return ((::DMHADFNOIGP*(*)(::PVOID))((::PBYTE)hIl2Cpp + JGHGCOMJODN_GET_LEVELDATA_OFFSET))(this);
		}

		::System::Void set_LevelData(::DMHADFNOIGP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DMHADFNOIGP*))((::PBYTE)hIl2Cpp + JGHGCOMJODN_SET_LEVELDATA_OFFSET))(this, a1);
		}

		::System::Boolean get_IsEndlessMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JGHGCOMJODN_GET_ISENDLESSMODE_OFFSET))(this);
		}

		::System::Void set_IsEndlessMode(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JGHGCOMJODN_SET_ISENDLESSMODE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyList_1<::System::Int32>* get_ChenLingDayCountsByPhase()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JGHGCOMJODN_GET_CHENLINGDAYCOUNTSBYPHASE_OFFSET))(this);
		}

		::System::Void set_ChenLingDayCountsByPhase(::System::Collections::Generic::IReadOnlyList_1<::System::Int32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::System::Int32>*))((::PBYTE)hIl2Cpp + JGHGCOMJODN_SET_CHENLINGDAYCOUNTSBYPHASE_OFFSET))(this, a1);
		}

		::System::Int32 get_CurrentGameWeekIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JGHGCOMJODN_GET_CURRENTGAMEWEEKINDEX_OFFSET))(this);
		}

		::System::Void set_CurrentGameWeekIndex(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + JGHGCOMJODN_SET_CURRENTGAMEWEEKINDEX_OFFSET))(this, a1);
		}

		::System::Int32 get_CurrentGameDayIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JGHGCOMJODN_GET_CURRENTGAMEDAYINDEX_OFFSET))(this);
		}

		::System::Void set_CurrentGameDayIndex(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + JGHGCOMJODN_SET_CURRENTGAMEDAYINDEX_OFFSET))(this, a1);
		}

		::RPG::Client::LittleGame::ChenLingFes::GameDayState get_CurrentGameDayState()
		{
			return ((::RPG::Client::LittleGame::ChenLingFes::GameDayState(*)(::PVOID))((::PBYTE)hIl2Cpp + JGHGCOMJODN_GET_CURRENTGAMEDAYSTATE_OFFSET))(this);
		}

		::System::Void set_CurrentGameDayState(::RPG::Client::LittleGame::ChenLingFes::GameDayState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ChenLingFes::GameDayState))((::PBYTE)hIl2Cpp + JGHGCOMJODN_SET_CURRENTGAMEDAYSTATE_OFFSET))(this, a1);
		}

		::System::Action* get_OnClose()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + JGHGCOMJODN_GET_ONCLOSE_OFFSET))(this);
		}

		::System::Void set_OnClose(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + JGHGCOMJODN_SET_ONCLOSE_OFFSET))(this, a1);
		}

		::System::Action* get_OnRestart()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + JGHGCOMJODN_GET_ONRESTART_OFFSET))(this);
		}

		::System::Void set_OnRestart(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + JGHGCOMJODN_SET_ONRESTART_OFFSET))(this, a1);
		}

	};
