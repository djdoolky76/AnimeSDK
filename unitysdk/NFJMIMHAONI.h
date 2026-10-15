#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NHPAANINLPK;
namespace RPG::AvatarSystem { class IAvatar; }

#define NFJMIMHAONI_CTOR_OFFSET UNITYSDK_OFFSET(0xBB993C0)
#define NFJMIMHAONI_HFIDHKKOEOA_OFFSET UNITYSDK_OFFSET(0xBB991C0)
#define NFJMIMHAONI_JAGPJGOOALH_OFFSET UNITYSDK_OFFSET(0xBB98FF0)

inline static constexpr unsigned int NFJMIMHAONI_TypeDefinitionIndex = 65572;

	class NFJMIMHAONI : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFJMIMHAONI_CTOR_OFFSET))(this);
		}

		::System::Boolean JAGPJGOOALH(::RPG::AvatarSystem::IAvatar* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + NFJMIMHAONI_JAGPJGOOALH_OFFSET))(this, a1);
		}

		::NHPAANINLPK* HFIDHKKOEOA(::RPG::AvatarSystem::IAvatar* a1)
		{
			return ((::NHPAANINLPK*(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + NFJMIMHAONI_HFIDHKKOEOA_OFFSET))(this, a1);
		}

	};
