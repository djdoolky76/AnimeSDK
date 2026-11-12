#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class NotifyHandler; }

namespace RPG::Client
{
	inline static constexpr unsigned int RPGQualitySettings___O_TypeDefinitionIndex = 69866;

	class RPGQualitySettings___O : public ::System::Object
	{
	public:
		static ::RPG::Client::NotifyHandler** StaticGet__0___OnUIScreenSizeChanged()
		{
			return (::RPG::Client::NotifyHandler**)UnitySDK::FromName("RPG.Client", "<>O")->GetStaticField(0x678D0);
		}

	};
}
