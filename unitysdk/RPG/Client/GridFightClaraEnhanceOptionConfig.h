#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/GridFightClaraEnhanceCategory.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightClaraEnhanceOptionConfig; }
namespace RPG::GameCore { class GridFightClaraEnhanceConfigRow; }
namespace System { class String; }

#define RPG_CLIENT_GRIDFIGHTCLARAENHANCEOPTIONCONFIG_CREATEBATCHEDDISPLAY_OFFSET UNITYSDK_OFFSET(0x1D592EB0)
#define RPG_CLIENT_GRIDFIGHTCLARAENHANCEOPTIONCONFIG_CREATE_1_OFFSET UNITYSDK_OFFSET(0x1D593820)
#define RPG_CLIENT_GRIDFIGHTCLARAENHANCEOPTIONCONFIG_CREATE_OFFSET UNITYSDK_OFFSET(0x1D593210)
#define RPG_CLIENT_GRIDFIGHTCLARAENHANCEOPTIONCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D593ED0)
#define RPG_CLIENT_GRIDFIGHTCLARAENHANCEOPTIONCONFIG_GET_CATEGORY_OFFSET UNITYSDK_OFFSET(0x1D593F00)
#define RPG_CLIENT_GRIDFIGHTCLARAENHANCEOPTIONCONFIG_GET_COST_OFFSET UNITYSDK_OFFSET(0x1D593F20)
#define RPG_CLIENT_GRIDFIGHTCLARAENHANCEOPTIONCONFIG_GET_DESC_OFFSET UNITYSDK_OFFSET(0x1D593F60)
#define RPG_CLIENT_GRIDFIGHTCLARAENHANCEOPTIONCONFIG_GET_EFFECTPARAM_OFFSET UNITYSDK_OFFSET(0x1D594020)
#define RPG_CLIENT_GRIDFIGHTCLARAENHANCEOPTIONCONFIG_GET_ID_OFFSET UNITYSDK_OFFSET(0x1D593EE0)
#define RPG_CLIENT_GRIDFIGHTCLARAENHANCEOPTIONCONFIG_GET_LIMIT_OFFSET UNITYSDK_OFFSET(0x1D593F40)
#define RPG_CLIENT_GRIDFIGHTCLARAENHANCEOPTIONCONFIG_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1D593F80)
#define RPG_CLIENT_GRIDFIGHTCLARAENHANCEOPTIONCONFIG_GET_PARAM0_OFFSET UNITYSDK_OFFSET(0x1D592E40)
#define RPG_CLIENT_GRIDFIGHTCLARAENHANCEOPTIONCONFIG_GET_PARAMLIST_OFFSET UNITYSDK_OFFSET(0x1D594040)
#define RPG_CLIENT_GRIDFIGHTCLARAENHANCEOPTIONCONFIG_GET_SELECTDESC_OFFSET UNITYSDK_OFFSET(0x1D593FE0)
#define RPG_CLIENT_GRIDFIGHTCLARAENHANCEOPTIONCONFIG_GET_SELECTDISPLAYDESCULTRA_OFFSET UNITYSDK_OFFSET(0x1D594180)
#define RPG_CLIENT_GRIDFIGHTCLARAENHANCEOPTIONCONFIG_GET_SELECTDISPLAYDESC_OFFSET UNITYSDK_OFFSET(0x1D5940C0)
#define RPG_CLIENT_GRIDFIGHTCLARAENHANCEOPTIONCONFIG_GET_SELECTDISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x1D594060)
#define RPG_CLIENT_GRIDFIGHTCLARAENHANCEOPTIONCONFIG_GET_SELECTDISPLAYSIMPLEDESCULTRA_OFFSET UNITYSDK_OFFSET(0x1D5941A0)
#define RPG_CLIENT_GRIDFIGHTCLARAENHANCEOPTIONCONFIG_GET_SELECTDISPLAYSIMPLEDESC_OFFSET UNITYSDK_OFFSET(0x1D594120)
#define RPG_CLIENT_GRIDFIGHTCLARAENHANCEOPTIONCONFIG_GET_SELECTNAME_OFFSET UNITYSDK_OFFSET(0x1D593FC0)
#define RPG_CLIENT_GRIDFIGHTCLARAENHANCEOPTIONCONFIG_GET_SELECTSIMPLEDESC_OFFSET UNITYSDK_OFFSET(0x1D594000)
#define RPG_CLIENT_GRIDFIGHTCLARAENHANCEOPTIONCONFIG_GET_SIMPLEDESC_OFFSET UNITYSDK_OFFSET(0x1D593FA0)
#define RPG_CLIENT_GRIDFIGHTCLARAENHANCEOPTIONCONFIG_GET_STATENAME_OFFSET UNITYSDK_OFFSET(0x1D5941C0)
#define RPG_CLIENT_GRIDFIGHTCLARAENHANCEOPTIONCONFIG_SET_CATEGORY_OFFSET UNITYSDK_OFFSET(0x1D593F10)
#define RPG_CLIENT_GRIDFIGHTCLARAENHANCEOPTIONCONFIG_SET_COST_OFFSET UNITYSDK_OFFSET(0x1D593F30)
#define RPG_CLIENT_GRIDFIGHTCLARAENHANCEOPTIONCONFIG_SET_DESC_OFFSET UNITYSDK_OFFSET(0x1D593F70)
#define RPG_CLIENT_GRIDFIGHTCLARAENHANCEOPTIONCONFIG_SET_EFFECTPARAM_OFFSET UNITYSDK_OFFSET(0x1D594030)
#define RPG_CLIENT_GRIDFIGHTCLARAENHANCEOPTIONCONFIG_SET_ID_OFFSET UNITYSDK_OFFSET(0x1D593EF0)
#define RPG_CLIENT_GRIDFIGHTCLARAENHANCEOPTIONCONFIG_SET_LIMIT_OFFSET UNITYSDK_OFFSET(0x1D593F50)
#define RPG_CLIENT_GRIDFIGHTCLARAENHANCEOPTIONCONFIG_SET_NAME_OFFSET UNITYSDK_OFFSET(0x1D593F90)
#define RPG_CLIENT_GRIDFIGHTCLARAENHANCEOPTIONCONFIG_SET_PARAMLIST_OFFSET UNITYSDK_OFFSET(0x1D594050)
#define RPG_CLIENT_GRIDFIGHTCLARAENHANCEOPTIONCONFIG_SET_SELECTDESC_OFFSET UNITYSDK_OFFSET(0x1D593FF0)
#define RPG_CLIENT_GRIDFIGHTCLARAENHANCEOPTIONCONFIG_SET_SELECTDISPLAYDESCULTRA_OFFSET UNITYSDK_OFFSET(0x1D594190)
#define RPG_CLIENT_GRIDFIGHTCLARAENHANCEOPTIONCONFIG_SET_SELECTDISPLAYSIMPLEDESCULTRA_OFFSET UNITYSDK_OFFSET(0x1D5941B0)
#define RPG_CLIENT_GRIDFIGHTCLARAENHANCEOPTIONCONFIG_SET_SELECTNAME_OFFSET UNITYSDK_OFFSET(0x1D593FD0)
#define RPG_CLIENT_GRIDFIGHTCLARAENHANCEOPTIONCONFIG_SET_SELECTSIMPLEDESC_OFFSET UNITYSDK_OFFSET(0x1D594010)
#define RPG_CLIENT_GRIDFIGHTCLARAENHANCEOPTIONCONFIG_SET_SIMPLEDESC_OFFSET UNITYSDK_OFFSET(0x1D593FB0)
#define RPG_CLIENT_GRIDFIGHTCLARAENHANCEOPTIONCONFIG__GETULTRAPARAMLIST_OFFSET UNITYSDK_OFFSET(0x1D593E30)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightClaraEnhanceOptionConfig_TypeDefinitionIndex = 67295;

	class GridFightClaraEnhanceOptionConfig : public ::System::Object
	{
	public:
		::System::String* _Desc_k__BackingField; // 0x10
		::System::String* _SelectSimpleDesc_k__BackingField; // 0x18
		::Il2CppArray<::RPG::GameCore::FixPoint>* _ParamList_k__BackingField; // 0x20
		::System::String* _Name_k__BackingField; // 0x28
		::System::String* _SelectDesc_k__BackingField; // 0x30
		::System::String* _SelectDisplaySimpleDescUltra_k__BackingField; // 0x38
		::System::String* _SelectName_k__BackingField; // 0x40
		::System::String* _SimpleDesc_k__BackingField; // 0x48
		::System::String* _SelectDisplayDescUltra_k__BackingField; // 0x50
		::System::UInt32 _Cost_k__BackingField; // 0x58
		::System::UInt32 _EffectParam_k__BackingField; // 0x5C
		::System::UInt32 _Limit_k__BackingField; // 0x60
		::RPG::GameCore::GridFightClaraEnhanceCategory _Category_k__BackingField; // 0x64
		::System::UInt32 _ID_k__BackingField; // 0x68
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
