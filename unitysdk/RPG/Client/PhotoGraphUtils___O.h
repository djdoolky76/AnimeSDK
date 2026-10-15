#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class NotifyHandler; }

namespace RPG::Client
{
	inline static constexpr unsigned int PhotoGraphUtils___O_TypeDefinitionIndex = 69463;

	class PhotoGraphUtils___O : public ::System::Object
	{
	public:
		static ::RPG::Client::NotifyHandler** StaticGet__0____OnRequestPermission()
		{
			return (::RPG::Client::NotifyHandler**)UnitySDK::FromName("RPG.Client", "<>O")->GetStaticField(0x202E0);
		}

	};
}
