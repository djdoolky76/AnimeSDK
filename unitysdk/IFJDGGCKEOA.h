#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LJKHPOHKIIF.h"
#include "unitysdk/PFACHJFCILN_PreloadType.h"
#include "unitysdk/RPG/Client/UpdatePreloadTypeMethod.h"
class BJHMBGLPOLB;
class EKFMIDBJDIA;
namespace RPG::Client { class BattleGamePhase; }
namespace RPG::GameCore { class BattleInstance; }
namespace RPG::GameCore { class SkillData; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IFJDGGCKEOA_ACCDEOPJGCJ_1_OFFSET UNITYSDK_OFFSET(0x15F1BAA0)
#define IFJDGGCKEOA_ACCDEOPJGCJ_OFFSET UNITYSDK_OFFSET(0x15F1B8D0)
#define IFJDGGCKEOA_AEJNMMILMBL_OFFSET UNITYSDK_OFFSET(0x15F1C740)
#define IFJDGGCKEOA_AGABOKGBIED_OFFSET UNITYSDK_OFFSET(0x15F1C7E0)
#define IFJDGGCKEOA_AJLCJJOOOOE_OFFSET UNITYSDK_OFFSET(0x15F1B410)
#define IFJDGGCKEOA_CTOR_OFFSET UNITYSDK_OFFSET(0x15F1C8C0)
#define IFJDGGCKEOA_DAMDMJJKLON_OFFSET UNITYSDK_OFFSET(0x15F1B3C0)
#define IFJDGGCKEOA_GAFKECIDLJG_OFFSET UNITYSDK_OFFSET(0x15F1B9A0)
#define IFJDGGCKEOA_GGDAGFMDNMG_OFFSET UNITYSDK_OFFSET(0x15F1C620)
#define IFJDGGCKEOA_GGNBOEIMEPM_OFFSET UNITYSDK_OFFSET(0x15F1B6F0)
#define IFJDGGCKEOA_GNLKPJHAKHM_OFFSET UNITYSDK_OFFSET(0x15F1C5D0)

inline static constexpr unsigned int IFJDGGCKEOA_TypeDefinitionIndex = 59710;

	class IFJDGGCKEOA : public ::LJKHPOHKIIF
	{
	public:
		::System::Collections::Generic::HashSet_1<::RPG::GameCore::SkillData*>* KBJHKEFOMKN; // 0x20
		::System::Collections::Generic::List_1<::RPG::GameCore::SkillData*>* BLOELFIJHHE; // 0x28
		::RPG::GameCore::BattleInstance* CKPCDFOHJIE; // 0x30
		::RPG::Client::BattleGamePhase* NOHNKAIALPJ; // 0x38
		::System::Collections::Generic::HashSet_1<::RPG::GameCore::SkillData*>* EMEIEIDPNLI; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFJDGGCKEOA_CTOR_OFFSET))(this);
		}

		::System::Void DAMDMJJKLON()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFJDGGCKEOA_DAMDMJJKLON_OFFSET))(this);
		}

		::System::Void GGNBOEIMEPM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFJDGGCKEOA_GGNBOEIMEPM_OFFSET))(this);
		}

		::System::Void GAFKECIDLJG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFJDGGCKEOA_GAFKECIDLJG_OFFSET))(this);
		}

		::System::Void GNLKPJHAKHM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFJDGGCKEOA_GNLKPJHAKHM_OFFSET))(this);
		}

		::System::Void AJLCJJOOOOE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFJDGGCKEOA_AJLCJJOOOOE_OFFSET))(this);
		}

		::System::Void ACCDEOPJGCJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFJDGGCKEOA_ACCDEOPJGCJ_OFFSET))(this);
		}

		::System::Void ACCDEOPJGCJ_1(::System::Collections::Generic::IReadOnlyList_1<::BJHMBGLPOLB*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::BJHMBGLPOLB*>*))((::PBYTE)hIl2Cpp + IFJDGGCKEOA_ACCDEOPJGCJ_1_OFFSET))(this, a1);
		}

		::System::Void GGDAGFMDNMG(::RPG::GameCore::SkillData* a1, ::PFACHJFCILN_PreloadType a2, ::RPG::Client::UpdatePreloadTypeMethod a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SkillData*, ::PFACHJFCILN_PreloadType, ::RPG::Client::UpdatePreloadTypeMethod))((::PBYTE)hIl2Cpp + IFJDGGCKEOA_GGDAGFMDNMG_OFFSET))(this, a1, a2, a3);
		}

		::System::Void AEJNMMILMBL(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + IFJDGGCKEOA_AEJNMMILMBL_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::Type*>* AGABOKGBIED()
		{
			return ((::Il2CppArray<::System::Type*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFJDGGCKEOA_AGABOKGBIED_OFFSET))(this);
		}

	};
