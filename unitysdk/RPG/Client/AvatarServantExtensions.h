#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::AvatarSystem { class AvatarServant; }

#define RPG_CLIENT_AVATARSERVANTEXTENSIONS_GETSERVANTID_OFFSET UNITYSDK_OFFSET(0xC711350)

namespace RPG::Client
{
	class AvatarServantExtensions : public ::System::Object
	{
	public:
		static ::System::UInt32 GetServantID(::RPG::AvatarSystem::AvatarServant* a1)
		{
			return ((::System::UInt32(*)(::RPG::AvatarSystem::AvatarServant*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARSERVANTEXTENSIONS_GETSERVANTID_OFFSET))(a1);
		}

	};
}
