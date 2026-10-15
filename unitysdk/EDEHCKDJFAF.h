#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
class NHPAANINLPK;
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::GameCore { class AvatarSkillTreeRow; }
namespace System { class String; }

#define EDEHCKDJFAF_BBDBNBPJIMA_OFFSET UNITYSDK_OFFSET(0x13312A10)
#define EDEHCKDJFAF_BDEIIAINBOJ_OFFSET UNITYSDK_OFFSET(0x13312210)
#define EDEHCKDJFAF_CTOR_OFFSET UNITYSDK_OFFSET(0x13312BF0)
#define EDEHCKDJFAF_DEJELHMEDMN_OFFSET UNITYSDK_OFFSET(0x133122D0)
#define EDEHCKDJFAF_ECNMBCBIEBM_OFFSET UNITYSDK_OFFSET(0x13312810)
#define EDEHCKDJFAF_HFIDHKKOEOA_OFFSET UNITYSDK_OFFSET(0x133123D0)
#define EDEHCKDJFAF_JAGPJGOOALH_OFFSET UNITYSDK_OFFSET(0x13312260)

inline static constexpr unsigned int EDEHCKDJFAF_TypeDefinitionIndex = 65594;

	class EDEHCKDJFAF : public ::System::Object
	{
	public:
		::RPG::GameCore::AvatarSkillTreeRow* KGJMCHOPFPC; // 0x10
		// static const ::System::Object DGNDOECOLKN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDEHCKDJFAF_CTOR_OFFSET))(this);
		}

		::System::Void BDEIIAINBOJ(::RPG::GameCore::AvatarSkillTreeRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarSkillTreeRow*))((::PBYTE)hIl2Cpp + EDEHCKDJFAF_BDEIIAINBOJ_OFFSET))(this, a1);
		}

		::System::Boolean JAGPJGOOALH(::RPG::AvatarSystem::IAvatar* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + EDEHCKDJFAF_JAGPJGOOALH_OFFSET))(this, a1);
		}

		::NHPAANINLPK* HFIDHKKOEOA(::RPG::AvatarSystem::IAvatar* a1)
		{
			return ((::NHPAANINLPK*(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + EDEHCKDJFAF_HFIDHKKOEOA_OFFSET))(this, a1);
		}

		::System::UInt32 DEJELHMEDMN(::RPG::GameCore::AvatarSkillTreeRow* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::AvatarSkillTreeRow*))((::PBYTE)hIl2Cpp + EDEHCKDJFAF_DEJELHMEDMN_OFFSET))(this, a1);
		}

		::System::String* ECNMBCBIEBM(::RPG::Client::TextID a1, ::System::UInt32 a2)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::Client::TextID, ::System::UInt32))((::PBYTE)hIl2Cpp + EDEHCKDJFAF_ECNMBCBIEBM_OFFSET))(this, a1, a2);
		}

		::System::String* BBDBNBPJIMA(::System::UInt32 a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EDEHCKDJFAF_BBDBNBPJIMA_OFFSET))(this, a1);
		}

	};
