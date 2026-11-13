#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RestaurantNormalEventType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
class BNLHGENFEHG;
class IMEFEGGEMIJ;
class PGBLBOJBDGG;
namespace RPG::Client::LittleGame { class ElfRestaurantGameEntity; }
namespace RPG::Client::LittleGame::ElfRestaurant { class ElfRestaurantEventParams; }
namespace RPG::GameCore { class ElfBehaviorStateContentItem; }
namespace RPG::GameCore { class ElfBehaviorStateItem; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTAISERVICE_ADDBONUSEVENT_OFFSET UNITYSDK_OFFSET(0x1C3775E0)
#define RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTAISERVICE_ADDCLEANOBSTACLEORDER_OFFSET UNITYSDK_OFFSET(0x1C3750C0)
#define RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTAISERVICE_ADDCLEANTABLEORDER_OFFSET UNITYSDK_OFFSET(0x1C374A10)
#define RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTAISERVICE_ADDCOOKFOODORDER_1_OFFSET UNITYSDK_OFFSET(0x1C375EB0)
#define RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTAISERVICE_ADDCOOKFOODORDER_2_OFFSET UNITYSDK_OFFSET(0x1C375C40)
#define RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTAISERVICE_ADDCOOKFOODORDER_OFFSET UNITYSDK_OFFSET(0x1C375AA0)
#define RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTAISERVICE_ADDDELIVERYORDER_1_OFFSET UNITYSDK_OFFSET(0x1C373D10)
#define RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTAISERVICE_ADDDELIVERYORDER_OFFSET UNITYSDK_OFFSET(0x1C373C10)
#define RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTAISERVICE_ADDEXTRAPAY_OFFSET UNITYSDK_OFFSET(0x1C377390)
#define RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTAISERVICE_ADDGAMETIMEOVERORDER_OFFSET UNITYSDK_OFFSET(0x1C376BC0)
#define RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTAISERVICE_ADDPROCESSCUSTOMEREVENTORDER_OFFSET UNITYSDK_OFFSET(0x1C375670)
#define RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTAISERVICE_AUTOGETDELIVERYCUSTOMER_OFFSET UNITYSDK_OFFSET(0x1C377D50)
#define RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTAISERVICE_AUTOGETDELIVERYFOOD_OFFSET UNITYSDK_OFFSET(0x1C377CA0)
#define RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTAISERVICE_AUTOGETDIRTYOBSTACLE_OFFSET UNITYSDK_OFFSET(0x1C378570)
#define RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTAISERVICE_AUTOGETDIRTYTABLESLOT_OFFSET UNITYSDK_OFFSET(0x1C378050)
#define RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTAISERVICE_AUTOGETORDERCUSTOMER_OFFSET UNITYSDK_OFFSET(0x1C377A80)
#define RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTAISERVICE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C3790A0)
#define RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTAISERVICE_CLEARBEHAVIOR_OFFSET UNITYSDK_OFFSET(0x1C378A70)
#define RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTAISERVICE_CTOR_OFFSET UNITYSDK_OFFSET(0x1C373AA0)
#define RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTAISERVICE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C373BC0)
#define RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTAISERVICE_DROPFOODORDER_OFFSET UNITYSDK_OFFSET(0x1C375F90)
#define RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTAISERVICE_GETTHUMBCOUNT_OFFSET UNITYSDK_OFFSET(0x1C377240)
#define RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTAISERVICE_GETWAITCUSTOMERCOUNT_OFFSET UNITYSDK_OFFSET(0x1C377040)
#define RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTAISERVICE_HASWAITCUSTOMER_OFFSET UNITYSDK_OFFSET(0x1C376E50)
#define RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTAISERVICE_ISPAY_OFFSET UNITYSDK_OFFSET(0x1C377300)
#define RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTAISERVICE_REQPROCESSEVENT_OFFSET UNITYSDK_OFFSET(0x1C376150)
#define RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTAISERVICE_REQPROCESSSELECTEVENT_OFFSET UNITYSDK_OFFSET(0x1C376A20)
#define RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTAISERVICE_SETBEHAVIOR_OFFSET UNITYSDK_OFFSET(0x1C3767A0)
#define RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTAISERVICE_TRYADDDRINKEVENT_OFFSET UNITYSDK_OFFSET(0x1C3777F0)
#define RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTAISERVICE__ADDBEHAVIOR_OFFSET UNITYSDK_OFFSET(0x1C3787C0)
#define RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTAISERVICE__ADDDELAYBEHAVIOR_OFFSET UNITYSDK_OFFSET(0x1C378E40)
#define RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTAISERVICE__REMOVEBEHAVIOR_OFFSET UNITYSDK_OFFSET(0x1C378CF0)

namespace RPG::Client::LittleGame::ElfRestaurant
{
	inline static constexpr unsigned int ElfRestaurantAIService_TypeDefinitionIndex = 79583;

