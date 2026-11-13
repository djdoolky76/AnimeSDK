#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ItemCostState.h"
#include "unitysdk/System/Object.h"
class EBIGAFIGJCG;
class GIFOLHLECBI;
class NPBNILHKEOD;
class PNEBINMALON;
namespace Proto { class ItemCost; }
namespace RPG::Client { class ComposeItemCost; }
namespace RPG::Client { class ComposeItemData; }
namespace RPG::Client { class ItemCostCalculateResult; }
namespace RPG::Client { class ItemCostCalculator; }
namespace RPG::GameCore { class ItemConfig; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ITEMCOSTCALCULATOR_CHECKTARGET_1_OFFSET UNITYSDK_OFFSET(0x1CED8F00)
#define RPG_CLIENT_ITEMCOSTCALCULATOR_CHECKTARGET_OFFSET UNITYSDK_OFFSET(0x1CED8B30)
#define RPG_CLIENT_ITEMCOSTCALCULATOR_CREATE_OFFSET UNITYSDK_OFFSET(0x1CED78F0)
#define RPG_CLIENT_ITEMCOSTCALCULATOR_CTOR_OFFSET UNITYSDK_OFFSET(0x1CED7A00)
#define RPG_CLIENT_ITEMCOSTCALCULATOR_GENERATE_OFFSET UNITYSDK_OFFSET(0x1CED7B30)
#define RPG_CLIENT_ITEMCOSTCALCULATOR_GETFULLREQUIREMENTCOSTS_OFFSET UNITYSDK_OFFSET(0x1CED7BA0)
#define RPG_CLIENT_ITEMCOSTCALCULATOR_GETITEMNEEDCOUNT_OFFSET UNITYSDK_OFFSET(0x1CED8860)
#define RPG_CLIENT_ITEMCOSTCALCULATOR_GET_ISDIRTY_OFFSET UNITYSDK_OFFSET(0x1CED7490)
#define RPG_CLIENT_ITEMCOSTCALCULATOR_GET_RESULTS_OFFSET UNITYSDK_OFFSET(0x1CED77C0)
#define RPG_CLIENT_ITEMCOSTCALCULATOR_GET_STATE_OFFSET UNITYSDK_OFFSET(0x1CED74B0)
#define RPG_CLIENT_ITEMCOSTCALCULATOR_MARKDIRTY_OFFSET UNITYSDK_OFFSET(0x1CED7AF0)
#define RPG_CLIENT_ITEMCOSTCALCULATOR_SETTARGET_OFFSET UNITYSDK_OFFSET(0x1CED7A10)
#define RPG_CLIENT_ITEMCOSTCALCULATOR_SET_ISDIRTY_OFFSET UNITYSDK_OFFSET(0x1CED74A0)
#define RPG_CLIENT_ITEMCOSTCALCULATOR__CALCULATECOMPOSE_OFFSET UNITYSDK_OFFSET(0x1CED8680)
#define RPG_CLIENT_ITEMCOSTCALCULATOR__CALCULATECONVERT_OFFSET UNITYSDK_OFFSET(0x1CED8770)
#define RPG_CLIENT_ITEMCOSTCALCULATOR__CALCULATESINGLE_1_OFFSET UNITYSDK_OFFSET(0x1CED95A0)
#define RPG_CLIENT_ITEMCOSTCALCULATOR__CALCULATESINGLE_OFFSET UNITYSDK_OFFSET(0x1CED9540)
#define RPG_CLIENT_ITEMCOSTCALCULATOR__CALCULATE_OFFSET UNITYSDK_OFFSET(0x1CED9290)
#define RPG_CLIENT_ITEMCOSTCALCULATOR__CHECKSINGLE_OFFSET UNITYSDK_OFFSET(0x1CED8CC0)
#define RPG_CLIENT_ITEMCOSTCALCULATOR__CLEARRESULTS_OFFSET UNITYSDK_OFFSET(0x1CED91A0)
#define RPG_CLIENT_ITEMCOSTCALCULATOR__GETCOMPOSEDATA_OFFSET UNITYSDK_OFFSET(0x1CED9890)
#define RPG_CLIENT_ITEMCOSTCALCULATOR__GETSTATE_OFFSET UNITYSDK_OFFSET(0x1CED75A0)
#define RPG_CLIENT_ITEMCOSTCALCULATOR__GETTARGETNEEDCOUNT_OFFSET UNITYSDK_OFFSET(0x1CED8A20)
#define RPG_CLIENT_ITEMCOSTCALCULATOR__TRYRECALCULATE_OFFSET UNITYSDK_OFFSET(0x1CED7540)

namespace RPG::Client
{
	inline static constexpr unsigned int ItemCostCalculator_TypeDefinitionIndex = 67622;

