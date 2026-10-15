#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SpecialAvatarType.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define OCALBBHOKCK_CTOR_OFFSET UNITYSDK_OFFSET(0xBD4E340)
#define OCALBBHOKCK_GET_ISAUTOBATTLE_OFFSET UNITYSDK_OFFSET(0xBD4E320)
#define OCALBBHOKCK_GET_ISDISABLESWITCH_OFFSET UNITYSDK_OFFSET(0xBD4E300)
#define OCALBBHOKCK_GET_JSONCONFIGPATH_OFFSET UNITYSDK_OFFSET(0xBD4E2C0)
#define OCALBBHOKCK_GET_LOCKBATTLEINFO_OFFSET UNITYSDK_OFFSET(0xBD4E2A0)
#define OCALBBHOKCK_GET_PLAYERJSONCONFIGPATH_OFFSET UNITYSDK_OFFSET(0xBD4E2E0)
#define OCALBBHOKCK_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xBD4E260)
#define OCALBBHOKCK_GET_WORLDLEVEL_OFFSET UNITYSDK_OFFSET(0xBD4E280)
#define OCALBBHOKCK_SET_ISAUTOBATTLE_OFFSET UNITYSDK_OFFSET(0xBD4E330)
#define OCALBBHOKCK_SET_ISDISABLESWITCH_OFFSET UNITYSDK_OFFSET(0xBD4E310)
#define OCALBBHOKCK_SET_JSONCONFIGPATH_OFFSET UNITYSDK_OFFSET(0xBD4E2D0)
#define OCALBBHOKCK_SET_LOCKBATTLEINFO_OFFSET UNITYSDK_OFFSET(0xBD4E2B0)
#define OCALBBHOKCK_SET_PLAYERJSONCONFIGPATH_OFFSET UNITYSDK_OFFSET(0xBD4E2F0)
#define OCALBBHOKCK_SET_TYPE_OFFSET UNITYSDK_OFFSET(0xBD4E270)
#define OCALBBHOKCK_SET_WORLDLEVEL_OFFSET UNITYSDK_OFFSET(0xBD4E290)

inline static constexpr unsigned int OCALBBHOKCK_TypeDefinitionIndex = 51955;

	class OCALBBHOKCK : public ::System::Object
	{
	public:
		::System::String* _JsonConfigPath_k__BackingField; // 0x10
		::System::String* _PlayerJsonConfigPath_k__BackingField; // 0x18
		::System::UInt32 _WorldLevel_k__BackingField; // 0x20
		::System::Boolean _LockBattleInfo_k__BackingField; // 0x24
		::System::Boolean _IsAutoBattle_k__BackingField; // 0x25
		::System::Boolean _IsDisableSwitch_k__BackingField; // 0x26
		::System::Byte _padding0[0x1];
		::RPG::GameCore::SpecialAvatarType _Type_k__BackingField; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCALBBHOKCK_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::SpecialAvatarType get_Type()
		{
			return ((::RPG::GameCore::SpecialAvatarType(*)(::PVOID))((::PBYTE)hIl2Cpp + OCALBBHOKCK_GET_TYPE_OFFSET))(this);
		}

		::System::Void set_Type(::RPG::GameCore::SpecialAvatarType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SpecialAvatarType))((::PBYTE)hIl2Cpp + OCALBBHOKCK_SET_TYPE_OFFSET))(this, a1);
		}

		::System::UInt32 get_WorldLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OCALBBHOKCK_GET_WORLDLEVEL_OFFSET))(this);
		}

		::System::Void set_WorldLevel(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OCALBBHOKCK_SET_WORLDLEVEL_OFFSET))(this, a1);
		}

		::System::Boolean get_LockBattleInfo()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OCALBBHOKCK_GET_LOCKBATTLEINFO_OFFSET))(this);
		}

		::System::Void set_LockBattleInfo(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OCALBBHOKCK_SET_LOCKBATTLEINFO_OFFSET))(this, a1);
		}

		::System::String* get_JsonConfigPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OCALBBHOKCK_GET_JSONCONFIGPATH_OFFSET))(this);
		}

		::System::Void set_JsonConfigPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + OCALBBHOKCK_SET_JSONCONFIGPATH_OFFSET))(this, a1);
		}

		::System::String* get_PlayerJsonConfigPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OCALBBHOKCK_GET_PLAYERJSONCONFIGPATH_OFFSET))(this);
		}

		::System::Void set_PlayerJsonConfigPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + OCALBBHOKCK_SET_PLAYERJSONCONFIGPATH_OFFSET))(this, a1);
		}

		::System::Boolean get_IsDisableSwitch()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OCALBBHOKCK_GET_ISDISABLESWITCH_OFFSET))(this);
		}

		::System::Void set_IsDisableSwitch(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OCALBBHOKCK_SET_ISDISABLESWITCH_OFFSET))(this, a1);
		}

		::System::Boolean get_IsAutoBattle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OCALBBHOKCK_GET_ISAUTOBATTLE_OFFSET))(this);
		}

		::System::Void set_IsAutoBattle(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OCALBBHOKCK_SET_ISAUTOBATTLE_OFFSET))(this, a1);
		}

	};
