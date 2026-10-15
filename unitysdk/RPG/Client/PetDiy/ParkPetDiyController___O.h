#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }
namespace System { class Action; }

namespace RPG::Client::PetDiy
{
	class ParkPetDiyController___O : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet__0___ForceSampleFirstFrame()
		{
			return (::System::Action**)UnitySDK::FromName("RPG.Client.PetDiy", "<>O")->GetStaticField(0x161F0);
		}

	};
}
