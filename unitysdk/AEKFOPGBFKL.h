#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AvatarUpgradePart.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple.h"
class DMFNPHABMEE;
class KCLIKAPODAD;
class MGLBNNIPDMC;
class NNOALJAEMCG;
class PBIPFMHIGHO;
namespace RPG::AvatarSystem { class Avatar; }
namespace RPG::AvatarSystem { class IAvatar; }

#define AEKFOPGBFKL_BDMNGLCFLFJ_OFFSET UNITYSDK_OFFSET(0xCF00D60)
#define AEKFOPGBFKL_CTOR_OFFSET UNITYSDK_OFFSET(0xCF00B20)
#define AEKFOPGBFKL_FHDILCJNFPJ_OFFSET UNITYSDK_OFFSET(0xCF00C70)
#define AEKFOPGBFKL_IFDDMGPJGNF_OFFSET UNITYSDK_OFFSET(0xCF00CF0)

	class AEKFOPGBFKL : public ::System::Object
	{
	public:
		::PBIPFMHIGHO* FAGBIGDLJGA; // 0x10
		::MGLBNNIPDMC* CEFLLELKFOP; // 0x18
		::System::Void _ctor(::MGLBNNIPDMC* a1, ::DMFNPHABMEE* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MGLBNNIPDMC*, ::DMFNPHABMEE*))((::PBYTE)hIl2Cpp + AEKFOPGBFKL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean FHDILCJNFPJ(::RPG::AvatarSystem::IAvatar* a1, ::KCLIKAPODAD* a2, ::RPG::Client::AvatarUpgradePart a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::KCLIKAPODAD*, ::RPG::Client::AvatarUpgradePart))((::PBYTE)hIl2Cpp + AEKFOPGBFKL_FHDILCJNFPJ_OFFSET))(this, a1, a2, a3);
		}

		::NNOALJAEMCG* IFDDMGPJGNF(::RPG::AvatarSystem::IAvatar* a1, ::KCLIKAPODAD* a2)
		{
			return ((::NNOALJAEMCG*(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::KCLIKAPODAD*))((::PBYTE)hIl2Cpp + AEKFOPGBFKL_IFDDMGPJGNF_OFFSET))(this, a1, a2);
		}

		::System::ValueTuple BDMNGLCFLFJ(::RPG::AvatarSystem::IAvatar* a1, ::KCLIKAPODAD* a2)
		{
			return ((::System::ValueTuple(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::KCLIKAPODAD*))((::PBYTE)hIl2Cpp + AEKFOPGBFKL_BDMNGLCFLFJ_OFFSET))(this, a1, a2);
		}

	};
