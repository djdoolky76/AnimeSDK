#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Exception; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGAMEFLOW___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xC4DEC30)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGAMEFLOW___C_CTOR_OFFSET UNITYSDK_OFFSET(0xC4DEC70)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGAMEFLOW___C___SHOWDIALOGSONBATTLEBEGIN_B__123_0_OFFSET UNITYSDK_OFFSET(0xC4DEC80)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveGameFlow___c_TypeDefinitionIndex = 75298;

	class IdleLiveGameFlow___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::System::Exception*>** StaticGet___9__123_0()
		{
			return (::System::Action_1<::System::Exception*>**)UnitySDK::FromName("RPG.Client.ActivityIdleLive", "<>c")->GetStaticField(0x25C40);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client.ActivityIdleLive", "<>c")->GetStaticField(0x25C48);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGAMEFLOW___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGAMEFLOW___C_CTOR_OFFSET))(this);
		}

		::System::Void __ShowDialogsOnBattleBegin_b__123_0(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGAMEFLOW___C___SHOWDIALOGSONBATTLEBEGIN_B__123_0_OFFSET))(this, a1);
		}

	};
}
