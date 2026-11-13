#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RtBattleSkillTokenType.h"
#include "unitysdk/RPG/GameCore/RtSkillState.h"
#include "unitysdk/RPG/GameCore/RtSkillUseResult.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/OKIBEPMJGMH.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class BAJEFKOPOPL;
class BDOGIDPIEGG;
class CENEFPOMFKG;
class CKMLAGBDPIL;
class DIBPAJHLFIF;
class EPEBKCOIKNK;
class FEBIGFCKHHB;
class FLMFFAFMAON;
class GIKPKAPPFFK;
class ILMMNCLCDIM;
class IMMMHLKHCCO;
class JPBMIDPNFMP;
class KKAOOEJHHHE;
class MIELDKPBNMB;
class MJNGFEGNCOA;
class NEJPLEFGALN;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameEntityList; }
namespace RPG::GameCore { class GameWorld; }
namespace RPG::GameCore { class JsonEnum; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LIIAKHPGLPO_CCTOR_OFFSET UNITYSDK_OFFSET(0x172E61F0)
#define LIIAKHPGLPO_CHJFHBGDLOC_OFFSET UNITYSDK_OFFSET(0x172E46D0)
#define LIIAKHPGLPO_CKCDBMMKIHO_OFFSET UNITYSDK_OFFSET(0x172E5030)
#define LIIAKHPGLPO_CTOR_OFFSET UNITYSDK_OFFSET(0x172E60B0)
#define LIIAKHPGLPO_DEECADMECDI_OFFSET UNITYSDK_OFFSET(0x172E2540)
#define LIIAKHPGLPO_DNHFMDDMKLB_OFFSET UNITYSDK_OFFSET(0x172E54D0)
#define LIIAKHPGLPO_DPHKLPEPAEP_OFFSET UNITYSDK_OFFSET(0x172E5BF0)
#define LIIAKHPGLPO_EJNBJPPGNJF_OFFSET UNITYSDK_OFFSET(0x172E5DF0)
#define LIIAKHPGLPO_EMBDHBMPLJB_OFFSET UNITYSDK_OFFSET(0x172E4D70)
#define LIIAKHPGLPO_ENIJACNONBA_OFFSET UNITYSDK_OFFSET(0x172E6030)
#define LIIAKHPGLPO_FDBBFJBCCMA_OFFSET UNITYSDK_OFFSET(0x172E31D0)
#define LIIAKHPGLPO_FFEENBGBJHI_OFFSET UNITYSDK_OFFSET(0x172E2750)
#define LIIAKHPGLPO_GGMELCLOBIO_OFFSET UNITYSDK_OFFSET(0x172E2E40)
#define LIIAKHPGLPO_GKMLANJKGCK_OFFSET UNITYSDK_OFFSET(0x172E3E80)
#define LIIAKHPGLPO_GOMDIGLPMLH_OFFSET UNITYSDK_OFFSET(0x172E48B0)
#define LIIAKHPGLPO_JGBJALFLFHI_OFFSET UNITYSDK_OFFSET(0x172E42A0)
#define LIIAKHPGLPO_JHNMOJGCELA_OFFSET UNITYSDK_OFFSET(0x172E60A0)
#define LIIAKHPGLPO_JIAAMDDLIGE_OFFSET UNITYSDK_OFFSET(0x172E5C50)
#define LIIAKHPGLPO_JPKEFHAMAPB_OFFSET UNITYSDK_OFFSET(0x172E2850)
#define LIIAKHPGLPO_KCKGCEBBCIE_OFFSET UNITYSDK_OFFSET(0x172E5AC0)
#define LIIAKHPGLPO_KGLDAAEKAAK_OFFSET UNITYSDK_OFFSET(0x172E5580)
#define LIIAKHPGLPO_KKOBPBDKGFH_OFFSET UNITYSDK_OFFSET(0x172E5BA0)
#define LIIAKHPGLPO_LAEHKGNMOMG_OFFSET UNITYSDK_OFFSET(0x172E1390)
#define LIIAKHPGLPO_LHKFNGHLHPD_OFFSET UNITYSDK_OFFSET(0x172E4770)
#define LIIAKHPGLPO_LKFKDNIMDJE_1_OFFSET UNITYSDK_OFFSET(0x172E5290)
#define LIIAKHPGLPO_LKFKDNIMDJE_OFFSET UNITYSDK_OFFSET(0x172E1830)
#define LIIAKHPGLPO_LNBBIGFDAEH_1_OFFSET UNITYSDK_OFFSET(0x172E09B0)
#define LIIAKHPGLPO_LNBBIGFDAEH_2_OFFSET UNITYSDK_OFFSET(0x172E1A00)
#define LIIAKHPGLPO_LNBBIGFDAEH_OFFSET UNITYSDK_OFFSET(0x172E0850)
#define LIIAKHPGLPO_LNDNHINJGFK_OFFSET UNITYSDK_OFFSET(0x172E4E00)
#define LIIAKHPGLPO_MEGBMANHOEI_OFFSET UNITYSDK_OFFSET(0x172E32C0)
#define LIIAKHPGLPO_MLBIBCFEGAF_OFFSET UNITYSDK_OFFSET(0x172E50C0)
#define LIIAKHPGLPO_NBDLJEHFNKB_OFFSET UNITYSDK_OFFSET(0x172E4AB0)
#define LIIAKHPGLPO_NEBKCCNLOKI_1_OFFSET UNITYSDK_OFFSET(0x172E43F0)
#define LIIAKHPGLPO_NEBKCCNLOKI_OFFSET UNITYSDK_OFFSET(0x172E4F00)
#define LIIAKHPGLPO_NMIHKCHPCBC_OFFSET UNITYSDK_OFFSET(0x172E3E90)
#define LIIAKHPGLPO_OANPEGBOGJI_OFFSET UNITYSDK_OFFSET(0x172E4FA0)
#define LIIAKHPGLPO_OIAKBAAGALE_OFFSET UNITYSDK_OFFSET(0x172E1780)
#define LIIAKHPGLPO_OKDDNAKMLBB_OFFSET UNITYSDK_OFFSET(0x172E1690)
#define LIIAKHPGLPO_ONPLUGININIT_OFFSET UNITYSDK_OFFSET(0x172E5590)
#define LIIAKHPGLPO_ONPLUGINUNINIT_OFFSET UNITYSDK_OFFSET(0x172E5810)
#define LIIAKHPGLPO_OPIINDGCCAN_OFFSET UNITYSDK_OFFSET(0x172E3480)
#define LIIAKHPGLPO_PEMDJJNOBAD_OFFSET UNITYSDK_OFFSET(0x172E30E0)
#define LIIAKHPGLPO_PEOBCKMDPDF_OFFSET UNITYSDK_OFFSET(0x172E5420)
#define LIIAKHPGLPO_PJJAFKPEKFP_OFFSET UNITYSDK_OFFSET(0x172E19A0)

inline static constexpr unsigned int LIIAKHPGLPO_TypeDefinitionIndex = 55399;

