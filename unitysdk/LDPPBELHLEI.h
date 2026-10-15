#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LDPPBELHLEI_EntityActionType.h"
#include "unitysdk/LDPPBELHLEI_NNKABCNGPAG.h"
#include "unitysdk/LJKHPOHKIIF.h"
#include "unitysdk/PFACHJFCILN_PreloadType.h"
#include "unitysdk/RPG/GameCore/EntityType.h"
#include "unitysdk/RPG/GameCore/PreloadGroupType.h"
#include "unitysdk/LDPPBELHLEI_PKPKEDEPDKF.h"
class DEKDEPEBHNC;
class EKFMIDBJDIA;
class ENGBNDIPDJL;
class LDPPBELHLEI_BONCILIGGEE;
namespace RPG::Client { class BattleAssetPreload_AssetPreloadGroup; }
namespace RPG::Client { class BattleGamePhase; }
namespace RPG::GameCore { class BattleInstance; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class SkillData; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::ObjectModel { template <typename T> class ReadOnlyCollection_1; }

#define LDPPBELHLEI_ACBLHPDHHIM_OFFSET UNITYSDK_OFFSET(0xB6420A0)
#define LDPPBELHLEI_AEJNMMILMBL_OFFSET UNITYSDK_OFFSET(0xB6420F0)
#define LDPPBELHLEI_AJLCJJOOOOE_OFFSET UNITYSDK_OFFSET(0xB63E7B0)
#define LDPPBELHLEI_BBGGEBDCJJK_OFFSET UNITYSDK_OFFSET(0xB642190)
#define LDPPBELHLEI_BNEFIMFGLEG_OFFSET UNITYSDK_OFFSET(0xB63F000)
#define LDPPBELHLEI_CTOR_OFFSET UNITYSDK_OFFSET(0xB6422D0)
#define LDPPBELHLEI_DAILACNACNO_1_OFFSET UNITYSDK_OFFSET(0xB6417B0)
#define LDPPBELHLEI_DAILACNACNO_OFFSET UNITYSDK_OFFSET(0xB640700)
#define LDPPBELHLEI_DAMDMJJKLON_OFFSET UNITYSDK_OFFSET(0xB63E760)
#define LDPPBELHLEI_DEBKHBDKGMC_OFFSET UNITYSDK_OFFSET(0xB642280)
#define LDPPBELHLEI_DIAJAAEPMAN_OFFSET UNITYSDK_OFFSET(0xB63ED30)
#define LDPPBELHLEI_DLNAHMOANLL_OFFSET UNITYSDK_OFFSET(0xB641370)
#define LDPPBELHLEI_DPHKDBBKMLA_OFFSET UNITYSDK_OFFSET(0xB642230)
#define LDPPBELHLEI_EMGKPFFNHGO_OFFSET UNITYSDK_OFFSET(0xB640140)
#define LDPPBELHLEI_EPIKNMPHPFL_OFFSET UNITYSDK_OFFSET(0xB6403F0)
#define LDPPBELHLEI_GAFKECIDLJG_OFFSET UNITYSDK_OFFSET(0xB63F890)
#define LDPPBELHLEI_GGNBOEIMEPM_OFFSET UNITYSDK_OFFSET(0xB63E9F0)
#define LDPPBELHLEI_GNLKPJHAKHM_OFFSET UNITYSDK_OFFSET(0xB6400C0)
#define LDPPBELHLEI_HFKBKJCHLFK_1_OFFSET UNITYSDK_OFFSET(0xB63FB60)
#define LDPPBELHLEI_HFKBKJCHLFK_OFFSET UNITYSDK_OFFSET(0xB640BB0)
#define LDPPBELHLEI_IDEFLDKMHHF_1_OFFSET UNITYSDK_OFFSET(0xB640DC0)
#define LDPPBELHLEI_IDEFLDKMHHF_OFFSET UNITYSDK_OFFSET(0xB640D50)
#define LDPPBELHLEI_LBAHCNECIAA_OFFSET UNITYSDK_OFFSET(0xB640480)
#define LDPPBELHLEI_LLDPLNELMKP_OFFSET UNITYSDK_OFFSET(0xB63FDE0)
#define LDPPBELHLEI_MDOMEPEDGPB_OFFSET UNITYSDK_OFFSET(0xB6409C0)
#define LDPPBELHLEI_MGNGBBMOGBO_OFFSET UNITYSDK_OFFSET(0xB6421E0)
#define LDPPBELHLEI_MNHBJFIMAEB_OFFSET UNITYSDK_OFFSET(0xB6414C0)
#define LDPPBELHLEI_PBKNLIKDENO_1_OFFSET UNITYSDK_OFFSET(0xB640CC0)
#define LDPPBELHLEI_PBKNLIKDENO_OFFSET UNITYSDK_OFFSET(0xB6406A0)
#define LDPPBELHLEI_PLJPMPLMOKO_OFFSET UNITYSDK_OFFSET(0xB640190)

inline static constexpr unsigned int LDPPBELHLEI_TypeDefinitionIndex = 59701;

