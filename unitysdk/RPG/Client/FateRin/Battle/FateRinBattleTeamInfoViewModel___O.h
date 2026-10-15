#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }

namespace RPG::Client::FateRin::Battle
{
	class FateRinBattleTeamInfoViewModel___O : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet__0____OnPageEnter()
		{
			return (::System::Action**)UnitySDK::FromName("RPG.Client.FateRin.Battle", "<>O")->GetStaticField(0x55120);
		}

	};
}
