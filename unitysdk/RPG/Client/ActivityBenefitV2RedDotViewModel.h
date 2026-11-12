#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PODBFIGCAKC;
namespace Proto { class ItemList; }
namespace RPG::Client { class ActivityBenefitV2RedDotViewModel; }
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_ACTIVITYBENEFITV2REDDOTVIEWMODEL_ADD_ONCHANGED_OFFSET UNITYSDK_OFFSET(0xCD14A10)
#define RPG_CLIENT_ACTIVITYBENEFITV2REDDOTVIEWMODEL_CREATE_OFFSET UNITYSDK_OFFSET(0xCD149C0)
#define RPG_CLIENT_ACTIVITYBENEFITV2REDDOTVIEWMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0xCD14C20)
#define RPG_CLIENT_ACTIVITYBENEFITV2REDDOTVIEWMODEL_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCD14280)
#define RPG_CLIENT_ACTIVITYBENEFITV2REDDOTVIEWMODEL_GET__SEASON_OFFSET UNITYSDK_OFFSET(0xCD14AD0)
#define RPG_CLIENT_ACTIVITYBENEFITV2REDDOTVIEWMODEL_ISALLREWARDCLAIMED_OFFSET UNITYSDK_OFFSET(0xCD14620)
#define RPG_CLIENT_ACTIVITYBENEFITV2REDDOTVIEWMODEL_ISANYREWARDCLAIMABLE_OFFSET UNITYSDK_OFFSET(0xCD14750)
#define RPG_CLIENT_ACTIVITYBENEFITV2REDDOTVIEWMODEL_ISINITIALREWARDCLAIMABLE_OFFSET UNITYSDK_OFFSET(0xCD154E0)
#define RPG_CLIENT_ACTIVITYBENEFITV2REDDOTVIEWMODEL_REMOVE_ONCHANGED_OFFSET UNITYSDK_OFFSET(0xCD14BC0)
#define RPG_CLIENT_ACTIVITYBENEFITV2REDDOTVIEWMODEL_VISITREWARDINGROUNDS_OFFSET UNITYSDK_OFFSET(0xCD14F80)
#define RPG_CLIENT_ACTIVITYBENEFITV2REDDOTVIEWMODEL__ONCLAIMREWARDFINISHED_OFFSET UNITYSDK_OFFSET(0xCD14F10)
#define RPG_CLIENT_ACTIVITYBENEFITV2REDDOTVIEWMODEL__ONDRAWFINISHED_OFFSET UNITYSDK_OFFSET(0xCD14EA0)
#define RPG_CLIENT_ACTIVITYBENEFITV2REDDOTVIEWMODEL__ONGETDATAFINISHED_OFFSET UNITYSDK_OFFSET(0xCD14E40)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityBenefitV2RedDotViewModel_TypeDefinitionIndex = 62798;

	class ActivityBenefitV2RedDotViewModel : public ::System::Object
	{
	public:
		::System::Action* OnChanged; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITV2REDDOTVIEWMODEL_CTOR_OFFSET))(this);
		}

		::PODBFIGCAKC* get__Season()
		{
			return ((::PODBFIGCAKC*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITV2REDDOTVIEWMODEL_GET__SEASON_OFFSET))(this);
		}

		::System::Void add_OnChanged(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITV2REDDOTVIEWMODEL_ADD_ONCHANGED_OFFSET))(this, a1);
		}

		::System::Void remove_OnChanged(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITV2REDDOTVIEWMODEL_REMOVE_ONCHANGED_OFFSET))(this, a1);
		}

		static ::RPG::Client::ActivityBenefitV2RedDotViewModel* Create()
		{
			return ((::RPG::Client::ActivityBenefitV2RedDotViewModel*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITV2REDDOTVIEWMODEL_CREATE_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITV2REDDOTVIEWMODEL_DISPOSE_OFFSET))(this);
		}

		::System::Void _OnGetDataFinished()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITV2REDDOTVIEWMODEL__ONGETDATAFINISHED_OFFSET))(this);
		}

		::System::Void _OnDrawFinished(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITV2REDDOTVIEWMODEL__ONDRAWFINISHED_OFFSET))(this, a1);
		}

		::System::Void _OnClaimRewardFinished(::System::Int32 a1, ::Proto::ItemList* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITV2REDDOTVIEWMODEL__ONCLAIMREWARDFINISHED_OFFSET))(this, a1, a2);
		}

		::System::Void VisitRewardingRounds(::System::Func_2<::System::Int32, ::System::Boolean>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Func_2<::System::Int32, ::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITV2REDDOTVIEWMODEL_VISITREWARDINGROUNDS_OFFSET))(this, a1);
		}

		::System::Boolean IsInitialRewardClaimable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITV2REDDOTVIEWMODEL_ISINITIALREWARDCLAIMABLE_OFFSET))(this);
		}

		::System::Boolean IsAnyRewardClaimable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITV2REDDOTVIEWMODEL_ISANYREWARDCLAIMABLE_OFFSET))(this);
		}

		::System::Boolean IsAllRewardClaimed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITV2REDDOTVIEWMODEL_ISALLREWARDCLAIMED_OFFSET))(this);
		}

	};
}
