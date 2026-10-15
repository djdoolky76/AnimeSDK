#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class GridFightRole; }

#define DLKIJPKFOFO_CTOR_OFFSET UNITYSDK_OFFSET(0xF8A2630)
#define DLKIJPKFOFO_KFJEGIEJPBM_OFFSET UNITYSDK_OFFSET(0xF8A1EF0)
#define DLKIJPKFOFO_PAFDPEKNFDB_OFFSET UNITYSDK_OFFSET(0xF8A1AF0)
#define DLKIJPKFOFO_PELOBFPNPNJ_OFFSET UNITYSDK_OFFSET(0xF8A24B0)

	class DLKIJPKFOFO : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLKIJPKFOFO_CTOR_OFFSET))(this);
		}

		::RPG::AvatarSystem::IAvatar* PAFDPEKNFDB(::RPG::Client::GridFightRole* a1)
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + DLKIJPKFOFO_PAFDPEKNFDB_OFFSET))(this, a1);
		}

		::RPG::AvatarSystem::IAvatar* KFJEGIEJPBM(::RPG::Client::GridFightRole* a1)
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + DLKIJPKFOFO_KFJEGIEJPBM_OFFSET))(this, a1);
		}

		::RPG::AvatarSystem::IAvatar* PELOBFPNPNJ(::RPG::Client::GridFightRole* a1)
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + DLKIJPKFOFO_PELOBFPNPNJ_OFFSET))(this, a1);
		}

	};
