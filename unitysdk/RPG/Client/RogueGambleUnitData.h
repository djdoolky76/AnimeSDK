#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RogueGableRarity.h"
#include "unitysdk/RPG/Client/RogueGambleMode.h"
#include "unitysdk/RPG/Client/RogueGamblePropRarity.h"
#include "unitysdk/RPG/GameCore/RogueGambleUnitType.h"
#include "unitysdk/System/Object.h"
class NEJPAGJBMDA;
namespace RPG::Client { class IRogueMiracle; }
namespace RPG::Client { class RogueMagicUnitDataItem; }
namespace RPG::GameCore { class RogueTournGambleUnitRow; }
namespace System { class String; }

#define RPG_CLIENT_ROGUEGAMBLEUNITDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1CBF90D0)
#define RPG_CLIENT_ROGUEGAMBLEUNITDATA_GET_GAMBLEMODE_OFFSET UNITYSDK_OFFSET(0x1CBFB0B0)
#define RPG_CLIENT_ROGUEGAMBLEUNITDATA_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x1CBF89F0)
#define RPG_CLIENT_ROGUEGAMBLEUNITDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0x1CBFA660)
#define RPG_CLIENT_ROGUEGAMBLEUNITDATA_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x1CBFA680)
#define RPG_CLIENT_ROGUEGAMBLEUNITDATA_GET_ISMAGICUNIT_OFFSET UNITYSDK_OFFSET(0x1CBFB0D0)
#define RPG_CLIENT_ROGUEGAMBLEUNITDATA_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x1CBFA6A0)
#define RPG_CLIENT_ROGUEGAMBLEUNITDATA_GET_MAGICUNITDATA_OFFSET UNITYSDK_OFFSET(0x1CBFA6E0)
#define RPG_CLIENT_ROGUEGAMBLEUNITDATA_GET_MIRACLEDATA_OFFSET UNITYSDK_OFFSET(0x1CBFB030)
#define RPG_CLIENT_ROGUEGAMBLEUNITDATA_GET_MIRACLEICONPATH_OFFSET UNITYSDK_OFFSET(0x1CBFAD90)
#define RPG_CLIENT_ROGUEGAMBLEUNITDATA_GET_MIRACLEID_OFFSET UNITYSDK_OFFSET(0x1CBFA6C0)
#define RPG_CLIENT_ROGUEGAMBLEUNITDATA_GET_PARAM_OFFSET UNITYSDK_OFFSET(0x1CBFACD0)
#define RPG_CLIENT_ROGUEGAMBLEUNITDATA_GET_PROPRARITY_OFFSET UNITYSDK_OFFSET(0x1CBFAB80)
#define RPG_CLIENT_ROGUEGAMBLEUNITDATA_GET_RARITY_OFFSET UNITYSDK_OFFSET(0x1CBFA870)
#define RPG_CLIENT_ROGUEGAMBLEUNITDATA_GET_ROW_OFFSET UNITYSDK_OFFSET(0x1CBFA700)
#define RPG_CLIENT_ROGUEGAMBLEUNITDATA_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1CBFA810)
#define RPG_CLIENT_ROGUEGAMBLEUNITDATA_GET_UNITICONPATH_OFFSET UNITYSDK_OFFSET(0x1CBFAD30)
#define RPG_CLIENT_ROGUEGAMBLEUNITDATA_GET_UNITTEXTUREPARAM_OFFSET UNITYSDK_OFFSET(0x1CBFAFD0)
#define RPG_CLIENT_ROGUEGAMBLEUNITDATA_SET_GAMBLEMODE_OFFSET UNITYSDK_OFFSET(0x1CBFB0C0)
#define RPG_CLIENT_ROGUEGAMBLEUNITDATA_SET_ID_OFFSET UNITYSDK_OFFSET(0x1CBFA670)
#define RPG_CLIENT_ROGUEGAMBLEUNITDATA_SET_INDEX_OFFSET UNITYSDK_OFFSET(0x1CBFA690)
#define RPG_CLIENT_ROGUEGAMBLEUNITDATA_SET_ISMAGICUNIT_OFFSET UNITYSDK_OFFSET(0x1CBFB0E0)
#define RPG_CLIENT_ROGUEGAMBLEUNITDATA_SET_ISVALID_OFFSET UNITYSDK_OFFSET(0x1CBFA6B0)
#define RPG_CLIENT_ROGUEGAMBLEUNITDATA_SET_MAGICUNITDATA_OFFSET UNITYSDK_OFFSET(0x1CBFA6F0)
#define RPG_CLIENT_ROGUEGAMBLEUNITDATA_SET_MIRACLEID_OFFSET UNITYSDK_OFFSET(0x1CBFA6D0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueGambleUnitData_TypeDefinitionIndex = 69173;

	class RogueGambleUnitData : public ::System::Object
	{
	public:
		::RPG::Client::RogueMagicUnitDataItem* _MagicUnitData_k__BackingField; // 0x10
		::RPG::Client::IRogueMiracle* _MiracleData; // 0x18
		::RPG::GameCore::RogueTournGambleUnitRow* _Row; // 0x20
		::System::UInt32 _MiracleID_k__BackingField; // 0x28
		::System::Boolean _IsMagicUnit_k__BackingField; // 0x2C
		::System::Boolean _IsValid_k__BackingField; // 0x2D
		::System::Byte _padding0[0x2];
		::RPG::Client::RogueGambleMode _GambleMode_k__BackingField; // 0x30
		::System::UInt32 _ID_k__BackingField; // 0x34
		::System::UInt32 _Index_k__BackingField; // 0x38
		::System::Void _ctor(::NEJPAGJBMDA* a1, ::System::UInt32 a2, ::RPG::Client::RogueGambleMode a3)
		{
			return ((::System::Void(*)(::PVOID, ::NEJPAGJBMDA*, ::System::UInt32, ::RPG::Client::RogueGambleMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEUNITDATA_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEUNITDATA_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEUNITDATA_SET_ID_OFFSET))(this, a1);
		}

		::System::UInt32 get_Index()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEUNITDATA_GET_INDEX_OFFSET))(this);
		}

		::System::Void set_Index(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEUNITDATA_SET_INDEX_OFFSET))(this, a1);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEUNITDATA_GET_ISVALID_OFFSET))(this);
		}

		::System::Void set_IsValid(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEUNITDATA_SET_ISVALID_OFFSET))(this, a1);
		}

		::System::UInt32 get_MiracleID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEUNITDATA_GET_MIRACLEID_OFFSET))(this);
		}

		::System::Void set_MiracleID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEUNITDATA_SET_MIRACLEID_OFFSET))(this, a1);
		}

		::RPG::Client::RogueMagicUnitDataItem* get_MagicUnitData()
		{
			return ((::RPG::Client::RogueMagicUnitDataItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEUNITDATA_GET_MAGICUNITDATA_OFFSET))(this);
		}

		::System::Void set_MagicUnitData(::RPG::Client::RogueMagicUnitDataItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueMagicUnitDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEUNITDATA_SET_MAGICUNITDATA_OFFSET))(this, a1);
		}

		::RPG::GameCore::RogueTournGambleUnitRow* get_Row()
		{
			return ((::RPG::GameCore::RogueTournGambleUnitRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEUNITDATA_GET_ROW_OFFSET))(this);
		}

		::RPG::GameCore::RogueGambleUnitType get_Type()
		{
			return ((::RPG::GameCore::RogueGambleUnitType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEUNITDATA_GET_TYPE_OFFSET))(this);
		}

		::RPG::Client::RogueGableRarity get_Rarity()
		{
			return ((::RPG::Client::RogueGableRarity(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEUNITDATA_GET_RARITY_OFFSET))(this);
		}

		::RPG::Client::RogueGamblePropRarity get_PropRarity()
		{
			return ((::RPG::Client::RogueGamblePropRarity(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEUNITDATA_GET_PROPRARITY_OFFSET))(this);
		}

		::System::UInt32 get_Param()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEUNITDATA_GET_PARAM_OFFSET))(this);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEUNITDATA_GET_ICONPATH_OFFSET))(this);
		}

		::System::String* get_UnitIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEUNITDATA_GET_UNITICONPATH_OFFSET))(this);
		}

		::System::UInt32 get_UnitTextureParam()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEUNITDATA_GET_UNITTEXTUREPARAM_OFFSET))(this);
		}

		::RPG::Client::IRogueMiracle* get_MiracleData()
		{
			return ((::RPG::Client::IRogueMiracle*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEUNITDATA_GET_MIRACLEDATA_OFFSET))(this);
		}

		::System::String* get_MiracleIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEUNITDATA_GET_MIRACLEICONPATH_OFFSET))(this);
		}

		::RPG::Client::RogueGambleMode get_GambleMode()
		{
			return ((::RPG::Client::RogueGambleMode(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEUNITDATA_GET_GAMBLEMODE_OFFSET))(this);
		}

		::System::Void set_GambleMode(::RPG::Client::RogueGambleMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueGambleMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEUNITDATA_SET_GAMBLEMODE_OFFSET))(this, a1);
		}

		::System::Boolean get_IsMagicUnit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEUNITDATA_GET_ISMAGICUNIT_OFFSET))(this);
		}

		::System::Void set_IsMagicUnit(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEUNITDATA_SET_ISMAGICUNIT_OFFSET))(this, a1);
		}

	};
}
