#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DBNGNLBAOAG;
namespace RPG::Client { class ActivityBenefitV2RoundListViewModel; }
namespace RPG::Client { class ActivityBenefitV2RoundListViewModel_Round; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYBENEFITV2ROUNDLISTVIEWMODEL_CREATE_OFFSET UNITYSDK_OFFSET(0xCD17430)
#define RPG_CLIENT_ACTIVITYBENEFITV2ROUNDLISTVIEWMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0xCD17510)
#define RPG_CLIENT_ACTIVITYBENEFITV2ROUNDLISTVIEWMODEL_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCD17D30)
#define RPG_CLIENT_ACTIVITYBENEFITV2ROUNDLISTVIEWMODEL_GETROUND_OFFSET UNITYSDK_OFFSET(0xCD180F0)
#define RPG_CLIENT_ACTIVITYBENEFITV2ROUNDLISTVIEWMODEL_GET_ROUNDCOUNT_OFFSET UNITYSDK_OFFSET(0xCD180A0)
#define RPG_CLIENT_ACTIVITYBENEFITV2ROUNDLISTVIEWMODEL__ONDRAWFINISHED_OFFSET UNITYSDK_OFFSET(0xCD18170)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityBenefitV2RoundListViewModel_TypeDefinitionIndex = 62803;

	class ActivityBenefitV2RoundListViewModel : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* _Rounds; // 0x10
		::DBNGNLBAOAG* _Season; // 0x18
		::System::Void _ctor(::DBNGNLBAOAG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DBNGNLBAOAG*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITV2ROUNDLISTVIEWMODEL_CTOR_OFFSET))(this, a1);
		}

		static ::RPG::Client::ActivityBenefitV2RoundListViewModel* Create()
		{
			return ((::RPG::Client::ActivityBenefitV2RoundListViewModel*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITV2ROUNDLISTVIEWMODEL_CREATE_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITV2ROUNDLISTVIEWMODEL_DISPOSE_OFFSET))(this);
		}

		::System::Int32 get_RoundCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITV2ROUNDLISTVIEWMODEL_GET_ROUNDCOUNT_OFFSET))(this);
		}

		::RPG::Client::ActivityBenefitV2RoundListViewModel_Round* GetRound(::System::Int32 a1)
		{
			return ((::RPG::Client::ActivityBenefitV2RoundListViewModel_Round*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITV2ROUNDLISTVIEWMODEL_GETROUND_OFFSET))(this, a1);
		}

		::System::Void _OnDrawFinished(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITV2ROUNDLISTVIEWMODEL__ONDRAWFINISHED_OFFSET))(this, a1);
		}

	};
}
