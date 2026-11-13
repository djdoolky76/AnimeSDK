#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Proto { class ItemCost; }
namespace RPG::Client { class ItemData; }
namespace RPG::GameCore { class ItemConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_LIGHTCONEGROWPLANRESULT_CTOR_OFFSET UNITYSDK_OFFSET(0x1CEEAA00)
#define RPG_CLIENT_LIGHTCONEGROWPLANRESULT_GET_ADDITIONEXP_OFFSET UNITYSDK_OFFSET(0x1CEEA920)
#define RPG_CLIENT_LIGHTCONEGROWPLANRESULT_GET_CANNOTDIRECTGROW_OFFSET UNITYSDK_OFFSET(0x1CEEA9A0)
#define RPG_CLIENT_LIGHTCONEGROWPLANRESULT_GET_FARMABLEITEMCOUNT_OFFSET UNITYSDK_OFFSET(0x1CEEA9E0)
#define RPG_CLIENT_LIGHTCONEGROWPLANRESULT_GET_FARMABLEITEMID_OFFSET UNITYSDK_OFFSET(0x1CEEA9C0)
#define RPG_CLIENT_LIGHTCONEGROWPLANRESULT_GET_FIRSTSELECTEDLIGHTCONE_OFFSET UNITYSDK_OFFSET(0x1CEEA900)
#define RPG_CLIENT_LIGHTCONEGROWPLANRESULT_GET_HASACTUALPROGRESS_OFFSET UNITYSDK_OFFSET(0x1CEEA980)
#define RPG_CLIENT_LIGHTCONEGROWPLANRESULT_GET_LEVELAFTERQUICKGROW_OFFSET UNITYSDK_OFFSET(0x1CEEA860)
#define RPG_CLIENT_LIGHTCONEGROWPLANRESULT_GET_LEVELUPCOSTSFORREQ_OFFSET UNITYSDK_OFFSET(0x1CEEA940)
#define RPG_CLIENT_LIGHTCONEGROWPLANRESULT_GET_MATERIALSWILLCOST_OFFSET UNITYSDK_OFFSET(0x1CEEA8A0)
#define RPG_CLIENT_LIGHTCONEGROWPLANRESULT_GET_PROMOTIONCOSTFORREQ_OFFSET UNITYSDK_OFFSET(0x1CEEA960)
#define RPG_CLIENT_LIGHTCONEGROWPLANRESULT_GET_PROMOTIONLEVELAFTERQUICKGROW_OFFSET UNITYSDK_OFFSET(0x1CEEA880)
#define RPG_CLIENT_LIGHTCONEGROWPLANRESULT_GET_TOTALCONVERTABLELIGHTCONECOUNT_OFFSET UNITYSDK_OFFSET(0x1CEEA8E0)
#define RPG_CLIENT_LIGHTCONEGROWPLANRESULT_GET_USEDLIGHTCONECOUNT_OFFSET UNITYSDK_OFFSET(0x1CEEA8C0)
#define RPG_CLIENT_LIGHTCONEGROWPLANRESULT_SET_ADDITIONEXP_OFFSET UNITYSDK_OFFSET(0x1CEEA930)
#define RPG_CLIENT_LIGHTCONEGROWPLANRESULT_SET_CANNOTDIRECTGROW_OFFSET UNITYSDK_OFFSET(0x1CEEA9B0)
#define RPG_CLIENT_LIGHTCONEGROWPLANRESULT_SET_FARMABLEITEMCOUNT_OFFSET UNITYSDK_OFFSET(0x1CEEA9F0)
#define RPG_CLIENT_LIGHTCONEGROWPLANRESULT_SET_FARMABLEITEMID_OFFSET UNITYSDK_OFFSET(0x1CEEA9D0)
#define RPG_CLIENT_LIGHTCONEGROWPLANRESULT_SET_FIRSTSELECTEDLIGHTCONE_OFFSET UNITYSDK_OFFSET(0x1CEEA910)
#define RPG_CLIENT_LIGHTCONEGROWPLANRESULT_SET_HASACTUALPROGRESS_OFFSET UNITYSDK_OFFSET(0x1CEEA990)
#define RPG_CLIENT_LIGHTCONEGROWPLANRESULT_SET_LEVELAFTERQUICKGROW_OFFSET UNITYSDK_OFFSET(0x1CEEA870)
#define RPG_CLIENT_LIGHTCONEGROWPLANRESULT_SET_LEVELUPCOSTSFORREQ_OFFSET UNITYSDK_OFFSET(0x1CEEA950)
#define RPG_CLIENT_LIGHTCONEGROWPLANRESULT_SET_MATERIALSWILLCOST_OFFSET UNITYSDK_OFFSET(0x1CEEA8B0)
#define RPG_CLIENT_LIGHTCONEGROWPLANRESULT_SET_PROMOTIONCOSTFORREQ_OFFSET UNITYSDK_OFFSET(0x1CEEA970)
#define RPG_CLIENT_LIGHTCONEGROWPLANRESULT_SET_PROMOTIONLEVELAFTERQUICKGROW_OFFSET UNITYSDK_OFFSET(0x1CEEA890)
#define RPG_CLIENT_LIGHTCONEGROWPLANRESULT_SET_TOTALCONVERTABLELIGHTCONECOUNT_OFFSET UNITYSDK_OFFSET(0x1CEEA8F0)
#define RPG_CLIENT_LIGHTCONEGROWPLANRESULT_SET_USEDLIGHTCONECOUNT_OFFSET UNITYSDK_OFFSET(0x1CEEA8D0)

namespace RPG::Client
{
	inline static constexpr unsigned int LightConeGrowPlanResult_TypeDefinitionIndex = 67644;

