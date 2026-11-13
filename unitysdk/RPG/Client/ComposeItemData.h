#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ComposeItemFailedType.h"
#include "unitysdk/RPG/GameCore/FormulaType.h"
#include "unitysdk/RPG/GameCore/ItemComposeFuncType.h"
#include "unitysdk/RPG/GameCore/ItemComposeLimitType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
class DJBLFPJDAHG;
class ICPJMDDLNAC;
class LACKPFDHOPE;
namespace RPG::Client { class ComposeItemCost; }
namespace RPG::Client { class ComposeItemData; }
namespace RPG::Client { class ItemData; }
namespace RPG::GameCore { class ItemComposeConfigRow; }
namespace RPG::GameCore { class ItemComposeTypeRow; }
namespace RPG::GameCore { class ItemConfig; }
namespace System { class Object; }
namespace System { class String; }

#define RPG_CLIENT_COMPOSEITEMDATA_CANCOMPOSE_OFFSET UNITYSDK_OFFSET(0x1C98FE30)
#define RPG_CLIENT_COMPOSEITEMDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1C98F7E0)
#define RPG_CLIENT_COMPOSEITEMDATA_GETCOSTMATERIAL_OFFSET UNITYSDK_OFFSET(0x1C990B00)
#define RPG_CLIENT_COMPOSEITEMDATA_GETMAXCOMPOSECOUNT_OFFSET UNITYSDK_OFFSET(0x1C991D50)
#define RPG_CLIENT_COMPOSEITEMDATA_GET_CHECKITEMOFCANCOMPOSE_OFFSET UNITYSDK_OFFSET(0x1C990F70)
#define RPG_CLIENT_COMPOSEITEMDATA_GET_COINCOST_OFFSET UNITYSDK_OFFSET(0x1C990780)
#define RPG_CLIENT_COMPOSEITEMDATA_GET_CONFIGID_OFFSET UNITYSDK_OFFSET(0x1C98FAC0)
#define RPG_CLIENT_COMPOSEITEMDATA_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1C98FAE0)
#define RPG_CLIENT_COMPOSEITEMDATA_GET_DESC_OFFSET UNITYSDK_OFFSET(0x1C990400)
#define RPG_CLIENT_COMPOSEITEMDATA_GET_FORMULATYPE_OFFSET UNITYSDK_OFFSET(0x1C9906B0)
#define RPG_CLIENT_COMPOSEITEMDATA_GET_FUNCTYPE_OFFSET UNITYSDK_OFFSET(0x1C990100)
#define RPG_CLIENT_COMPOSEITEMDATA_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x1C990550)
#define RPG_CLIENT_COMPOSEITEMDATA_GET_ISACCELERATEDTYPECOMPOSE_OFFSET UNITYSDK_OFFSET(0x1C990D20)
#define RPG_CLIENT_COMPOSEITEMDATA_GET_ISCANACCELERATEDCOMPOSE_OFFSET UNITYSDK_OFFSET(0x1C990DB0)
#define RPG_CLIENT_COMPOSEITEMDATA_GET_ISCANCOMPOSE_OFFSET UNITYSDK_OFFSET(0x1C990030)
#define RPG_CLIENT_COMPOSEITEMDATA_GET_ISEQUIVALENTEXCHANGE_OFFSET UNITYSDK_OFFSET(0x1C990E10)
#define RPG_CLIENT_COMPOSEITEMDATA_GET_ISFORMULAUNLOCKED_OFFSET UNITYSDK_OFFSET(0x1C98FE80)
#define RPG_CLIENT_COMPOSEITEMDATA_GET_ISLOCK_OFFSET UNITYSDK_OFFSET(0x1C98FC70)
#define RPG_CLIENT_COMPOSEITEMDATA_GET_ISMATERIALENOUGH_OFFSET UNITYSDK_OFFSET(0x1C990AA0)
#define RPG_CLIENT_COMPOSEITEMDATA_GET_ISMODULEREQUIRE_OFFSET UNITYSDK_OFFSET(0x1C9907D0)
#define RPG_CLIENT_COMPOSEITEMDATA_GET_ISMODULEUNLOCK_OFFSET UNITYSDK_OFFSET(0x1C990830)
#define RPG_CLIENT_COMPOSEITEMDATA_GET_ISNEW_OFFSET UNITYSDK_OFFSET(0x1C990A10)
#define RPG_CLIENT_COMPOSEITEMDATA_GET_ISSHOW_OFFSET UNITYSDK_OFFSET(0x1C990290)
#define RPG_CLIENT_COMPOSEITEMDATA_GET_ISSPECIAL_OFFSET UNITYSDK_OFFSET(0x1C990700)
#define RPG_CLIENT_COMPOSEITEMDATA_GET_ITEMID_OFFSET UNITYSDK_OFFSET(0x1C98FA50)
#define RPG_CLIENT_COMPOSEITEMDATA_GET_LIMITTYPEPARAM_OFFSET UNITYSDK_OFFSET(0x1C990EC0)
#define RPG_CLIENT_COMPOSEITEMDATA_GET_LIMITTYPE_OFFSET UNITYSDK_OFFSET(0x1C990E70)
#define RPG_CLIENT_COMPOSEITEMDATA_GET_LIMITVALUE_OFFSET UNITYSDK_OFFSET(0x1C990F20)
#define RPG_CLIENT_COMPOSEITEMDATA_GET_MAINTYPE_OFFSET UNITYSDK_OFFSET(0x1C990210)
#define RPG_CLIENT_COMPOSEITEMDATA_GET_MATERIALCOSTARRAY_OFFSET UNITYSDK_OFFSET(0x1C990500)
#define RPG_CLIENT_COMPOSEITEMDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1C9902E0)
#define RPG_CLIENT_COMPOSEITEMDATA_GET_RARITY_OFFSET UNITYSDK_OFFSET(0x1C990620)
#define RPG_CLIENT_COMPOSEITEMDATA_GET_REMAINCOMPOSENUM_OFFSET UNITYSDK_OFFSET(0x1C990980)
#define RPG_CLIENT_COMPOSEITEMDATA_GET_ROW_OFFSET UNITYSDK_OFFSET(0x1C98FAA0)
#define RPG_CLIENT_COMPOSEITEMDATA_GET_TYPEROW_OFFSET UNITYSDK_OFFSET(0x1C990150)
#define RPG_CLIENT_COMPOSEITEMDATA_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1C9900B0)
#define RPG_CLIENT_COMPOSEITEMDATA_HASEQUIVALENTEXCHANGEITEMCOMPOSE_OFFSET UNITYSDK_OFFSET(0x1C992830)
#define RPG_CLIENT_COMPOSEITEMDATA_SET_CONFIGID_OFFSET UNITYSDK_OFFSET(0x1C98FAD0)
#define RPG_CLIENT_COMPOSEITEMDATA_SET_ISNEW_OFFSET UNITYSDK_OFFSET(0x1C990A50)
#define RPG_CLIENT_COMPOSEITEMDATA_SET_REMAINCOMPOSENUM_OFFSET UNITYSDK_OFFSET(0x1C9909C0)
#define RPG_CLIENT_COMPOSEITEMDATA_SET_ROW_OFFSET UNITYSDK_OFFSET(0x1C98FAB0)
#define RPG_CLIENT_COMPOSEITEMDATA__CONVERTMATERIALCOSTARR_OFFSET UNITYSDK_OFFSET(0x1C991750)
#define RPG_CLIENT_COMPOSEITEMDATA__GENERATECOSTMATERIALLIST_OFFSET UNITYSDK_OFFSET(0x1C990FB0)
#define RPG_CLIENT_COMPOSEITEMDATA__GETACCELERATEDTYPEMAXCOMPOSECOUNT_OFFSET UNITYSDK_OFFSET(0x1C9920F0)
#define RPG_CLIENT_COMPOSEITEMDATA__MERGEMATERIALLISTKIND_OFFSET UNITYSDK_OFFSET(0x1C991A30)

