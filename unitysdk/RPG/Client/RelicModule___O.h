#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class AsatPramadDiceItemAffixOption; }
namespace RPG::Client { class AsatPramadDiceItemSetOption; }
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

namespace RPG::Client
{
	inline static constexpr unsigned int RelicModule___O_TypeDefinitionIndex = 68799;

	class RelicModule___O : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::RPG::Client::AsatPramadDiceItemAffixOption*>** StaticGet__2____CompareSubAffixOption()
		{
			return (::System::Comparison_1<::RPG::Client::AsatPramadDiceItemAffixOption*>**)UnitySDK::FromName("RPG.Client", "<>O")->GetStaticField(0x699D0);
		}

		static ::System::Comparison_1<::RPG::Client::AsatPramadDiceItemSetOption*>** StaticGet__0____CompareAsatPramadDiceSetOption()
		{
			return (::System::Comparison_1<::RPG::Client::AsatPramadDiceItemSetOption*>**)UnitySDK::FromName("RPG.Client", "<>O")->GetStaticField(0x699D8);
		}

		static ::System::Comparison_1<::System::Object*>** StaticGet__1____CompareMainAffixSortItem()
		{
			return (::System::Comparison_1<::System::Object*>**)UnitySDK::FromName("RPG.Client", "<>O")->GetStaticField(0x699E0);
		}

	};
}