	class ElfRestaurantAIService : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* DelayTextBehaviors; // 0x10
		::System::Collections::Generic::List_1<::System::Object*>* DelayEmojiBehaviors; // 0x18
		::IMEFEGGEMIJ* DrinkMachineSO; // 0x20
		::PGBLBOJBDGG* _Context; // 0x28
		::IMEFEGGEMIJ* ExtraPayTableSO; // 0x30
		::System::Collections::Generic::List_1<::System::Object*>* DelayAudioEffectBehaviors; // 0x38
		::BNLHGENFEHG* _Services; // 0x40
		::System::Collections::Generic::List_1<::System::Object*>* DelaySpecialBubbleBehaviors; // 0x48
		::System::Collections::Generic::List_1<::System::Object*>* DelayEffectBehaviors; // 0x50
		::UnityEngine::Vector3 ExtraPayEventWPos; // 0x58
		::System::Int32 UnCollectedExtraGolden; // 0x64
		::UnityEngine::Vector3 DrinkMachineEventWPos; // 0x68
		static ::System::String** StaticGet_AIEvent_ContinueWaitFood()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client.LittleGame.ElfRestaurant", "ElfRestaurantAIService")->GetStaticField(0xFC90);
		}

		static ::System::String** StaticGet_AIEvent_ProcessBill()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client.LittleGame.ElfRestaurant", "ElfRestaurantAIService")->GetStaticField(0xFC98);
		}

		static ::System::String** StaticGet_AIEvent_GoDrink()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client.LittleGame.ElfRestaurant", "ElfRestaurantAIService")->GetStaticField(0xFCA0);
		}

		static ::System::String** StaticGet_AIEvent_GoExtraPay()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client.LittleGame.ElfRestaurant", "ElfRestaurantAIService")->GetStaticField(0xFCA8);
		}

		static ::System::String** StaticGet_AIEvent_EndSuperEvent()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client.LittleGame.ElfRestaurant", "ElfRestaurantAIService")->GetStaticField(0xFCB0);
		}

		static ::System::String** StaticGet_AIEvent_ContinueOrderRecipe()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client.LittleGame.ElfRestaurant", "ElfRestaurantAIService")->GetStaticField(0xFCB8);
		}

		static ::System::String** StaticGet_AIEvent_MoveToQueue()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client.LittleGame.ElfRestaurant", "ElfRestaurantAIService")->GetStaticField(0xFCC0);
		}

		static ::System::String** StaticGet_AIEvent_Order()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client.LittleGame.ElfRestaurant", "ElfRestaurantAIService")->GetStaticField(0xFCC8);
		}

		static ::System::String** StaticGet_AIEvent_Leave()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client.LittleGame.ElfRestaurant", "ElfRestaurantAIService")->GetStaticField(0xFCD0);
		}

		::System::Void _ctor(::BNLHGENFEHG* a1, ::PGBLBOJBDGG* a2)
		{
			return ((::System::Void(*)(::PVOID, ::BNLHGENFEHG*, ::PGBLBOJBDGG*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTAISERVICE_CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTAISERVICE_CCTOR_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTAISERVICE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean AddDeliveryOrder(::System::Int32 a1, ::RPG::Client::LittleGame::ElfRestaurantGameEntity* a2, ::System::Boolean a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTAISERVICE_ADDDELIVERYORDER_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean AddDeliveryOrder_1(::System::Collections::Generic::List_1<::System::Int32>* a1, ::RPG::Client::LittleGame::ElfRestaurantGameEntity* a2, ::System::Boolean a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTAISERVICE_ADDDELIVERYORDER_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean AddCleanTableOrder(::System::Int32 a1, ::System::Int32 a2, ::System::Boolean a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTAISERVICE_ADDCLEANTABLEORDER_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean AddCleanObstacleOrder(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTAISERVICE_ADDCLEANOBSTACLEORDER_OFFSET))(this, a1, a2);
		}

		::System::Boolean AddProcessCustomerEventOrder(::RPG::GameCore::RestaurantNormalEventType a1, ::System::Int32 a2, ::System::Boolean a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::RestaurantNormalEventType, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTAISERVICE_ADDPROCESSCUSTOMEREVENTORDER_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean AddCookFoodOrder(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTAISERVICE_ADDCOOKFOODORDER_OFFSET))(this, a1, a2);
		}

		::System::Boolean AddCookFoodOrder_1(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTAISERVICE_ADDCOOKFOODORDER_1_OFFSET))(this, a1, a2);
		}

		::System::Boolean AddCookFoodOrder_2(::System::Collections::Generic::List_1<::System::UInt32>* a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTAISERVICE_ADDCOOKFOODORDER_2_OFFSET))(this, a1, a2);
		}

		::System::Void DropFoodOrder(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTAISERVICE_DROPFOODORDER_OFFSET))(this, a1);
		}

		::System::Boolean ReqProcessEvent(::RPG::Client::LittleGame::ElfRestaurant::ElfRestaurantEventParams* a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurant::ElfRestaurantEventParams*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTAISERVICE_REQPROCESSEVENT_OFFSET))(this, a1, a2);
		}

		::System::Boolean ReqProcessSelectEvent(::RPG::Client::LittleGame::ElfRestaurant::ElfRestaurantEventParams* a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurant::ElfRestaurantEventParams*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTAISERVICE_REQPROCESSSELECTEVENT_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean AddGameTimeOverOrder()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTAISERVICE_ADDGAMETIMEOVERORDER_OFFSET))(this);
		}

		::System::Boolean HasWaitCustomer()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTAISERVICE_HASWAITCUSTOMER_OFFSET))(this);
		}

		::System::Int32 GetWaitCustomerCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTAISERVICE_GETWAITCUSTOMERCOUNT_OFFSET))(this);
		}

		::System::Int32 GetThumbCount(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTAISERVICE_GETTHUMBCOUNT_OFFSET))(this, a1);
		}

		::System::Boolean IsPay(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTAISERVICE_ISPAY_OFFSET))(this, a1);
		}

		::System::Void AddExtraPay(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTAISERVICE_ADDEXTRAPAY_OFFSET))(this, a1);
		}

		::System::Void AddBonusEvent(::UnityEngine::Vector3 a1, ::System::Int32 a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTAISERVICE_ADDBONUSEVENT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void TryAddDrinkEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTAISERVICE_TRYADDDRINKEVENT_OFFSET))(this);
		}

		::RPG::Client::LittleGame::ElfRestaurantGameEntity* AutoGetOrderCustomer()
		{
			return ((::RPG::Client::LittleGame::ElfRestaurantGameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTAISERVICE_AUTOGETORDERCUSTOMER_OFFSET))(this);
		}

		::System::Int32 AutoGetDeliveryFood(::System::UInt32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTAISERVICE_AUTOGETDELIVERYFOOD_OFFSET))(this, a1);
		}

		::System::Int32 AutoGetDeliveryCustomer(::System::UInt32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTAISERVICE_AUTOGETDELIVERYCUSTOMER_OFFSET))(this, a1);
		}

		::System::Int32 AutoGetDirtyTableSlot(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTAISERVICE_AUTOGETDIRTYTABLESLOT_OFFSET))(this, a1);
		}

		::System::Int32 AutoGetDirtyObstacle()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTAISERVICE_AUTOGETDIRTYOBSTACLE_OFFSET))(this);
		}

		::System::Void SetBehavior(::System::Int32 a1, ::System::UInt32 a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTAISERVICE_SETBEHAVIOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ClearBehavior(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTAISERVICE_CLEARBEHAVIOR_OFFSET))(this, a1);
		}

		::System::Void _AddBehavior(::System::Int32 a1, ::RPG::GameCore::ElfBehaviorStateItem* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::GameCore::ElfBehaviorStateItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTAISERVICE__ADDBEHAVIOR_OFFSET))(this, a1, a2);
		}

		::System::Void _AddDelayBehavior(::System::Int32 a1, ::RPG::GameCore::ElfBehaviorStateContentItem* a2, ::System::Collections::Generic::List_1<::System::Object*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::GameCore::ElfBehaviorStateContentItem*, ::System::Collections::Generic::List_1<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTAISERVICE__ADDDELAYBEHAVIOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _RemoveBehavior(::System::Int32 a1, ::System::Collections::Generic::List_1<::System::Object*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTAISERVICE__REMOVEBEHAVIOR_OFFSET))(this, a1, a2);
		}

	};
}
