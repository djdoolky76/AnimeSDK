#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class Object; }

#define RPG_CLIENT_ACTIVITYSWORDTRAININGMODULE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DCCFDF0)
#define RPG_CLIENT_ACTIVITYSWORDTRAININGMODULE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DCCFE30)
#define RPG_CLIENT_ACTIVITYSWORDTRAININGMODULE___C___ONSWORDTRAININGSTARTGAMESCRSP_B__3_0_OFFSET UNITYSDK_OFFSET(0x1DCCFE40)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivitySwordTrainingModule___c_TypeDefinitionIndex = 63342;

	class ActivitySwordTrainingModule___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__3_0()
		{
			return (::System::Action**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x3DCA0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x3DCA8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSWORDTRAININGMODULE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSWORDTRAININGMODULE___C_CTOR_OFFSET))(this);
		}

		::System::Void __OnSwordTrainingStartGameScRsp_b__3_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSWORDTRAININGMODULE___C___ONSWORDTRAININGSTARTGAMESCRSP_B__3_0_OFFSET))(this);
		}

	};
}
