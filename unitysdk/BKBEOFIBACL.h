#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NHPAANINLPK;
namespace RPG::AvatarSystem { class IAvatar; }

#define BKBEOFIBACL_CTOR_OFFSET UNITYSDK_OFFSET(0xB7A7CF0)
#define BKBEOFIBACL_HFIDHKKOEOA_OFFSET UNITYSDK_OFFSET(0xB7A7AE0)
#define BKBEOFIBACL_JAGPJGOOALH_OFFSET UNITYSDK_OFFSET(0xB7A7A40)

inline static constexpr unsigned int BKBEOFIBACL_TypeDefinitionIndex = 65574;

	class BKBEOFIBACL : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKBEOFIBACL_CTOR_OFFSET))(this);
		}

		::System::Boolean JAGPJGOOALH(::RPG::AvatarSystem::IAvatar* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + BKBEOFIBACL_JAGPJGOOALH_OFFSET))(this, a1);
		}

		::NHPAANINLPK* HFIDHKKOEOA(::RPG::AvatarSystem::IAvatar* a1)
		{
			return ((::NHPAANINLPK*(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + BKBEOFIBACL_HFIDHKKOEOA_OFFSET))(this, a1);
		}

	};
