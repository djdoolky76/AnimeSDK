#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NHPAANINLPK;
namespace RPG::AvatarSystem { class IAvatar; }

#define HIIBKHBAJOI_CTOR_OFFSET UNITYSDK_OFFSET(0x15CD9130)
#define HIIBKHBAJOI_HFIDHKKOEOA_OFFSET UNITYSDK_OFFSET(0x15CD8C40)
#define HIIBKHBAJOI_JAGPJGOOALH_OFFSET UNITYSDK_OFFSET(0x15CD8BF0)

inline static constexpr unsigned int HIIBKHBAJOI_TypeDefinitionIndex = 65564;

	class HIIBKHBAJOI : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIIBKHBAJOI_CTOR_OFFSET))(this);
		}

		::System::Boolean JAGPJGOOALH(::RPG::AvatarSystem::IAvatar* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + HIIBKHBAJOI_JAGPJGOOALH_OFFSET))(this, a1);
		}

		::NHPAANINLPK* HFIDHKKOEOA(::RPG::AvatarSystem::IAvatar* a1)
		{
			return ((::NHPAANINLPK*(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + HIIBKHBAJOI_HFIDHKKOEOA_OFFSET))(this, a1);
		}

	};
