#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
class NMOMMMGHMOA;
namespace RPG::GameCore { class RogueMagicDifficultyCompRow; }
namespace System { class String; }

#define RPG_CLIENT_ROGUEMAGICDIFFCOMPDATAITEM_CTOR_OFFSET UNITYSDK_OFFSET(0xDF1DDB0)
#define RPG_CLIENT_ROGUEMAGICDIFFCOMPDATAITEM_GET_DESC_OFFSET UNITYSDK_OFFSET(0xDF21EA0)
#define RPG_CLIENT_ROGUEMAGICDIFFCOMPDATAITEM_GET_DIFFCOMPID_OFFSET UNITYSDK_OFFSET(0xDF21E20)
#define RPG_CLIENT_ROGUEMAGICDIFFCOMPDATAITEM_GET_ISUNLOCKED_OFFSET UNITYSDK_OFFSET(0xDF22140)
#define RPG_CLIENT_ROGUEMAGICDIFFCOMPDATAITEM_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0xDF1DDD0)
#define RPG_CLIENT_ROGUEMAGICDIFFCOMPDATAITEM_GET_UNLOCKDESC_OFFSET UNITYSDK_OFFSET(0xDF22030)
#define RPG_CLIENT_ROGUEMAGICDIFFCOMPDATAITEM_GET__ROW_OFFSET UNITYSDK_OFFSET(0xDF21E40)
#define RPG_CLIENT_ROGUEMAGICDIFFCOMPDATAITEM_SET_DIFFCOMPID_OFFSET UNITYSDK_OFFSET(0xDF21E30)
#define RPG_CLIENT_ROGUEMAGICDIFFCOMPDATAITEM_SET_ISUNLOCKED_OFFSET UNITYSDK_OFFSET(0xDF22150)
#define RPG_CLIENT_ROGUEMAGICDIFFCOMPDATAITEM_SYNC_OFFSET UNITYSDK_OFFSET(0xDF1EF20)

namespace RPG::Client
{
	class RogueMagicDiffCompDataItem : public ::System::Object
	{
	public:
		::System::Boolean _IsUnlocked_k__BackingField; // 0x10
		::System::Byte _padding0[0x3];
		::System::UInt32 _DiffCompID_k__BackingField; // 0x14
		::System::Void _ctor(::RPG::GameCore::RogueMagicDifficultyCompRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueMagicDifficultyCompRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICDIFFCOMPDATAITEM_CTOR_OFFSET))(this, a1);
		}

		::System::Void Sync(::NMOMMMGHMOA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NMOMMMGHMOA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICDIFFCOMPDATAITEM_SYNC_OFFSET))(this, a1);
		}

		::System::UInt32 get_DiffCompID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICDIFFCOMPDATAITEM_GET_DIFFCOMPID_OFFSET))(this);
		}

		::System::Void set_DiffCompID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICDIFFCOMPDATAITEM_SET_DIFFCOMPID_OFFSET))(this, a1);
		}

		::System::UInt32 get_Level()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICDIFFCOMPDATAITEM_GET_LEVEL_OFFSET))(this);
		}

		::System::String* get_Desc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICDIFFCOMPDATAITEM_GET_DESC_OFFSET))(this);
		}

		::RPG::Client::TextID get_UnlockDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICDIFFCOMPDATAITEM_GET_UNLOCKDESC_OFFSET))(this);
		}

		::System::Boolean get_IsUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICDIFFCOMPDATAITEM_GET_ISUNLOCKED_OFFSET))(this);
		}

		::System::Void set_IsUnlocked(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICDIFFCOMPDATAITEM_SET_ISUNLOCKED_OFFSET))(this, a1);
		}

		::RPG::GameCore::RogueMagicDifficultyCompRow* get__Row()
		{
			return ((::RPG::GameCore::RogueMagicDifficultyCompRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICDIFFCOMPDATAITEM_GET__ROW_OFFSET))(this);
		}

	};
}
