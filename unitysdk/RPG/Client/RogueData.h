#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NOGKOJCAFAE.h"
#include "unitysdk/RPG/Client/BaseRogueInfo.h"
#include "unitysdk/RPG/Client/TextID.h"
class AGEHGBKOBEF;
class BBJBIFHOLGF;
class LGFMCMDIOLN;
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class RogueAeonBuffInfo; }
namespace RPG::Client { class RogueMapData; }
namespace RPG::Client { class RogueProgressInfo; }
namespace RPG::GameCore { class RogueManagerRow; }
namespace RPG::GameCore { class RogueRoomRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUEDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xE9A9D40)
#define RPG_CLIENT_ROGUEDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE9AA090)
#define RPG_CLIENT_ROGUEDATA_GETCURRENTEXPLORESITENAME_OFFSET UNITYSDK_OFFSET(0xE9AA950)
#define RPG_CLIENT_ROGUEDATA_GETCURRENTROGUEROOMROW_OFFSET UNITYSDK_OFFSET(0xE9AA9E0)
#define RPG_CLIENT_ROGUEDATA_GETFINISHEDAREACOUNT_OFFSET UNITYSDK_OFFSET(0xE9AAA70)
#define RPG_CLIENT_ROGUEDATA_GETMONSTERELITEDROPID_OFFSET UNITYSDK_OFFSET(0xE9AABA0)
#define RPG_CLIENT_ROGUEDATA_GETROGUEAVATARCOLLECTION_OFFSET UNITYSDK_OFFSET(0xE9AA120)
#define RPG_CLIENT_ROGUEDATA_GETROGUEDEBUGINFO_OFFSET UNITYSDK_OFFSET(0xE9AACC0)
#define RPG_CLIENT_ROGUEDATA_GETSELECTABLEAEONIDLIST_OFFSET UNITYSDK_OFFSET(0xE9AB080)
#define RPG_CLIENT_ROGUEDATA_GETSELECTEDROGUEAEONBUFFINFO_OFFSET UNITYSDK_OFFSET(0xE9AAFE0)
#define RPG_CLIENT_ROGUEDATA_GETSELECTEDROGUEAEONID_OFFSET UNITYSDK_OFFSET(0xE9AB030)
#define RPG_CLIENT_ROGUEDATA_GETUNLOCKAEONENHANCENUM_OFFSET UNITYSDK_OFFSET(0xE9AB0D0)
#define RPG_CLIENT_ROGUEDATA_GET_BEGINTIMESTAMP_OFFSET UNITYSDK_OFFSET(0xE9AB200)
#define RPG_CLIENT_ROGUEDATA_GET_CURRENTSTATUS_OFFSET UNITYSDK_OFFSET(0xE9AB1A0)
#define RPG_CLIENT_ROGUEDATA_GET_ENDTIMESTAMP_OFFSET UNITYSDK_OFFSET(0xE9AB220)
#define RPG_CLIENT_ROGUEDATA_GET_ISEXPLOREWIN_OFFSET UNITYSDK_OFFSET(0xE9AB1C0)
#define RPG_CLIENT_ROGUEDATA_GET_MAPDATA_OFFSET UNITYSDK_OFFSET(0xE9AB260)
#define RPG_CLIENT_ROGUEDATA_GET_PROGRESSINFO_OFFSET UNITYSDK_OFFSET(0xE9AB240)
#define RPG_CLIENT_ROGUEDATA_GET_ROGUEROW_OFFSET UNITYSDK_OFFSET(0xE9AB120)
#define RPG_CLIENT_ROGUEDATA_GET_SEASONID_OFFSET UNITYSDK_OFFSET(0xE9AB1E0)
#define RPG_CLIENT_ROGUEDATA_GET_SELECTAEONINFO_OFFSET UNITYSDK_OFFSET(0xE9AB280)
#define RPG_CLIENT_ROGUEDATA_SET_BEGINTIMESTAMP_OFFSET UNITYSDK_OFFSET(0xE9AB210)
#define RPG_CLIENT_ROGUEDATA_SET_CURRENTSTATUS_OFFSET UNITYSDK_OFFSET(0xE9AB1B0)
#define RPG_CLIENT_ROGUEDATA_SET_ENDTIMESTAMP_OFFSET UNITYSDK_OFFSET(0xE9AB230)
#define RPG_CLIENT_ROGUEDATA_SET_ISEXPLOREWIN_OFFSET UNITYSDK_OFFSET(0xE9AB1D0)
#define RPG_CLIENT_ROGUEDATA_SET_MAPDATA_OFFSET UNITYSDK_OFFSET(0xE9AB270)
#define RPG_CLIENT_ROGUEDATA_SET_PROGRESSINFO_OFFSET UNITYSDK_OFFSET(0xE9AB250)
#define RPG_CLIENT_ROGUEDATA_SET_SEASONID_OFFSET UNITYSDK_OFFSET(0xE9AB1F0)
#define RPG_CLIENT_ROGUEDATA_SET_SELECTAEONINFO_OFFSET UNITYSDK_OFFSET(0xE9AB290)
#define RPG_CLIENT_ROGUEDATA_SYNCROGUEDATA_OFFSET UNITYSDK_OFFSET(0xE9AA170)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueData_TypeDefinitionIndex = 69412;

	class RogueData : public ::RPG::Client::BaseRogueInfo
	{
	public:
		::RPG::Client::RogueMapData* _MapData_k__BackingField; // 0x30
		::RPG::Client::RogueProgressInfo* _ProgressInfo_k__BackingField; // 0x38
		::RPG::GameCore::RogueManagerRow* _RogueRow; // 0x40
		::BBJBIFHOLGF* _AvatarCollectionBuilder; // 0x48
		::LGFMCMDIOLN* _SelectAeonInfo_k__BackingField; // 0x50
		::System::Collections::Generic::List_1<::System::UInt32>* UnlockConsumeItemType; // 0x58
		::System::UInt32 _SeasonID_k__BackingField; // 0x60
		::System::UInt32 _BeginTimeStamp_k__BackingField; // 0x64
		::NOGKOJCAFAE _CurrentStatus_k__BackingField; // 0x68
		::System::UInt32 _EndTimeStamp_k__BackingField; // 0x6C
		::System::Boolean _IsExploreWin_k__BackingField; // 0x70
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEDATA_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEDATA_DISPOSE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* GetRogueAvatarCollection()
		{
			return ((::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEDATA_GETROGUEAVATARCOLLECTION_OFFSET))(this);
		}

		::System::Void SyncRogueData(::AGEHGBKOBEF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AGEHGBKOBEF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEDATA_SYNCROGUEDATA_OFFSET))(this, a1);
		}

		::RPG::Client::TextID GetCurrentExploreSiteName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEDATA_GETCURRENTEXPLORESITENAME_OFFSET))(this);
		}

		::RPG::GameCore::RogueRoomRow* GetCurrentRogueRoomRow()
		{
			return ((::RPG::GameCore::RogueRoomRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEDATA_GETCURRENTROGUEROOMROW_OFFSET))(this);
		}

		::System::UInt32 GetFinishedAreaCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEDATA_GETFINISHEDAREACOUNT_OFFSET))(this);
		}

		::System::UInt32 GetMonsterEliteDropID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEDATA_GETMONSTERELITEDROPID_OFFSET))(this);
		}

		::System::String* GetRogueDebugInfo()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEDATA_GETROGUEDEBUGINFO_OFFSET))(this);
		}

		::RPG::Client::RogueAeonBuffInfo* GetSelectedRogueAeonBuffInfo()
		{
			return ((::RPG::Client::RogueAeonBuffInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEDATA_GETSELECTEDROGUEAEONBUFFINFO_OFFSET))(this);
		}

		::System::UInt32 GetSelectedRogueAeonID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEDATA_GETSELECTEDROGUEAEONID_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetSelectableAeonIDList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEDATA_GETSELECTABLEAEONIDLIST_OFFSET))(this);
		}

		::System::UInt32 GetUnlockAeonEnhanceNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEDATA_GETUNLOCKAEONENHANCENUM_OFFSET))(this);
		}

		::RPG::GameCore::RogueManagerRow* get_RogueRow()
		{
			return ((::RPG::GameCore::RogueManagerRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEDATA_GET_ROGUEROW_OFFSET))(this);
		}

		::NOGKOJCAFAE get_CurrentStatus()
		{
			return ((::NOGKOJCAFAE(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEDATA_GET_CURRENTSTATUS_OFFSET))(this);
		}

		::System::Void set_CurrentStatus(::NOGKOJCAFAE a1)
		{
			return ((::System::Void(*)(::PVOID, ::NOGKOJCAFAE))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEDATA_SET_CURRENTSTATUS_OFFSET))(this, a1);
		}

		::System::Boolean get_IsExploreWin()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEDATA_GET_ISEXPLOREWIN_OFFSET))(this);
		}

		::System::Void set_IsExploreWin(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEDATA_SET_ISEXPLOREWIN_OFFSET))(this, a1);
		}

		::System::UInt32 get_SeasonID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEDATA_GET_SEASONID_OFFSET))(this);
		}

		::System::Void set_SeasonID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEDATA_SET_SEASONID_OFFSET))(this, a1);
		}

		::System::UInt32 get_BeginTimeStamp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEDATA_GET_BEGINTIMESTAMP_OFFSET))(this);
		}

		::System::Void set_BeginTimeStamp(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEDATA_SET_BEGINTIMESTAMP_OFFSET))(this, a1);
		}

		::System::UInt32 get_EndTimeStamp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEDATA_GET_ENDTIMESTAMP_OFFSET))(this);
		}

		::System::Void set_EndTimeStamp(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEDATA_SET_ENDTIMESTAMP_OFFSET))(this, a1);
		}

		::RPG::Client::RogueProgressInfo* get_ProgressInfo()
		{
			return ((::RPG::Client::RogueProgressInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEDATA_GET_PROGRESSINFO_OFFSET))(this);
		}

		::System::Void set_ProgressInfo(::RPG::Client::RogueProgressInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueProgressInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEDATA_SET_PROGRESSINFO_OFFSET))(this, a1);
		}

		::RPG::Client::RogueMapData* get_MapData()
		{
			return ((::RPG::Client::RogueMapData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEDATA_GET_MAPDATA_OFFSET))(this);
		}

		::System::Void set_MapData(::RPG::Client::RogueMapData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueMapData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEDATA_SET_MAPDATA_OFFSET))(this, a1);
		}

		::LGFMCMDIOLN* get_SelectAeonInfo()
		{
			return ((::LGFMCMDIOLN*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEDATA_GET_SELECTAEONINFO_OFFSET))(this);
		}

		::System::Void set_SelectAeonInfo(::LGFMCMDIOLN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LGFMCMDIOLN*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEDATA_SET_SELECTAEONINFO_OFFSET))(this, a1);
		}

	};
}
