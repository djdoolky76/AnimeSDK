#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CENEFPOMFKG;
class KKAOOEJHHHE;
namespace RPG::GameCore { class GameEntity; }
namespace System { class Action; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }

	class LIIAKHPGLPO___O : public ::System::Object
	{
	public:
		static ::System::Func_3<::KKAOOEJHHHE*, ::RPG::GameCore::GameEntity*, ::System::Boolean>** StaticGet__1____CheckSkillDataMatchRequester()
		{
			return (::System::Func_3<::KKAOOEJHHHE*, ::RPG::GameCore::GameEntity*, ::System::Boolean>**)UnitySDK::FromName("", "<>O")->GetStaticField(0x5F690);
		}

		static ::System::Action** StaticGet__2____OnRemoveRequester()
		{
			return (::System::Action**)UnitySDK::FromName("", "<>O")->GetStaticField(0x5F698);
		}

		static ::System::Func_3<::KKAOOEJHHHE*, ::CENEFPOMFKG*, ::System::Boolean>** StaticGet__0___CheckMatch()
		{
			return (::System::Func_3<::KKAOOEJHHHE*, ::CENEFPOMFKG*, ::System::Boolean>**)UnitySDK::FromName("", "<>O")->GetStaticField(0x5F6A0);
		}

	};
