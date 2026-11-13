#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
namespace RPG::Client { class RogueTournHandbookHexDataItem; }
namespace RPG::Client { class RogueTournHexData; }
namespace System { class String; }

#define RPG_CLIENT_ROGUETOURNHANDBOOKHEXDATAITEM_CREATE_OFFSET UNITYSDK_OFFSET(0x1CEB06A0)
#define RPG_CLIENT_ROGUETOURNHANDBOOKHEXDATAITEM_CTOR_OFFSET UNITYSDK_OFFSET(0x1CEB19E0)
#define RPG_CLIENT_ROGUETOURNHANDBOOKHEXDATAITEM_GET_BGDESC_OFFSET UNITYSDK_OFFSET(0x1CEB1CC0)
#define RPG_CLIENT_ROGUETOURNHANDBOOKHEXDATAITEM_GET_DESC_OFFSET UNITYSDK_OFFSET(0x1CEB1B30)
#define RPG_CLIENT_ROGUETOURNHANDBOOKHEXDATAITEM_GET_EXTRAEFFECTIDS_OFFSET UNITYSDK_OFFSET(0x1CEB1D20)
#define RPG_CLIENT_ROGUETOURNHANDBOOKHEXDATAITEM_GET_HEXID_OFFSET UNITYSDK_OFFSET(0x1CEB0730)
#define RPG_CLIENT_ROGUETOURNHANDBOOKHEXDATAITEM_GET_ICON_OFFSET UNITYSDK_OFFSET(0x1CEB1AE0)
#define RPG_CLIENT_ROGUETOURNHANDBOOKHEXDATAITEM_GET_ISUNLOCKED_OFFSET UNITYSDK_OFFSET(0x1CEB1A40)
#define RPG_CLIENT_ROGUETOURNHANDBOOKHEXDATAITEM_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1CEB1A80)
#define RPG_CLIENT_ROGUETOURNHANDBOOKHEXDATAITEM_SYNCUNLOCKED_OFFSET UNITYSDK_OFFSET(0x1CEB19F0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournHandbookHexDataItem_TypeDefinitionIndex = 69609;

	class RogueTournHandbookHexDataItem : public ::System::Object
	{
	public:
		::RPG::Client::RogueTournHexData* _HexData; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHANDBOOKHEXDATAITEM_CTOR_OFFSET))(this);
		}

		static ::RPG::Client::RogueTournHandbookHexDataItem* Create(::System::UInt32 a1)
		{
			return ((::RPG::Client::RogueTournHandbookHexDataItem*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHANDBOOKHEXDATAITEM_CREATE_OFFSET))(a1);
		}

		::System::Void SyncUnlocked(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHANDBOOKHEXDATAITEM_SYNCUNLOCKED_OFFSET))(this, a1);
		}

		::System::Boolean get_IsUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHANDBOOKHEXDATAITEM_GET_ISUNLOCKED_OFFSET))(this);
		}

		::System::UInt32 get_HexID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHANDBOOKHEXDATAITEM_GET_HEXID_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHANDBOOKHEXDATAITEM_GET_NAME_OFFSET))(this);
		}

		::System::String* get_Icon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHANDBOOKHEXDATAITEM_GET_ICON_OFFSET))(this);
		}

		::System::String* get_Desc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHANDBOOKHEXDATAITEM_GET_DESC_OFFSET))(this);
		}

		::RPG::Client::TextID get_BgDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHANDBOOKHEXDATAITEM_GET_BGDESC_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_ExtraEffectIDs()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHANDBOOKHEXDATAITEM_GET_EXTRAEFFECTIDS_OFFSET))(this);
		}

	};
}
