#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AOLGEKPKJOF;
namespace System { class Object; }
namespace System { template <typename T> class Predicate_1; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETICKMANAGER___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D3A5590)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETICKMANAGER___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3A55D0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETICKMANAGER___C__UPDATE_B__3_0_OFFSET UNITYSDK_OFFSET(0x1D3A55E0)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveTickManager___c_TypeDefinitionIndex = 77774;

	class IdleLiveTickManager___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client.ActivityIdleLive", "<>c")->GetStaticField(0x2A840);
		}

		static ::System::Predicate_1<::AOLGEKPKJOF*>** StaticGet___9__3_0()
		{
			return (::System::Predicate_1<::AOLGEKPKJOF*>**)UnitySDK::FromName("RPG.Client.ActivityIdleLive", "<>c")->GetStaticField(0x2A848);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETICKMANAGER___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETICKMANAGER___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _Update_b__3_0(::AOLGEKPKJOF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AOLGEKPKJOF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETICKMANAGER___C__UPDATE_B__3_0_OFFSET))(this, a1);
		}

	};
}
