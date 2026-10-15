#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class TrainExteriorConfigRow; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_ADVENTUREMODULE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xC5F64E0)
#define RPG_CLIENT_ADVENTUREMODULE___C_CTOR_OFFSET UNITYSDK_OFFSET(0xC5F6520)
#define RPG_CLIENT_ADVENTUREMODULE___C__GETTRAINOUTSIDESCENEID_B__86_0_OFFSET UNITYSDK_OFFSET(0xC5F6530)
#define RPG_CLIENT_ADVENTUREMODULE___C__GETTRAINOUTSIDESCENEID_B__86_1_OFFSET UNITYSDK_OFFSET(0xC5F6570)
#define RPG_CLIENT_ADVENTUREMODULE___C__TRIGGERONFINISHPERFORMANCESTANDALONEPLAY_B__322_0_OFFSET UNITYSDK_OFFSET(0xC5F6590)

namespace RPG::Client
{
	class AdventureModule___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::RPG::GameCore::TrainExteriorConfigRow*>** StaticGet___9__86_0()
		{
			return (::System::Comparison_1<::RPG::GameCore::TrainExteriorConfigRow*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x46470);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x46478);
		}

		static ::System::Action** StaticGet___9__322_0()
		{
			return (::System::Action**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x46480);
		}

		static ::System::Func_2<::RPG::GameCore::TrainExteriorConfigRow*, ::System::Boolean>** StaticGet___9__86_1()
		{
			return (::System::Func_2<::RPG::GameCore::TrainExteriorConfigRow*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x46488);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREMODULE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREMODULE___C_CTOR_OFFSET))(this);
		}

		::System::Int32 _GetTrainOutSideSceneID_b__86_0(::RPG::GameCore::TrainExteriorConfigRow* a1, ::RPG::GameCore::TrainExteriorConfigRow* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::TrainExteriorConfigRow*, ::RPG::GameCore::TrainExteriorConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREMODULE___C__GETTRAINOUTSIDESCENEID_B__86_0_OFFSET))(this, a1, a2);
		}

		::System::Boolean _GetTrainOutSideSceneID_b__86_1(::RPG::GameCore::TrainExteriorConfigRow* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TrainExteriorConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREMODULE___C__GETTRAINOUTSIDESCENEID_B__86_1_OFFSET))(this, a1);
		}

		::System::Void _TriggerOnFinishPerformanceStandalonePlay_b__322_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREMODULE___C__TRIGGERONFINISHPERFORMANCESTANDALONEPLAY_B__322_0_OFFSET))(this);
		}

	};
}
