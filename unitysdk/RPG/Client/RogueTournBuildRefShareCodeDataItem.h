#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/DateTimePro.h"
#include "unitysdk/RPG/Client/RogueTournBuildRefUnionIndex.h"
class PHODDAGHLFG;
namespace RPG::Client { class RogueFormulaData; }
namespace RPG::Client { class RogueTournBuildRefTeamData; }
namespace RPG::Client { class RogueTournHexData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEDATAITEM_CCTOR_OFFSET UNITYSDK_OFFSET(0xDF7FED0)
#define RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEDATAITEM_CLEAR_OFFSET UNITYSDK_OFFSET(0xDF7F7E0)
#define RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEDATAITEM_CTOR_OFFSET UNITYSDK_OFFSET(0xDF7F670)
#define RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEDATAITEM_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDF7AE50)
#define RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEDATAITEM_GET_ARCHIVESLOTINDEX_OFFSET UNITYSDK_OFFSET(0xDF7F900)
#define RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEDATAITEM_GET_ESSENTIALFORMULAS_OFFSET UNITYSDK_OFFSET(0xDF7FC20)
#define RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEDATAITEM_GET_ESSENTIALHEXMIRACLES_OFFSET UNITYSDK_OFFSET(0xDF7FD00)
#define RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEDATAITEM_GET_LATESTAPPLYDATETIME_OFFSET UNITYSDK_OFFSET(0xDF7FB00)
#define RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEDATAITEM_GET_LATESTAPPLYTIME_OFFSET UNITYSDK_OFFSET(0xDF7FAE0)
#define RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEDATAITEM_GET_MAINTOURNID_OFFSET UNITYSDK_OFFSET(0xDF7FA80)
#define RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEDATAITEM_GET_MAXTITLELENGTHLIMIT_OFFSET UNITYSDK_OFFSET(0xDF7FDE0)
#define RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEDATAITEM_GET_OPTIONALFORMULAS_OFFSET UNITYSDK_OFFSET(0xDF7FC90)
#define RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEDATAITEM_GET_OPTIONALHEXMIRACLES_OFFSET UNITYSDK_OFFSET(0xDF7FD70)
#define RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEDATAITEM_GET_SUBTOURNID_OFFSET UNITYSDK_OFFSET(0xDF7FAA0)
#define RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEDATAITEM_GET_TEAMS_OFFSET UNITYSDK_OFFSET(0xDF7FBB0)
#define RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEDATAITEM_GET_TITLE_OFFSET UNITYSDK_OFFSET(0xDF7FAC0)
#define RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEDATAITEM_GET_UNIONINDEX_OFFSET UNITYSDK_OFFSET(0xDF7F920)
#define RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEDATAITEM_SETARCHIVESLOTINDEX_OFFSET UNITYSDK_OFFSET(0xDF7A580)
#define RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEDATAITEM_SETCONTENT_OFFSET UNITYSDK_OFFSET(0xDF7F8B0)
#define RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEDATAITEM_SETLATESTAPPLYTIME_OFFSET UNITYSDK_OFFSET(0xDF7A5D0)
#define RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEDATAITEM_SET_ARCHIVESLOTINDEX_OFFSET UNITYSDK_OFFSET(0xDF7F910)
#define RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEDATAITEM_SET_LATESTAPPLYTIME_OFFSET UNITYSDK_OFFSET(0xDF7FAF0)
#define RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEDATAITEM_SET_MAINTOURNID_OFFSET UNITYSDK_OFFSET(0xDF7FA90)
#define RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEDATAITEM_SET_SUBTOURNID_OFFSET UNITYSDK_OFFSET(0xDF7FAB0)
#define RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEDATAITEM_SET_TITLE_OFFSET UNITYSDK_OFFSET(0xDF7FAD0)
#define RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEDATAITEM_TOSTRING_OFFSET UNITYSDK_OFFSET(0xDF7F680)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournBuildRefShareCodeDataItem_TypeDefinitionIndex = 67550;

	class RogueTournBuildRefShareCodeDataItem : public ::System::Object
	{
	public:
		::System::String* _Title_k__BackingField; // 0x10
		::PHODDAGHLFG* _BuildRefContent; // 0x18
		::System::UInt32 _SubTournID_k__BackingField; // 0x20
		::System::UInt32 _MainTournID_k__BackingField; // 0x24
		::System::UInt32 _ArchiveSlotIndex_k__BackingField; // 0x28
		::System::Byte _padding0[0x4];
		::System::Int64 _LatestApplyTime_k__BackingField; // 0x30
		static ::RPG::Client::TextID* StaticGet_DefaultTitle()
		{
			return (::RPG::Client::TextID*)UnitySDK::FromName("RPG.Client", "RogueTournBuildRefShareCodeDataItem")->GetStaticField(0x14FE0);
		}