namespace RPG::Client
{
	inline static constexpr unsigned int ComposeItemData_TypeDefinitionIndex = 67690;

	class ComposeItemData : public ::System::Object
	{
	public:
		::RPG::GameCore::ItemComposeTypeRow* _TypeRow; // 0x10
		::ICPJMDDLNAC* _CheckItemOfCanCompose; // 0x18
		::RPG::Client::ItemData* _ItemData; // 0x20
		::LACKPFDHOPE* _QuantityProvider; // 0x28
		::RPG::GameCore::ItemComposeConfigRow* _Row_k__BackingField; // 0x30
		::System::Boolean _IsNew; // 0x38
		::System::Byte _padding0[0x3];
		::System::UInt32 _RemainComposeNum; // 0x3C
		::System::UInt32 _ConfigID_k__BackingField; // 0x40
		// static const ::System::Object _MaterialComposeMainTypeID; // 0x0
		::System::Void _ctor(::System::UInt32 a1, ::LACKPFDHOPE* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::LACKPFDHOPE*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPOSEITEMDATA_CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::ItemComposeConfigRow* get_Row()
		{
			return ((::RPG::GameCore::ItemComposeConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPOSEITEMDATA_GET_ROW_OFFSET))(this);
		}

		::System::Void set_Row(::RPG::GameCore::ItemComposeConfigRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ItemComposeConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPOSEITEMDATA_SET_ROW_OFFSET))(this, a1);
		}

