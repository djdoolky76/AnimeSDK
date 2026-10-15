#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NHPAANINLPK;
namespace RPG::AvatarSystem { class IAvatar; }

#define POMGFODDLFE_BPJGIAHDEHI_OFFSET UNITYSDK_OFFSET(0xC371000)
#define POMGFODDLFE_CTOR_OFFSET UNITYSDK_OFFSET(0xC371370)
#define POMGFODDLFE_HFIDHKKOEOA_OFFSET UNITYSDK_OFFSET(0xC371150)
#define POMGFODDLFE_JAGPJGOOALH_OFFSET UNITYSDK_OFFSET(0xC370E70)

inline static constexpr unsigned int POMGFODDLFE_TypeDefinitionIndex = 65589;

	class POMGFODDLFE : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POMGFODDLFE_CTOR_OFFSET))(this);
		}

		::System::Boolean JAGPJGOOALH(::RPG::AvatarSystem::IAvatar* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + POMGFODDLFE_JAGPJGOOALH_OFFSET))(this, a1);
		}

		::NHPAANINLPK* HFIDHKKOEOA(::RPG::AvatarSystem::IAvatar* a1)
		{
			return ((::NHPAANINLPK*(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + POMGFODDLFE_HFIDHKKOEOA_OFFSET))(this, a1);
		}

		::System::Boolean BPJGIAHDEHI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + POMGFODDLFE_BPJGIAHDEHI_OFFSET))(this);
		}

	};
