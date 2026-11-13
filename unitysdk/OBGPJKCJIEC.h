#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/SkillSPProgressType.h"
#include "unitysdk/RPG/GameCore/SkillCharacterComponent_UseSkillErrorInfo.h"
class DEKDEPEBHNC;
class FGCPOAGKGCE;
class FMPCODLIOLG;
class KIONMEOPGFF;
class PBLNMBHCNLJ;
namespace RPG::Client { class HPBar; }
namespace RPG::GameCore { class AbilityBeingLimbo; }
namespace RPG::GameCore { class AbilityCurrentSPChange; }
namespace RPG::GameCore { class AbilityMaxSPChange; }
namespace RPG::GameCore { class BattleInstance; }
namespace RPG::GameCore { class CharacterDataComponent; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelBattleEventCreate; }
namespace RPG::GameCore { class LevelTurnAvatarChangeFinish; }
namespace RPG::GameCore { class LevelTurnUltraSkillCancel; }
namespace RPG::GameCore { class LevelTurnUltraSkillExecutingBegin; }
namespace RPG::GameCore { class LevelTurnUltraSkillPrepare; }
namespace RPG::GameCore { class LevelUIComponent; }
namespace RPG::GameCore { class SkillCharacterComponent; }
namespace RPG::GameCore { class SkillData; }
namespace RPG::GameCore { class TurnBasedAbilityComponent; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System { class Object; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define OBGPJKCJIEC_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x1AB84D00)
#define OBGPJKCJIEC_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x1AB85220)
#define OBGPJKCJIEC_BBPGKAAAHCH_OFFSET UNITYSDK_OFFSET(0x1AB84A90)
#define OBGPJKCJIEC_BCFEJCJALAA_OFFSET UNITYSDK_OFFSET(0x1AB81C40)
#define OBGPJKCJIEC_BGLCJHDKMMD_OFFSET UNITYSDK_OFFSET(0x1AB827D0)
#define OBGPJKCJIEC_CFLADHCMBMK_OFFSET UNITYSDK_OFFSET(0x1AB83950)
#define OBGPJKCJIEC_CTOR_OFFSET UNITYSDK_OFFSET(0x1AB85700)
#define OBGPJKCJIEC_DEDADPOFLOI_OFFSET UNITYSDK_OFFSET(0x1AB83D70)
#define OBGPJKCJIEC_DFGLPGCNBKC_OFFSET UNITYSDK_OFFSET(0x1AB82D90)
#define OBGPJKCJIEC_DICPMEJINGC_OFFSET UNITYSDK_OFFSET(0x1AB82660)
#define OBGPJKCJIEC_DJHLEBBJGID_OFFSET UNITYSDK_OFFSET(0x1AB83330)
#define OBGPJKCJIEC_DMBMGCGDMCE_OFFSET UNITYSDK_OFFSET(0x1AB82F30)
#define OBGPJKCJIEC_DPDOCIHLBOB_OFFSET UNITYSDK_OFFSET(0x1AB81530)
#define OBGPJKCJIEC_EAMCPPDJIPM_OFFSET UNITYSDK_OFFSET(0x1AB84710)
#define OBGPJKCJIEC_EAOGLDEIMJO_OFFSET UNITYSDK_OFFSET(0x1AB844D0)
#define OBGPJKCJIEC_EBEHFIGHJAM_OFFSET UNITYSDK_OFFSET(0x1AB823A0)
#define OBGPJKCJIEC_EBPDLMBPLBL_OFFSET UNITYSDK_OFFSET(0x1AB83050)
#define OBGPJKCJIEC_ECOHEIAHIAO_OFFSET UNITYSDK_OFFSET(0x1AB80DC0)
#define OBGPJKCJIEC_EDDOHLBMOBB_OFFSET UNITYSDK_OFFSET(0x1AB82250)
#define OBGPJKCJIEC_EEGHOOOKKJE_OFFSET UNITYSDK_OFFSET(0x1AB84980)
#define OBGPJKCJIEC_EGJHNAOPEEP_OFFSET UNITYSDK_OFFSET(0x1AB841C0)
#define OBGPJKCJIEC_EOKIOHGPNIC_OFFSET UNITYSDK_OFFSET(0x1AB81DD0)
#define OBGPJKCJIEC_EPHIBCEHFHP_OFFSET UNITYSDK_OFFSET(0x1AB84210)
#define OBGPJKCJIEC_FGLPIJMMOLG_OFFSET UNITYSDK_OFFSET(0x1AB81350)
#define OBGPJKCJIEC_GDNJDJFADMO_OFFSET UNITYSDK_OFFSET(0x1AB83FD0)
#define OBGPJKCJIEC_GOLKPFPKODP_OFFSET UNITYSDK_OFFSET(0x1AB82C80)
#define OBGPJKCJIEC_HGNOGNMMLCL_OFFSET UNITYSDK_OFFSET(0x1AB82E80)
#define OBGPJKCJIEC_HJOPMPDMAMB_OFFSET UNITYSDK_OFFSET(0x1AB82B20)
#define OBGPJKCJIEC_HLDHNMJBBOK_OFFSET UNITYSDK_OFFSET(0x1AB81700)
#define OBGPJKCJIEC_HPKPNIPIJEP_OFFSET UNITYSDK_OFFSET(0x1AB84310)
#define OBGPJKCJIEC_IHJCDKFFJLF_OFFSET UNITYSDK_OFFSET(0x1AB84410)
#define OBGPJKCJIEC_JHJODHHJLAK_OFFSET UNITYSDK_OFFSET(0x1AB812D0)
#define OBGPJKCJIEC_JIABCJLODJI_OFFSET UNITYSDK_OFFSET(0x1AB81090)
#define OBGPJKCJIEC_JJBGNJFCHPL_OFFSET UNITYSDK_OFFSET(0x1AB81230)
#define OBGPJKCJIEC_JKJMOGBMCCH_OFFSET UNITYSDK_OFFSET(0x1AB81D70)
#define OBGPJKCJIEC_JKLNFPKPNGL_OFFSET UNITYSDK_OFFSET(0x1AB817F0)
#define OBGPJKCJIEC_KBCNINCDBLP_OFFSET UNITYSDK_OFFSET(0x1AB831C0)
#define OBGPJKCJIEC_KBPCEHADACG_OFFSET UNITYSDK_OFFSET(0x1AB81CA0)
#define OBGPJKCJIEC_KFGOOABKPDH_OFFSET UNITYSDK_OFFSET(0x1AB83EB0)
#define OBGPJKCJIEC_KGPNGPAJPJI_OFFSET UNITYSDK_OFFSET(0x1AB82FD0)
#define OBGPJKCJIEC_KHCBFBGMKBJ_OFFSET UNITYSDK_OFFSET(0x1AB84B50)
#define OBGPJKCJIEC_KPIFHHIBFEH_OFFSET UNITYSDK_OFFSET(0x1AB84590)
#define OBGPJKCJIEC_LBLDDENDNKE_OFFSET UNITYSDK_OFFSET(0x1AB84C10)
#define OBGPJKCJIEC_LECLADPCHAJ_OFFSET UNITYSDK_OFFSET(0x1AB82C30)
#define OBGPJKCJIEC_LGGIJANONHL_OFFSET UNITYSDK_OFFSET(0x1AB81750)
#define OBGPJKCJIEC_MFAHHGLGOBM_OFFSET UNITYSDK_OFFSET(0x1AB848C0)
#define OBGPJKCJIEC_MFCBBPPFMPO_OFFSET UNITYSDK_OFFSET(0x1AB829F0)
#define OBGPJKCJIEC_MFCDFGNIBFN_OFFSET UNITYSDK_OFFSET(0x1AB84110)
#define OBGPJKCJIEC_MNLFPHAOAGP_OFFSET UNITYSDK_OFFSET(0x1AB82440)
#define OBGPJKCJIEC_NGNACJONELO_OFFSET UNITYSDK_OFFSET(0x1AB833E0)
#define OBGPJKCJIEC_NJBDJBHEBAN_OFFSET UNITYSDK_OFFSET(0x1AB810E0)
#define OBGPJKCJIEC_NJDIMFMHFHF_OFFSET UNITYSDK_OFFSET(0x1AB84170)
#define OBGPJKCJIEC_NJKJGICAOJM_OFFSET UNITYSDK_OFFSET(0x1AB847D0)
#define OBGPJKCJIEC_OAAOHHINHPH_OFFSET UNITYSDK_OFFSET(0x1AB80BD0)
#define OBGPJKCJIEC_ONOAGPEGMKA_OFFSET UNITYSDK_OFFSET(0x1AB80EB0)
#define OBGPJKCJIEC_OONGMDCDLBJ_OFFSET UNITYSDK_OFFSET(0x1AB839B0)
#define OBGPJKCJIEC_PGCIIGMHODG_OFFSET UNITYSDK_OFFSET(0x1AB84650)
#define OBGPJKCJIEC_PHBLFEFNICJ_OFFSET UNITYSDK_OFFSET(0x1AB83CF0)
#define OBGPJKCJIEC_PHPGANHCEHL_OFFSET UNITYSDK_OFFSET(0x1AB81150)
#define OBGPJKCJIEC_PNFAHABNEMH_OFFSET UNITYSDK_OFFSET(0x1AB81460)
#define OBGPJKCJIEC__INITVARONCE_OFFSET UNITYSDK_OFFSET(0x1AB80C10)
#define OBGPJKCJIEC__ONBIND_OFFSET UNITYSDK_OFFSET(0x1AB80AC0)
#define OBGPJKCJIEC__ONTICK_OFFSET UNITYSDK_OFFSET(0x1AB80E00)
#define OBGPJKCJIEC__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x1AB80E60)

inline static constexpr unsigned int OBGPJKCJIEC_TypeDefinitionIndex = 73543;

