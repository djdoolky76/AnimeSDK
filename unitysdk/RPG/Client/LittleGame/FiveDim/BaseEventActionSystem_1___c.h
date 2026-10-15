#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::LittleGame::FiveDim { template <typename T> class BaseEventActionSystem_1; }
namespace RPG::GameCore { class LittleGameEvent; }
namespace System { class Action; }
namespace System { class Object; }

namespace RPG::Client::LittleGame::FiveDim
{
	template <typename T>
	class BaseEventActionSystem_1___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client.LittleGame.FiveDim", "<>c")->GetStaticField(0x0);
		}

		static ::System::Action** StaticGet___9__14_0()
		{
			return (::System::Action**)UnitySDK::FromName("RPG.Client.LittleGame.FiveDim", "<>c")->GetStaticField(0x0);
		}

	};
}