		// static const ::System::Object InvalidShareCodeBuildRefSlotIndex; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEDATAITEM_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEDATAITEM_CCTOR_OFFSET))();
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEDATAITEM_TOSTRING_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEDATAITEM_CLEAR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEDATAITEM_DISPOSE_OFFSET))(this);
		}

		::System::Void SetContent(::PHODDAGHLFG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PHODDAGHLFG*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEDATAITEM_SETCONTENT_OFFSET))(this, a1);
		}

		::System::Void SetArchiveSlotIndex(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEDATAITEM_SETARCHIVESLOTINDEX_OFFSET))(this, a1);
		}

		::System::Void SetLatestApplyTime(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEDATAITEM_SETLATESTAPPLYTIME_OFFSET))(this, a1);
		}

		::System::UInt32 get_ArchiveSlotIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEDATAITEM_GET_ARCHIVESLOTINDEX_OFFSET))(this);
		}

		::System::Void set_ArchiveSlotIndex(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEDATAITEM_SET_ARCHIVESLOTINDEX_OFFSET))(this, a1);
		}

		::RPG::Client::RogueTournBuildRefUnionIndex get_UnionIndex()
		{
			return ((::RPG::Client::RogueTournBuildRefUnionIndex(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEDATAITEM_GET_UNIONINDEX_OFFSET))(this);
		}

		::System::UInt32 get_MainTournID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEDATAITEM_GET_MAINTOURNID_OFFSET))(this);
		}

		::System::Void set_MainTournID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEDATAITEM_SET_MAINTOURNID_OFFSET))(this, a1);
		}

		::System::UInt32 get_SubTournID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEDATAITEM_GET_SUBTOURNID_OFFSET))(this);
		}

		::System::Void set_SubTournID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEDATAITEM_SET_SUBTOURNID_OFFSET))(this, a1);
		}

		::System::String* get_Title()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEDATAITEM_GET_TITLE_OFFSET))(this);
		}

		::System::Void set_Title(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEDATAITEM_SET_TITLE_OFFSET))(this, a1);
		}

		::System::Int64 get_LatestApplyTime()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEDATAITEM_GET_LATESTAPPLYTIME_OFFSET))(this);
		}

		::System::Void set_LatestApplyTime(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEDATAITEM_SET_LATESTAPPLYTIME_OFFSET))(this, a1);
		}

		::RPG::Client::DateTimePro get_LatestApplyDateTime()
		{
			return ((::RPG::Client::DateTimePro(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEDATAITEM_GET_LATESTAPPLYDATETIME_OFFSET))(this);
		}

		::System::Collections::Generic::IList_1<::RPG::Client::RogueTournBuildRefTeamData*>* get_Teams()
		{
			return ((::System::Collections::Generic::IList_1<::RPG::Client::RogueTournBuildRefTeamData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEDATAITEM_GET_TEAMS_OFFSET))(this);
		}

		::System::Collections::Generic::IList_1<::RPG::Client::RogueFormulaData*>* get_EssentialFormulas()
		{
			return ((::System::Collections::Generic::IList_1<::RPG::Client::RogueFormulaData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEDATAITEM_GET_ESSENTIALFORMULAS_OFFSET))(this);
		}

		::System::Collections::Generic::IList_1<::RPG::Client::RogueFormulaData*>* get_OptionalFormulas()
		{
			return ((::System::Collections::Generic::IList_1<::RPG::Client::RogueFormulaData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEDATAITEM_GET_OPTIONALFORMULAS_OFFSET))(this);
		}

		::System::Collections::Generic::IList_1<::RPG::Client::RogueTournHexData*>* get_EssentialHexMiracles()
		{
			return ((::System::Collections::Generic::IList_1<::RPG::Client::RogueTournHexData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEDATAITEM_GET_ESSENTIALHEXMIRACLES_OFFSET))(this);
		}

		::System::Collections::Generic::IList_1<::RPG::Client::RogueTournHexData*>* get_OptionalHexMiracles()
		{
			return ((::System::Collections::Generic::IList_1<::RPG::Client::RogueTournHexData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEDATAITEM_GET_OPTIONALHEXMIRACLES_OFFSET))(this);
		}

		static ::System::UInt32 get_MaxTitleLengthLimit()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEDATAITEM_GET_MAXTITLELENGTHLIMIT_OFFSET))();
		}

	};
}
