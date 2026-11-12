#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NHPAANINLPK;
namespace RPG::AvatarSystem { class IAvatar; }

#define BKBEOFIBACL_CTOR_OFFSET UNITYSDK_OFFSET(0xC102BC0)
#define BKBEOFIBACL_HFIDHKKOEOA_OFFSET UNITYSDK_OFFSET(0xC1029B0)
#define BKBEOFIBACL_JAGPJGOOALH_OFFSET UNITYSDK_OFFSET(0xC102910)

inline static constexpr unsigned int BKBEOFIBACL_TypeDefinitionIndex = 67490;

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
