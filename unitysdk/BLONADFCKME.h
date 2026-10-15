#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NHPAANINLPK;
namespace RPG::AvatarSystem { class IAvatar; }

#define BLONADFCKME_CTOR_OFFSET UNITYSDK_OFFSET(0xBA82B60)
#define BLONADFCKME_HFIDHKKOEOA_OFFSET UNITYSDK_OFFSET(0xBA82940)
#define BLONADFCKME_JAGPJGOOALH_OFFSET UNITYSDK_OFFSET(0xBA828E0)

inline static constexpr unsigned int BLONADFCKME_TypeDefinitionIndex = 65585;

	class BLONADFCKME : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLONADFCKME_CTOR_OFFSET))(this);
		}

		::System::Boolean JAGPJGOOALH(::RPG::AvatarSystem::IAvatar* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + BLONADFCKME_JAGPJGOOALH_OFFSET))(this, a1);
		}

		::NHPAANINLPK* HFIDHKKOEOA(::RPG::AvatarSystem::IAvatar* a1)
		{
			return ((::NHPAANINLPK*(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + BLONADFCKME_HFIDHKKOEOA_OFFSET))(this, a1);
		}

	};
