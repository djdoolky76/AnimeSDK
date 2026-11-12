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

#define DFFPKLFKGAO_AHDODIOEGMO_OFFSET UNITYSDK_OFFSET(0xF18C220)
#define DFFPKLFKGAO_AIKPFOPKAPA_OFFSET UNITYSDK_OFFSET(0xF18C2C0)
#define DFFPKLFKGAO_BFCAMEOJKFF_OFFSET UNITYSDK_OFFSET(0xF18B680)
#define DFFPKLFKGAO_BNMKKIGMACD_OFFSET UNITYSDK_OFFSET(0xF18BF80)
#define DFFPKLFKGAO_BOJEBMBNBIA_OFFSET UNITYSDK_OFFSET(0xF18C7C0)
#define DFFPKLFKGAO_BPOAOKJKMKM_OFFSET UNITYSDK_OFFSET(0xF18C0E0)
#define DFFPKLFKGAO_CBHEACHJKPB_OFFSET UNITYSDK_OFFSET(0xF18BAE0)
#define DFFPKLFKGAO_CFADHEBDCOB_OFFSET UNITYSDK_OFFSET(0xF18D000)
#define DFFPKLFKGAO_CGICDGFCOPI_OFFSET UNITYSDK_OFFSET(0xF18C680)
#define DFFPKLFKGAO_CTOR_OFFSET UNITYSDK_OFFSET(0xF18B230)
#define DFFPKLFKGAO_DEPDICEBBOD_OFFSET UNITYSDK_OFFSET(0xF18CBC0)
#define DFFPKLFKGAO_DNDCLGMIFFJ_OFFSET UNITYSDK_OFFSET(0xF18D380)
#define DFFPKLFKGAO_ELDEKOFDGJC_OFFSET UNITYSDK_OFFSET(0xF18D290)
#define DFFPKLFKGAO_EPKNJFFOBHP_OFFSET UNITYSDK_OFFSET(0xF18C1A0)
#define DFFPKLFKGAO_FHNABKNKFEG_OFFSET UNITYSDK_OFFSET(0xF18D130)
#define DFFPKLFKGAO_FIJHCPHMBFP_OFFSET UNITYSDK_OFFSET(0xF18C530)
#define DFFPKLFKGAO_FOIFBPDDOIB_OFFSET UNITYSDK_OFFSET(0xF18C630)
#define DFFPKLFKGAO_GEPEHCMKCOJ_OFFSET UNITYSDK_OFFSET(0xF18B810)
#define DFFPKLFKGAO_GOHHNACCFNE_OFFSET UNITYSDK_OFFSET(0xF18BE30)
#define DFFPKLFKGAO_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0xF18D3E0)
#define DFFPKLFKGAO_HMKPJNIJEGM_OFFSET UNITYSDK_OFFSET(0xF18BEB0)
#define DFFPKLFKGAO_IBGOLGMMIKN_OFFSET UNITYSDK_OFFSET(0xF18D220)
#define DFFPKLFKGAO_IJKPKDBEEPO_OFFSET UNITYSDK_OFFSET(0xF18C5C0)
#define DFFPKLFKGAO_JBCCHFGEIPD_OFFSET UNITYSDK_OFFSET(0xF18CF60)
#define DFFPKLFKGAO_KGBGAHOBBAI_OFFSET UNITYSDK_OFFSET(0xF18B1F0)
#define DFFPKLFKGAO_KJNEEIFPMEI_OFFSET UNITYSDK_OFFSET(0xF18CE40)
#define DFFPKLFKGAO_KLNFPMFPCCN_OFFSET UNITYSDK_OFFSET(0xF18C3B0)
#define DFFPKLFKGAO_KMHOONLFPOL_OFFSET UNITYSDK_OFFSET(0xF18C330)
#define DFFPKLFKGAO_LKJJKLFGDEB_OFFSET UNITYSDK_OFFSET(0xF18CD90)
#define DFFPKLFKGAO_MNDPLIACKBB_OFFSET UNITYSDK_OFFSET(0xF18CCA0)
#define DFFPKLFKGAO_NBJAAGOEOBF_OFFSET UNITYSDK_OFFSET(0xF18C020)
#define DFFPKLFKGAO_NEKGALPLEOH_OFFSET UNITYSDK_OFFSET(0xF18C490)
#define DFFPKLFKGAO_OLGACLJFHCF_OFFSET UNITYSDK_OFFSET(0xF18B900)
#define DFFPKLFKGAO_PHMMIPCOKHC_OFFSET UNITYSDK_OFFSET(0xF18BF10)

inline static constexpr unsigned int DFFPKLFKGAO_TypeDefinitionIndex = 73280;

	class DFFPKLFKGAO : public ::System::Object
	{
	public:
		::RPG::GameCore::TurnBasedGameMode* BHJDJDPLCLP; // 0x10
		::EBBJGCKIBAA* AEBBPNCLBDD; // 0x18
		::RPG::Client::BattleOnEntityActionOrderUpdatedParam* NNEKJPCEIFH; // 0x20
		::KKHNFGNFJFD* LODNGAGNLCB; // 0x28
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
