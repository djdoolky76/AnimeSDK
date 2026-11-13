#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TreasureChallengeTargetStatus.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_TREASURECHALLENGETARGET___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CE66D60)
#define RPG_CLIENT_TREASURECHALLENGETARGET___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1CE66DA0)
#define RPG_CLIENT_TREASURECHALLENGETARGET___C__GET_FINISHEDCOUNT_B__13_0_OFFSET UNITYSDK_OFFSET(0x1CE66DB0)

namespace RPG::Client
{
	inline static constexpr unsigned int TreasureChallengeTarget___c_TypeDefinitionIndex = 68718;

	class TreasureChallengeTarget___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::TreasureChallengeTargetStatus, ::System::Boolean>** StaticGet___9__13_0()
		{
			return (::System::Func_2<::RPG::Client::TreasureChallengeTargetStatus, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x37130);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x37138);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASURECHALLENGETARGET___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASURECHALLENGETARGET___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _get_FinishedCount_b__13_0(::RPG::Client::TreasureChallengeTargetStatus a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::TreasureChallengeTargetStatus))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASURECHALLENGETARGET___C__GET_FINISHEDCOUNT_B__13_0_OFFSET))(this, a1);
		}

	};
}
