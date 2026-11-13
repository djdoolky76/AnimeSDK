#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityVersionHotData.h"
#include "unitysdk/RPG/GameCore/ChallengeGroupType.h"
#include "unitysdk/RPG/Client/TextID.h"
namespace RPG::Client { class ActivityPanelData; }
namespace RPG::Client { class ChallengeGroupData; }
namespace RPG::Client { class ScheduleData; }
namespace RPG::GameCore { class ActivityHotVersionStatRow; }
namespace System { class String; }

#define RPG_CLIENT_ACTIVITYVERSIONHOTCHALLENGEDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x18D0D7D0)
#define RPG_CLIENT_ACTIVITYVERSIONHOTCHALLENGEDATA_GET_BEGINTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x18D0E580)
#define RPG_CLIENT_ACTIVITYVERSIONHOTCHALLENGEDATA_GET_ENDED_OFFSET UNITYSDK_OFFSET(0x18D0E520)
#define RPG_CLIENT_ACTIVITYVERSIONHOTCHALLENGEDATA_GET_ENDTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x18D0E610)
#define RPG_CLIENT_ACTIVITYVERSIONHOTCHALLENGEDATA_GET_GOTOID_OFFSET UNITYSDK_OFFSET(0x18D0E880)
#define RPG_CLIENT_ACTIVITYVERSIONHOTCHALLENGEDATA_GET_GOTOPARAMS_OFFSET UNITYSDK_OFFSET(0x18D0E9F0)
#define RPG_CLIENT_ACTIVITYVERSIONHOTCHALLENGEDATA_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x18D0E1A0)
#define RPG_CLIENT_ACTIVITYVERSIONHOTCHALLENGEDATA_GET_ISINSCHEDULE_OFFSET UNITYSDK_OFFSET(0x18D0E3B0)
#define RPG_CLIENT_ACTIVITYVERSIONHOTCHALLENGEDATA_GET_ISSHOWGOTOBUTTON_OFFSET UNITYSDK_OFFSET(0x18D0E6A0)
#define RPG_CLIENT_ACTIVITYVERSIONHOTCHALLENGEDATA_GET_NAMESTR_OFFSET UNITYSDK_OFFSET(0x18D0DE40)
#define RPG_CLIENT_ACTIVITYVERSIONHOTCHALLENGEDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0x18D0DC30)
#define RPG_CLIENT_ACTIVITYVERSIONHOTCHALLENGEDATA_GET_NOTBEGIN_OFFSET UNITYSDK_OFFSET(0x18D0E4C0)
#define RPG_CLIENT_ACTIVITYVERSIONHOTCHALLENGEDATA_GET__CHALLENGETITLE_OFFSET UNITYSDK_OFFSET(0x18D0E040)
#define RPG_CLIENT_ACTIVITYVERSIONHOTCHALLENGEDATA_GET__GROUPID_OFFSET UNITYSDK_OFFSET(0x18D0DAC0)
#define RPG_CLIENT_ACTIVITYVERSIONHOTCHALLENGEDATA_GET__PANELDATA_OFFSET UNITYSDK_OFFSET(0x18D0E7E0)
#define RPG_CLIENT_ACTIVITYVERSIONHOTCHALLENGEDATA_GET__SCHEDULEDATA_OFFSET UNITYSDK_OFFSET(0x18D0E410)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityVersionHotChallengeData_TypeDefinitionIndex = 62926;

	class ActivityVersionHotChallengeData : public ::RPG::Client::ActivityVersionHotData
	{
	public:
		::RPG::Client::ChallengeGroupData* _GroupData; // 0x28
		::System::UInt32 _ActivityPanelID; // 0x30
		::RPG::GameCore::ChallengeGroupType _GroupType; // 0x34
		::System::UInt32 _HandbookGotoID; // 0x38
		::System::Void _ctor(::System::UInt32 a1, ::RPG::GameCore::ActivityHotVersionStatRow* a2, ::RPG::GameCore::ChallengeGroupType a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::ActivityHotVersionStatRow*, ::RPG::GameCore::ChallengeGroupType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYVERSIONHOTCHALLENGEDATA_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYVERSIONHOTCHALLENGEDATA_GET_NAME_OFFSET))(this);
		}

		::System::String* get_NameStr()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYVERSIONHOTCHALLENGEDATA_GET_NAMESTR_OFFSET))(this);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYVERSIONHOTCHALLENGEDATA_GET_ICONPATH_OFFSET))(this);
		}

		::System::Boolean get_IsInSchedule()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYVERSIONHOTCHALLENGEDATA_GET_ISINSCHEDULE_OFFSET))(this);
		}

		::System::Boolean get_NotBegin()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYVERSIONHOTCHALLENGEDATA_GET_NOTBEGIN_OFFSET))(this);
		}

		::System::Boolean get_Ended()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYVERSIONHOTCHALLENGEDATA_GET_ENDED_OFFSET))(this);
		}

		::System::Int64 get_BeginTimeStamp()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYVERSIONHOTCHALLENGEDATA_GET_BEGINTIMESTAMP_OFFSET))(this);
		}

		::System::Int64 get_EndTimeStamp()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYVERSIONHOTCHALLENGEDATA_GET_ENDTIMESTAMP_OFFSET))(this);
		}

		::System::Boolean get_IsShowGotoButton()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYVERSIONHOTCHALLENGEDATA_GET_ISSHOWGOTOBUTTON_OFFSET))(this);
		}

		::System::UInt32 get_GotoID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYVERSIONHOTCHALLENGEDATA_GET_GOTOID_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_GotoParams()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYVERSIONHOTCHALLENGEDATA_GET_GOTOPARAMS_OFFSET))(this);
		}

		::System::UInt32 get__GroupID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYVERSIONHOTCHALLENGEDATA_GET__GROUPID_OFFSET))(this);
		}

		::RPG::Client::ScheduleData* get__ScheduleData()
		{
			return ((::RPG::Client::ScheduleData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYVERSIONHOTCHALLENGEDATA_GET__SCHEDULEDATA_OFFSET))(this);
		}

		::RPG::Client::ActivityPanelData* get__PanelData()
		{
			return ((::RPG::Client::ActivityPanelData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYVERSIONHOTCHALLENGEDATA_GET__PANELDATA_OFFSET))(this);
		}

		::RPG::Client::TextID get__ChallengeTitle()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYVERSIONHOTCHALLENGEDATA_GET__CHALLENGETITLE_OFFSET))(this);
		}

	};
}