	class LDPPBELHLEI : public ::LJKHPOHKIIF
	{
	public:
		::System::String* FKGPHNECAEE; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::Object*, ::RPG::GameCore::GameEntity*>* DJJKPCHECLG; // 0x28
		::RPG::Client::BattleGamePhase* NOHNKAIALPJ; // 0x30
		::RPG::GameCore::BattleInstance* CKPCDFOHJIE; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Object*>* CKHNDGIPDNO; // 0x40
		::System::Boolean AHBJDIJJDNK; // 0x48
		::System::Byte _padding0[0x3];
		::LDPPBELHLEI_NNKABCNGPAG DHDGLLKFNDB; // 0x4C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDPPBELHLEI_CTOR_OFFSET))(this);
		}

		::System::Void DAMDMJJKLON()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDPPBELHLEI_DAMDMJJKLON_OFFSET))(this);
		}

		::System::Void GGNBOEIMEPM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDPPBELHLEI_GGNBOEIMEPM_OFFSET))(this);
		}

		::System::Void GAFKECIDLJG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDPPBELHLEI_GAFKECIDLJG_OFFSET))(this);
		}

		::System::Void GNLKPJHAKHM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDPPBELHLEI_GNLKPJHAKHM_OFFSET))(this);
		}

		::System::Void EMGKPFFNHGO(::RPG::Client::BattleAssetPreload_AssetPreloadGroup* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BattleAssetPreload_AssetPreloadGroup*))((::PBYTE)hIl2Cpp + LDPPBELHLEI_EMGKPFFNHGO_OFFSET))(this, a1);
		}

		::System::Void DIAJAAEPMAN(::RPG::GameCore::PreloadGroupType a1, ::RPG::GameCore::EntityType a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PreloadGroupType, ::RPG::GameCore::EntityType))((::PBYTE)hIl2Cpp + LDPPBELHLEI_DIAJAAEPMAN_OFFSET))(this, a1, a2);
		}

		::System::Void PLJPMPLMOKO(::RPG::Client::BattleAssetPreload_AssetPreloadGroup* a1, ::RPG::GameCore::EntityType a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BattleAssetPreload_AssetPreloadGroup*, ::RPG::GameCore::EntityType))((::PBYTE)hIl2Cpp + LDPPBELHLEI_PLJPMPLMOKO_OFFSET))(this, a1, a2);
		}

		::System::Void AJLCJJOOOOE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDPPBELHLEI_AJLCJJOOOOE_OFFSET))(this);
		}

		::System::Void BNEFIMFGLEG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDPPBELHLEI_BNEFIMFGLEG_OFFSET))(this);
		}

		static ::System::Boolean PBKNLIKDENO(::DEKDEPEBHNC* a1)
		{
			return ((::System::Boolean(*)(::DEKDEPEBHNC*))((::PBYTE)hIl2Cpp + LDPPBELHLEI_PBKNLIKDENO_OFFSET))(a1);
		}

		static ::System::Boolean PBKNLIKDENO_1(::RPG::GameCore::SkillData* a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::SkillData*))((::PBYTE)hIl2Cpp + LDPPBELHLEI_PBKNLIKDENO_1_OFFSET))(a1);
		}

		::RPG::GameCore::GameEntity* IDEFLDKMHHF(::LDPPBELHLEI_PKPKEDEPDKF a1)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::LDPPBELHLEI_PKPKEDEPDKF))((::PBYTE)hIl2Cpp + LDPPBELHLEI_IDEFLDKMHHF_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameEntity* IDEFLDKMHHF_1(::LDPPBELHLEI_NNKABCNGPAG a1)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::LDPPBELHLEI_NNKABCNGPAG))((::PBYTE)hIl2Cpp + LDPPBELHLEI_IDEFLDKMHHF_1_OFFSET))(this, a1);
		}

		::System::Void DLNAHMOANLL(::System::Collections::Generic::List_1<::System::Object*>* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Object*>*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + LDPPBELHLEI_DLNAHMOANLL_OFFSET))(this, a1, a2);
		}

		::System::Void LBAHCNECIAA(::System::Collections::Generic::List_1<::System::Object*>* a1, ::RPG::GameCore::GameEntity* a2, ::LDPPBELHLEI_EntityActionType a3, ::System::String* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Object*>*, ::RPG::GameCore::GameEntity*, ::LDPPBELHLEI_EntityActionType, ::System::String*))((::PBYTE)hIl2Cpp + LDPPBELHLEI_LBAHCNECIAA_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void DAILACNACNO(::LDPPBELHLEI_PKPKEDEPDKF a1, ::PFACHJFCILN_PreloadType a2, ::RPG::GameCore::GameEntity* a3)
		{
			return ((::System::Void(*)(::PVOID, ::LDPPBELHLEI_PKPKEDEPDKF, ::PFACHJFCILN_PreloadType, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + LDPPBELHLEI_DAILACNACNO_OFFSET))(this, a1, a2, a3);
		}

		::System::Void DAILACNACNO_1(::LDPPBELHLEI_NNKABCNGPAG a1, ::PFACHJFCILN_PreloadType a2, ::RPG::GameCore::GameEntity* a3, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::DEKDEPEBHNC*>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::LDPPBELHLEI_NNKABCNGPAG, ::PFACHJFCILN_PreloadType, ::RPG::GameCore::GameEntity*, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::DEKDEPEBHNC*>*))((::PBYTE)hIl2Cpp + LDPPBELHLEI_DAILACNACNO_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void MDOMEPEDGPB(::ENGBNDIPDJL* a1, ::PFACHJFCILN_PreloadType a2)
		{
			return ((::System::Void(*)(::PVOID, ::ENGBNDIPDJL*, ::PFACHJFCILN_PreloadType))((::PBYTE)hIl2Cpp + LDPPBELHLEI_MDOMEPEDGPB_OFFSET))(this, a1, a2);
		}

		::System::Void HFKBKJCHLFK(::RPG::GameCore::GameEntity* a1, ::ENGBNDIPDJL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::ENGBNDIPDJL*))((::PBYTE)hIl2Cpp + LDPPBELHLEI_HFKBKJCHLFK_OFFSET))(this, a1, a2);
		}

		::System::Void HFKBKJCHLFK_1(::LDPPBELHLEI_NNKABCNGPAG a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::LDPPBELHLEI_NNKABCNGPAG, ::System::String*))((::PBYTE)hIl2Cpp + LDPPBELHLEI_HFKBKJCHLFK_1_OFFSET))(this, a1, a2);
		}

		::LDPPBELHLEI_BONCILIGGEE* MNHBJFIMAEB(::LDPPBELHLEI_NNKABCNGPAG a1, ::System::Boolean a2)
		{
			return ((::LDPPBELHLEI_BONCILIGGEE*(*)(::PVOID, ::LDPPBELHLEI_NNKABCNGPAG, ::System::Boolean))((::PBYTE)hIl2Cpp + LDPPBELHLEI_MNHBJFIMAEB_OFFSET))(this, a1, a2);
		}

		::System::Void EPIKNMPHPFL(::LDPPBELHLEI_NNKABCNGPAG a1, ::System::String* a2, ::PFACHJFCILN_PreloadType a3)
		{
			return ((::System::Void(*)(::PVOID, ::LDPPBELHLEI_NNKABCNGPAG, ::System::String*, ::PFACHJFCILN_PreloadType))((::PBYTE)hIl2Cpp + LDPPBELHLEI_EPIKNMPHPFL_OFFSET))(this, a1, a2, a3);
		}

		::System::Void LLDPLNELMKP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDPPBELHLEI_LLDPLNELMKP_OFFSET))(this);
		}

		::System::Void ACBLHPDHHIM(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + LDPPBELHLEI_ACBLHPDHHIM_OFFSET))(this, a1);
		}

		::System::Void AEJNMMILMBL(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + LDPPBELHLEI_AEJNMMILMBL_OFFSET))(this, a1);
		}

		::System::Void BBGGEBDCJJK(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LDPPBELHLEI_BBGGEBDCJJK_OFFSET))(this, a1);
		}

		::System::Void MGNGBBMOGBO(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LDPPBELHLEI_MGNGBBMOGBO_OFFSET))(this, a1);
		}

		::System::Void DPHKDBBKMLA(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LDPPBELHLEI_DPHKDBBKMLA_OFFSET))(this, a1);
		}

		::System::Void DEBKHBDKGMC(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LDPPBELHLEI_DEBKHBDKGMC_OFFSET))(this, a1);
		}

	};
