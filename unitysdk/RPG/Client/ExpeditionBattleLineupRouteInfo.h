#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ONKDAPOKGAC;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }

#define RPG_CLIENT_EXPEDITIONBATTLELINEUPROUTEINFO_CTOR_OFFSET UNITYSDK_OFFSET(0xCE49EE0)
#define RPG_CLIENT_EXPEDITIONBATTLELINEUPROUTEINFO_GET_AVATARLIST_OFFSET UNITYSDK_OFFSET(0xCE49EC0)
#define RPG_CLIENT_EXPEDITIONBATTLELINEUPROUTEINFO_GET_COMPLETIONROUND_OFFSET UNITYSDK_OFFSET(0xCE49EA0)
#define RPG_CLIENT_EXPEDITIONBATTLELINEUPROUTEINFO_GET_LASTLEVELPERCENT_OFFSET UNITYSDK_OFFSET(0xCE49E80)
#define RPG_CLIENT_EXPEDITIONBATTLELINEUPROUTEINFO_GET_PASSEDLEVEL_OFFSET UNITYSDK_OFFSET(0xCE49E60)
#define RPG_CLIENT_EXPEDITIONBATTLELINEUPROUTEINFO_GET_ROUTEID_OFFSET UNITYSDK_OFFSET(0xCE49E40)
#define RPG_CLIENT_EXPEDITIONBATTLELINEUPROUTEINFO_SET_AVATARLIST_OFFSET UNITYSDK_OFFSET(0xCE49ED0)
#define RPG_CLIENT_EXPEDITIONBATTLELINEUPROUTEINFO_SET_COMPLETIONROUND_OFFSET UNITYSDK_OFFSET(0xCE49EB0)
#define RPG_CLIENT_EXPEDITIONBATTLELINEUPROUTEINFO_SET_LASTLEVELPERCENT_OFFSET UNITYSDK_OFFSET(0xCE49E90)
#define RPG_CLIENT_EXPEDITIONBATTLELINEUPROUTEINFO_SET_PASSEDLEVEL_OFFSET UNITYSDK_OFFSET(0xCE49E70)
#define RPG_CLIENT_EXPEDITIONBATTLELINEUPROUTEINFO_SET_ROUTEID_OFFSET UNITYSDK_OFFSET(0xCE49E50)

namespace RPG::Client
{
	class ExpeditionBattleLineupRouteInfo : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::ONKDAPOKGAC*>* _AvatarList_k__BackingField; // 0x10
		::System::UInt32 _PassedLevel_k__BackingField; // 0x18
		::System::UInt32 _LastLevelPercent_k__BackingField; // 0x1C
		::System::UInt32 _CompletionRound_k__BackingField; // 0x20
		::System::UInt32 _RouteId_k__BackingField; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLELINEUPROUTEINFO_CTOR_OFFSET))(this);
		}

		::System::UInt32 get_RouteId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLELINEUPROUTEINFO_GET_ROUTEID_OFFSET))(this);
		}

		::System::Void set_RouteId(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLELINEUPROUTEINFO_SET_ROUTEID_OFFSET))(this, a1);
		}

		::System::UInt32 get_PassedLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLELINEUPROUTEINFO_GET_PASSEDLEVEL_OFFSET))(this);
		}

		::System::Void set_PassedLevel(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLELINEUPROUTEINFO_SET_PASSEDLEVEL_OFFSET))(this, a1);
		}

		::System::UInt32 get_LastLevelPercent()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLELINEUPROUTEINFO_GET_LASTLEVELPERCENT_OFFSET))(this);
		}

		::System::Void set_LastLevelPercent(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLELINEUPROUTEINFO_SET_LASTLEVELPERCENT_OFFSET))(this, a1);
		}

		::System::UInt32 get_CompletionRound()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLELINEUPROUTEINFO_GET_COMPLETIONROUND_OFFSET))(this);
		}

		::System::Void set_CompletionRound(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLELINEUPROUTEINFO_SET_COMPLETIONROUND_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::ONKDAPOKGAC*>* get_AvatarList()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::ONKDAPOKGAC*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLELINEUPROUTEINFO_GET_AVATARLIST_OFFSET))(this);
		}

		::System::Void set_AvatarList(::Google::Protobuf::Collections::RepeatedField_1<::ONKDAPOKGAC*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::ONKDAPOKGAC*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLELINEUPROUTEINFO_SET_AVATARLIST_OFFSET))(this, a1);
		}

	};
}