	class LIIAKHPGLPO : public ::System::Object
	{
	public:
		::JPBMIDPNFMP* DINJAHGIAFO; // 0x10
		::EPEBKCOIKNK* CIDKIGENIFM; // 0x18
		::JPBMIDPNFMP* OELPLEEANPP; // 0x20
		::RPG::GameCore::GameWorld* IMMBMILPPFB; // 0x28
		::System::Collections::Generic::List_1<::IMMMHLKHCCO*>* LNMMMAEGECI; // 0x30
		::JPBMIDPNFMP* BLBHCMLOLGB; // 0x38
		::System::Collections::Generic::List_1<::FEBIGFCKHHB*>* GBCMBIOIFHH; // 0x40
		::ILMMNCLCDIM* FIDOJLHKINO; // 0x48
		::GIKPKAPPFFK* NNHPEBIINBM; // 0x50
		::NEJPLEFGALN* LIGPAAMAFOL; // 0x58
		::System::Boolean IOMJJEKFAAF; // 0x60
		::System::Boolean JMGPHNKLFDO; // 0x61
		static ::Il2CppArray<::RPG::GameCore::JsonEnum*>** StaticGet_FLDLECOMLDI()
		{
			return (::Il2CppArray<::RPG::GameCore::JsonEnum*>**)UnitySDK::FromName("", "LIIAKHPGLPO")->GetStaticField(0x68100);
		}

