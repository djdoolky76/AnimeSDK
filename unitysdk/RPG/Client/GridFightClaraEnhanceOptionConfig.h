#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/GridFightClaraEnhanceCategory.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightClaraEnhanceOptionConfig; }
namespace RPG::GameCore { class GridFightClaraEnhanceConfigRow; }
namespace System { class String; }

#define RPG_CLIENT_GRIDFIGHTCLARAENHANCEOPTIONCONFIG_CREATEBATCHEDDISPLAY_OFFSET UNITYSDK_OFFSET(0xDA94400)
#define RPG_CLIENT_GRIDFIGHTCLARAENHANCEOPTIONCONFIG_CREATE_1_OFFSET UNITYSDK_OFFSET(0xDA94D70)
#define RPG_CLIENT_GRIDFIGHTCLARAENHANCEOPTIONCONFIG_CREATE_OFFSET UNITYSDK_OFFSET(0xDA94760)
#define RPG_CLIENT_GRIDFIGHTCLARAENHANCEOPTIONCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0xDA95420)
#define RPG_CLIENT_GRIDFIGHTCLARAENHANCEOPTIONCONFIG_GET_CATEGORY_OFFSET UNITYSDK_OFFSET(0xDA95450)
#define RPG_CLIENT_GRIDFIGHTCLARAENHANCEOPTIONCONFIG_GET_COST_OFFSET UNITYSDK_OFFSET(0xDA95470)
#define RPG_CLIENT_GRIDFIGHTCLARAENHANCEOPTIONCONFIG_GET_DESC_OFFSET UNITYSDK_OFFSET(0xDA954B0)
#define RPG_CLIENT_GRIDFIGHTCLARAENHANCEOPTIONCONFIG_GET_EFFECTPARAM_OFFSET UNITYSDK_OFFSET(0xDA95570)
#define RPG_CLIENT_GRIDFIGHTCLARAENHANCEOPTIONCONFIG_GET_ID_OFFSET UNITYSDK_OFFSET(0xDA95430)
#define RPG_CLIENT_GRIDFIGHTCLARAENHANCEOPTIONCONFIG_GET_LIMIT_OFFSET UNITYSDK_OFFSET(0xDA95490)
#define RPG_CLIENT_GRIDFIGHTCLARAENHANCEOPTIONCONFIG_GET_NAME_OFFSET UNITYSDK_OFFSET(0xDA954D0)
#define RPG_CLIENT_GRIDFIGHTCLARAENHANCEOPTIONCONFIG_GET_PARAM0_OFFSET UNITYSDK_OFFSET(0xDA94390)
#define RPG_CLIENT_GRIDFIGHTCLARAENHANCEOPTIONCONFIG_GET_PARAMLIST_OFFSET UNITYSDK_OFFSET(0xDA95590)
#define RPG_CLIENT_GRIDFIGHTCLARAENHANCEOPTIONCONFIG_GET_SELECTDESC_OFFSET UNITYSDK_OFFSET(0xDA95530)
#define RPG_CLIENT_GRIDFIGHTCLARAENHANCEOPTIONCONFIG_GET_SELECTDISPLAYDESCULTRA_OFFSET UNITYSDK_OFFSET(0xDA956D0)
#define RPG_CLIENT_GRIDFIGHTCLARAENHANCEOPTIONCONFIG_GET_SELECTDISPLAYDESC_OFFSET UNITYSDK_OFFSET(0xDA95610)
#define RPG_CLIENT_GRIDFIGHTCLARAENHANCEOPTIONCONFIG_GET_SELECTDISPLAYNAME_OFFSET UNITYSDK_OFFSET(0xDA955B0)
#define RPG_CLIENT_GRIDFIGHTCLARAENHANCEOPTIONCONFIG_GET_SELECTDISPLAYSIMPLEDESCULTRA_OFFSET UNITYSDK_OFFSET(0xDA956F0)
#define RPG_CLIENT_GRIDFIGHTCLARAENHANCEOPTIONCONFIG_GET_SELECTDISPLAYSIMPLEDESC_OFFSET UNITYSDK_OFFSET(0xDA95670)
#define RPG_CLIENT_GRIDFIGHTCLARAENHANCEOPTIONCONFIG_GET_SELECTNAME_OFFSET UNITYSDK_OFFSET(0xDA95510)
#define RPG_CLIENT_GRIDFIGHTCLARAENHANCEOPTIONCONFIG_GET_SELECTSIMPLEDESC_OFFSET UNITYSDK_OFFSET(0xDA95550)
#define RPG_CLIENT_GRIDFIGHTCLARAENHANCEOPTIONCONFIG_GET_SIMPLEDESC_OFFSET UNITYSDK_OFFSET(0xDA954F0)
#define RPG_CLIENT_GRIDFIGHTCLARAENHANCEOPTIONCONFIG_GET_STATENAME_OFFSET UNITYSDK_OFFSET(0xDA95710)
#define RPG_CLIENT_GRIDFIGHTCLARAENHANCEOPTIONCONFIG_SET_CATEGORY_OFFSET UNITYSDK_OFFSET(0xDA95460)
#define RPG_CLIENT_GRIDFIGHTCLARAENHANCEOPTIONCONFIG_SET_COST_OFFSET UNITYSDK_OFFSET(0xDA95480)
#define RPG_CLIENT_GRIDFIGHTCLARAENHANCEOPTIONCONFIG_SET_DESC_OFFSET UNITYSDK_OFFSET(0xDA954C0)
#define RPG_CLIENT_GRIDFIGHTCLARAENHANCEOPTIONCONFIG_SET_EFFECTPARAM_OFFSET UNITYSDK_OFFSET(0xDA95580)
#define RPG_CLIENT_GRIDFIGHTCLARAENHANCEOPTIONCONFIG_SET_ID_OFFSET UNITYSDK_OFFSET(0xDA95440)
#define RPG_CLIENT_GRIDFIGHTCLARAENHANCEOPTIONCONFIG_SET_LIMIT_OFFSET UNITYSDK_OFFSET(0xDA954A0)
#define RPG_CLIENT_GRIDFIGHTCLARAENHANCEOPTIONCONFIG_SET_NAME_OFFSET UNITYSDK_OFFSET(0xDA954E0)
#define RPG_CLIENT_GRIDFIGHTCLARAENHANCEOPTIONCONFIG_SET_PARAMLIST_OFFSET UNITYSDK_OFFSET(0xDA955A0)
#define RPG_CLIENT_GRIDFIGHTCLARAENHANCEOPTIONCONFIG_SET_SELECTDESC_OFFSET UNITYSDK_OFFSET(0xDA95540)
#define RPG_CLIENT_GRIDFIGHTCLARAENHANCEOPTIONCONFIG_SET_SELECTDISPLAYDESCULTRA_OFFSET UNITYSDK_OFFSET(0xDA956E0)
#define RPG_CLIENT_GRIDFIGHTCLARAENHANCEOPTIONCONFIG_SET_SELECTDISPLAYSIMPLEDESCULTRA_OFFSET UNITYSDK_OFFSET(0xDA95700)
#define RPG_CLIENT_GRIDFIGHTCLARAENHANCEOPTIONCONFIG_SET_SELECTNAME_OFFSET UNITYSDK_OFFSET(0xDA95520)
#define RPG_CLIENT_GRIDFIGHTCLARAENHANCEOPTIONCONFIG_SET_SELECTSIMPLEDESC_OFFSET UNITYSDK_OFFSET(0xDA95560)
#define RPG_CLIENT_GRIDFIGHTCLARAENHANCEOPTIONCONFIG_SET_SIMPLEDESC_OFFSET UNITYSDK_OFFSET(0xDA95500)
#define RPG_CLIENT_GRIDFIGHTCLARAENHANCEOPTIONCONFIG__GETULTRAPARAMLIST_OFFSET UNITYSDK_OFFSET(0xDA95380)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightClaraEnhanceOptionConfig_TypeDefinitionIndex = 67295;

	class GridFightClaraEnhanceOptionConfig : public ::System::Object
	{
	public:
		::System::String* _Name_k__BackingField; // 0x10
		::System::String* _SelectDesc_k__BackingField; // 0x18
		::System::String* _SelectDisplaySimpleDescUltra_k__BackingField; // 0x20
		::System::String* _SelectSimpleDesc_k__BackingField; // 0x28
		::System::String* _SimpleDesc_k__BackingField; // 0x30
		::System::String* _SelectDisplayDescUltra_k__BackingField; // 0x38
		::Il2CppArray<::RPG::GameCore::FixPoint>* _ParamList_k__BackingField; // 0x40
		::System::String* _SelectName_k__BackingField; // 0x48
		::System::String* _Desc_k__BackingField; // 0x50
		::System::UInt32 _Limit_k__BackingField; // 0x58
		::System::UInt32 _Cost_k__BackingField; // 0x5C
		::System::UInt32 _ID_k__BackingField; // 0x60
		::RPG::GameCore::GridFightClaraEnhanceCategory _Category_k__BackingField; // 0x64
		::System::UInt32 _EffectParam_k__BackingField; // 0x68
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCLARAENHANCEOPTIONCONFIG_CTOR_OFFSET))(this);
		}

		static ::RPG::Client::GridFightClaraEnhanceOptionConfig* Create(::RPG::GameCore::GridFightClaraEnhanceConfigRow* a1)
		{
			return ((::RPG::Client::GridFightClaraEnhanceOptionConfig*(*)(::RPG::GameCore::GridFightClaraEnhanceConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCLARAENHANCEOPTIONCONFIG_CREATE_OFFSET))(a1);
		}

		static ::RPG::Client::GridFightClaraEnhanceOptionConfig* CreateBatchedDisplay(::RPG::Client::GridFightClaraEnhanceOptionConfig* a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::RPG::Client::GridFightClaraEnhanceOptionConfig*(*)(::RPG::Client::GridFightClaraEnhanceOptionConfig*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCLARAENHANCEOPTIONCONFIG_CREATEBATCHEDDISPLAY_OFFSET))(a1, a2);
		}

		static ::RPG::Client::GridFightClaraEnhanceOptionConfig* Create_1(::RPG::GameCore::GridFightClaraEnhanceConfigRow* a1, ::Il2CppArray<::RPG::GameCore::FixPoint>* a2)
		{
			return ((::RPG::Client::GridFightClaraEnhanceOptionConfig*(*)(::RPG::GameCore::GridFightClaraEnhanceConfigRow*, ::Il2CppArray<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCLARAENHANCEOPTIONCONFIG_CREATE_1_OFFSET))(a1, a2);
		}

		static ::Il2CppArray<::RPG::GameCore::FixPoint>* _GetUltraParamList(::RPG::GameCore::GridFightClaraEnhanceConfigRow* a1, ::Il2CppArray<::RPG::GameCore::FixPoint>* a2)
		{
			return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::RPG::GameCore::GridFightClaraEnhanceConfigRow*, ::Il2CppArray<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCLARAENHANCEOPTIONCONFIG__GETULTRAPARAMLIST_OFFSET))(a1, a2);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCLARAENHANCEOPTIONCONFIG_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCLARAENHANCEOPTIONCONFIG_SET_ID_OFFSET))(this, a1);
		}

		::RPG::GameCore::GridFightClaraEnhanceCategory get_Category()
		{
			return ((::RPG::GameCore::GridFightClaraEnhanceCategory(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCLARAENHANCEOPTIONCONFIG_GET_CATEGORY_OFFSET))(this);
		}

		::System::Void set_Category(::RPG::GameCore::GridFightClaraEnhanceCategory a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GridFightClaraEnhanceCategory))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCLARAENHANCEOPTIONCONFIG_SET_CATEGORY_OFFSET))(this, a1);
		}

		::System::UInt32 get_Cost()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCLARAENHANCEOPTIONCONFIG_GET_COST_OFFSET))(this);
		}

		::System::Void set_Cost(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCLARAENHANCEOPTIONCONFIG_SET_COST_OFFSET))(this, a1);
		}

		::System::UInt32 get_Limit()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCLARAENHANCEOPTIONCONFIG_GET_LIMIT_OFFSET))(this);
		}

		::System::Void set_Limit(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCLARAENHANCEOPTIONCONFIG_SET_LIMIT_OFFSET))(this, a1);
		}

		::System::String* get_Desc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCLARAENHANCEOPTIONCONFIG_GET_DESC_OFFSET))(this);
		}

		::System::Void set_Desc(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCLARAENHANCEOPTIONCONFIG_SET_DESC_OFFSET))(this, a1);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCLARAENHANCEOPTIONCONFIG_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCLARAENHANCEOPTIONCONFIG_SET_NAME_OFFSET))(this, a1);
		}

		::System::String* get_SimpleDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCLARAENHANCEOPTIONCONFIG_GET_SIMPLEDESC_OFFSET))(this);
		}

		::System::Void set_SimpleDesc(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCLARAENHANCEOPTIONCONFIG_SET_SIMPLEDESC_OFFSET))(this, a1);
		}

		::System::String* get_SelectName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCLARAENHANCEOPTIONCONFIG_GET_SELECTNAME_OFFSET))(this);
		}

		::System::Void set_SelectName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCLARAENHANCEOPTIONCONFIG_SET_SELECTNAME_OFFSET))(this, a1);
		}

		::System::String* get_SelectDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCLARAENHANCEOPTIONCONFIG_GET_SELECTDESC_OFFSET))(this);
		}

		::System::Void set_SelectDesc(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCLARAENHANCEOPTIONCONFIG_SET_SELECTDESC_OFFSET))(this, a1);
		}

		::System::String* get_SelectSimpleDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCLARAENHANCEOPTIONCONFIG_GET_SELECTSIMPLEDESC_OFFSET))(this);
		}

		::System::Void set_SelectSimpleDesc(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCLARAENHANCEOPTIONCONFIG_SET_SELECTSIMPLEDESC_OFFSET))(this, a1);
		}

		::System::UInt32 get_EffectParam()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCLARAENHANCEOPTIONCONFIG_GET_EFFECTPARAM_OFFSET))(this);
		}

		::System::Void set_EffectParam(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCLARAENHANCEOPTIONCONFIG_SET_EFFECTPARAM_OFFSET))(this, a1);
		}

		::Il2CppArray<::RPG::GameCore::FixPoint>* get_ParamList()
		{
			return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCLARAENHANCEOPTIONCONFIG_GET_PARAMLIST_OFFSET))(this);
		}

		::System::Void set_ParamList(::Il2CppArray<::RPG::GameCore::FixPoint>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCLARAENHANCEOPTIONCONFIG_SET_PARAMLIST_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint get_Param0()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCLARAENHANCEOPTIONCONFIG_GET_PARAM0_OFFSET))(this);
		}

		::System::String* get_SelectDisplayName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCLARAENHANCEOPTIONCONFIG_GET_SELECTDISPLAYNAME_OFFSET))(this);
		}

		::System::String* get_SelectDisplayDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCLARAENHANCEOPTIONCONFIG_GET_SELECTDISPLAYDESC_OFFSET))(this);
		}

		::System::String* get_SelectDisplaySimpleDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCLARAENHANCEOPTIONCONFIG_GET_SELECTDISPLAYSIMPLEDESC_OFFSET))(this);
		}

		::System::String* get_SelectDisplayDescUltra()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCLARAENHANCEOPTIONCONFIG_GET_SELECTDISPLAYDESCULTRA_OFFSET))(this);
		}

		::System::Void set_SelectDisplayDescUltra(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCLARAENHANCEOPTIONCONFIG_SET_SELECTDISPLAYDESCULTRA_OFFSET))(this, a1);
		}

		::System::String* get_SelectDisplaySimpleDescUltra()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCLARAENHANCEOPTIONCONFIG_GET_SELECTDISPLAYSIMPLEDESCULTRA_OFFSET))(this);
		}

		::System::Void set_SelectDisplaySimpleDescUltra(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCLARAENHANCEOPTIONCONFIG_SET_SELECTDISPLAYSIMPLEDESCULTRA_OFFSET))(this, a1);
		}

		::System::String* get_StateName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCLARAENHANCEOPTIONCONFIG_GET_STATENAME_OFFSET))(this);
		}

	};
}
