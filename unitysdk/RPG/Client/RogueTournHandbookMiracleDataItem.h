#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueMiracleCategory.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
class GNIGKPBJFOO;
namespace RPG::Client { class RogueTournHandbookMiracleDataItem; }
namespace RPG::Client { class RogueTournUnderlineParamInfo; }
namespace RPG::GameCore { class RogueMiracleDisplayRow; }
namespace RPG::GameCore { class RogueMiracleEffectRow; }
namespace RPG::GameCore { class RogueTournHandbookMiracleRow; }
namespace System { class String; }

#define RPG_CLIENT_ROGUETOURNHANDBOOKMIRACLEDATAITEM_CREATE_OFFSET UNITYSDK_OFFSET(0xEA5DFD0)
#define RPG_CLIENT_ROGUETOURNHANDBOOKMIRACLEDATAITEM_CTOR_OFFSET UNITYSDK_OFFSET(0xEA5F790)
#define RPG_CLIENT_ROGUETOURNHANDBOOKMIRACLEDATAITEM_GETDESCUNDERLINEPARAMINFO_OFFSET UNITYSDK_OFFSET(0xEA5FCA0)
#define RPG_CLIENT_ROGUETOURNHANDBOOKMIRACLEDATAITEM_GET_BGDESC_OFFSET UNITYSDK_OFFSET(0xEA5FEF0)
#define RPG_CLIENT_ROGUETOURNHANDBOOKMIRACLEDATAITEM_GET_CATEGORY_OFFSET UNITYSDK_OFFSET(0xEA5FDF0)
#define RPG_CLIENT_ROGUETOURNHANDBOOKMIRACLEDATAITEM_GET_DESC_OFFSET UNITYSDK_OFFSET(0xEA5FE40)
#define RPG_CLIENT_ROGUETOURNHANDBOOKMIRACLEDATAITEM_GET_HANDBOOKMIRACLEID_OFFSET UNITYSDK_OFFSET(0xEA5E060)
#define RPG_CLIENT_ROGUETOURNHANDBOOKMIRACLEDATAITEM_GET_ICON_OFFSET UNITYSDK_OFFSET(0xEA5FD80)
#define RPG_CLIENT_ROGUETOURNHANDBOOKMIRACLEDATAITEM_GET_ISUNLOCKED_OFFSET UNITYSDK_OFFSET(0xEA5FF70)
#define RPG_CLIENT_ROGUETOURNHANDBOOKMIRACLEDATAITEM_GET_NAME_OFFSET UNITYSDK_OFFSET(0xEA5FD00)
#define RPG_CLIENT_ROGUETOURNHANDBOOKMIRACLEDATAITEM_SET_ISUNLOCKED_OFFSET UNITYSDK_OFFSET(0xEA5FF80)
#define RPG_CLIENT_ROGUETOURNHANDBOOKMIRACLEDATAITEM_SYNCUNLOCKED_OFFSET UNITYSDK_OFFSET(0xEA5FC50)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournHandbookMiracleDataItem_TypeDefinitionIndex = 69610;

	class RogueTournHandbookMiracleDataItem : public ::System::Object
	{
	public:
		::RPG::GameCore::RogueTournHandbookMiracleRow* _HandbookMiracleRow; // 0x10
		::RPG::GameCore::RogueMiracleDisplayRow* _MiracleDisplayRow; // 0x18
		::GNIGKPBJFOO* _MiracleDesc; // 0x20
		::RPG::GameCore::RogueMiracleEffectRow* _MiracleEffectRow; // 0x28
		::System::Boolean _IsUnlocked_k__BackingField; // 0x30
		::System::Void _ctor(::RPG::GameCore::RogueTournHandbookMiracleRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueTournHandbookMiracleRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHANDBOOKMIRACLEDATAITEM_CTOR_OFFSET))(this, a1);
		}

		static ::RPG::Client::RogueTournHandbookMiracleDataItem* Create(::System::UInt32 a1)
		{
			return ((::RPG::Client::RogueTournHandbookMiracleDataItem*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHANDBOOKMIRACLEDATAITEM_CREATE_OFFSET))(a1);
		}

		::System::Void SyncUnlocked(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHANDBOOKMIRACLEDATAITEM_SYNCUNLOCKED_OFFSET))(this, a1);
		}

		::RPG::Client::RogueTournUnderlineParamInfo* GetDescUnderlineParamInfo()
		{
			return ((::RPG::Client::RogueTournUnderlineParamInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHANDBOOKMIRACLEDATAITEM_GETDESCUNDERLINEPARAMINFO_OFFSET))(this);
		}

		::System::UInt32 get_HandbookMiracleID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHANDBOOKMIRACLEDATAITEM_GET_HANDBOOKMIRACLEID_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHANDBOOKMIRACLEDATAITEM_GET_NAME_OFFSET))(this);
		}

		::System::String* get_Icon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHANDBOOKMIRACLEDATAITEM_GET_ICON_OFFSET))(this);
		}

		::RPG::GameCore::RogueMiracleCategory get_Category()
		{
			return ((::RPG::GameCore::RogueMiracleCategory(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHANDBOOKMIRACLEDATAITEM_GET_CATEGORY_OFFSET))(this);
		}

		::System::String* get_Desc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHANDBOOKMIRACLEDATAITEM_GET_DESC_OFFSET))(this);
		}

		::RPG::Client::TextID get_BgDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHANDBOOKMIRACLEDATAITEM_GET_BGDESC_OFFSET))(this);
		}

		::System::Boolean get_IsUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHANDBOOKMIRACLEDATAITEM_GET_ISUNLOCKED_OFFSET))(this);
		}

		::System::Void set_IsUnlocked(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHANDBOOKMIRACLEDATAITEM_SET_ISUNLOCKED_OFFSET))(this, a1);
		}

	};
}
