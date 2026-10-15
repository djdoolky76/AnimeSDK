#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class NotifyHandler; }

inline static constexpr unsigned int JCLLCEJLODJ___O_TypeDefinitionIndex = 62199;

	class JCLLCEJLODJ___O : public ::System::Object
	{
	public:
		static ::RPG::Client::NotifyHandler** StaticGet__1___OnAdventureHideLoadingPage()
		{
			return (::RPG::Client::NotifyHandler**)UnitySDK::FromName("", "<>O")->GetStaticField(0x6EEA0);
		}

		static ::RPG::Client::NotifyHandler** StaticGet__0___OnAdventureEntered()
		{
			return (::RPG::Client::NotifyHandler**)UnitySDK::FromName("", "<>O")->GetStaticField(0x6EEA8);
		}

	};
