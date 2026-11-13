#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JPJAJPOGCJJ.h"
#include "unitysdk/LKFBIALLBDK.h"
#include "unitysdk/System/Object.h"
class FMHEHLIFNGJ;
class LMLNNHKJEIP;
namespace RPG::Client { class LobbyMemberData; }
namespace RPG::Client { class PlayerPlatformInfo; }
namespace System { class String; }

#define RPG_CLIENT_LOBBYMEMBERDATA_CREATE_1_OFFSET UNITYSDK_OFFSET(0x1CDE3750)
#define RPG_CLIENT_LOBBYMEMBERDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x1CDE34A0)
#define RPG_CLIENT_LOBBYMEMBERDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1CDE35E0)
#define RPG_CLIENT_LOBBYMEMBERDATA_GET_CHARACTERTYPE_OFFSET UNITYSDK_OFFSET(0x1CDE3AE0)
#define RPG_CLIENT_LOBBYMEMBERDATA_GET_EXTRAINFO_OFFSET UNITYSDK_OFFSET(0x1CDE3B40)
#define RPG_CLIENT_LOBBYMEMBERDATA_GET_HEADICONID_OFFSET UNITYSDK_OFFSET(0x1CDE3A30)
#define RPG_CLIENT_LOBBYMEMBERDATA_GET_HEADICONPATH_OFFSET UNITYSDK_OFFSET(0x1CDE3A50)
#define RPG_CLIENT_LOBBYMEMBERDATA_GET_ISLEADER_OFFSET UNITYSDK_OFFSET(0x1CDE3C10)
#define RPG_CLIENT_LOBBYMEMBERDATA_GET_ISREADY_OFFSET UNITYSDK_OFFSET(0x1CDE3C60)
#define RPG_CLIENT_LOBBYMEMBERDATA_GET_ISSELF_OFFSET UNITYSDK_OFFSET(0x1CDE3B60)
#define RPG_CLIENT_LOBBYMEMBERDATA_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x1CDE39F0)
#define RPG_CLIENT_LOBBYMEMBERDATA_GET_NICKNAME_OFFSET UNITYSDK_OFFSET(0x1CDE3A10)
#define RPG_CLIENT_LOBBYMEMBERDATA_GET_PLATFORMINFO_OFFSET UNITYSDK_OFFSET(0x1CDE3B20)
#define RPG_CLIENT_LOBBYMEMBERDATA_GET_STATUSTYPE_OFFSET UNITYSDK_OFFSET(0x1CDE3B00)
#define RPG_CLIENT_LOBBYMEMBERDATA_GET_UID_OFFSET UNITYSDK_OFFSET(0x1CDE39D0)
#define RPG_CLIENT_LOBBYMEMBERDATA_SETHEADICONID_OFFSET UNITYSDK_OFFSET(0x1CDE3980)
#define RPG_CLIENT_LOBBYMEMBERDATA_SETNICKNAME_OFFSET UNITYSDK_OFFSET(0x1CDE3930)
#define RPG_CLIENT_LOBBYMEMBERDATA_SET_CHARACTERTYPE_OFFSET UNITYSDK_OFFSET(0x1CDE3AF0)
#define RPG_CLIENT_LOBBYMEMBERDATA_SET_EXTRAINFO_OFFSET UNITYSDK_OFFSET(0x1CDE3B50)
#define RPG_CLIENT_LOBBYMEMBERDATA_SET_HEADICONID_OFFSET UNITYSDK_OFFSET(0x1CDE3A40)
#define RPG_CLIENT_LOBBYMEMBERDATA_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0x1CDE3A00)
#define RPG_CLIENT_LOBBYMEMBERDATA_SET_NICKNAME_OFFSET UNITYSDK_OFFSET(0x1CDE3A20)
#define RPG_CLIENT_LOBBYMEMBERDATA_SET_PLATFORMINFO_OFFSET UNITYSDK_OFFSET(0x1CDE3B30)
#define RPG_CLIENT_LOBBYMEMBERDATA_SET_STATUSTYPE_OFFSET UNITYSDK_OFFSET(0x1CDE3B10)
#define RPG_CLIENT_LOBBYMEMBERDATA_SET_UID_OFFSET UNITYSDK_OFFSET(0x1CDE39E0)
#define RPG_CLIENT_LOBBYMEMBERDATA_SYNCINFO_OFFSET UNITYSDK_OFFSET(0x1CDE3690)

namespace RPG::Client
{
	inline static constexpr unsigned int LobbyMemberData_TypeDefinitionIndex = 67711;

