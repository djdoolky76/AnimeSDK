#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class GridFightRole; }

#define DLKIJPKFOFO_CTOR_OFFSET UNITYSDK_OFFSET(0x18670E30)
#define DLKIJPKFOFO_KFJEGIEJPBM_OFFSET UNITYSDK_OFFSET(0x18670690)
#define DLKIJPKFOFO_MDDCJDHPFAN_OFFSET UNITYSDK_OFFSET(0x18670480)
#define DLKIJPKFOFO_PAFDPEKNFDB_OFFSET UNITYSDK_OFFSET(0x18670060)
#define DLKIJPKFOFO_PELOBFPNPNJ_OFFSET UNITYSDK_OFFSET(0x18670C80)

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
