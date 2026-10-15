#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NHPAANINLPK;
namespace RPG::AvatarSystem { class IAvatar; }

#define MOPPGLAGDDD_CTOR_OFFSET UNITYSDK_OFFSET(0xBA37990)
#define MOPPGLAGDDD_HFIDHKKOEOA_OFFSET UNITYSDK_OFFSET(0xBA37430)
#define MOPPGLAGDDD_JAGPJGOOALH_OFFSET UNITYSDK_OFFSET(0xBA373E0)

inline static constexpr unsigned int MOPPGLAGDDD_TypeDefinitionIndex = 65566;

	class MOPPGLAGDDD : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOPPGLAGDDD_CTOR_OFFSET))(this);
		}

		::System::Boolean JAGPJGOOALH(::RPG::AvatarSystem::IAvatar* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + MOPPGLAGDDD_JAGPJGOOALH_OFFSET))(this, a1);
		}

		::NHPAANINLPK* HFIDHKKOEOA(::RPG::AvatarSystem::IAvatar* a1)
		{
			return ((::NHPAANINLPK*(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + MOPPGLAGDDD_HFIDHKKOEOA_OFFSET))(this, a1);
		}

	};
