#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class BaseLobby; }
namespace System { class Action; }

inline static constexpr unsigned int IILCHDOMOME___O_TypeDefinitionIndex = 66042;

	class IILCHDOMOME___O : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet__0____UiOpenLobbyPage()
		{
			return (::System::Action**)UnitySDK::FromName("", "<>O")->GetStaticField(0x5FB60);
		}

	};
