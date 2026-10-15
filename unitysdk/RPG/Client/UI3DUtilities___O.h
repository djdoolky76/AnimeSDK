#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }

namespace RPG::Client
{
	class UI3DUtilities___O : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet__0___RemoveUnloadSceneUnavailableReason()
		{
			return (::System::Action**)UnitySDK::FromName("RPG.Client", "<>O")->GetStaticField(0x322F0);
		}

	};
}
