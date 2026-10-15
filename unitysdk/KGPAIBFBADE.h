#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class GridFightRole; }

#define KGPAIBFBADE_CTOR_OFFSET UNITYSDK_OFFSET(0xB3F92F0)
#define KGPAIBFBADE_DPJAHBLOBOM_OFFSET UNITYSDK_OFFSET(0xB3F92A0)

	class KGPAIBFBADE : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGPAIBFBADE_CTOR_OFFSET))(this);
		}

		::RPG::AvatarSystem::IAvatar* DPJAHBLOBOM(::RPG::Client::GridFightRole* a1)
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + KGPAIBFBADE_DPJAHBLOBOM_OFFSET))(this, a1);
		}

	};
