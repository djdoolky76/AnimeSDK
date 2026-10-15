#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::AvatarSystem { class IAvatar; }

#define HBJCIOIGEGO_CAHJOAIPMBL_OFFSET UNITYSDK_OFFSET(0x15C0AB20)

	class HBJCIOIGEGO : public ::System::Object
	{
	public:
		static ::System::Int32 CAHJOAIPMBL(::RPG::AvatarSystem::IAvatar* a1, ::RPG::AvatarSystem::IAvatar* a2)
		{
			return ((::System::Int32(*)(::RPG::AvatarSystem::IAvatar*, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + HBJCIOIGEGO_CAHJOAIPMBL_OFFSET))(a1, a2);
		}

	};
