#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityBenefitV2RoundListViewModel_Round_StateType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/TimeSpan.h"
class JNBAPNPIADL;
namespace RPG::Client { class ActivityBenefitV2Round; }
namespace RPG::Client { class ItemDisplayData; }
namespace System { class Action; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::ComponentModel { class PropertyChangedEventArgs; }

#define RPG_CLIENT_ACTIVITYBENEFITV2ROUNDLISTVIEWMODEL_ROUND_ADD_ONDRAWFINISHED_OFFSET UNITYSDK_OFFSET(0xCD19000)
#define RPG_CLIENT_ACTIVITYBENEFITV2ROUNDLISTVIEWMODEL_ROUND_ADD_ONSTATECHANGED_OFFSET UNITYSDK_OFFSET(0xCD18520)
#define RPG_CLIENT_ACTIVITYBENEFITV2ROUNDLISTVIEWMODEL_ROUND_CTOR_OFFSET UNITYSDK_OFFSET(0xCD17BF0)
#define RPG_CLIENT_ACTIVITYBENEFITV2ROUNDLISTVIEWMODEL_ROUND_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCD17FA0)
#define RPG_CLIENT_ACTIVITYBENEFITV2ROUNDLISTVIEWMODEL_ROUND_DRAW_OFFSET UNITYSDK_OFFSET(0xCD18E60)
#define RPG_CLIENT_ACTIVITYBENEFITV2ROUNDLISTVIEWMODEL_ROUND_GETREMAININGTIMEBEFOREUNLOCK_OFFSET UNITYSDK_OFFSET(0xCD189F0)
#define RPG_CLIENT_ACTIVITYBENEFITV2ROUNDLISTVIEWMODEL_ROUND_GET_ISSPECIALPRIZE_OFFSET UNITYSDK_OFFSET(0xCD185E0)
#define RPG_CLIENT_ACTIVITYBENEFITV2ROUNDLISTVIEWMODEL_ROUND_GET_REWARDITEMS_OFFSET UNITYSDK_OFFSET(0xCD18690)
#define RPG_CLIENT_ACTIVITYBENEFITV2ROUNDLISTVIEWMODEL_ROUND_GET_SHOULDSHOWUNLOCKING_OFFSET UNITYSDK_OFFSET(0xCD18860)
#define RPG_CLIENT_ACTIVITYBENEFITV2ROUNDLISTVIEWMODEL_ROUND_GET_STATE_OFFSET UNITYSDK_OFFSET(0xCD18500)
#define RPG_CLIENT_ACTIVITYBENEFITV2ROUNDLISTVIEWMODEL_ROUND_GET__SEASONCONFIGDATA_OFFSET UNITYSDK_OFFSET(0xCD18450)
#define RPG_CLIENT_ACTIVITYBENEFITV2ROUNDLISTVIEWMODEL_ROUND_REMOVE_ONDRAWFINISHED_OFFSET UNITYSDK_OFFSET(0xCD19060)
#define RPG_CLIENT_ACTIVITYBENEFITV2ROUNDLISTVIEWMODEL_ROUND_REMOVE_ONSTATECHANGED_OFFSET UNITYSDK_OFFSET(0xCD18580)
#define RPG_CLIENT_ACTIVITYBENEFITV2ROUNDLISTVIEWMODEL_ROUND_SETUNLOCKINGSEEN_OFFSET UNITYSDK_OFFSET(0xCD18D50)
#define RPG_CLIENT_ACTIVITYBENEFITV2ROUNDLISTVIEWMODEL_ROUND_SET_STATE_OFFSET UNITYSDK_OFFSET(0xCD18510)
#define RPG_CLIENT_ACTIVITYBENEFITV2ROUNDLISTVIEWMODEL_ROUND_SYNCONDRAWFINISHED_OFFSET UNITYSDK_OFFSET(0xCD183E0)
#define RPG_CLIENT_ACTIVITYBENEFITV2ROUNDLISTVIEWMODEL_ROUND__CHECKSHOULDSHOWUNLOCKING_OFFSET UNITYSDK_OFFSET(0xCD188B0)
#define RPG_CLIENT_ACTIVITYBENEFITV2ROUNDLISTVIEWMODEL_ROUND__GETSTATEFROMMODEL_OFFSET UNITYSDK_OFFSET(0xCD192B0)
#define RPG_CLIENT_ACTIVITYBENEFITV2ROUNDLISTVIEWMODEL_ROUND__ONMODELPROPERTYCHANGED_OFFSET UNITYSDK_OFFSET(0xCD190C0)
#define RPG_CLIENT_ACTIVITYBENEFITV2ROUNDLISTVIEWMODEL_ROUND__REFRESHSTATE_OFFSET UNITYSDK_OFFSET(0xCD187F0)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityBenefitV2RoundListViewModel_Round_TypeDefinitionIndex = 62804;

