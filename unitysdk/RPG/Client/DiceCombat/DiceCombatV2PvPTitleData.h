#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FGHCFBENCAN;
class LPGJPLMHKFL;
namespace RPG::Client::DiceCombat { class DiceCombatV2PvPTitleData; }
namespace System { class String; }

#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVPTITLEDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x1C537E30)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVPTITLEDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1C537FD0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVPTITLEDATA_GET_BGCOLOR_OFFSET UNITYSDK_OFFSET(0x1C538020)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVPTITLEDATA_GET_DESC_OFFSET UNITYSDK_OFFSET(0x1C538000)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVPTITLEDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1C537FE0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVPTITLEDATA_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x1C538070)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVPTITLEDATA_SET_DESC_OFFSET UNITYSDK_OFFSET(0x1C538010)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVPTITLEDATA_SET_NAME_OFFSET UNITYSDK_OFFSET(0x1C537FF0)

namespace RPG::Client::DiceCombat
{
	inline static constexpr unsigned int DiceCombatV2PvPTitleData_TypeDefinitionIndex = 78482;

	class DiceCombatV2PvPTitleData : public ::System::Object
	{
	public:
		::System::String* _Desc_k__BackingField; // 0x10
		::FGHCFBENCAN* _Row; // 0x18
		::System::String* _Name_k__BackingField; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVPTITLEDATA_CTOR_OFFSET))(this);
		}

		static ::RPG::Client::DiceCombat::DiceCombatV2PvPTitleData* Create(::LPGJPLMHKFL* a1)
		{
			return ((::RPG::Client::DiceCombat::DiceCombatV2PvPTitleData*(*)(::LPGJPLMHKFL*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVPTITLEDATA_CREATE_OFFSET))(a1);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVPTITLEDATA_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVPTITLEDATA_SET_NAME_OFFSET))(this, a1);
		}

		::System::String* get_Desc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVPTITLEDATA_GET_DESC_OFFSET))(this);
		}

		::System::Void set_Desc(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVPTITLEDATA_SET_DESC_OFFSET))(this, a1);
		}

		::System::String* get_BgColor()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVPTITLEDATA_GET_BGCOLOR_OFFSET))(this);
		}

		::System::UInt32 get_Priority()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVPTITLEDATA_GET_PRIORITY_OFFSET))(this);
		}

	};
}
