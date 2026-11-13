#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PONHNPLLKAB.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
class OJDIPBBEIOB;
class OKPIPFKONMG;
namespace RPG::Client { class RogueMagicScepterDataItem; }
namespace RPG::Client { class RogueMagicUnitDataItem; }
namespace RPG::GameCore { class ItemConfig; }
namespace RPG::GameCore { class RogueMagicTalentRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUEMAGICTALENTNODEDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1CB1DE30)
#define RPG_CLIENT_ROGUEMAGICTALENTNODEDATA_GET_CANACTIVE_OFFSET UNITYSDK_OFFSET(0x1CB1E7E0)
#define RPG_CLIENT_ROGUEMAGICTALENTNODEDATA_GET_COSTITEM_OFFSET UNITYSDK_OFFSET(0x1CB1EE30)
#define RPG_CLIENT_ROGUEMAGICTALENTNODEDATA_GET_DESC_OFFSET UNITYSDK_OFFSET(0x1CB1ECA0)
#define RPG_CLIENT_ROGUEMAGICTALENTNODEDATA_GET_DISPLAYSCEPTERS_OFFSET UNITYSDK_OFFSET(0x1CB1EFA0)
#define RPG_CLIENT_ROGUEMAGICTALENTNODEDATA_GET_DISPLAYUNITS_OFFSET UNITYSDK_OFFSET(0x1CB1EFF0)
#define RPG_CLIENT_ROGUEMAGICTALENTNODEDATA_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x1CB1ED90)
#define RPG_CLIENT_ROGUEMAGICTALENTNODEDATA_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x1CB1EAD0)
#define RPG_CLIENT_ROGUEMAGICTALENTNODEDATA_GET_STATUS_OFFSET UNITYSDK_OFFSET(0x1CB1F040)
#define RPG_CLIENT_ROGUEMAGICTALENTNODEDATA_GET_TALENTID_OFFSET UNITYSDK_OFFSET(0x1CB1EB70)
#define RPG_CLIENT_ROGUEMAGICTALENTNODEDATA_GET_TITLE_OFFSET UNITYSDK_OFFSET(0x1CB1EBE0)
#define RPG_CLIENT_ROGUEMAGICTALENTNODEDATA_GET__ROW_OFFSET UNITYSDK_OFFSET(0x1CB1EB80)
#define RPG_CLIENT_ROGUEMAGICTALENTNODEDATA_SET_STATUS_OFFSET UNITYSDK_OFFSET(0x1CB1F050)
#define RPG_CLIENT_ROGUEMAGICTALENTNODEDATA_SYNC_OFFSET UNITYSDK_OFFSET(0x1CB1E490)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueMagicTalentNodeData_TypeDefinitionIndex = 69386;

	class RogueMagicTalentNodeData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::OJDIPBBEIOB*>* _HyperParams; // 0x10
		::System::UInt32 _TalentID_k__BackingField; // 0x18
		::PONHNPLLKAB _Status_k__BackingField; // 0x1C
		::System::Void _ctor(::RPG::GameCore::RogueMagicTalentRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueMagicTalentRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICTALENTNODEDATA_CTOR_OFFSET))(this, a1);
		}

		::System::Void Sync(::OKPIPFKONMG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OKPIPFKONMG*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICTALENTNODEDATA_SYNC_OFFSET))(this, a1);
		}

		::System::UInt32 get_TalentID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICTALENTNODEDATA_GET_TALENTID_OFFSET))(this);
		}

		::System::UInt32 get_Level()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICTALENTNODEDATA_GET_LEVEL_OFFSET))(this);
		}

		::RPG::Client::TextID get_Title()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICTALENTNODEDATA_GET_TITLE_OFFSET))(this);
		}

		::System::String* get_Desc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICTALENTNODEDATA_GET_DESC_OFFSET))(this);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICTALENTNODEDATA_GET_ICONPATH_OFFSET))(this);
		}

		::RPG::GameCore::ItemConfig* get_CostItem()
		{
			return ((::RPG::GameCore::ItemConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICTALENTNODEDATA_GET_COSTITEM_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueMagicScepterDataItem*>* get_DisplayScepters()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueMagicScepterDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICTALENTNODEDATA_GET_DISPLAYSCEPTERS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueMagicUnitDataItem*>* get_DisplayUnits()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueMagicUnitDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICTALENTNODEDATA_GET_DISPLAYUNITS_OFFSET))(this);
		}

		::PONHNPLLKAB get_Status()
		{
			return ((::PONHNPLLKAB(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICTALENTNODEDATA_GET_STATUS_OFFSET))(this);
		}

		::System::Void set_Status(::PONHNPLLKAB a1)
		{
			return ((::System::Void(*)(::PVOID, ::PONHNPLLKAB))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICTALENTNODEDATA_SET_STATUS_OFFSET))(this, a1);
		}

		::System::Boolean get_CanActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICTALENTNODEDATA_GET_CANACTIVE_OFFSET))(this);
		}

		::RPG::GameCore::RogueMagicTalentRow* get__Row()
		{
			return ((::RPG::GameCore::RogueMagicTalentRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICTALENTNODEDATA_GET__ROW_OFFSET))(this);
		}

	};
}
