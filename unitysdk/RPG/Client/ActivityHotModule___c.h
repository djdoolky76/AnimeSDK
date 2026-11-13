#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class ActivityHotExtraCoreRewardData; }
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_ACTIVITYHOTMODULE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D12C6B0)
#define RPG_CLIENT_ACTIVITYHOTMODULE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1D12C6F0)
#define RPG_CLIENT_ACTIVITYHOTMODULE___C___COLLECTEXTRACOREREWARDS_B__18_0_OFFSET UNITYSDK_OFFSET(0x1D12C700)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityHotModule___c_TypeDefinitionIndex = 62924;

	class ActivityHotModule___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x1CAC0);
		}

		static ::System::Comparison_1<::RPG::Client::ActivityHotExtraCoreRewardData*>** StaticGet___9__18_0()
		{
			return (::System::Comparison_1<::RPG::Client::ActivityHotExtraCoreRewardData*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x1CAC8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHOTMODULE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHOTMODULE___C_CTOR_OFFSET))(this);
		}

		::System::Int32 __CollectExtraCoreRewards_b__18_0(::RPG::Client::ActivityHotExtraCoreRewardData* a1, ::RPG::Client::ActivityHotExtraCoreRewardData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ActivityHotExtraCoreRewardData*, ::RPG::Client::ActivityHotExtraCoreRewardData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHOTMODULE___C___COLLECTEXTRACOREREWARDS_B__18_0_OFFSET))(this, a1, a2);
		}

	};
}
