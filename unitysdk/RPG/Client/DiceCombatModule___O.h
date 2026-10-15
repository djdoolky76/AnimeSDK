#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::DiceCombat { class DiceCombatShopData; }
namespace System { template <typename T> class Comparison_1; }

namespace RPG::Client
{
	class DiceCombatModule___O : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::RPG::Client::DiceCombat::DiceCombatShopData*>** StaticGet__0___SortShopList()
		{
			return (::System::Comparison_1<::RPG::Client::DiceCombat::DiceCombatShopData*>**)UnitySDK::FromName("RPG.Client", "<>O")->GetStaticField(0x2E1A0);
		}

	};
}