	class ItemCostCalculator : public ::System::Object
	{
	public:
		::EBIGAFIGJCG* _ItemConvert; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::ItemCostCalculateResult*>* _Results; // 0x18
		::System::Collections::Generic::List_1<::RPG::GameCore::ItemConfig*>* _CurFullItemCosts; // 0x20
		::PNEBINMALON* _ItemCostCalculatorContext; // 0x28
		::Il2CppArray<::RPG::GameCore::ItemConfig*>* _Targets; // 0x30
		::GIFOLHLECBI* _ItemCompose; // 0x38
		::NPBNILHKEOD* _ItemExchange; // 0x40
		::System::Boolean _IsDirty_k__BackingField; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOSTCALCULATOR_CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsDirty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOSTCALCULATOR_GET_ISDIRTY_OFFSET))(this);
		}

		::System::Void set_IsDirty(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOSTCALCULATOR_SET_ISDIRTY_OFFSET))(this, a1);
		}

		::RPG::Client::ItemCostState get_State()
		{
			return ((::RPG::Client::ItemCostState(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOSTCALCULATOR_GET_STATE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ItemCostCalculateResult*>* get_Results()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ItemCostCalculateResult*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOSTCALCULATOR_GET_RESULTS_OFFSET))(this);
		}

		static ::RPG::Client::ItemCostCalculator* Create(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::RPG::Client::ItemCostCalculator*(*)(::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOSTCALCULATOR_CREATE_OFFSET))(a1, a2);
		}

		::System::Void SetTarget(::Il2CppArray<::RPG::GameCore::ItemConfig*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::ItemConfig*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOSTCALCULATOR_SETTARGET_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::Proto::ItemCost*>* Generate()
		{
			return ((::System::Collections::Generic::List_1<::Proto::ItemCost*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOSTCALCULATOR_GENERATE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::ItemConfig*>* GetFullRequirementCosts()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::ItemConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOSTCALCULATOR_GETFULLREQUIREMENTCOSTS_OFFSET))(this);
		}

		::System::Void MarkDirty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOSTCALCULATOR_MARKDIRTY_OFFSET))(this);
		}

		::System::UInt32 GetItemNeedCount(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOSTCALCULATOR_GETITEMNEEDCOUNT_OFFSET))(this, a1);
		}

		::System::UInt32 _GetTargetNeedCount(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOSTCALCULATOR__GETTARGETNEEDCOUNT_OFFSET))(this, a1);
		}

		::System::Boolean CheckTarget(::Il2CppArray<::RPG::GameCore::ItemConfig*>* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::ItemConfig*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOSTCALCULATOR_CHECKTARGET_OFFSET))(this, a1);
		}

		::System::Boolean CheckTarget_1(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOSTCALCULATOR_CHECKTARGET_1_OFFSET))(this, a1);
		}

		::System::Void _TryRecalculate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOSTCALCULATOR__TRYRECALCULATE_OFFSET))(this);
		}

		::System::Void _ClearResults()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOSTCALCULATOR__CLEARRESULTS_OFFSET))(this);
		}

		::System::Void _Calculate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOSTCALCULATOR__CALCULATE_OFFSET))(this);
		}

		::RPG::Client::ItemCostCalculateResult* _CalculateSingle(::RPG::GameCore::ItemConfig* a1)
		{
			return ((::RPG::Client::ItemCostCalculateResult*(*)(::PVOID, ::RPG::GameCore::ItemConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOSTCALCULATOR__CALCULATESINGLE_OFFSET))(this, a1);
		}

		::RPG::Client::ItemCostCalculateResult* _CalculateSingle_1(::PNEBINMALON* a1, ::RPG::GameCore::ItemConfig* a2)
		{
			return ((::RPG::Client::ItemCostCalculateResult*(*)(::PVOID, ::PNEBINMALON*, ::RPG::GameCore::ItemConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOSTCALCULATOR__CALCULATESINGLE_1_OFFSET))(this, a1, a2);
		}

		::System::Void _CalculateCompose(::PNEBINMALON* a1, ::RPG::GameCore::ItemConfig* a2, ::System::UInt32 a3, ::System::UInt32 a4, ::RPG::Client::ComposeItemCost* a5, ::System::Boolean a6)
		{
			return ((::System::Void(*)(::PVOID, ::PNEBINMALON*, ::RPG::GameCore::ItemConfig*, ::System::UInt32, ::System::UInt32, ::RPG::Client::ComposeItemCost*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOSTCALCULATOR__CALCULATECOMPOSE_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void _CalculateConvert(::PNEBINMALON* a1, ::RPG::GameCore::ItemConfig* a2, ::System::UInt32 a3, ::System::UInt32 a4, ::System::UInt32 a5, ::System::UInt32 a6, ::System::Boolean a7)
		{
			return ((::System::Void(*)(::PVOID, ::PNEBINMALON*, ::RPG::GameCore::ItemConfig*, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOSTCALCULATOR__CALCULATECONVERT_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::RPG::Client::ItemCostState _GetState()
		{
			return ((::RPG::Client::ItemCostState(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOSTCALCULATOR__GETSTATE_OFFSET))(this);
		}

		::System::Boolean _CheckSingle(::PNEBINMALON* a1, ::RPG::GameCore::ItemConfig* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::PNEBINMALON*, ::RPG::GameCore::ItemConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOSTCALCULATOR__CHECKSINGLE_OFFSET))(this, a1, a2);
		}

		::RPG::Client::ComposeItemData* _GetComposeData(::System::UInt32 a1, ::PNEBINMALON* a2)
		{
			return ((::RPG::Client::ComposeItemData*(*)(::PVOID, ::System::UInt32, ::PNEBINMALON*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOSTCALCULATOR__GETCOMPOSEDATA_OFFSET))(this, a1, a2);
		}

	};
}
