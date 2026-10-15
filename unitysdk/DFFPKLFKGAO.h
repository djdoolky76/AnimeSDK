#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActionBarUpdateTiming.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class DEKDEPEBHNC;
class EBBJGCKIBAA;
class EKFMIDBJDIA;
class ENGBNDIPDJL;
class KKHNFGNFJFD;
namespace RPG::Client { class BattleOnEntityActionOrderUpdatedParam; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelEntityActionDelayChanged; }
namespace RPG::GameCore { class TurnBasedGameMode; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DFFPKLFKGAO_AHDODIOEGMO_OFFSET UNITYSDK_OFFSET(0xE82BD80)
#define DFFPKLFKGAO_AIKPFOPKAPA_OFFSET UNITYSDK_OFFSET(0xE82BE20)
#define DFFPKLFKGAO_BFCAMEOJKFF_OFFSET UNITYSDK_OFFSET(0xE82B1E0)
#define DFFPKLFKGAO_BNMKKIGMACD_OFFSET UNITYSDK_OFFSET(0xE82BAE0)
#define DFFPKLFKGAO_BOJEBMBNBIA_OFFSET UNITYSDK_OFFSET(0xE82C320)
#define DFFPKLFKGAO_BPOAOKJKMKM_OFFSET UNITYSDK_OFFSET(0xE82BC40)
#define DFFPKLFKGAO_CBHEACHJKPB_OFFSET UNITYSDK_OFFSET(0xE82B640)
#define DFFPKLFKGAO_CFADHEBDCOB_OFFSET UNITYSDK_OFFSET(0xE82CB60)
#define DFFPKLFKGAO_CGICDGFCOPI_OFFSET UNITYSDK_OFFSET(0xE82C1E0)
#define DFFPKLFKGAO_CTOR_OFFSET UNITYSDK_OFFSET(0xE82AD80)
#define DFFPKLFKGAO_DEPDICEBBOD_OFFSET UNITYSDK_OFFSET(0xE82C720)
#define DFFPKLFKGAO_DNDCLGMIFFJ_OFFSET UNITYSDK_OFFSET(0xE82CEE0)
#define DFFPKLFKGAO_ELDEKOFDGJC_OFFSET UNITYSDK_OFFSET(0xE82CDF0)
#define DFFPKLFKGAO_EPKNJFFOBHP_OFFSET UNITYSDK_OFFSET(0xE82BD00)
#define DFFPKLFKGAO_FHNABKNKFEG_OFFSET UNITYSDK_OFFSET(0xE82CC90)
#define DFFPKLFKGAO_FIJHCPHMBFP_OFFSET UNITYSDK_OFFSET(0xE82C090)
#define DFFPKLFKGAO_FOIFBPDDOIB_OFFSET UNITYSDK_OFFSET(0xE82C190)
#define DFFPKLFKGAO_GEPEHCMKCOJ_OFFSET UNITYSDK_OFFSET(0xE82B370)
#define DFFPKLFKGAO_GOHHNACCFNE_OFFSET UNITYSDK_OFFSET(0xE82B990)
#define DFFPKLFKGAO_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0xE82CF40)
#define DFFPKLFKGAO_HMKPJNIJEGM_OFFSET UNITYSDK_OFFSET(0xE82BA10)
#define DFFPKLFKGAO_IBGOLGMMIKN_OFFSET UNITYSDK_OFFSET(0xE82CD80)
#define DFFPKLFKGAO_IJKPKDBEEPO_OFFSET UNITYSDK_OFFSET(0xE82C120)
#define DFFPKLFKGAO_JBCCHFGEIPD_OFFSET UNITYSDK_OFFSET(0xE82CAC0)
#define DFFPKLFKGAO_KGBGAHOBBAI_OFFSET UNITYSDK_OFFSET(0xE82AD40)
#define DFFPKLFKGAO_KJNEEIFPMEI_OFFSET UNITYSDK_OFFSET(0xE82C9A0)
#define DFFPKLFKGAO_KLNFPMFPCCN_OFFSET UNITYSDK_OFFSET(0xE82BF10)
#define DFFPKLFKGAO_KMHOONLFPOL_OFFSET UNITYSDK_OFFSET(0xE82BE90)
#define DFFPKLFKGAO_LKJJKLFGDEB_OFFSET UNITYSDK_OFFSET(0xE82C8F0)
#define DFFPKLFKGAO_MNDPLIACKBB_OFFSET UNITYSDK_OFFSET(0xE82C800)
#define DFFPKLFKGAO_NBJAAGOEOBF_OFFSET UNITYSDK_OFFSET(0xE82BB80)
#define DFFPKLFKGAO_NEKGALPLEOH_OFFSET UNITYSDK_OFFSET(0xE82BFF0)
#define DFFPKLFKGAO_OLGACLJFHCF_OFFSET UNITYSDK_OFFSET(0xE82B460)
#define DFFPKLFKGAO_PHMMIPCOKHC_OFFSET UNITYSDK_OFFSET(0xE82BA70)