	class ActivityBenefitV2RoundListViewModel_Round : public ::System::Object
	{
	public:
		::RPG::Client::ActivityBenefitV2Round* _Model; // 0x10
		::System::Action* OnDrawFinished; // 0x18
		::System::Action* OnStateChanged; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* _RewardItems; // 0x28
		::System::UInt32 _SeasonConfigID; // 0x30
		::RPG::Client::ActivityBenefitV2RoundListViewModel_Round_StateType _State_k__BackingField; // 0x34
		::System::Int32 Index; // 0x38
		::System::Void _ctor(::System::UInt32 a1, ::System::Int32 a2, ::RPG::Client::ActivityBenefitV2Round* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32, ::RPG::Client::ActivityBenefitV2Round*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITV2ROUNDLISTVIEWMODEL_ROUND_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::JNBAPNPIADL* get__SeasonConfigData()
		{
			return ((::JNBAPNPIADL*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITV2ROUNDLISTVIEWMODEL_ROUND_GET__SEASONCONFIGDATA_OFFSET))(this);
		}

		::RPG::Client::ActivityBenefitV2RoundListViewModel_Round_StateType get_State()
		{
			return ((::RPG::Client::ActivityBenefitV2RoundListViewModel_Round_StateType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITV2ROUNDLISTVIEWMODEL_ROUND_GET_STATE_OFFSET))(this);
		}

		::System::Void set_State(::RPG::Client::ActivityBenefitV2RoundListViewModel_Round_StateType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityBenefitV2RoundListViewModel_Round_StateType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITV2ROUNDLISTVIEWMODEL_ROUND_SET_STATE_OFFSET))(this, a1);
		}

		::System::Void add_OnStateChanged(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITV2ROUNDLISTVIEWMODEL_ROUND_ADD_ONSTATECHANGED_OFFSET))(this, a1);
		}

		::System::Void remove_OnStateChanged(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITV2ROUNDLISTVIEWMODEL_ROUND_REMOVE_ONSTATECHANGED_OFFSET))(this, a1);
		}

		::System::Boolean get_IsSpecialPrize()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITV2ROUNDLISTVIEWMODEL_ROUND_GET_ISSPECIALPRIZE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* get_RewardItems()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITV2ROUNDLISTVIEWMODEL_ROUND_GET_REWARDITEMS_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITV2ROUNDLISTVIEWMODEL_ROUND_DISPOSE_OFFSET))(this);
		}

		::System::Boolean get_ShouldShowUnlocking()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITV2ROUNDLISTVIEWMODEL_ROUND_GET_SHOULDSHOWUNLOCKING_OFFSET))(this);
		}

		::System::Boolean _CheckShouldShowUnlocking()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITV2ROUNDLISTVIEWMODEL_ROUND__CHECKSHOULDSHOWUNLOCKING_OFFSET))(this);
		}

		::System::Nullable_1<::System::TimeSpan> GetRemainingTimeBeforeUnlock()
		{
			return ((::System::Nullable_1<::System::TimeSpan>(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITV2ROUNDLISTVIEWMODEL_ROUND_GETREMAININGTIMEBEFOREUNLOCK_OFFSET))(this);
		}

		::System::Void SetUnlockingSeen()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITV2ROUNDLISTVIEWMODEL_ROUND_SETUNLOCKINGSEEN_OFFSET))(this);
		}

		::System::Void Draw()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITV2ROUNDLISTVIEWMODEL_ROUND_DRAW_OFFSET))(this);
		}

		::System::Void SyncOnDrawFinished(::RPG::Client::ActivityBenefitV2Round* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityBenefitV2Round*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITV2ROUNDLISTVIEWMODEL_ROUND_SYNCONDRAWFINISHED_OFFSET))(this, a1);
		}

		::System::Void add_OnDrawFinished(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITV2ROUNDLISTVIEWMODEL_ROUND_ADD_ONDRAWFINISHED_OFFSET))(this, a1);
		}

		::System::Void remove_OnDrawFinished(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITV2ROUNDLISTVIEWMODEL_ROUND_REMOVE_ONDRAWFINISHED_OFFSET))(this, a1);
		}

		::System::Void _OnModelPropertyChanged(::System::Object* a1, ::System::ComponentModel::PropertyChangedEventArgs* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::ComponentModel::PropertyChangedEventArgs*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITV2ROUNDLISTVIEWMODEL_ROUND__ONMODELPROPERTYCHANGED_OFFSET))(this, a1, a2);
		}

		::System::Void _RefreshState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITV2ROUNDLISTVIEWMODEL_ROUND__REFRESHSTATE_OFFSET))(this);
		}

		::RPG::Client::ActivityBenefitV2RoundListViewModel_Round_StateType _GetStateFromModel()
		{
			return ((::RPG::Client::ActivityBenefitV2RoundListViewModel_Round_StateType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITV2ROUNDLISTVIEWMODEL_ROUND__GETSTATEFROMMODEL_OFFSET))(this);
		}

	};
}
