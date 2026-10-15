#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class HoyoTag; }

namespace RPG::GameCore
{
	template <typename T>
	class PropTagIndexer_1 : public ::System::Object
	{
	public:
		static ::RPG::GameCore::HoyoTag** StaticGet_Tag()
		{
			return (::RPG::GameCore::HoyoTag**)UnitySDK::FromName("RPG.GameCore", "PropTagIndexer`1")->GetStaticField(0x0);
		}

	};
}
