#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DLKIJPKFOFO.h"
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class GridFightRole; }

#define DDIMIOGFMMD_CTOR_OFFSET UNITYSDK_OFFSET(0xE4DE610)
#define DDIMIOGFMMD_DPJAHBLOBOM_OFFSET UNITYSDK_OFFSET(0xE4DE5C0)

inline static constexpr unsigned int DDIMIOGFMMD_TypeDefinitionIndex = 65189;

	class DDIMIOGFMMD : public ::DLKIJPKFOFO
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDIMIOGFMMD_CTOR_OFFSET))(this);
		}

		::RPG::AvatarSystem::IAvatar* DPJAHBLOBOM(::RPG::Client::GridFightRole* a1)
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + DDIMIOGFMMD_DPJAHBLOBOM_OFFSET))(this, a1);
		}

	};