	class LightConeGrowPlanResult : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::Proto::ItemCost*>* _LevelUpCostsForReq_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::RPG::GameCore::ItemConfig*>* _MaterialsWillCost_k__BackingField; // 0x18
		::System::Collections::Generic::List_1<::Proto::ItemCost*>* _PromotionCostForReq_k__BackingField; // 0x20
		::RPG::Client::ItemData* _FirstSelectedLightCone_k__BackingField; // 0x28
		::System::Int32 _TotalConvertableLightConeCount_k__BackingField; // 0x30
		::System::UInt32 _UsedLightConeCount_k__BackingField; // 0x34
		::System::UInt32 _AdditionExp_k__BackingField; // 0x38
		::System::UInt32 _LevelAfterQuickGrow_k__BackingField; // 0x3C
		::System::UInt32 _PromotionLevelAfterQuickGrow_k__BackingField; // 0x40
		::System::UInt32 _FarmableItemCount_k__BackingField; // 0x44
		::System::Boolean _HasActualProgress_k__BackingField; // 0x48
		::System::Boolean _CannotDirectGrow_k__BackingField; // 0x49
		::System::Byte _padding0[0x2];
		::System::UInt32 _FarmableItemID_k__BackingField; // 0x4C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONEGROWPLANRESULT_CTOR_OFFSET))(this);
		}