	class OBGPJKCJIEC : public ::FMPCODLIOLG
	{
	public:
		::RPG::GameCore::LevelUIComponent* FGCIJADADDA; // 0x60
		::System::Func_1<::System::Boolean>* DKFHMHMPEBL; // 0x68
		::RPG::Client::HPBar* DBMOGHNMOKN; // 0x70
		::RPG::GameCore::GameEntity* OJAHLJGABMJ; // 0x78
		::PBLNMBHCNLJ* KCNKJOMCAHN; // 0x80
		::RPG::GameCore::BattleInstance* CKPCDFOHJIE; // 0x88
		::RPG::GameCore::CharacterDataComponent* HANEKMPLHHP; // 0x90
		::RPG::GameCore::TurnBasedAbilityComponent* HFFKONIDMGL; // 0x98
		::RPG::GameCore::SkillCharacterComponent* ENMHNNNJPPN; // 0xA0
		::RPG::GameCore::SkillData* IMAOAAEJOIE; // 0xA8
		::FGCPOAGKGCE* LCAFDOLIHIH; // 0xB0
		::UnityEngine::Transform* DBBIHFPBCLO; // 0xB8
		::System::Collections::Generic::List_1<::KIONMEOPGFF*>* GEFKNDBDLPK; // 0xC0
		::System::Boolean LDMLHEKMCEG; // 0xC8
		::System::Boolean AKBPNMEFGAO; // 0xC9
		::System::Boolean PENFJGJBOBI; // 0xCA
		::System::Byte _padding0[0x5];
		::RPG::GameCore::FixPoint OPMPLMLDNHC; // 0xD0
		::System::UInt32 HLLCFGHKBCK; // 0xD8
		::System::UInt32 FODPGPEKNPP; // 0xDC
		::RPG::GameCore::SkillSPProgressType AMGLDBPMEHE; // 0xE0
		::System::Int32 GNJCIPEHNAP; // 0xE4
		// static const ::System::String* DJCBDJMACFH; // 0x0
		// static const ::System::Object EJEONLGGNBB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBGPJKCJIEC_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBGPJKCJIEC__ONBIND_OFFSET))(this);
		}

