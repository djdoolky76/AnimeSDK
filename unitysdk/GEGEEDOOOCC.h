#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NHPAANINLPK;
namespace RPG::AvatarSystem { class IAvatar; }

#define GEGEEDOOOCC_CTOR_OFFSET UNITYSDK_OFFSET(0x159C9CC0)
#define GEGEEDOOOCC_HFIDHKKOEOA_OFFSET UNITYSDK_OFFSET(0x159C9AE0)
#define GEGEEDOOOCC_JAGPJGOOALH_OFFSET UNITYSDK_OFFSET(0x159C9A90)

inline static constexpr unsigned int GEGEEDOOOCC_TypeDefinitionIndex = 65591;

	class GEGEEDOOOCC : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEGEEDOOOCC_CTOR_OFFSET))(this);
		}

		::System::Boolean JAGPJGOOALH(::RPG::AvatarSystem::IAvatar* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + GEGEEDOOOCC_JAGPJGOOALH_OFFSET))(this, a1);
		}

		::NHPAANINLPK* HFIDHKKOEOA(::RPG::AvatarSystem::IAvatar* a1)
		{
			return ((::NHPAANINLPK*(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + GEGEEDOOOCC_HFIDHKKOEOA_OFFSET))(this, a1);
		}

	};
