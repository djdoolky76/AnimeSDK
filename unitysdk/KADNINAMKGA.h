#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FJLAKILIMEN.h"
#include "unitysdk/JDMNPLMAKGE.h"
#include "unitysdk/RPG/GameCore/AbilityLinearProperty.h"
#include "unitysdk/RPG/GameCore/AbilityLinearPropertyWithOverride.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/AttackFormulaType.h"
#include "unitysdk/RPG/GameCore/AttackType.h"
#include "unitysdk/RPG/GameCore/DamageBlockType.h"
#include "unitysdk/RPG/GameCore/FinalDamageFormulaType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/SkillEffect.h"
#include "unitysdk/System/Object.h"
class AHPGNJNPGPA;
class BGMKDGACBNI;
class HBIMGDOPJMI;
class HLOPOIKJHBO;
class MNBNFBAMKKI;
namespace RPG::GameCore { class DamageBehaviorTemplate; }
namespace RPG::GameCore { class JsonEnum; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KADNINAMKGA_CTOR_OFFSET UNITYSDK_OFFSET(0xB2CC350)
#define KADNINAMKGA_GBOAGIMFJCK_OFFSET UNITYSDK_OFFSET(0xB2CC480)
#define KADNINAMKGA_LCLBHGBDCDM_OFFSET UNITYSDK_OFFSET(0xB2CC6B0)
#define KADNINAMKGA_TOSTRING_OFFSET UNITYSDK_OFFSET(0xB2CC8E0)

inline static constexpr unsigned int KADNINAMKGA_TypeDefinitionIndex = 53849;