		::FMPCODLIOLG* OAAOHHINHPH()
		{
			return ((::FMPCODLIOLG*(*)(::PVOID))((::PBYTE)hIl2Cpp + OBGPJKCJIEC_OAAOHHINHPH_OFFSET))(this);
		}

		::System::Void _InitVarOnce()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBGPJKCJIEC__INITVARONCE_OFFSET))(this);
		}

		::System::Void ECOHEIAHIAO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBGPJKCJIEC_ECOHEIAHIAO_OFFSET))(this);
		}

		::System::Void _OnTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OBGPJKCJIEC__ONTICK_OFFSET))(this, a1);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBGPJKCJIEC__SETUPVIEW_OFFSET))(this);
		}

		::System::Void JIABCJLODJI(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OBGPJKCJIEC_JIABCJLODJI_OFFSET))(this, a1);
		}

		::System::Void NJBDJBHEBAN(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OBGPJKCJIEC_NJBDJBHEBAN_OFFSET))(this, a1);
		}

		::System::Void JJBGNJFCHPL(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OBGPJKCJIEC_JJBGNJFCHPL_OFFSET))(this, a1);
		}

		::System::Void FGLPIJMMOLG(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OBGPJKCJIEC_FGLPIJMMOLG_OFFSET))(this, a1);
		}

		::System::Void PNFAHABNEMH(::RPG::GameCore::GameEntity* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::UInt32))((::PBYTE)hIl2Cpp + OBGPJKCJIEC_PNFAHABNEMH_OFFSET))(this, a1, a2);
		}

		::System::Void HLDHNMJBBOK(::System::Func_1<::System::Boolean>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Func_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + OBGPJKCJIEC_HLDHNMJBBOK_OFFSET))(this, a1);
		}

		::System::Void LGGIJANONHL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBGPJKCJIEC_LGGIJANONHL_OFFSET))(this);
		}

		::System::Void JKLNFPKPNGL(::System::Int32 a1, ::System::Boolean a2, ::RPG::GameCore::GameEntity* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + OBGPJKCJIEC_JKLNFPKPNGL_OFFSET))(this, a1, a2, a3);
		}

		::RPG::GameCore::SkillCharacterComponent_UseSkillErrorInfo KBPCEHADACG()
		{
			return ((::RPG::GameCore::SkillCharacterComponent_UseSkillErrorInfo(*)(::PVOID))((::PBYTE)hIl2Cpp + OBGPJKCJIEC_KBPCEHADACG_OFFSET))(this);
		}

		::System::Void JKJMOGBMCCH(::RPG::GameCore::LevelBattleEventCreate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelBattleEventCreate*))((::PBYTE)hIl2Cpp + OBGPJKCJIEC_JKJMOGBMCCH_OFFSET))(this, a1);
		}

		::System::Void EDDOHLBMOBB(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OBGPJKCJIEC_EDDOHLBMOBB_OFFSET))(this, a1);
		}

		::System::Void MNLFPHAOAGP(::RPG::GameCore::AbilityCurrentSPChange* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityCurrentSPChange*))((::PBYTE)hIl2Cpp + OBGPJKCJIEC_MNLFPHAOAGP_OFFSET))(this, a1);
		}

		::System::Void BGLCJHDKMMD(::RPG::GameCore::AbilityMaxSPChange* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityMaxSPChange*))((::PBYTE)hIl2Cpp + OBGPJKCJIEC_BGLCJHDKMMD_OFFSET))(this, a1);
		}

		::System::Void MFCBBPPFMPO(::RPG::GameCore::AbilityBeingLimbo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityBeingLimbo*))((::PBYTE)hIl2Cpp + OBGPJKCJIEC_MFCBBPPFMPO_OFFSET))(this, a1);
		}

		::System::Void LECLADPCHAJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBGPJKCJIEC_LECLADPCHAJ_OFFSET))(this);
		}

		::System::Void DFGLPGCNBKC(::RPG::GameCore::LevelTurnUltraSkillPrepare* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelTurnUltraSkillPrepare*))((::PBYTE)hIl2Cpp + OBGPJKCJIEC_DFGLPGCNBKC_OFFSET))(this, a1);
		}

		::System::Void HGNOGNMMLCL(::RPG::GameCore::LevelTurnUltraSkillCancel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelTurnUltraSkillCancel*))((::PBYTE)hIl2Cpp + OBGPJKCJIEC_HGNOGNMMLCL_OFFSET))(this, a1);
		}

		::System::Void DMBMGCGDMCE(::RPG::GameCore::LevelTurnUltraSkillExecutingBegin* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelTurnUltraSkillExecutingBegin*))((::PBYTE)hIl2Cpp + OBGPJKCJIEC_DMBMGCGDMCE_OFFSET))(this, a1);
		}

		::System::Void KGPNGPAJPJI(::DEKDEPEBHNC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DEKDEPEBHNC*))((::PBYTE)hIl2Cpp + OBGPJKCJIEC_KGPNGPAJPJI_OFFSET))(this, a1);
		}

		::System::Void EBPDLMBPLBL(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + OBGPJKCJIEC_EBPDLMBPLBL_OFFSET))(this, a1);
		}

		::System::Void KBCNINCDBLP(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + OBGPJKCJIEC_KBCNINCDBLP_OFFSET))(this, a1);
		}

		::System::Void DJHLEBBJGID(::RPG::GameCore::LevelTurnAvatarChangeFinish* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelTurnAvatarChangeFinish*))((::PBYTE)hIl2Cpp + OBGPJKCJIEC_DJHLEBBJGID_OFFSET))(this, a1);
		}

		::System::Void ONOAGPEGMKA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBGPJKCJIEC_ONOAGPEGMKA_OFFSET))(this);
		}

		::System::Boolean EOKIOHGPNIC(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + OBGPJKCJIEC_EOKIOHGPNIC_OFFSET))(this, a1);
		}

		::System::Void DICPMEJINGC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBGPJKCJIEC_DICPMEJINGC_OFFSET))(this);
		}

		::System::Void NGNACJONELO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBGPJKCJIEC_NGNACJONELO_OFFSET))(this);
		}

		::System::Void DEDADPOFLOI(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OBGPJKCJIEC_DEDADPOFLOI_OFFSET))(this, a1);
		}

		::System::UInt32 KFGOOABKPDH(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + OBGPJKCJIEC_KFGOOABKPDH_OFFSET))(this, a1, a2);
		}

		::System::Void OONGMDCDLBJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBGPJKCJIEC_OONGMDCDLBJ_OFFSET))(this);
		}

		::System::Void PHBLFEFNICJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBGPJKCJIEC_PHBLFEFNICJ_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint CFLADHCMBMK()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + OBGPJKCJIEC_CFLADHCMBMK_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint MFCDFGNIBFN()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + OBGPJKCJIEC_MFCDFGNIBFN_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint GDNJDJFADMO()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + OBGPJKCJIEC_GDNJDJFADMO_OFFSET))(this);
		}

		::System::Void PHPGANHCEHL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBGPJKCJIEC_PHPGANHCEHL_OFFSET))(this);
		}

		::System::Void JHJODHHJLAK(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OBGPJKCJIEC_JHJODHHJLAK_OFFSET))(this, a1);
		}

		::System::Void DPDOCIHLBOB(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + OBGPJKCJIEC_DPDOCIHLBOB_OFFSET))(this, a1);
		}

		::System::Void GOLKPFPKODP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBGPJKCJIEC_GOLKPFPKODP_OFFSET))(this);
		}

		::System::Void HJOPMPDMAMB(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OBGPJKCJIEC_HJOPMPDMAMB_OFFSET))(this, a1);
		}

		::System::Int32 NJDIMFMHFHF()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OBGPJKCJIEC_NJDIMFMHFHF_OFFSET))(this);
		}

		::System::Boolean EBEHFIGHJAM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OBGPJKCJIEC_EBEHFIGHJAM_OFFSET))(this);
		}

		::System::Boolean EGJHNAOPEEP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OBGPJKCJIEC_EGJHNAOPEEP_OFFSET))(this);
		}

		::System::Int32 BCFEJCJALAA()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OBGPJKCJIEC_BCFEJCJALAA_OFFSET))(this);
		}

		::System::Void EPHIBCEHFHP(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OBGPJKCJIEC_EPHIBCEHFHP_OFFSET))(this, a1);
		}

		::System::Void HPKPNIPIJEP(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OBGPJKCJIEC_HPKPNIPIJEP_OFFSET))(this, a1);
		}

		::System::Void IHJCDKFFJLF(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OBGPJKCJIEC_IHJCDKFFJLF_OFFSET))(this, a1);
		}

		::System::Void EAOGLDEIMJO(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OBGPJKCJIEC_EAOGLDEIMJO_OFFSET))(this, a1);
		}

		::System::Void KPIFHHIBFEH(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OBGPJKCJIEC_KPIFHHIBFEH_OFFSET))(this, a1);
		}

		::System::Void PGCIIGMHODG(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OBGPJKCJIEC_PGCIIGMHODG_OFFSET))(this, a1);
		}

		::System::Void EAMCPPDJIPM(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OBGPJKCJIEC_EAMCPPDJIPM_OFFSET))(this, a1);
		}

		::System::Void NJKJGICAOJM(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OBGPJKCJIEC_NJKJGICAOJM_OFFSET))(this, a1);
		}

		::System::Void MFAHHGLGOBM(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OBGPJKCJIEC_MFAHHGLGOBM_OFFSET))(this, a1);
		}

		::System::Void EEGHOOOKKJE(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OBGPJKCJIEC_EEGHOOOKKJE_OFFSET))(this, a1);
		}

		::System::Void BBPGKAAAHCH(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OBGPJKCJIEC_BBPGKAAAHCH_OFFSET))(this, a1);
		}

		::System::Void KHCBFBGMKBJ(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OBGPJKCJIEC_KHCBFBGMKBJ_OFFSET))(this, a1);
		}

		::System::Void LBLDDENDNKE(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OBGPJKCJIEC_LBLDDENDNKE_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBGPJKCJIEC_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBGPJKCJIEC_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};
