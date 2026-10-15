#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }
namespace System { class Action; }

namespace RPG::Client
{
	class TrainPartyUtils___O : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet__0____OnEntityLoadFinish()
		{
			return (::System::Action**)UnitySDK::FromName("RPG.Client", "<>O")->GetStaticField(0x258D0);
		}

	};
}