	class KADNINAMKGA : public ::System::Object
	{
	public:
		::System::String* HPIMGAKOIPM; // 0x10
		::MNBNFBAMKKI* EAEJGPLLGMI; // 0x18
		::AHPGNJNPGPA* AMNONNKEAEB; // 0x20
		::HBIMGDOPJMI* PAIDKGLPLFK; // 0x28
		::BGMKDGACBNI* DOCIPOEABOM; // 0x30
		::RPG::GameCore::DamageBehaviorTemplate* CJBFIMFEEJD; // 0x38
		::JDMNPLMAKGE MBMCEPGDIBM; // 0x40
		::Il2CppArray<::HLOPOIKJHBO*>* OCIPOMOHBJC; // 0xF8
		::System::Collections::Generic::List_1<::RPG::GameCore::JsonEnum*>* FNFIBNPBPKF; // 0x100
		::BGMKDGACBNI* GNOCBLOMLAC; // 0x108
		::BGMKDGACBNI* OBGGPEHLPBG; // 0x110
		::Il2CppArray<::HLOPOIKJHBO*>* AKDHBIADDOL; // 0x118
		::RPG::GameCore::AttackDamageType EAKMHKEICGJ; // 0x120
		::RPG::GameCore::AttackDamageType PCAGLLJGPGH; // 0x124
		::RPG::GameCore::FixPoint PEFHMJOJDGL; // 0x128
		::RPG::GameCore::FixPoint AKINLDAMMMP; // 0x130
		::RPG::GameCore::FixPoint NNMPNLOAGEH; // 0x138
		::RPG::GameCore::FixPoint GLEMLNEHAOE; // 0x140
		::RPG::GameCore::FixPoint GOEFEKLDIED; // 0x148
		::RPG::GameCore::FixPoint BCDLGHMMAJC; // 0x150
		::RPG::GameCore::FixPoint NINECGOCDDK; // 0x158
		::RPG::GameCore::FixPoint NEOGMEGDONP; // 0x160
		::RPG::GameCore::FixPoint KHPIFFFJPOF; // 0x168
		::RPG::GameCore::FixPoint PEJNNKJJIOJ; // 0x170
		::RPG::GameCore::FixPoint LPNKMBJOCLD; // 0x178
		::RPG::GameCore::FixPoint OJGLPNIGMBK; // 0x180
		::RPG::GameCore::FixPoint NJNCAKDHFNP; // 0x188
		::RPG::GameCore::FixPoint MFDBIOPGJID; // 0x190
		::RPG::GameCore::FixPoint IIBMDMGCKLJ; // 0x198
		::RPG::GameCore::FixPoint POFJNBOCFNL; // 0x1A0
		::RPG::GameCore::FixPoint GJCPNEECKPA; // 0x1A8
		::RPG::GameCore::FixPoint JEJKFKLIOOJ; // 0x1B0
		::RPG::GameCore::FixPoint PEEAIABLDCL; // 0x1B8
		::RPG::GameCore::FixPoint EGIECEMPHHK; // 0x1C0
		::RPG::GameCore::FixPoint CFCPIBOBADI; // 0x1C8
		::RPG::GameCore::FixPoint JLPCBGJHLON; // 0x1D0
		::RPG::GameCore::AttackFormulaType IGFACFHGICC; // 0x1D8
		::System::Boolean HDMPHJGFGDE; // 0x1DC
		::System::Boolean DJPJFIEDPDA; // 0x1DD
		::System::Boolean DJMDPEHJOGC; // 0x1DE
		::System::Boolean BJEGFBGIOBK; // 0x1DF
		::RPG::GameCore::FixPoint GEPHNJDDADN; // 0x1E0
		::RPG::GameCore::FixPoint KFACOIJFLJG; // 0x1E8
		::RPG::GameCore::FixPoint AMFMKHCENNO; // 0x1F0
		::RPG::GameCore::FixPoint GIJDEEMPOJB; // 0x1F8
		::RPG::GameCore::FixPoint FJGPHPGJDJC; // 0x200
		::RPG::GameCore::FixPoint HCFEOIABJFK; // 0x208
		::FJLAKILIMEN DDMHHFBIJMA; // 0x210
		::RPG::GameCore::FixPoint MOPLFAMKGFK; // 0x298
		::RPG::GameCore::FixPoint KAAKGPLEKNG; // 0x2A0
		::RPG::GameCore::FinalDamageFormulaType GBCGLCBMIAK; // 0x2A8
		::RPG::GameCore::AttackType JLCBDNLOHGI; // 0x2AC
		::RPG::GameCore::FixPoint BADEMHFGGKP; // 0x2B0
		::RPG::GameCore::FixPoint EAMNCMDMNLG; // 0x2B8
		::RPG::GameCore::FixPoint AICLEMNCBED; // 0x2C0
		::RPG::GameCore::FixPoint LOEHPLGLAKD; // 0x2C8
		::RPG::GameCore::FixPoint IOPDNFDGANL; // 0x2D0
		::RPG::GameCore::FixPoint GFBKLIGDCHG; // 0x2D8
		::RPG::GameCore::FixPoint HHCHCBFDHMF; // 0x2E0
		::RPG::GameCore::FixPoint BMPCMLOCNJJ; // 0x2E8
		::RPG::GameCore::FixPoint FHEPEPDLJPD; // 0x2F0
		::RPG::GameCore::FixPoint AMAPNGCFHKO; // 0x2F8
		::RPG::GameCore::FixPoint INEJFIOMGGH; // 0x300
		::System::UInt32 DPBBGIPFCOK; // 0x308
		::System::UInt32 KNIABGNIBJA; // 0x30C
		::RPG::GameCore::FixPoint BKDJANGPFCD; // 0x310
		::RPG::GameCore::FixPoint PODLCDEGHOJ; // 0x318
		::RPG::GameCore::FixPoint HHAFHJHGIOG; // 0x320
		::RPG::GameCore::FixPoint DPDFHBPGOAI; // 0x328
		::RPG::GameCore::FixPoint BKNAOCONPCH; // 0x330
		::RPG::GameCore::FixPoint HBKAKNLFLJM; // 0x338
		::RPG::GameCore::FixPoint PKJDEMKJNIC; // 0x340
		::RPG::GameCore::FixPoint MGPJNPHFDNO; // 0x348
		::RPG::GameCore::FixPoint ECGPMEJIHOK; // 0x350
		::RPG::GameCore::FixPoint BKHHMHIAFOP; // 0x358
		::RPG::GameCore::FixPoint FAOLDFNJBEN; // 0x360
		::RPG::GameCore::AbilityLinearProperty LOCDPCCPHPB; // 0x368
		::RPG::GameCore::FixPoint HNIBCAFNEPC; // 0x3B0
		::RPG::GameCore::FixPoint KJAALAINDIC; // 0x3B8
		::RPG::GameCore::FixPoint LIHJCGOPDPM; // 0x3C0
		::RPG::GameCore::FixPoint BAIBCLLIGJD; // 0x3C8
		::RPG::GameCore::FixPoint BHGPBFLPHAF; // 0x3D0
		::RPG::GameCore::FixPoint KCNKGFJONEA; // 0x3D8
		::RPG::GameCore::FixPoint PKOJBLHNJCC; // 0x3E0
		::System::Boolean BLONLALNHHH; // 0x3E8
		::System::Boolean HLGONPKPIBO; // 0x3E9
		::System::Boolean EDGLOCBGLOC; // 0x3EA
		::System::Boolean GFJJBADBDKP; // 0x3EB
		::System::Boolean NHOJOIEDGEH; // 0x3EC
		::System::Boolean MLBHAGIHNFA; // 0x3ED
		::System::Boolean DMGFGJMGFOF; // 0x3EE
		::System::Boolean DENHHOIDBLC; // 0x3EF
		::RPG::GameCore::FixPoint HBHLFLBKOPK; // 0x3F0
		::RPG::GameCore::FixPoint ONBMLBIJBPI; // 0x3F8
		::RPG::GameCore::FixPoint IMPHBPAJAGB; // 0x400
		::RPG::GameCore::FixPoint PGDPGEMDAPI; // 0x408
		::RPG::GameCore::FixPoint GKEEGPEAPDB; // 0x410
		::RPG::GameCore::FixPoint EGIOEPCCEEI; // 0x418
		::RPG::GameCore::FixPoint EFPAKPBCOAP; // 0x420
		::RPG::GameCore::FixPoint JMDBAAOHCNN; // 0x428
		::RPG::GameCore::AbilityLinearProperty FLADILIABLE; // 0x430
		::RPG::GameCore::FixPoint NAACKINMKHM; // 0x478
		::RPG::GameCore::FixPoint NNKOIEDMHHB; // 0x480
		::RPG::GameCore::FixPoint LHGAKNJFGLD; // 0x488
		::RPG::GameCore::FixPoint OHCIHFMAMJA; // 0x490
		::RPG::GameCore::FixPoint FDHMKLGFOED; // 0x498
		::RPG::GameCore::AbilityLinearPropertyWithOverride IOLDEBPMIBG; // 0x4A0
		::RPG::GameCore::FixPoint FEPHEPBIFKE; // 0x4F0
		::RPG::GameCore::FixPoint FOMOBLKFPNG; // 0x4F8
		::RPG::GameCore::FixPoint IDBKJLLOOHO; // 0x500
		::RPG::GameCore::FixPoint KILFHKJMLMG; // 0x508
		::RPG::GameCore::AbilityLinearProperty LANHKEOHNOF; // 0x510
		::RPG::GameCore::FixPoint HGLMNJPPMHO; // 0x558
		::RPG::GameCore::FixPoint EHILDGBAPDF; // 0x560
		::RPG::GameCore::FixPoint MGLLPCDPOAC; // 0x568
		::RPG::GameCore::AbilityLinearPropertyWithOverride EBGKJIJDHFI; // 0x570
		::RPG::GameCore::AbilityLinearProperty FJDLANFOKLJ; // 0x5C0
		::RPG::GameCore::FixPoint JDELCLMGBDA; // 0x608
		::RPG::GameCore::FixPoint ALMAOOAEJFE; // 0x610
		::RPG::GameCore::FixPoint LHFDJADAHHG; // 0x618
		::RPG::GameCore::FixPoint KFHMPGNEAKB; // 0x620
		::RPG::GameCore::FixPoint KMIINLJKBBJ; // 0x628
		::RPG::GameCore::FixPoint GHOOECIPNII; // 0x630
		::RPG::GameCore::FixPoint JEDCEAGNOAI; // 0x638
		::System::Boolean AKLCPFOFBKG; // 0x640
		::System::Boolean AOBHEMEMDJH; // 0x641
		::System::Boolean ELJHLJPMLAE; // 0x642
		::System::Boolean KEHDCIHKOBD; // 0x643
		::RPG::GameCore::SkillEffect NMBKGBAGCDI; // 0x644
		::RPG::GameCore::FixPoint ECOIINDIEGO; // 0x648
		::RPG::GameCore::FixPoint DJNLILLLEPL; // 0x650
		::RPG::GameCore::FixPoint PBPIDALFLCF; // 0x658
		::RPG::GameCore::FixPoint LNGOGIHEJMA; // 0x660
		::RPG::GameCore::FixPoint GJGGMEHFCJB; // 0x668
		::RPG::GameCore::FixPoint EILBOHBPMNK; // 0x670
		::RPG::GameCore::FixPoint NMAMPAHJNED; // 0x678
		::RPG::GameCore::DamageBlockType HEEAMKPLEGD; // 0x680
		::RPG::GameCore::AttackFormulaType PJCKCNFJGDA; // 0x684
		::RPG::GameCore::FixPoint HFAOEMBCFIP; // 0x688
		::RPG::GameCore::FixPoint DLEALABDPEA; // 0x690
		::RPG::GameCore::FixPoint FPIPFEKHHDL; // 0x698
		::RPG::GameCore::FixPoint PJBALIFKHIL; // 0x6A0
		::RPG::GameCore::FixPoint MGCOFELGBED; // 0x6A8
		::RPG::GameCore::FixPoint PIJFLIEPIGD; // 0x6B0
		::RPG::GameCore::FixPoint PNIFPDHCMAB; // 0x6B8
		::RPG::GameCore::FixPoint FBDFPFIMBPH; // 0x6C0
		::RPG::GameCore::FixPoint ADGFKAMPNKL; // 0x6C8
		::RPG::GameCore::FixPoint GFEHDEFHECJ; // 0x6D0
		::RPG::GameCore::FixPoint GMOJNBJHDMM; // 0x6D8
		::RPG::GameCore::FixPoint MNLAEFDMBBC; // 0x6E0
		::RPG::GameCore::FixPoint ENDFCCFMHJD; // 0x6E8
		::RPG::GameCore::FixPoint FKCBIDHKDDG; // 0x6F0
		::RPG::GameCore::FixPoint KMJBEOLMPAA; // 0x6F8
		::RPG::GameCore::FixPoint CGCLKCOFHHM; // 0x700
		::System::Void _ctor(::BGMKDGACBNI* a1, ::BGMKDGACBNI* a2, ::BGMKDGACBNI* a3)
		{
			return ((::System::Void(*)(::PVOID, ::BGMKDGACBNI*, ::BGMKDGACBNI*, ::BGMKDGACBNI*))((::PBYTE)hIl2Cpp + KADNINAMKGA_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::RPG::GameCore::FixPoint GBOAGIMFJCK()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + KADNINAMKGA_GBOAGIMFJCK_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint LCLBHGBDCDM()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + KADNINAMKGA_LCLBHGBDCDM_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KADNINAMKGA_TOSTRING_OFFSET))(this);
		}

	};
