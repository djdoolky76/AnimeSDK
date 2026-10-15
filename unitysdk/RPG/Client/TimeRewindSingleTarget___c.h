#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KJFIKOKBCCA.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class TimeRewindSingleTarget; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define RPG_CLIENT_TIMEREWINDSINGLETARGET___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xE27E800)
#define RPG_CLIENT_TIMEREWINDSINGLETARGET___C_CTOR_OFFSET UNITYSDK_OFFSET(0xE27E840)
#define RPG_CLIENT_TIMEREWINDSINGLETARGET___C__MANUALSNAPLOOPREWINDRATIO_B__9_0_OFFSET UNITYSDK_OFFSET(0xE27E850)

namespace RPG::Client
{
	inline static constexpr unsigned int TimeRewindSingleTarget___c_TypeDefinitionIndex = 60821;

	class TimeRewindSingleTarget___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x19200);
		}

		static ::System::Action_2<::RPG::Client::TimeRewindSingleTarget*, ::KJFIKOKBCCA>** StaticGet___9__9_0()
		{
			return (::System::Action_2<::RPG::Client::TimeRewindSingleTarget*, ::KJFIKOKBCCA>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x19208);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDSINGLETARGET___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDSINGLETARGET___C_CTOR_OFFSET))(this);
		}

		::System::Void _ManualSnapLoopRewindRatio_b__9_0(::RPG::Client::TimeRewindSingleTarget* a1, ::KJFIKOKBCCA a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TimeRewindSingleTarget*, ::KJFIKOKBCCA))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDSINGLETARGET___C__MANUALSNAPLOOPREWINDRATIO_B__9_0_OFFSET))(this, a1, a2);
		}

	};
}
