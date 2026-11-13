#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KILOJFMKNAI.h"
#include "unitysdk/RPG/Client/LittleGameShare/TeamTowersCore/TeamTowersBrickModifierType.h"
#include "unitysdk/RPG/GameCore/TeamTowersBrickModifierTypeConfig.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/RPG/MVector2.h"
class BDELHFKGEEI;
class BKMGMFCJMFP;
class CIPGJALLKNB;
class MKDNHOFBGPA;
class NKPKLBAACHC;
class OEJDHDANODH;
class OJNEALELKJB;
namespace RPG::GameCore { class ConstValueLittleGameRow; }
namespace RPG::GameCore { class LittleGameEntityConfig; }
namespace RPG::GameCore { class LittleGameLevelConfig; }
namespace RPG::GameCore { class TeamTowersAIConfig; }
namespace RPG::GameCore { class TeamTowersGameConfig; }
namespace RPG::GameCore { class TeamTowersLevelSettings; }
namespace RPG::GameCore { class TeamTowersPassiveSkillConfig; }
namespace RPG::GameCore { class TeamTowersRaceModeConfig; }
namespace RPG::GameCore { class TeamTowersRaceModeHeightlineConfig; }
namespace RPG::GameCore { class TeamTowersSkillConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KIPOJIOCDKF_AGDCCMDJEEP_OFFSET UNITYSDK_OFFSET(0x1ABF3920)
#define KIPOJIOCDKF_AHMMHHKILDK_OFFSET UNITYSDK_OFFSET(0x1ABF3100)
#define KIPOJIOCDKF_AILFEPCMFOD_OFFSET UNITYSDK_OFFSET(0x1ABF58A0)
#define KIPOJIOCDKF_AOCPCODHJCI_OFFSET UNITYSDK_OFFSET(0x1ABF6050)
#define KIPOJIOCDKF_APMIFDOJLPA_OFFSET UNITYSDK_OFFSET(0x1ABF4FB0)
#define KIPOJIOCDKF_BPGAKLBCAGJ_OFFSET UNITYSDK_OFFSET(0x1ABE77D0)
#define KIPOJIOCDKF_BPOKOCBMOFE_OFFSET UNITYSDK_OFFSET(0x1ABF54D0)
#define KIPOJIOCDKF_CHKJDOHOBPB_OFFSET UNITYSDK_OFFSET(0x1ABF51E0)
#define KIPOJIOCDKF_CJLKEFCKAJP_OFFSET UNITYSDK_OFFSET(0x1ABF60F0)
#define KIPOJIOCDKF_CJOGDDMKFFF_OFFSET UNITYSDK_OFFSET(0x1ABF46B0)
#define KIPOJIOCDKF_CPDLMNPMCHH_OFFSET UNITYSDK_OFFSET(0x1ABF4B60)
#define KIPOJIOCDKF_CTOR_OFFSET UNITYSDK_OFFSET(0x1ABF2D40)
#define KIPOJIOCDKF_DGKKIHCKFML_OFFSET UNITYSDK_OFFSET(0x1ABF55A0)
#define KIPOJIOCDKF_DGNFGDANLKK_OFFSET UNITYSDK_OFFSET(0x1ABF42E0)
#define KIPOJIOCDKF_EKBGBBACMFL_OFFSET UNITYSDK_OFFSET(0x1ABF5B50)
#define KIPOJIOCDKF_ELJFGDOKBKA_OFFSET UNITYSDK_OFFSET(0x1ABF4B10)
#define KIPOJIOCDKF_FBIEPAGLLGB_OFFSET UNITYSDK_OFFSET(0x1ABF3430)
#define KIPOJIOCDKF_FBKCAKGMMPF_OFFSET UNITYSDK_OFFSET(0x1ABF53F0)
#define KIPOJIOCDKF_FCHBBJIGHMB_OFFSET UNITYSDK_OFFSET(0x1ABF5F50)
#define KIPOJIOCDKF_FFHEBLCAJPA_OFFSET UNITYSDK_OFFSET(0x1ABF4A70)
#define KIPOJIOCDKF_FFLJJFNOHMM_OFFSET UNITYSDK_OFFSET(0x1ABF5990)
#define KIPOJIOCDKF_GBLNNHDFBLN_OFFSET UNITYSDK_OFFSET(0x1ABF31C0)
#define KIPOJIOCDKF_GFMKDCMKELH_OFFSET UNITYSDK_OFFSET(0x1ABF5150)
#define KIPOJIOCDKF_GFNNJJBDKCK_OFFSET UNITYSDK_OFFSET(0x1ABF2E90)
#define KIPOJIOCDKF_GIADNCECCKA_OFFSET UNITYSDK_OFFSET(0x1ABF4E80)
#define KIPOJIOCDKF_GMBHCACHIII_OFFSET UNITYSDK_OFFSET(0x1ABF3E00)
#define KIPOJIOCDKF_GMDGODBDJLD_OFFSET UNITYSDK_OFFSET(0x1ABF56E0)
#define KIPOJIOCDKF_HBECOCLIENB_OFFSET UNITYSDK_OFFSET(0x1ABF5640)
#define KIPOJIOCDKF_HDCNMGKHNMH_OFFSET UNITYSDK_OFFSET(0x1ABF5FA0)
#define KIPOJIOCDKF_HGHNEECOHEH_OFFSET UNITYSDK_OFFSET(0x1ABF3B90)
#define KIPOJIOCDKF_IDKCGDJOCOH_OFFSET UNITYSDK_OFFSET(0x1ABF61B0)
#define KIPOJIOCDKF_ILBNPEKOPBB_OFFSET UNITYSDK_OFFSET(0x1ABF62A0)
#define KIPOJIOCDKF_IMDNIPBGOPJ_OFFSET UNITYSDK_OFFSET(0x1ABF4C00)
#define KIPOJIOCDKF_IMDOMFGDHHG_OFFSET UNITYSDK_OFFSET(0x1ABF5110)
#define KIPOJIOCDKF_INFJLCEIPHB_OFFSET UNITYSDK_OFFSET(0x1ABF4930)
#define KIPOJIOCDKF_JADNBIAIMJD_OFFSET UNITYSDK_OFFSET(0x1ABF5EB0)
#define KIPOJIOCDKF_JCJNBPBBHLL_OFFSET UNITYSDK_OFFSET(0x1ABF36A0)
#define KIPOJIOCDKF_JCPPNJELGAD_OFFSET UNITYSDK_OFFSET(0x1ABF4E30)
#define KIPOJIOCDKF_JMNGAGBEHMD_OFFSET UNITYSDK_OFFSET(0x1ABF5CB0)
#define KIPOJIOCDKF_JNCFALBOGIA_OFFSET UNITYSDK_OFFSET(0x1ABF6090)
#define KIPOJIOCDKF_JPDCKPDPBPI_OFFSET UNITYSDK_OFFSET(0x1ABF4CA0)
#define KIPOJIOCDKF_KBNJHFNFPBJ_OFFSET UNITYSDK_OFFSET(0x1ABF6390)
#define KIPOJIOCDKF_KCFNFFANPPK_OFFSET UNITYSDK_OFFSET(0x1ABF4EF0)
#define KIPOJIOCDKF_KKEPJGKDFMK_OFFSET UNITYSDK_OFFSET(0x1ABF4070)
#define KIPOJIOCDKF_KPCMLKNKDKM_OFFSET UNITYSDK_OFFSET(0x1ABF4DA0)
#define KIPOJIOCDKF_LCEMCMOGJEI_OFFSET UNITYSDK_OFFSET(0x1ABF5550)
#define KIPOJIOCDKF_LEJLDMNGLLO_OFFSET UNITYSDK_OFFSET(0x1ABF5340)
#define KIPOJIOCDKF_LIEAAEODLJL_OFFSET UNITYSDK_OFFSET(0x1ABF49D0)
#define KIPOJIOCDKF_MDLAAHENDPP_OFFSET UNITYSDK_OFFSET(0x1ABF4850)
#define KIPOJIOCDKF_MDNJCFOEDGB_OFFSET UNITYSDK_OFFSET(0x1ABF55F0)
#define KIPOJIOCDKF_MEEDIDIIKNG_OFFSET UNITYSDK_OFFSET(0x1ABF50B0)
#define KIPOJIOCDKF_MFFMFIOAEAH_OFFSET UNITYSDK_OFFSET(0x1ABF5D60)
#define KIPOJIOCDKF_MJBNALBJELD_OFFSET UNITYSDK_OFFSET(0x1ABF5780)
#define KIPOJIOCDKF_MKKAJBODBKL_OFFSET UNITYSDK_OFFSET(0x1ABF48E0)
#define KIPOJIOCDKF_MKMAOMNHGCK_OFFSET UNITYSDK_OFFSET(0x1ABF4D40)
#define KIPOJIOCDKF_NEJFLCIHFBH_OFFSET UNITYSDK_OFFSET(0x1ABF5290)
#define KIPOJIOCDKF_NGBNODOABHG_OFFSET UNITYSDK_OFFSET(0x1ABF5810)
#define KIPOJIOCDKF_OFPCEGGPAOG_OFFSET UNITYSDK_OFFSET(0x1ABF5020)
#define KIPOJIOCDKF_OIFNIGLNCJO_OFFSET UNITYSDK_OFFSET(0x1ABF5440)
#define KIPOJIOCDKF_OMPEIIPBIIL_OFFSET UNITYSDK_OFFSET(0x1ABF5E10)
#define KIPOJIOCDKF_ONKJLDMHJFP_OFFSET UNITYSDK_OFFSET(0x1ABF5C00)
#define KIPOJIOCDKF_OPINLBGNBGM_OFFSET UNITYSDK_OFFSET(0x1ABF5F00)
#define KIPOJIOCDKF_PCAJMNBKGMI_OFFSET UNITYSDK_OFFSET(0x1ABF4BB0)
#define KIPOJIOCDKF_PGODIDADNOC_OFFSET UNITYSDK_OFFSET(0x1ABF5A70)
#define KIPOJIOCDKF_PPMGCDCFODB_OFFSET UNITYSDK_OFFSET(0x1ABF5E60)

inline static constexpr unsigned int KIPOJIOCDKF_TypeDefinitionIndex = 38093;

