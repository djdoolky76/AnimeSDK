#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HOIFDJPBGLB.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/RogueMagicMarkType.h"
#include "unitysdk/RPG/GameCore/RogueMagicRoomType.h"
#include "unitysdk/System/Object.h"
class FODHGNLPBKH;
namespace System { class String; }

#define RPG_CLIENT_ROGUEMAGICGAMEROOMINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1CC12C90)
#define RPG_CLIENT_ROGUEMAGICGAMEROOMINFO_GET_MARKTYPE_OFFSET UNITYSDK_OFFSET(0x1CC138E0)
#define RPG_CLIENT_ROGUEMAGICGAMEROOMINFO_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1CC13940)
#define RPG_CLIENT_ROGUEMAGICGAMEROOMINFO_GET_ROOMID_OFFSET UNITYSDK_OFFSET(0x1CC138A0)
#define RPG_CLIENT_ROGUEMAGICGAMEROOMINFO_GET_ROOMINDEX_OFFSET UNITYSDK_OFFSET(0x1CC138C0)
#define RPG_CLIENT_ROGUEMAGICGAMEROOMINFO_GET_ROOMTYPE_OFFSET UNITYSDK_OFFSET(0x1CC13920)
#define RPG_CLIENT_ROGUEMAGICGAMEROOMINFO_GET_STATUS_OFFSET UNITYSDK_OFFSET(0x1CC13900)
#define RPG_CLIENT_ROGUEMAGICGAMEROOMINFO_GET_TOASTICONPATH_OFFSET UNITYSDK_OFFSET(0x1CC13960)
#define RPG_CLIENT_ROGUEMAGICGAMEROOMINFO_SET_MARKTYPE_OFFSET UNITYSDK_OFFSET(0x1CC138F0)
#define RPG_CLIENT_ROGUEMAGICGAMEROOMINFO_SET_NAME_OFFSET UNITYSDK_OFFSET(0x1CC13950)
#define RPG_CLIENT_ROGUEMAGICGAMEROOMINFO_SET_ROOMID_OFFSET UNITYSDK_OFFSET(0x1CC138B0)
#define RPG_CLIENT_ROGUEMAGICGAMEROOMINFO_SET_ROOMINDEX_OFFSET UNITYSDK_OFFSET(0x1CC138D0)
#define RPG_CLIENT_ROGUEMAGICGAMEROOMINFO_SET_ROOMTYPE_OFFSET UNITYSDK_OFFSET(0x1CC13930)
#define RPG_CLIENT_ROGUEMAGICGAMEROOMINFO_SET_STATUS_OFFSET UNITYSDK_OFFSET(0x1CC13910)
#define RPG_CLIENT_ROGUEMAGICGAMEROOMINFO_SET_TOASTICONPATH_OFFSET UNITYSDK_OFFSET(0x1CC13970)
#define RPG_CLIENT_ROGUEMAGICGAMEROOMINFO_SYNC_OFFSET UNITYSDK_OFFSET(0x1CC12CA0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueMagicGameRoomInfo_TypeDefinitionIndex = 69337;

	class RogueMagicGameRoomInfo : public ::System::Object
	{
	public:
		::System::String* _ToastIconPath_k__BackingField; // 0x10
		::RPG::GameCore::RogueMagicRoomType _RoomType_k__BackingField; // 0x18
		::System::UInt32 _RoomIndex_k__BackingField; // 0x1C
		::System::UInt32 _RoomID_k__BackingField; // 0x20
		::HOIFDJPBGLB _Status_k__BackingField; // 0x24
		::RPG::GameCore::RogueMagicMarkType _MarkType_k__BackingField; // 0x28
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID _Name_k__BackingField; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMEROOMINFO_CTOR_OFFSET))(this);
		}

		::System::Void Sync(::FODHGNLPBKH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FODHGNLPBKH*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMEROOMINFO_SYNC_OFFSET))(this, a1);
		}

		::System::UInt32 get_RoomID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMEROOMINFO_GET_ROOMID_OFFSET))(this);
		}

		::System::Void set_RoomID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMEROOMINFO_SET_ROOMID_OFFSET))(this, a1);
		}

		::System::UInt32 get_RoomIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMEROOMINFO_GET_ROOMINDEX_OFFSET))(this);
		}

		::System::Void set_RoomIndex(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMEROOMINFO_SET_ROOMINDEX_OFFSET))(this, a1);
		}

		::RPG::GameCore::RogueMagicMarkType get_MarkType()
		{
			return ((::RPG::GameCore::RogueMagicMarkType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMEROOMINFO_GET_MARKTYPE_OFFSET))(this);
		}

		::System::Void set_MarkType(::RPG::GameCore::RogueMagicMarkType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueMagicMarkType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMEROOMINFO_SET_MARKTYPE_OFFSET))(this, a1);
		}

		::HOIFDJPBGLB get_Status()
		{
			return ((::HOIFDJPBGLB(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMEROOMINFO_GET_STATUS_OFFSET))(this);
		}

		::System::Void set_Status(::HOIFDJPBGLB a1)
		{
			return ((::System::Void(*)(::PVOID, ::HOIFDJPBGLB))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMEROOMINFO_SET_STATUS_OFFSET))(this, a1);
		}

		::RPG::GameCore::RogueMagicRoomType get_RoomType()
		{
			return ((::RPG::GameCore::RogueMagicRoomType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMEROOMINFO_GET_ROOMTYPE_OFFSET))(this);
		}

		::System::Void set_RoomType(::RPG::GameCore::RogueMagicRoomType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueMagicRoomType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMEROOMINFO_SET_ROOMTYPE_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMEROOMINFO_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMEROOMINFO_SET_NAME_OFFSET))(this, a1);
		}

		::System::String* get_ToastIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMEROOMINFO_GET_TOASTICONPATH_OFFSET))(this);
		}

		::System::Void set_ToastIconPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMEROOMINFO_SET_TOASTICONPATH_OFFSET))(this, a1);
		}

	};
}
