#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class GridFightRole; }

#define DLKIJPKFOFO_CTOR_OFFSET UNITYSDK_OFFSET(0x10612230)
#define DLKIJPKFOFO_KFJEGIEJPBM_OFFSET UNITYSDK_OFFSET(0x10611A90)
#define DLKIJPKFOFO_MDDCJDHPFAN_OFFSET UNITYSDK_OFFSET(0x10611880)
#define DLKIJPKFOFO_PAFDPEKNFDB_OFFSET UNITYSDK_OFFSET(0x10611460)
#define DLKIJPKFOFO_PELOBFPNPNJ_OFFSET UNITYSDK_OFFSET(0x10612080)

inline static constexpr unsigned int DLKIJPKFOFO_TypeDefinitionIndex = 66885;

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

		::System::Boolean MDDCJDHPFAN(::RPG::Client::GridFightRole* a1, ::RPG::AvatarSystem::IAvatar* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightRole*, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + DLKIJPKFOFO_MDDCJDHPFAN_OFFSET))(this, a1, a2);
		}

	};