		::System::UInt32 get_ConfigID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPOSEITEMDATA_GET_CONFIGID_OFFSET))(this);
		}

		::System::Void set_ConfigID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPOSEITEMDATA_SET_CONFIGID_OFFSET))(this, a1);
		}

		::System::UInt32 get_Count()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPOSEITEMDATA_GET_COUNT_OFFSET))(this);
		}

		::System::Boolean get_IsLock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPOSEITEMDATA_GET_ISLOCK_OFFSET))(this);
		}

		::System::UInt32 get_ItemID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPOSEITEMDATA_GET_ITEMID_OFFSET))(this);
		}

		::System::Boolean get_IsCanCompose()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPOSEITEMDATA_GET_ISCANCOMPOSE_OFFSET))(this);
		}

		::System::UInt32 get_Type()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPOSEITEMDATA_GET_TYPE_OFFSET))(this);
		}

		::RPG::GameCore::ItemComposeFuncType get_FuncType()
		{
			return ((::RPG::GameCore::ItemComposeFuncType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPOSEITEMDATA_GET_FUNCTYPE_OFFSET))(this);
		}

		::RPG::GameCore::ItemComposeTypeRow* get_TypeRow()
		{
			return ((::RPG::GameCore::ItemComposeTypeRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPOSEITEMDATA_GET_TYPEROW_OFFSET))(this);
		}

		::System::UInt32 get_MainType()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPOSEITEMDATA_GET_MAINTYPE_OFFSET))(this);
		}

		::System::Boolean get_IsShow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPOSEITEMDATA_GET_ISSHOW_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPOSEITEMDATA_GET_NAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_Desc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPOSEITEMDATA_GET_DESC_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::ItemConfig*>* get_MaterialCostArray()
		{
			return ((::Il2CppArray<::RPG::GameCore::ItemConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPOSEITEMDATA_GET_MATERIALCOSTARRAY_OFFSET))(this);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPOSEITEMDATA_GET_ICONPATH_OFFSET))(this);
		}

		::System::UInt32 get_Rarity()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPOSEITEMDATA_GET_RARITY_OFFSET))(this);
		}

		::RPG::GameCore::FormulaType get_FormulaType()
		{
			return ((::RPG::GameCore::FormulaType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPOSEITEMDATA_GET_FORMULATYPE_OFFSET))(this);
		}

		::System::Boolean get_IsSpecial()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPOSEITEMDATA_GET_ISSPECIAL_OFFSET))(this);
		}

		::System::UInt32 get_CoinCost()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPOSEITEMDATA_GET_COINCOST_OFFSET))(this);
		}

		::System::Boolean get_IsFormulaUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPOSEITEMDATA_GET_ISFORMULAUNLOCKED_OFFSET))(this);
		}

		::System::Boolean get_IsModuleRequire()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPOSEITEMDATA_GET_ISMODULEREQUIRE_OFFSET))(this);
		}

		::System::Boolean get_IsModuleUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPOSEITEMDATA_GET_ISMODULEUNLOCK_OFFSET))(this);
		}

		::System::UInt32 get_RemainComposeNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPOSEITEMDATA_GET_REMAINCOMPOSENUM_OFFSET))(this);
		}

		::System::Void set_RemainComposeNum(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPOSEITEMDATA_SET_REMAINCOMPOSENUM_OFFSET))(this, a1);
		}

		::System::Boolean get_IsNew()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPOSEITEMDATA_GET_ISNEW_OFFSET))(this);
		}

		::System::Void set_IsNew(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPOSEITEMDATA_SET_ISNEW_OFFSET))(this, a1);
		}

		::System::Boolean get_IsMaterialEnough()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPOSEITEMDATA_GET_ISMATERIALENOUGH_OFFSET))(this);
		}

		::System::Boolean get_IsAcceleratedTypeCompose()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPOSEITEMDATA_GET_ISACCELERATEDTYPECOMPOSE_OFFSET))(this);
		}

		::System::Boolean get_IsCanAcceleratedCompose()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPOSEITEMDATA_GET_ISCANACCELERATEDCOMPOSE_OFFSET))(this);
		}

		::System::Boolean get_IsEquivalentExchange()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPOSEITEMDATA_GET_ISEQUIVALENTEXCHANGE_OFFSET))(this);
		}

		::RPG::GameCore::ItemComposeLimitType get_LimitType()
		{
			return ((::RPG::GameCore::ItemComposeLimitType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPOSEITEMDATA_GET_LIMITTYPE_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_LimitTypeParam()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPOSEITEMDATA_GET_LIMITTYPEPARAM_OFFSET))(this);
		}

		::System::UInt32 get_LimitValue()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPOSEITEMDATA_GET_LIMITVALUE_OFFSET))(this);
		}

		::DJBLFPJDAHG* get_CheckItemOfCanCompose()
		{
			return ((::DJBLFPJDAHG*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPOSEITEMDATA_GET_CHECKITEMOFCANCOMPOSE_OFFSET))(this);
		}

		::RPG::Client::ComposeItemFailedType CanCompose()
		{
			return ((::RPG::Client::ComposeItemFailedType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPOSEITEMDATA_CANCOMPOSE_OFFSET))(this);
		}

		::RPG::Client::ComposeItemCost* GetCostMaterial(::System::UInt32 a1)
		{
			return ((::RPG::Client::ComposeItemCost*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPOSEITEMDATA_GETCOSTMATERIAL_OFFSET))(this, a1);
		}

		::System::Void _ConvertMaterialCostArr(::Il2CppArray<::RPG::GameCore::ItemConfig*>* a1, ::System::UInt32 a2, ::RPG::Client::ComposeItemCost* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::ItemConfig*>*, ::System::UInt32, ::RPG::Client::ComposeItemCost*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPOSEITEMDATA__CONVERTMATERIALCOSTARR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _GenerateCostMaterialList(::RPG::Client::ComposeItemData* a1, ::System::UInt32 a2, ::RPG::Client::ComposeItemCost* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ComposeItemData*, ::System::UInt32, ::RPG::Client::ComposeItemCost*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPOSEITEMDATA__GENERATECOSTMATERIALLIST_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _MergeMaterialListKind(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPOSEITEMDATA__MERGEMATERIALLISTKIND_OFFSET))(this, a1);
		}

		::System::UInt32 GetMaxComposeCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPOSEITEMDATA_GETMAXCOMPOSECOUNT_OFFSET))(this);
		}

		::System::UInt32 _GetAcceleratedTypeMaxComposeCount(::RPG::Client::ComposeItemData* a1, ::RPG::Client::ComposeItemCost* a2)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::ComposeItemData*, ::RPG::Client::ComposeItemCost*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPOSEITEMDATA__GETACCELERATEDTYPEMAXCOMPOSECOUNT_OFFSET))(this, a1, a2);
		}

		::System::Boolean HasEquivalentExchangeItemCompose()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPOSEITEMDATA_HASEQUIVALENTEXCHANGEITEMCOMPOSE_OFFSET))(this);
		}

	};
}
