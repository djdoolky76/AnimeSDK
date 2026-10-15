#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class NotifyHandler; }

inline static constexpr unsigned int LOADPICBEPE___O_TypeDefinitionIndex = 74207;

	class LOADPICBEPE___O : public ::System::Object
	{
	public:
		static ::RPG::Client::NotifyHandler** StaticGet__0___StartGame()
		{
			return (::RPG::Client::NotifyHandler**)UnitySDK::FromName("", "<>O")->GetStaticField(0x6AFF0);
		}

	};
