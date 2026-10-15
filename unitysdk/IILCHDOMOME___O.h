#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class BaseLobby; }
namespace System { template <typename T> class Action_1; }

inline static constexpr unsigned int IILCHDOMOME___O_TypeDefinitionIndex = 66042;

	class IILCHDOMOME___O : public ::System::Object
	{
	public:
		static ::System::Action_1<::RPG::Client::BaseLobby*>** StaticGet__0____UiOpenLobbyPage()
		{
			return (::System::Action_1<::RPG::Client::BaseLobby*>**)UnitySDK::FromName("", "<>O")->GetStaticField(0x5FFB0);
		}

	};
