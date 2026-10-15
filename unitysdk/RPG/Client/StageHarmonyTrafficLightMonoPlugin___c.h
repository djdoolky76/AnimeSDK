#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GEHMCJDBGFP.h"
#include "unitysdk/JOALFNGBHAG.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class StageHarmonyTrafficLightMonoPlugin_IntersectionPhase; }
namespace RPG::Client { class StageHarmonyTrafficLightMonoPlugin_IntersectionPhase_PhaseValueActionPair; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_STAGEHARMONYTRAFFICLIGHTMONOPLUGIN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xE11C320)
#define RPG_CLIENT_STAGEHARMONYTRAFFICLIGHTMONOPLUGIN___C_CTOR_OFFSET UNITYSDK_OFFSET(0xE11C360)
#define RPG_CLIENT_STAGEHARMONYTRAFFICLIGHTMONOPLUGIN___C__DUMP_B__2_0_OFFSET UNITYSDK_OFFSET(0xE11C370)
#define RPG_CLIENT_STAGEHARMONYTRAFFICLIGHTMONOPLUGIN___C__DUMP_B__2_1_OFFSET UNITYSDK_OFFSET(0xE11C3B0)

namespace RPG::Client
{
	class StageHarmonyTrafficLightMonoPlugin___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Object*, ::JOALFNGBHAG>** StaticGet___9__2_0()
		{
			return (::System::Func_2<::System::Object*, ::JOALFNGBHAG>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6F4B0);
		}

		static ::System::Func_2<::System::Object*, ::GEHMCJDBGFP>** StaticGet___9__2_1()
		{
			return (::System::Func_2<::System::Object*, ::GEHMCJDBGFP>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6F4B8);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6F4C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYTRAFFICLIGHTMONOPLUGIN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYTRAFFICLIGHTMONOPLUGIN___C_CTOR_OFFSET))(this);
		}

		::JOALFNGBHAG _Dump_b__2_0(::RPG::Client::StageHarmonyTrafficLightMonoPlugin_IntersectionPhase* a1)
		{
			return ((::JOALFNGBHAG(*)(::PVOID, ::RPG::Client::StageHarmonyTrafficLightMonoPlugin_IntersectionPhase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYTRAFFICLIGHTMONOPLUGIN___C__DUMP_B__2_0_OFFSET))(this, a1);
		}

		::GEHMCJDBGFP _Dump_b__2_1(::RPG::Client::StageHarmonyTrafficLightMonoPlugin_IntersectionPhase_PhaseValueActionPair* a1)
		{
			return ((::GEHMCJDBGFP(*)(::PVOID, ::RPG::Client::StageHarmonyTrafficLightMonoPlugin_IntersectionPhase_PhaseValueActionPair*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYTRAFFICLIGHTMONOPLUGIN___C__DUMP_B__2_1_OFFSET))(this, a1);
		}

	};
}