	class KIPOJIOCDKF : public ::KILOJFMKNAI
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::BKMGMFCJMFP*>* LGBONKBIIJG; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::ConstValueLittleGameRow*>* AILJALCBEAC; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MKDNHOFBGPA*>* CGMFOCIDLLF; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::BDELHFKGEEI*>* MIGJIGBHIKA; // 0x30
		::RPG::GameCore::TeamTowersLevelSettings* LHBPBEADJLE; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::OEJDHDANODH*>* EJLLCKKECLP; // 0x40
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::CIPGJALLKNB*>* BCLALOFOEAD; // 0x48
		::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::NKPKLBAACHC*>* ACACMJGKDGO; // 0x50
		::RPG::GameCore::TeamTowersGameConfig* OEBCGADNGII; // 0x58
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::OJNEALELKJB*>* BDGJKFPNPKE; // 0x60
		::RPG::GameCore::LittleGameLevelConfig* OHFEMPMNFJJ; // 0x68
		::RPG::GameCore::LittleGameLevelConfig* CLKEPOJFDPD; // 0x70
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::OJNEALELKJB*>*>* GMGPPOFAGDJ; // 0x78
		// static const ::System::String* GBCKEAACFHJ; // 0x0
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KIPOJIOCDKF_CTOR_OFFSET))(this, a1);
		}

		::System::Void CJOGDDMKFFF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KIPOJIOCDKF_CJOGDDMKFFF_OFFSET))(this, a1);
		}

		::System::UInt32 MDLAAHENDPP(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KIPOJIOCDKF_MDLAAHENDPP_OFFSET))(this, a1);
		}

		::System::UInt32 INFJLCEIPHB(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KIPOJIOCDKF_INFJLCEIPHB_OFFSET))(this, a1);
		}

		::System::Single LIEAAEODLJL(::System::UInt32 a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KIPOJIOCDKF_LIEAAEODLJL_OFFSET))(this, a1);
		}

		::System::Single FFHEBLCAJPA(::System::UInt32 a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KIPOJIOCDKF_FFHEBLCAJPA_OFFSET))(this, a1);
		}

		::RPG::GameCore::TeamTowersAIConfig* BPGAKLBCAGJ(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::TeamTowersAIConfig*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + KIPOJIOCDKF_BPGAKLBCAGJ_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::LittleGameLevelConfig* ELJFGDOKBKA(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::LittleGameLevelConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KIPOJIOCDKF_ELJFGDOKBKA_OFFSET))(this, a1);
		}

		::System::UInt32 CPDLMNPMCHH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KIPOJIOCDKF_CPDLMNPMCHH_OFFSET))(this);
		}

		::System::Single PCAJMNBKGMI()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + KIPOJIOCDKF_PCAJMNBKGMI_OFFSET))(this);
		}

		::System::Single IMDNIPBGOPJ(::System::UInt32 a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KIPOJIOCDKF_IMDNIPBGOPJ_OFFSET))(this, a1);
		}

		::System::Single JPDCKPDPBPI(::System::UInt32 a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KIPOJIOCDKF_JPDCKPDPBPI_OFFSET))(this, a1);
		}

		::System::UInt64 MKMAOMNHGCK()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + KIPOJIOCDKF_MKMAOMNHGCK_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* KPCMLKNKDKM(::System::UInt32 a1)
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KIPOJIOCDKF_KPCMLKNKDKM_OFFSET))(this, a1);
		}

		::RPG::GameCore::TeamTowersLevelSettings* JCPPNJELGAD(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::TeamTowersLevelSettings*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KIPOJIOCDKF_JCPPNJELGAD_OFFSET))(this, a1);
		}

		::System::Single GIADNCECCKA(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Single(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + KIPOJIOCDKF_GIADNCECCKA_OFFSET))(this, a1, a2);
		}

		::System::Single APMIFDOJLPA(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Single(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + KIPOJIOCDKF_APMIFDOJLPA_OFFSET))(this, a1, a2);
		}

		::System::Single OFPCEGGPAOG(::System::UInt32 a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KIPOJIOCDKF_OFPCEGGPAOG_OFFSET))(this, a1);
		}

		::System::UInt32 MEEDIDIIKNG()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KIPOJIOCDKF_MEEDIDIIKNG_OFFSET))(this);
		}

		::RPG::GameCore::TeamTowersGameConfig* IMDOMFGDHHG()
		{
			return ((::RPG::GameCore::TeamTowersGameConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + KIPOJIOCDKF_IMDOMFGDHHG_OFFSET))(this);
		}

		::System::UInt32 GFMKDCMKELH(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KIPOJIOCDKF_GFMKDCMKELH_OFFSET))(this, a1);
		}

		::RPG::GameCore::LittleGameEntityConfig* CHKJDOHOBPB(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::LittleGameEntityConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KIPOJIOCDKF_CHKJDOHOBPB_OFFSET))(this, a1);
		}

		::RPG::GameCore::LittleGameEntityConfig* NEJFLCIHFBH(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::LittleGameEntityConfig*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + KIPOJIOCDKF_NEJFLCIHFBH_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::LittleGameEntityConfig* LEJLDMNGLLO(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::LittleGameEntityConfig*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + KIPOJIOCDKF_LEJLDMNGLLO_OFFSET))(this, a1, a2);
		}

		::RPG::MVector2 FBKCAKGMMPF()
		{
			return ((::RPG::MVector2(*)(::PVOID))((::PBYTE)hIl2Cpp + KIPOJIOCDKF_FBKCAKGMMPF_OFFSET))(this);
		}

		::RPG::MVector2 OIFNIGLNCJO(::System::UInt32 a1)
		{
			return ((::RPG::MVector2(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KIPOJIOCDKF_OIFNIGLNCJO_OFFSET))(this, a1);
		}

		::System::Int32 BPOKOCBMOFE(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KIPOJIOCDKF_BPOKOCBMOFE_OFFSET))(this, a1);
		}

		::System::Single LCEMCMOGJEI()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + KIPOJIOCDKF_LCEMCMOGJEI_OFFSET))(this);
		}

		::System::Single DGKKIHCKFML()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + KIPOJIOCDKF_DGKKIHCKFML_OFFSET))(this);
		}

		::System::Single MDNJCFOEDGB()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + KIPOJIOCDKF_MDNJCFOEDGB_OFFSET))(this);
		}

		::RPG::GameCore::TeamTowersSkillConfig* HBECOCLIENB(::System::String* a1)
		{
			return ((::RPG::GameCore::TeamTowersSkillConfig*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + KIPOJIOCDKF_HBECOCLIENB_OFFSET))(this, a1);
		}

		::RPG::GameCore::TeamTowersPassiveSkillConfig* GMDGODBDJLD(::System::String* a1)
		{
			return ((::RPG::GameCore::TeamTowersPassiveSkillConfig*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + KIPOJIOCDKF_GMDGODBDJLD_OFFSET))(this, a1);
		}

		::RPG::GameCore::TeamTowersRaceModeConfig* MJBNALBJELD(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::TeamTowersRaceModeConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KIPOJIOCDKF_MJBNALBJELD_OFFSET))(this, a1);
		}

		::RPG::GameCore::TeamTowersRaceModeHeightlineConfig* NGBNODOABHG(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::TeamTowersRaceModeHeightlineConfig*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + KIPOJIOCDKF_NGBNODOABHG_OFFSET))(this, a1, a2);
		}

		::System::Single AILFEPCMFOD()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + KIPOJIOCDKF_AILFEPCMFOD_OFFSET))(this);
		}

		::System::UInt32 PGODIDADNOC()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KIPOJIOCDKF_PGODIDADNOC_OFFSET))(this);
		}

		::CIPGJALLKNB* EKBGBBACMFL(::System::UInt32 a1)
		{
			return ((::CIPGJALLKNB*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KIPOJIOCDKF_EKBGBBACMFL_OFFSET))(this, a1);
		}

		::MKDNHOFBGPA* ONKJLDMHJFP(::System::UInt32 a1)
		{
			return ((::MKDNHOFBGPA*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KIPOJIOCDKF_ONKJLDMHJFP_OFFSET))(this, a1);
		}

		::RPG::GameCore::ConstValueLittleGameRow* FFLJJFNOHMM(::System::String* a1)
		{
			return ((::RPG::GameCore::ConstValueLittleGameRow*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + KIPOJIOCDKF_FFLJJFNOHMM_OFFSET))(this, a1);
		}

		::NKPKLBAACHC* KCFNFFANPPK(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::NKPKLBAACHC*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + KIPOJIOCDKF_KCFNFFANPPK_OFFSET))(this, a1, a2);
		}

		::BDELHFKGEEI* JMNGAGBEHMD(::System::UInt32 a1)
		{
			return ((::BDELHFKGEEI*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KIPOJIOCDKF_JMNGAGBEHMD_OFFSET))(this, a1);
		}

		::OEJDHDANODH* MFFMFIOAEAH(::System::UInt32 a1)
		{
			return ((::OEJDHDANODH*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KIPOJIOCDKF_MFFMFIOAEAH_OFFSET))(this, a1);
		}

		::System::Single OMPEIIPBIIL()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + KIPOJIOCDKF_OMPEIIPBIIL_OFFSET))(this);
		}

		::System::Single PPMGCDCFODB()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + KIPOJIOCDKF_PPMGCDCFODB_OFFSET))(this);
		}

		::System::Single JADNBIAIMJD()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + KIPOJIOCDKF_JADNBIAIMJD_OFFSET))(this);
		}

		::System::Single OPINLBGNBGM()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + KIPOJIOCDKF_OPINLBGNBGM_OFFSET))(this);
		}

		::System::Single FCHBBJIGHMB()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + KIPOJIOCDKF_FCHBBJIGHMB_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::OJNEALELKJB*>* HDCNMGKHNMH(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::OJNEALELKJB*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KIPOJIOCDKF_HDCNMGKHNMH_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::BKMGMFCJMFP*>* AOCPCODHJCI()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::BKMGMFCJMFP*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KIPOJIOCDKF_AOCPCODHJCI_OFFSET))(this);
		}

		::System::Boolean JNCFALBOGIA(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KIPOJIOCDKF_JNCFALBOGIA_OFFSET))(this, a1);
		}

		::System::UInt32 CJLKEFCKAJP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KIPOJIOCDKF_CJLKEFCKAJP_OFFSET))(this);
		}

		::System::UInt32 IDKCGDJOCOH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KIPOJIOCDKF_IDKCGDJOCOH_OFFSET))(this);
		}

		::System::Single ILBNPEKOPBB()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + KIPOJIOCDKF_ILBNPEKOPBB_OFFSET))(this);
		}

		static ::RPG::Client::LittleGameShare::TeamTowersCore::TeamTowersBrickModifierType KBNJHFNFPBJ(::RPG::GameCore::TeamTowersBrickModifierTypeConfig a1)
		{
			return ((::RPG::Client::LittleGameShare::TeamTowersCore::TeamTowersBrickModifierType(*)(::RPG::GameCore::TeamTowersBrickModifierTypeConfig))((::PBYTE)hIl2Cpp + KIPOJIOCDKF_KBNJHFNFPBJ_OFFSET))(a1);
		}

		::System::Void AHMMHHKILDK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIPOJIOCDKF_AHMMHHKILDK_OFFSET))(this);
		}

		::RPG::GameCore::TeamTowersLevelSettings* MKKAJBODBKL(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::TeamTowersLevelSettings*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KIPOJIOCDKF_MKKAJBODBKL_OFFSET))(this, a1);
		}

		::System::Void GFNNJJBDKCK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIPOJIOCDKF_GFNNJJBDKCK_OFFSET))(this);
		}

		::System::Void GBLNNHDFBLN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIPOJIOCDKF_GBLNNHDFBLN_OFFSET))(this);
		}

		::System::Void FBIEPAGLLGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIPOJIOCDKF_FBIEPAGLLGB_OFFSET))(this);
		}

		::System::Void JCJNBPBBHLL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIPOJIOCDKF_JCJNBPBBHLL_OFFSET))(this);
		}

		::System::Void AGDCCMDJEEP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIPOJIOCDKF_AGDCCMDJEEP_OFFSET))(this);
		}

		::System::Void HGHNEECOHEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIPOJIOCDKF_HGHNEECOHEH_OFFSET))(this);
		}

		::System::Void GMBHCACHIII()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIPOJIOCDKF_GMBHCACHIII_OFFSET))(this);
		}

		::System::Void KKEPJGKDFMK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIPOJIOCDKF_KKEPJGKDFMK_OFFSET))(this);
		}

		::System::Void DGNFGDANLKK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIPOJIOCDKF_DGNFGDANLKK_OFFSET))(this);
		}

	};
