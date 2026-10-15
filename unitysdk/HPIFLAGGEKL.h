#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DLKIJPKFOFO.h"
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class GridFightRole; }

#define HPIFLAGGEKL_CTOR_OFFSET UNITYSDK_OFFSET(0x15DCE1B0)
#define HPIFLAGGEKL_DPJAHBLOBOM_OFFSET UNITYSDK_OFFSET(0x15DCE160)

	class HPIFLAGGEKL : public ::DLKIJPKFOFO
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPIFLAGGEKL_CTOR_OFFSET))(this);
		}

		::RPG::AvatarSystem::IAvatar* DPJAHBLOBOM(::RPG::Client::GridFightRole* a1)
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + HPIFLAGGEKL_DPJAHBLOBOM_OFFSET))(this, a1);
		}

	};
