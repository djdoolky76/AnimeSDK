#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class NotifyHandler; }
namespace System { class Action; }

inline static constexpr unsigned int NPPODGNEDLF___O_TypeDefinitionIndex = 61171;

	class NPPODGNEDLF___O : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet__2____ShowBattleToMazeTransit()
		{
			return (::System::Action**)UnitySDK::FromName("", "<>O")->GetStaticField(0x5A8A0);
		}

		static ::RPG::Client::NotifyHandler** StaticGet__0____OnTansitionFadeInDone()
		{
			return (::RPG::Client::NotifyHandler**)UnitySDK::FromName("", "<>O")->GetStaticField(0x5A8A8);
		}

		static ::RPG::Client::NotifyHandler** StaticGet__1____OnBattleToMazeTransit()
		{
			return (::RPG::Client::NotifyHandler**)UnitySDK::FromName("", "<>O")->GetStaticField(0x5A8B0);
		}

	};
