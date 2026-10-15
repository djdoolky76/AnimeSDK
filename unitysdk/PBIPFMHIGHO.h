#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AvatarUpgradePart.h"
#include "unitysdk/System/Object.h"
class BKCGMKLGCGB;
class GIDHOABFFFP;
class KCLIKAPODAD;
class NNOALJAEMCG;
class PBIPFMHIGHO_KHPIOJENIFE;
namespace RPG::AvatarSystem { class IAvatar; }
namespace System::Collections::Generic { template <typename T1, typename T2> class SortedDictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define PBIPFMHIGHO_CTOR_OFFSET UNITYSDK_OFFSET(0xBFE9F10)
#define PBIPFMHIGHO_FHDILCJNFPJ_OFFSET UNITYSDK_OFFSET(0xBFE9650)
#define PBIPFMHIGHO_IFDDMGPJGNF_OFFSET UNITYSDK_OFFSET(0xBFE9D70)
#define PBIPFMHIGHO_JGJGGEPMFPJ_OFFSET UNITYSDK_OFFSET(0xBFE93C0)
#define PBIPFMHIGHO_LCHLAAJDHHO_OFFSET UNITYSDK_OFFSET(0xBFE9540)
#define PBIPFMHIGHO_LLPOJJDPAAC_OFFSET UNITYSDK_OFFSET(0xBFE9D00)

inline static constexpr unsigned int PBIPFMHIGHO_TypeDefinitionIndex = 62832;

	class PBIPFMHIGHO : public ::System::Object
	{
	public:
		::PBIPFMHIGHO_KHPIOJENIFE* CMGIJEHHCPH; // 0x10
		::GIDHOABFFFP* FAGBIGDLJGA; // 0x18
		::System::Collections::Generic::SortedDictionary_2<::RPG::Client::AvatarUpgradePart, ::BKCGMKLGCGB*>* FOPLDIDNJAJ; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBIPFMHIGHO_CTOR_OFFSET))(this);
		}

		::PBIPFMHIGHO_KHPIOJENIFE* JGJGGEPMFPJ(::RPG::Client::AvatarUpgradePart a1, ::BKCGMKLGCGB* a2)
		{
			return ((::PBIPFMHIGHO_KHPIOJENIFE*(*)(::PVOID, ::RPG::Client::AvatarUpgradePart, ::BKCGMKLGCGB*))((::PBYTE)hIl2Cpp + PBIPFMHIGHO_JGJGGEPMFPJ_OFFSET))(this, a1, a2);
		}

		::PBIPFMHIGHO_KHPIOJENIFE* LCHLAAJDHHO(::GIDHOABFFFP* a1)
		{
			return ((::PBIPFMHIGHO_KHPIOJENIFE*(*)(::PVOID, ::GIDHOABFFFP*))((::PBYTE)hIl2Cpp + PBIPFMHIGHO_LCHLAAJDHHO_OFFSET))(this, a1);
		}

		::System::Boolean FHDILCJNFPJ(::RPG::AvatarSystem::IAvatar* a1, ::KCLIKAPODAD* a2, ::RPG::Client::AvatarUpgradePart a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::KCLIKAPODAD*, ::RPG::Client::AvatarUpgradePart))((::PBYTE)hIl2Cpp + PBIPFMHIGHO_FHDILCJNFPJ_OFFSET))(this, a1, a2, a3);
		}

		::NNOALJAEMCG* IFDDMGPJGNF(::RPG::AvatarSystem::IAvatar* a1, ::KCLIKAPODAD* a2)
		{
			return ((::NNOALJAEMCG*(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::KCLIKAPODAD*))((::PBYTE)hIl2Cpp + PBIPFMHIGHO_IFDDMGPJGNF_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::IEnumerable_1<::BKCGMKLGCGB*>* LLPOJJDPAAC(::RPG::Client::AvatarUpgradePart a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::BKCGMKLGCGB*>*(*)(::PVOID, ::RPG::Client::AvatarUpgradePart))((::PBYTE)hIl2Cpp + PBIPFMHIGHO_LLPOJJDPAAC_OFFSET))(this, a1);
		}

	};
