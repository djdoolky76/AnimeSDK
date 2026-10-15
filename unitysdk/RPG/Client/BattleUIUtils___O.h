#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }
namespace System { template <typename T> class Predicate_1; }

namespace RPG::Client
{
	class BattleUIUtils___O : public ::System::Object
	{
	public:
		static ::System::Predicate_1<::RPG::GameCore::GameEntity*>** StaticGet__0___IsEntityNeedShowInViewMode()
		{
			return (::System::Predicate_1<::RPG::GameCore::GameEntity*>**)UnitySDK::FromName("RPG.Client", "<>O")->GetStaticField(0x5CD30);
		}

	};
}
