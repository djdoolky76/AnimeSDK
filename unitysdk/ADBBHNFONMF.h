#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AvatarUpgradePart.h"
#include "unitysdk/System/Object.h"
class DEIFNAIGBLO;
class DHLKKKGKJKA;
class GICKPAPJDBE;
class IHOAIJMMOEF;
class KCLIKAPODAD;
namespace RPG::AvatarSystem { class IAvatar; }

#define ADBBHNFONMF_BMLMKGAMBFL_OFFSET UNITYSDK_OFFSET(0xB79B9D0)
#define ADBBHNFONMF_CTOR_OFFSET UNITYSDK_OFFSET(0xB79B600)
#define ADBBHNFONMF_GLMOCBPNAME_OFFSET UNITYSDK_OFFSET(0xB79B970)
#define ADBBHNFONMF_ILBDBIENLPH_OFFSET UNITYSDK_OFFSET(0xB79B700)
#define ADBBHNFONMF_MIPAFMAAHJO_OFFSET UNITYSDK_OFFSET(0xB79B8C0)

inline static constexpr unsigned int ADBBHNFONMF_TypeDefinitionIndex = 64304;

	class ADBBHNFONMF : public ::System::Object
	{
	public:
		::IHOAIJMMOEF* MLOBHABHCGB; // 0x10
		::DEIFNAIGBLO* EHPIMMAHHLH; // 0x18
		::DHLKKKGKJKA* CGJIHBHGGJJ; // 0x20
		::GICKPAPJDBE* OIHFGHCBPFI; // 0x28
		::System::Void _ctor(::GICKPAPJDBE* a1, ::DEIFNAIGBLO* a2, ::IHOAIJMMOEF* a3, ::DHLKKKGKJKA* a4)
		{
			return ((::System::Void(*)(::PVOID, ::GICKPAPJDBE*, ::DEIFNAIGBLO*, ::IHOAIJMMOEF*, ::DHLKKKGKJKA*))((::PBYTE)hIl2Cpp + ADBBHNFONMF_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean ILBDBIENLPH(::RPG::AvatarSystem::IAvatar* a1, ::RPG::Client::AvatarUpgradePart a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::RPG::Client::AvatarUpgradePart))((::PBYTE)hIl2Cpp + ADBBHNFONMF_ILBDBIENLPH_OFFSET))(this, a1, a2);
		}

		::System::Boolean MIPAFMAAHJO(::RPG::AvatarSystem::IAvatar* a1, ::KCLIKAPODAD* a2, ::RPG::Client::AvatarUpgradePart a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::KCLIKAPODAD*, ::RPG::Client::AvatarUpgradePart))((::PBYTE)hIl2Cpp + ADBBHNFONMF_MIPAFMAAHJO_OFFSET))(this, a1, a2, a3);
		}

		::RPG::AvatarSystem::IAvatar* GLMOCBPNAME(::RPG::AvatarSystem::IAvatar* a1)
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + ADBBHNFONMF_GLMOCBPNAME_OFFSET))(this, a1);
		}

		::RPG::AvatarSystem::IAvatar* BMLMKGAMBFL(::RPG::AvatarSystem::IAvatar* a1, ::KCLIKAPODAD* a2)
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::KCLIKAPODAD*))((::PBYTE)hIl2Cpp + ADBBHNFONMF_BMLMKGAMBFL_OFFSET))(this, a1, a2);
		}

	};
