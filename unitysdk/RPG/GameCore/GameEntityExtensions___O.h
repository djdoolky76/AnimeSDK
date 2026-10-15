#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }
namespace System { template <typename T> class Comparison_1; }

namespace RPG::GameCore
{
	class GameEntityExtensions___O : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::RPG::GameCore::GameEntity*>** StaticGet__1____CompareEntityViewSortPriority()
		{
			return (::System::Comparison_1<::RPG::GameCore::GameEntity*>**)UnitySDK::FromName("RPG.GameCore", "<>O")->GetStaticField(0x700F0);
		}

		static ::System::Comparison_1<::RPG::GameCore::GameEntity*>** StaticGet__0____CompareEntityRuntimeID()
		{
			return (::System::Comparison_1<::RPG::GameCore::GameEntity*>**)UnitySDK::FromName("RPG.GameCore", "<>O")->GetStaticField(0x700F8);
		}

	};
}
