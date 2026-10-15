#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameWorld; }
namespace System { template <typename T> class Predicate_1; }

inline static constexpr unsigned int JOBAHPGPPNC___O_TypeDefinitionIndex = 55083;

	class JOBAHPGPPNC___O : public ::System::Object
	{
	public:
		static ::System::Predicate_1<::RPG::GameCore::GameWorld*>** StaticGet__0____CheckTimeSlowValid_PlayerControl()
		{
			return (::System::Predicate_1<::RPG::GameCore::GameWorld*>**)UnitySDK::FromName("", "<>O")->GetStaticField(0x24180);
		}

	};