		// static const ::System::String* GJBMFJCHCAJ; // 0x0
		// static const ::System::String* PFFJEADLLIB; // 0x0
		// static const ::System::String* GPCMJFOLANO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIIAKHPGLPO_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LIIAKHPGLPO_CCTOR_OFFSET))();
		}

		::DIBPAJHLFIF* LNBBIGFDAEH(::BDOGIDPIEGG* a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::DIBPAJHLFIF*(*)(::PVOID, ::BDOGIDPIEGG*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + LIIAKHPGLPO_LNBBIGFDAEH_OFFSET))(this, a1, a2);
		}

		::System::Boolean LAEHKGNMOMG(::CKMLAGBDPIL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CKMLAGBDPIL*))((::PBYTE)hIl2Cpp + LIIAKHPGLPO_LAEHKGNMOMG_OFFSET))(this, a1);
		}

		::CKMLAGBDPIL* LNBBIGFDAEH_1(::BAJEFKOPOPL* a1)
		{
			return ((::CKMLAGBDPIL*(*)(::PVOID, ::BAJEFKOPOPL*))((::PBYTE)hIl2Cpp + LIIAKHPGLPO_LNBBIGFDAEH_1_OFFSET))(this, a1);
		}

		::RPG::GameCore::RtSkillUseResult FFEENBGBJHI(::CENEFPOMFKG* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::RPG::GameCore::RtSkillUseResult(*)(::PVOID, ::CENEFPOMFKG*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + LIIAKHPGLPO_FFEENBGBJHI_OFFSET))(this, a1, a2);
		}

		::CKMLAGBDPIL* LNBBIGFDAEH_2(::CENEFPOMFKG* a1, ::RPG::GameCore::FixPoint a2, ::RPG::GameCore::GameEntity* a3, ::System::Boolean a4, ::System::Boolean a5)
		{
			return ((::CKMLAGBDPIL*(*)(::PVOID, ::CENEFPOMFKG*, ::RPG::GameCore::FixPoint, ::RPG::GameCore::GameEntity*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + LIIAKHPGLPO_LNBBIGFDAEH_2_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::RPG::GameCore::GameEntityList* JPKEFHAMAPB(::CENEFPOMFKG* a1, ::System::Boolean a2)
		{
			return ((::RPG::GameCore::GameEntityList*(*)(::PVOID, ::CENEFPOMFKG*, ::System::Boolean))((::PBYTE)hIl2Cpp + LIIAKHPGLPO_JPKEFHAMAPB_OFFSET))(this, a1, a2);
		}

		::System::Boolean GGMELCLOBIO(::MIELDKPBNMB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MIELDKPBNMB*))((::PBYTE)hIl2Cpp + LIIAKHPGLPO_GGMELCLOBIO_OFFSET))(this, a1);
		}

		::System::Boolean OKDDNAKMLBB(::RPG::GameCore::GameEntity* a1, ::CENEFPOMFKG* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::CENEFPOMFKG*))((::PBYTE)hIl2Cpp + LIIAKHPGLPO_OKDDNAKMLBB_OFFSET))(this, a1, a2);
		}

		::System::Boolean PEMDJJNOBAD(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::JsonEnum* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::JsonEnum*))((::PBYTE)hIl2Cpp + LIIAKHPGLPO_PEMDJJNOBAD_OFFSET))(this, a1, a2);
		}

		::CENEFPOMFKG* FDBBFJBCCMA(::RPG::GameCore::GameEntity* a1)
		{
			return ((::CENEFPOMFKG*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + LIIAKHPGLPO_FDBBFJBCCMA_OFFSET))(this, a1);
		}

		::System::Void MEGBMANHOEI(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + LIIAKHPGLPO_MEGBMANHOEI_OFFSET))(this, a1);
		}

		::System::Void OPIINDGCCAN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIIAKHPGLPO_OPIINDGCCAN_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::IMMMHLKHCCO*>* GKMLANJKGCK()
		{
			return ((::System::Collections::Generic::List_1<::IMMMHLKHCCO*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LIIAKHPGLPO_GKMLANJKGCK_OFFSET))(this);
		}

		::RPG::GameCore::RtSkillUseResult NMIHKCHPCBC(::CENEFPOMFKG* a1, ::OKIBEPMJGMH a2)
		{
			return ((::RPG::GameCore::RtSkillUseResult(*)(::PVOID, ::CENEFPOMFKG*, ::OKIBEPMJGMH))((::PBYTE)hIl2Cpp + LIIAKHPGLPO_NMIHKCHPCBC_OFFSET))(this, a1, a2);
		}

		::FEBIGFCKHHB* CHJFHBGDLOC(::CENEFPOMFKG* a1)
		{
			return ((::FEBIGFCKHHB*(*)(::PVOID, ::CENEFPOMFKG*))((::PBYTE)hIl2Cpp + LIIAKHPGLPO_CHJFHBGDLOC_OFFSET))(this, a1);
		}

		::System::Boolean LHKFNGHLHPD(::CENEFPOMFKG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CENEFPOMFKG*))((::PBYTE)hIl2Cpp + LIIAKHPGLPO_LHKFNGHLHPD_OFFSET))(this, a1);
		}

		::System::Void JGBJALFLFHI(::CENEFPOMFKG* a1, ::RPG::GameCore::JsonEnum* a2)
		{
			return ((::System::Void(*)(::PVOID, ::CENEFPOMFKG*, ::RPG::GameCore::JsonEnum*))((::PBYTE)hIl2Cpp + LIIAKHPGLPO_JGBJALFLFHI_OFFSET))(this, a1, a2);
		}

		::System::Void NBDLJEHFNKB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIIAKHPGLPO_NBDLJEHFNKB_OFFSET))(this);
		}

		::System::Void LNDNHINJGFK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIIAKHPGLPO_LNDNHINJGFK_OFFSET))(this);
		}

		::System::Boolean NEBKCCNLOKI(::FEBIGFCKHHB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FEBIGFCKHHB*))((::PBYTE)hIl2Cpp + LIIAKHPGLPO_NEBKCCNLOKI_OFFSET))(this, a1);
		}

		::System::Boolean NEBKCCNLOKI_1(::FEBIGFCKHHB* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::FEBIGFCKHHB*, ::System::Int32))((::PBYTE)hIl2Cpp + LIIAKHPGLPO_NEBKCCNLOKI_1_OFFSET))(this, a1, a2);
		}

		::System::Boolean MLBIBCFEGAF(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::FixPoint a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::FixPoint, ::System::Int32))((::PBYTE)hIl2Cpp + LIIAKHPGLPO_MLBIBCFEGAF_OFFSET))(this, a1, a2, a3, a4);
		}

		static ::RPG::GameCore::RtBattleSkillTokenType GOMDIGLPMLH(::RPG::GameCore::JsonEnum* a1)
		{
			return ((::RPG::GameCore::RtBattleSkillTokenType(*)(::RPG::GameCore::JsonEnum*))((::PBYTE)hIl2Cpp + LIIAKHPGLPO_GOMDIGLPMLH_OFFSET))(a1);
		}

		::FLMFFAFMAON* DEECADMECDI(::CENEFPOMFKG* a1, ::System::Int32 a2)
		{
			return ((::FLMFFAFMAON*(*)(::PVOID, ::CENEFPOMFKG*, ::System::Int32))((::PBYTE)hIl2Cpp + LIIAKHPGLPO_DEECADMECDI_OFFSET))(this, a1, a2);
		}

		::System::Void LKFKDNIMDJE(::CENEFPOMFKG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CENEFPOMFKG*))((::PBYTE)hIl2Cpp + LIIAKHPGLPO_LKFKDNIMDJE_OFFSET))(this, a1);
		}

		::System::Void LKFKDNIMDJE_1(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + LIIAKHPGLPO_LKFKDNIMDJE_1_OFFSET))(this, a1);
		}

		static ::System::Boolean PEOBCKMDPDF(::KKAOOEJHHHE* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Boolean(*)(::KKAOOEJHHHE*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + LIIAKHPGLPO_PEOBCKMDPDF_OFFSET))(a1, a2);
		}

		static ::System::Void DNHFMDDMKLB(::KKAOOEJHHHE* a1)
		{
			return ((::System::Void(*)(::KKAOOEJHHHE*))((::PBYTE)hIl2Cpp + LIIAKHPGLPO_DNHFMDDMKLB_OFFSET))(a1);
		}

		::System::Boolean PJJAFKPEKFP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LIIAKHPGLPO_PJJAFKPEKFP_OFFSET))(this);
		}

		::CENEFPOMFKG* OIAKBAAGALE()
		{
			return ((::CENEFPOMFKG*(*)(::PVOID))((::PBYTE)hIl2Cpp + LIIAKHPGLPO_OIAKBAAGALE_OFFSET))(this);
		}

		::NEJPLEFGALN* KGLDAAEKAAK()
		{
			return ((::NEJPLEFGALN*(*)(::PVOID))((::PBYTE)hIl2Cpp + LIIAKHPGLPO_KGLDAAEKAAK_OFFSET))(this);
		}

		::System::Void OnPluginInit(::RPG::GameCore::GameWorld* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameWorld*))((::PBYTE)hIl2Cpp + LIIAKHPGLPO_ONPLUGININIT_OFFSET))(this, a1);
		}

		::System::Void OnPluginUninit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIIAKHPGLPO_ONPLUGINUNINIT_OFFSET))(this);
		}

		::System::Void KCKGCEBBCIE(::MJNGFEGNCOA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MJNGFEGNCOA*))((::PBYTE)hIl2Cpp + LIIAKHPGLPO_KCKGCEBBCIE_OFFSET))(this, a1);
		}

		::System::Void KKOBPBDKGFH(::BAJEFKOPOPL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BAJEFKOPOPL*))((::PBYTE)hIl2Cpp + LIIAKHPGLPO_KKOBPBDKGFH_OFFSET))(this, a1);
		}

		::System::Void DPHKLPEPAEP(::BAJEFKOPOPL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BAJEFKOPOPL*))((::PBYTE)hIl2Cpp + LIIAKHPGLPO_DPHKLPEPAEP_OFFSET))(this, a1);
		}

		::System::Void EJNBJPPGNJF(::CENEFPOMFKG* a1, ::RPG::GameCore::RtSkillState a2, ::RPG::GameCore::RtSkillState a3)
		{
			return ((::System::Void(*)(::PVOID, ::CENEFPOMFKG*, ::RPG::GameCore::RtSkillState, ::RPG::GameCore::RtSkillState))((::PBYTE)hIl2Cpp + LIIAKHPGLPO_EJNBJPPGNJF_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ENIJACNONBA(::BAJEFKOPOPL* a1, ::CENEFPOMFKG* a2, ::CENEFPOMFKG* a3)
		{
			return ((::System::Void(*)(::PVOID, ::BAJEFKOPOPL*, ::CENEFPOMFKG*, ::CENEFPOMFKG*))((::PBYTE)hIl2Cpp + LIIAKHPGLPO_ENIJACNONBA_OFFSET))(this, a1, a2, a3);
		}

		::System::Void JIAAMDDLIGE(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + LIIAKHPGLPO_JIAAMDDLIGE_OFFSET))(this, a1);
		}

		::ILMMNCLCDIM* JHNMOJGCELA()
		{
			return ((::ILMMNCLCDIM*(*)(::PVOID))((::PBYTE)hIl2Cpp + LIIAKHPGLPO_JHNMOJGCELA_OFFSET))(this);
		}

		::System::Boolean EMBDHBMPLJB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LIIAKHPGLPO_EMBDHBMPLJB_OFFSET))(this);
		}

		::System::Boolean CKCDBMMKIHO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LIIAKHPGLPO_CKCDBMMKIHO_OFFSET))(this);
		}

		::System::Boolean OANPEGBOGJI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LIIAKHPGLPO_OANPEGBOGJI_OFFSET))(this);
		}

	};
