#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/APCGKBOPGJL.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
class DNIAIFGHFLM;
class DPHIFKIPMLI;
class HPJEECIEDAB;
namespace RPG::GameCore { class AvatarSkillRowData; }
namespace RPG::GameCore { class ICharacterSkillRowData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NJIMFEGIGGE_BOJFECOMNJP_OFFSET UNITYSDK_OFFSET(0xBC0A3B0)
#define NJIMFEGIGGE_CTOR_OFFSET UNITYSDK_OFFSET(0xBC0A270)
#define NJIMFEGIGGE_EHKLIDAMLEH_OFFSET UNITYSDK_OFFSET(0xBC0A5B0)

inline static constexpr unsigned int NJIMFEGIGGE_TypeDefinitionIndex = 62635;

	class NJIMFEGIGGE : public ::System::Object
	{
	public:
		::DPHIFKIPMLI* NOFADOEHCCJ; // 0x10
		::HPJEECIEDAB* IHFNBHEIIAI; // 0x18
		::DNIAIFGHFLM* GOHMGCHLKLM; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::RPG::GameCore::AvatarSkillRowData*>* PFBKNEFKOLB; // 0x28
		::APCGKBOPGJL ODMGLBEOBDP; // 0x30
		::System::Void _ctor(::APCGKBOPGJL a1, ::HPJEECIEDAB* a2, ::DNIAIFGHFLM* a3, ::DPHIFKIPMLI* a4)
		{
			return ((::System::Void(*)(::PVOID, ::APCGKBOPGJL, ::HPJEECIEDAB*, ::DNIAIFGHFLM*, ::DPHIFKIPMLI*))((::PBYTE)hIl2Cpp + NJIMFEGIGGE_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::RPG::GameCore::ICharacterSkillRowData* BOJFECOMNJP(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::ICharacterSkillRowData*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + NJIMFEGIGGE_BOJFECOMNJP_OFFSET))(this, a1, a2);
		}

		::System::Void EHKLIDAMLEH(::RPG::GameCore::ICharacterSkillRowData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ICharacterSkillRowData*))((::PBYTE)hIl2Cpp + NJIMFEGIGGE_EHKLIDAMLEH_OFFSET))(this, a1);
		}

	};
