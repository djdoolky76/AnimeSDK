#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class NotifyHandler; }

inline static constexpr unsigned int OMBOKJOHFAL___O_TypeDefinitionIndex = 71439;

	class OMBOKJOHFAL___O : public ::System::Object
	{
	public:
		static ::RPG::Client::NotifyHandler** StaticGet__0____OnMapCreated()
		{
			return (::RPG::Client::NotifyHandler**)UnitySDK::FromName("", "<>O")->GetStaticField(0x62960);
		}

	};
