#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::ActivityHipplen { class ActivityHipplenGiftData; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENSETTLETRIALGAMESTATE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CCBD980)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENSETTLETRIALGAMESTATE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1CCBD9C0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENSETTLETRIALGAMESTATE___C___CTOR_B__2_0_OFFSET UNITYSDK_OFFSET(0x1CCBD9D0)

namespace RPG::Client::ActivityHipplen
{
	inline static constexpr unsigned int ActivityHipplenSettleTrialGameState___c_TypeDefinitionIndex = 77853;

	class ActivityHipplenSettleTrialGameState___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client.ActivityHipplen", "<>c")->GetStaticField(0x19520);
		}

		static ::System::Func_2<::System::UInt32, ::RPG::Client::ActivityHipplen::ActivityHipplenGiftData*>** StaticGet___9__2_0()
		{
			return (::System::Func_2<::System::UInt32, ::RPG::Client::ActivityHipplen::ActivityHipplenGiftData*>**)UnitySDK::FromName("RPG.Client.ActivityHipplen", "<>c")->GetStaticField(0x19528);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENSETTLETRIALGAMESTATE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENSETTLETRIALGAMESTATE___C_CTOR_OFFSET))(this);
		}

		::RPG::Client::ActivityHipplen::ActivityHipplenGiftData* __ctor_b__2_0(::System::UInt32 a1)
		{
			return ((::RPG::Client::ActivityHipplen::ActivityHipplenGiftData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENSETTLETRIALGAMESTATE___C___CTOR_B__2_0_OFFSET))(this, a1);
		}

	};
}
