#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DLKIJPKFOFO.h"
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class GridFightRole; }

#define APIFAALKFML_CTOR_OFFSET UNITYSDK_OFFSET(0x15B9F870)
#define APIFAALKFML_DPJAHBLOBOM_OFFSET UNITYSDK_OFFSET(0x15B9F820)

inline static constexpr unsigned int APIFAALKFML_TypeDefinitionIndex = 65190;

	class APIFAALKFML : public ::DLKIJPKFOFO
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APIFAALKFML_CTOR_OFFSET))(this);
		}

		::RPG::AvatarSystem::IAvatar* DPJAHBLOBOM(::RPG::Client::GridFightRole* a1)
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + APIFAALKFML_DPJAHBLOBOM_OFFSET))(this, a1);
		}

	};
