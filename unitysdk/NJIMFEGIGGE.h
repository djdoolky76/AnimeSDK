#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/APCGKBOPGJL.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/DGMNKINFKFH.h"
class DNIAIFGHFLM;
class DPHIFKIPMLI;
class HPJEECIEDAB;
class KFMGKJPDLNB;
namespace RPG::GameCore { class AvatarSkillRowData; }
namespace RPG::GameCore { class ICharacterSkillRowData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NJIMFEGIGGE_BOJFECOMNJP_OFFSET UNITYSDK_OFFSET(0x1A78C4C0)
#define NJIMFEGIGGE_CHBGKFKKFIC_OFFSET UNITYSDK_OFFSET(0x1A78D130)
#define NJIMFEGIGGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1A78C330)
#define NJIMFEGIGGE_EHKLIDAMLEH_OFFSET UNITYSDK_OFFSET(0x1A78C6C0)
#define NJIMFEGIGGE_ILDAIAFHIAA_OFFSET UNITYSDK_OFFSET(0x1A78D000)

inline static constexpr unsigned int NJIMFEGIGGE_TypeDefinitionIndex = 64062;

	class NJIMFEGIGGE : public ::System::Object
	{
	public:
		::DNIAIFGHFLM* GOHMGCHLKLM; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::RPG::GameCore::AvatarSkillRowData*>* PFBKNEFKOLB; // 0x18
		::HPJEECIEDAB* IHFNBHEIIAI; // 0x20
		::KFMGKJPDLNB* BBHLBMONOIJ; // 0x28
		::DPHIFKIPMLI* NOFADOEHCCJ; // 0x30
		::APCGKBOPGJL ODMGLBEOBDP; // 0x38
		::System::Void _ctor(::APCGKBOPGJL a1, ::HPJEECIEDAB* a2, ::DNIAIFGHFLM* a3, ::DPHIFKIPMLI* a4, ::KFMGKJPDLNB* a5)
		{
			return ((::System::Void(*)(::PVOID, ::APCGKBOPGJL, ::HPJEECIEDAB*, ::DNIAIFGHFLM*, ::DPHIFKIPMLI*, ::KFMGKJPDLNB*))((::PBYTE)hIl2Cpp + NJIMFEGIGGE_CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::RPG::GameCore::ICharacterSkillRowData* BOJFECOMNJP(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::ICharacterSkillRowData*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + NJIMFEGIGGE_BOJFECOMNJP_OFFSET))(this, a1, a2);
		}

		::System::Void EHKLIDAMLEH(::RPG::GameCore::ICharacterSkillRowData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ICharacterSkillRowData*))((::PBYTE)hIl2Cpp + NJIMFEGIGGE_EHKLIDAMLEH_OFFSET))(this, a1);
		}

		::System::Void ILDAIAFHIAA(::RPG::GameCore::AvatarSkillRowData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarSkillRowData*))((::PBYTE)hIl2Cpp + NJIMFEGIGGE_ILDAIAFHIAA_OFFSET))(this, a1);
		}

		::System::Boolean CHBGKFKKFIC(::DGMNKINFKFH a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DGMNKINFKFH))((::PBYTE)hIl2Cpp + NJIMFEGIGGE_CHBGKFKKFIC_OFFSET))(this, a1);
		}

	};