	class LobbyMemberData : public ::System::Object
	{
	public:
		::System::String* _NickName_k__BackingField; // 0x10
		::FMHEHLIFNGJ* _ExtraInfo_k__BackingField; // 0x18
		::RPG::Client::PlayerPlatformInfo* _PlatformInfo_k__BackingField; // 0x20
		::System::UInt32 _Level_k__BackingField; // 0x28
		::LKFBIALLBDK _CharacterType_k__BackingField; // 0x2C
		::JPJAJPOGCJJ _StatusType_k__BackingField; // 0x30
		::System::UInt32 _UID_k__BackingField; // 0x34
		::System::UInt32 _HeadIconID_k__BackingField; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMEMBERDATA_CTOR_OFFSET))(this);
		}

		static ::RPG::Client::LobbyMemberData* Create(::LMLNNHKJEIP* a1)
		{
			return ((::RPG::Client::LobbyMemberData*(*)(::LMLNNHKJEIP*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMEMBERDATA_CREATE_OFFSET))(a1);
		}

		static ::RPG::Client::LobbyMemberData* Create_1(::System::String* a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4, ::System::UInt32 a5)
		{
			return ((::RPG::Client::LobbyMemberData*(*)(::System::String*, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMEMBERDATA_CREATE_1_OFFSET))(a1, a2, a3, a4, a5);
		}

		::System::Void SyncInfo(::LMLNNHKJEIP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LMLNNHKJEIP*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMEMBERDATA_SYNCINFO_OFFSET))(this, a1);
		}

		::System::Void SetNickName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMEMBERDATA_SETNICKNAME_OFFSET))(this, a1);
		}

		::System::Void SetHeadIconID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMEMBERDATA_SETHEADICONID_OFFSET))(this, a1);
		}

		::System::UInt32 get_UID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMEMBERDATA_GET_UID_OFFSET))(this);
		}

		::System::Void set_UID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMEMBERDATA_SET_UID_OFFSET))(this, a1);
		}

		::System::UInt32 get_Level()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMEMBERDATA_GET_LEVEL_OFFSET))(this);
		}

		::System::Void set_Level(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMEMBERDATA_SET_LEVEL_OFFSET))(this, a1);
		}

		::System::String* get_NickName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMEMBERDATA_GET_NICKNAME_OFFSET))(this);
		}

		::System::Void set_NickName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMEMBERDATA_SET_NICKNAME_OFFSET))(this, a1);
		}

		::System::UInt32 get_HeadIconID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMEMBERDATA_GET_HEADICONID_OFFSET))(this);
		}

		::System::Void set_HeadIconID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMEMBERDATA_SET_HEADICONID_OFFSET))(this, a1);
		}

		::System::String* get_HeadIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMEMBERDATA_GET_HEADICONPATH_OFFSET))(this);
		}

		::LKFBIALLBDK get_CharacterType()
		{
			return ((::LKFBIALLBDK(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMEMBERDATA_GET_CHARACTERTYPE_OFFSET))(this);
		}

		::System::Void set_CharacterType(::LKFBIALLBDK a1)
		{
			return ((::System::Void(*)(::PVOID, ::LKFBIALLBDK))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMEMBERDATA_SET_CHARACTERTYPE_OFFSET))(this, a1);
		}

		::JPJAJPOGCJJ get_StatusType()
		{
			return ((::JPJAJPOGCJJ(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMEMBERDATA_GET_STATUSTYPE_OFFSET))(this);
		}

		::System::Void set_StatusType(::JPJAJPOGCJJ a1)
		{
			return ((::System::Void(*)(::PVOID, ::JPJAJPOGCJJ))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMEMBERDATA_SET_STATUSTYPE_OFFSET))(this, a1);
		}

		::RPG::Client::PlayerPlatformInfo* get_PlatformInfo()
		{
			return ((::RPG::Client::PlayerPlatformInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMEMBERDATA_GET_PLATFORMINFO_OFFSET))(this);
		}

		::System::Void set_PlatformInfo(::RPG::Client::PlayerPlatformInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PlayerPlatformInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMEMBERDATA_SET_PLATFORMINFO_OFFSET))(this, a1);
		}

		::FMHEHLIFNGJ* get_ExtraInfo()
		{
			return ((::FMHEHLIFNGJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMEMBERDATA_GET_EXTRAINFO_OFFSET))(this);
		}

		::System::Void set_ExtraInfo(::FMHEHLIFNGJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FMHEHLIFNGJ*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMEMBERDATA_SET_EXTRAINFO_OFFSET))(this, a1);
		}

		::System::Boolean get_IsSelf()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMEMBERDATA_GET_ISSELF_OFFSET))(this);
		}

		::System::Boolean get_IsLeader()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMEMBERDATA_GET_ISLEADER_OFFSET))(this);
		}

		::System::Boolean get_IsReady()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMEMBERDATA_GET_ISREADY_OFFSET))(this);
		}

	};
}
