#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }
namespace System { template <typename T> class Predicate_1; }

inline static constexpr unsigned int GLJODGEMIIN___O_TypeDefinitionIndex = 56274;

	class GLJODGEMIIN___O : public ::System::Object
	{
	public:
		static ::System::Predicate_1<::RPG::GameCore::GameEntity*>** StaticGet__0____IsInTeamFormationAndOperable()
		{
			return (::System::Predicate_1<::RPG::GameCore::GameEntity*>**)UnitySDK::FromName("", "<>O")->GetStaticField(0x64FB0);
		}

	};
