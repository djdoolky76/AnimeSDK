#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class ChallengePeakTarget; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_CHALLENGEPEAK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xC99EB20)
#define RPG_CLIENT_CHALLENGEPEAK___C_CTOR_OFFSET UNITYSDK_OFFSET(0xC99EB60)
#define RPG_CLIENT_CHALLENGEPEAK___C__GETCOUNTOFPASSEDTARGETS_B__55_0_OFFSET UNITYSDK_OFFSET(0xC99EBA0)
#define RPG_CLIENT_CHALLENGEPEAK___C__GET_VORACITYINVASIONLEVEL_B__22_0_OFFSET UNITYSDK_OFFSET(0xC99EB70)

namespace RPG::Client
{
	class ChallengePeak___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6D430);
		}

		static ::System::Func_2<::System::UInt32, ::System::UInt32>** StaticGet___9__22_0()
		{
			return (::System::Func_2<::System::UInt32, ::System::UInt32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6D438);
		}

		static ::System::Func_2<::RPG::Client::ChallengePeakTarget*, ::System::Boolean>** StaticGet___9__55_0()
		{
			return (::System::Func_2<::RPG::Client::ChallengePeakTarget*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6D440);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAK___C_CTOR_OFFSET))(this);
		}

		::System::UInt32 _get_VoracityInvasionLevel_b__22_0(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAK___C__GET_VORACITYINVASIONLEVEL_B__22_0_OFFSET))(this, a1);
		}

		::System::Boolean _GetCountOfPassedTargets_b__55_0(::RPG::Client::ChallengePeakTarget* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChallengePeakTarget*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAK___C__GETCOUNTOFPASSEDTARGETS_B__55_0_OFFSET))(this, a1);
		}

	};
}
