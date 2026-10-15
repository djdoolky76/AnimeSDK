#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class NotifyHandler; }

inline static constexpr unsigned int GHGCKEMFMDM___O_TypeDefinitionIndex = 52364;

	class GHGCKEMFMDM___O : public ::System::Object
	{
	public:
		static ::RPG::Client::NotifyHandler** StaticGet__0____OnAdventurePhaseEnd()
		{
			return (::RPG::Client::NotifyHandler**)UnitySDK::FromName("", "<>O")->GetStaticField(0x5C070);
		}

	};