		::System::UInt32 get_LevelAfterQuickGrow()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONEGROWPLANRESULT_GET_LEVELAFTERQUICKGROW_OFFSET))(this);
		}

		::System::Void set_LevelAfterQuickGrow(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONEGROWPLANRESULT_SET_LEVELAFTERQUICKGROW_OFFSET))(this, a1);
		}

		::System::UInt32 get_PromotionLevelAfterQuickGrow()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONEGROWPLANRESULT_GET_PROMOTIONLEVELAFTERQUICKGROW_OFFSET))(this);
		}

		::System::Void set_PromotionLevelAfterQuickGrow(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONEGROWPLANRESULT_SET_PROMOTIONLEVELAFTERQUICKGROW_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::ItemConfig*>* get_MaterialsWillCost()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::ItemConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONEGROWPLANRESULT_GET_MATERIALSWILLCOST_OFFSET))(this);
		}

		::System::Void set_MaterialsWillCost(::System::Collections::Generic::List_1<::RPG::GameCore::ItemConfig*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::ItemConfig*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONEGROWPLANRESULT_SET_MATERIALSWILLCOST_OFFSET))(this, a1);
		}

		::System::UInt32 get_UsedLightConeCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONEGROWPLANRESULT_GET_USEDLIGHTCONECOUNT_OFFSET))(this);
		}

		::System::Void set_UsedLightConeCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONEGROWPLANRESULT_SET_USEDLIGHTCONECOUNT_OFFSET))(this, a1);
		}

		::System::Int32 get_TotalConvertableLightConeCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONEGROWPLANRESULT_GET_TOTALCONVERTABLELIGHTCONECOUNT_OFFSET))(this);
		}

		::System::Void set_TotalConvertableLightConeCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONEGROWPLANRESULT_SET_TOTALCONVERTABLELIGHTCONECOUNT_OFFSET))(this, a1);
		}

		::RPG::Client::ItemData* get_FirstSelectedLightCone()
		{
			return ((::RPG::Client::ItemData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONEGROWPLANRESULT_GET_FIRSTSELECTEDLIGHTCONE_OFFSET))(this);
		}

		::System::Void set_FirstSelectedLightCone(::RPG::Client::ItemData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONEGROWPLANRESULT_SET_FIRSTSELECTEDLIGHTCONE_OFFSET))(this, a1);
		}

		::System::UInt32 get_AdditionExp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONEGROWPLANRESULT_GET_ADDITIONEXP_OFFSET))(this);
		}

		::System::Void set_AdditionExp(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONEGROWPLANRESULT_SET_ADDITIONEXP_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::Proto::ItemCost*>* get_LevelUpCostsForReq()
		{
			return ((::System::Collections::Generic::List_1<::Proto::ItemCost*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONEGROWPLANRESULT_GET_LEVELUPCOSTSFORREQ_OFFSET))(this);
		}

		::System::Void set_LevelUpCostsForReq(::System::Collections::Generic::List_1<::Proto::ItemCost*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Proto::ItemCost*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONEGROWPLANRESULT_SET_LEVELUPCOSTSFORREQ_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::Proto::ItemCost*>* get_PromotionCostForReq()
		{
			return ((::System::Collections::Generic::List_1<::Proto::ItemCost*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONEGROWPLANRESULT_GET_PROMOTIONCOSTFORREQ_OFFSET))(this);
		}

		::System::Void set_PromotionCostForReq(::System::Collections::Generic::List_1<::Proto::ItemCost*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Proto::ItemCost*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONEGROWPLANRESULT_SET_PROMOTIONCOSTFORREQ_OFFSET))(this, a1);
		}

		::System::Boolean get_HasActualProgress()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONEGROWPLANRESULT_GET_HASACTUALPROGRESS_OFFSET))(this);
		}

		::System::Void set_HasActualProgress(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONEGROWPLANRESULT_SET_HASACTUALPROGRESS_OFFSET))(this, a1);
		}

		::System::Boolean get_CannotDirectGrow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONEGROWPLANRESULT_GET_CANNOTDIRECTGROW_OFFSET))(this);
		}

		::System::Void set_CannotDirectGrow(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONEGROWPLANRESULT_SET_CANNOTDIRECTGROW_OFFSET))(this, a1);
		}

		::System::UInt32 get_FarmableItemID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONEGROWPLANRESULT_GET_FARMABLEITEMID_OFFSET))(this);
		}

		::System::Void set_FarmableItemID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONEGROWPLANRESULT_SET_FARMABLEITEMID_OFFSET))(this, a1);
		}

		::System::UInt32 get_FarmableItemCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONEGROWPLANRESULT_GET_FARMABLEITEMCOUNT_OFFSET))(this);
		}

		::System::Void set_FarmableItemCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONEGROWPLANRESULT_SET_FARMABLEITEMCOUNT_OFFSET))(this, a1);
		}

	};
}