	class DFFPKLFKGAO : public ::System::Object
	{
	public:
		::RPG::Client::BattleOnEntityActionOrderUpdatedParam* NNEKJPCEIFH; // 0x10
		::KKHNFGNFJFD* LODNGAGNLCB; // 0x18
		::EBBJGCKIBAA* AEBBPNCLBDD; // 0x20
		::RPG::GameCore::TurnBasedGameMode* BHJDJDPLCLP; // 0x28
		::System::Void _ctor(::RPG::GameCore::TurnBasedGameMode* a1, ::EBBJGCKIBAA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedGameMode*, ::EBBJGCKIBAA*))((::PBYTE)hIl2Cpp + DFFPKLFKGAO_CTOR_OFFSET))(this, a1, a2);
		}

		::KKHNFGNFJFD* KGBGAHOBBAI()
		{
			return ((::KKHNFGNFJFD*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFFPKLFKGAO_KGBGAHOBBAI_OFFSET))(this);
		}

		::System::Void BFCAMEOJKFF(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + DFFPKLFKGAO_BFCAMEOJKFF_OFFSET))(this, a1);
		}

		::System::Void OLGACLJFHCF(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + DFFPKLFKGAO_OLGACLJFHCF_OFFSET))(this, a1);
		}

		::System::Void CBHEACHJKPB(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + DFFPKLFKGAO_CBHEACHJKPB_OFFSET))(this, a1);
		}

		::System::Boolean GOHHNACCFNE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DFFPKLFKGAO_GOHHNACCFNE_OFFSET))(this);
		}

		::System::Void HMKPJNIJEGM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFFPKLFKGAO_HMKPJNIJEGM_OFFSET))(this);
		}

		::System::Void PHMMIPCOKHC(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + DFFPKLFKGAO_PHMMIPCOKHC_OFFSET))(this, a1);
		}

		::System::Void BNMKKIGMACD(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + DFFPKLFKGAO_BNMKKIGMACD_OFFSET))(this, a1);
		}

		::System::Void NBJAAGOEOBF(::DEKDEPEBHNC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DEKDEPEBHNC*))((::PBYTE)hIl2Cpp + DFFPKLFKGAO_NBJAAGOEOBF_OFFSET))(this, a1);
		}

		::System::Void BPOAOKJKMKM(::DEKDEPEBHNC* a1, ::DEKDEPEBHNC* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::DEKDEPEBHNC*, ::DEKDEPEBHNC*, ::System::Int32))((::PBYTE)hIl2Cpp + DFFPKLFKGAO_BPOAOKJKMKM_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EPKNJFFOBHP(::ENGBNDIPDJL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ENGBNDIPDJL*))((::PBYTE)hIl2Cpp + DFFPKLFKGAO_EPKNJFFOBHP_OFFSET))(this, a1);
		}

		::System::Void AHDODIOEGMO(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + DFFPKLFKGAO_AHDODIOEGMO_OFFSET))(this, a1);
		}

		::System::Void AIKPFOPKAPA(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DFFPKLFKGAO_AIKPFOPKAPA_OFFSET))(this, a1);
		}

		::System::Void KMHOONLFPOL(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + DFFPKLFKGAO_KMHOONLFPOL_OFFSET))(this, a1, a2);
		}

		::System::Void KLNFPMFPCCN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFFPKLFKGAO_KLNFPMFPCCN_OFFSET))(this);
		}

		::System::Void NEKGALPLEOH(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + DFFPKLFKGAO_NEKGALPLEOH_OFFSET))(this, a1);
		}

		::System::Void FIJHCPHMBFP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFFPKLFKGAO_FIJHCPHMBFP_OFFSET))(this);
		}

		::System::Void IJKPKDBEEPO(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DFFPKLFKGAO_IJKPKDBEEPO_OFFSET))(this, a1);
		}

		::System::Void FOIFBPDDOIB(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DFFPKLFKGAO_FOIFBPDDOIB_OFFSET))(this, a1);
		}

		::System::Void CGICDGFCOPI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFFPKLFKGAO_CGICDGFCOPI_OFFSET))(this);
		}

		::System::Void BOJEBMBNBIA(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + DFFPKLFKGAO_BOJEBMBNBIA_OFFSET))(this, a1);
		}

		::System::Void DEPDICEBBOD(::RPG::GameCore::LevelEntityActionDelayChanged* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelEntityActionDelayChanged*))((::PBYTE)hIl2Cpp + DFFPKLFKGAO_DEPDICEBBOD_OFFSET))(this, a1);
		}

		::System::Void MNDPLIACKBB(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + DFFPKLFKGAO_MNDPLIACKBB_OFFSET))(this, a1, a2);
		}

		::System::Void LKJJKLFGDEB(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + DFFPKLFKGAO_LKJJKLFGDEB_OFFSET))(this, a1);
		}

		::System::Void KJNEEIFPMEI(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DFFPKLFKGAO_KJNEEIFPMEI_OFFSET))(this, a1);
		}

		::System::Void JBCCHFGEIPD(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + DFFPKLFKGAO_JBCCHFGEIPD_OFFSET))(this, a1);
		}

		::System::Void CFADHEBDCOB(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + DFFPKLFKGAO_CFADHEBDCOB_OFFSET))(this, a1);
		}

		::System::Void FHNABKNKFEG(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DFFPKLFKGAO_FHNABKNKFEG_OFFSET))(this, a1);
		}

		::System::Void IBGOLGMMIKN(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DFFPKLFKGAO_IBGOLGMMIKN_OFFSET))(this, a1);
		}

		::System::Void ELDEKOFDGJC(::RPG::GameCore::GameEntity* a1, ::System::Int32 a2, ::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::GameEntity*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Int32, ::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + DFFPKLFKGAO_ELDEKOFDGJC_OFFSET))(this, a1, a2, a3);
		}

		::System::Void DNDCLGMIFFJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFFPKLFKGAO_DNDCLGMIFFJ_OFFSET))(this);
		}

		::System::Void GEPEHCMKCOJ(::RPG::Client::ActionBarUpdateTiming a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActionBarUpdateTiming))((::PBYTE)hIl2Cpp + DFFPKLFKGAO_GEPEHCMKCOJ_OFFSET))(this, a1);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFFPKLFKGAO_HADOHLNHHGB_OFFSET))(this);
		}

	};
