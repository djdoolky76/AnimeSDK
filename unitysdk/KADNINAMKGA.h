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

#define KADNINAMKGA_CTOR_OFFSET UNITYSDK_OFFSET(0xBB56750)
#define KADNINAMKGA_GBOAGIMFJCK_OFFSET UNITYSDK_OFFSET(0xBB56880)
#define KADNINAMKGA_LCLBHGBDCDM_OFFSET UNITYSDK_OFFSET(0xBB56AA0)
#define KADNINAMKGA_TOSTRING_OFFSET UNITYSDK_OFFSET(0xBB56CD0)

inline static constexpr unsigned int KADNINAMKGA_TypeDefinitionIndex = 55013;

	class KADNINAMKGA : public ::System::Object
	{
	public:
		::JDMNPLMAKGE MBMCEPGDIBM; // 0x10
		::BGMKDGACBNI* DOCIPOEABOM; // 0xC8
		::System::Collections::Generic::List_1<::RPG::GameCore::JsonEnum*>* FNFIBNPBPKF; // 0xD0
		::Il2CppArray<::HLOPOIKJHBO*>* AKDHBIADDOL; // 0xD8
		::BGMKDGACBNI* GNOCBLOMLAC; // 0xE0
		::RPG::GameCore::DamageBehaviorTemplate* CJBFIMFEEJD; // 0xE8
		::System::String* HPIMGAKOIPM; // 0xF0
		::HBIMGDOPJMI* PAIDKGLPLFK; // 0xF8
		::MNBNFBAMKKI* EAEJGPLLGMI; // 0x100
		::BGMKDGACBNI* OBGGPEHLPBG; // 0x108
		::AHPGNJNPGPA* AMNONNKEAEB; // 0x110
		::Il2CppArray<::HLOPOIKJHBO*>* OCIPOMOHBJC; // 0x118
		::System::Boolean MLBHAGIHNFA; // 0x120
		::System::Boolean DENHHOIDBLC; // 0x121
		::System::Boolean KEHDCIHKOBD; // 0x122
		::System::Boolean BJEGFBGIOBK; // 0x123
		::RPG::GameCore::AttackDamageType EAKMHKEICGJ; // 0x124
		::RPG::GameCore::FixPoint ONBMLBIJBPI; // 0x128
		::RPG::GameCore::FixPoint KFACOIJFLJG; // 0x130
		::RPG::GameCore::FixPoint EHILDGBAPDF; // 0x138
		::RPG::GameCore::FixPoint IDBKJLLOOHO; // 0x140
		::RPG::GameCore::FixPoint ECOIINDIEGO; // 0x148
		::RPG::GameCore::FixPoint EGIECEMPHHK; // 0x150
		::RPG::GameCore::FixPoint KCNKGFJONEA; // 0x158
		::RPG::GameCore::FixPoint BADEMHFGGKP; // 0x160
		::RPG::GameCore::FixPoint EFPAKPBCOAP; // 0x168
		::RPG::GameCore::FixPoint BKHHMHIAFOP; // 0x170
		::RPG::GameCore::FixPoint MGPJNPHFDNO; // 0x178
		::RPG::GameCore::FixPoint LPNKMBJOCLD; // 0x180
		::RPG::GameCore::FixPoint NNMPNLOAGEH; // 0x188
		::RPG::GameCore::FixPoint POFJNBOCFNL; // 0x190
		::System::UInt32 DPBBGIPFCOK; // 0x198
		::System::Boolean EDGLOCBGLOC; // 0x19C
		::System::Boolean DJMDPEHJOGC; // 0x19D
		::System::Boolean AKLCPFOFBKG; // 0x19E
		::System::Boolean HDMPHJGFGDE; // 0x19F
		::RPG::GameCore::FixPoint GKEEGPEAPDB; // 0x1A0
		::RPG::GameCore::FixPoint PBPIDALFLCF; // 0x1A8
		::RPG::GameCore::FixPoint JEJKFKLIOOJ; // 0x1B0
		::RPG::GameCore::FixPoint GJGGMEHFCJB; // 0x1B8
		::RPG::GameCore::FixPoint FHEPEPDLJPD; // 0x1C0
		::RPG::GameCore::FixPoint PIJFLIEPIGD; // 0x1C8
		::RPG::GameCore::FixPoint ENDFCCFMHJD; // 0x1D0
		::RPG::GameCore::FixPoint PNIFPDHCMAB; // 0x1D8
		::RPG::GameCore::FixPoint KJAALAINDIC; // 0x1E0
		::RPG::GameCore::AbilityLinearProperty FLADILIABLE; // 0x1E8
		::RPG::GameCore::FixPoint FPIPFEKHHDL; // 0x230
		::RPG::GameCore::FixPoint IOPDNFDGANL; // 0x238
		::RPG::GameCore::FixPoint ADGFKAMPNKL; // 0x240
		::RPG::GameCore::FixPoint GMOJNBJHDMM; // 0x248
		::RPG::GameCore::FixPoint KILFHKJMLMG; // 0x250
		::RPG::GameCore::FixPoint FKCBIDHKDDG; // 0x258
		::RPG::GameCore::FixPoint HFAOEMBCFIP; // 0x260
		::RPG::GameCore::FixPoint GFEHDEFHECJ; // 0x268
		::RPG::GameCore::FixPoint EAMNCMDMNLG; // 0x270
		::RPG::GameCore::FixPoint AMAPNGCFHKO; // 0x278
		::RPG::GameCore::FixPoint GOEFEKLDIED; // 0x280
		::RPG::GameCore::FixPoint HCFEOIABJFK; // 0x288
		::RPG::GameCore::FixPoint NEOGMEGDONP; // 0x290
		::RPG::GameCore::FixPoint FBDFPFIMBPH; // 0x298
		::RPG::GameCore::FixPoint IIBMDMGCKLJ; // 0x2A0
		::RPG::GameCore::FinalDamageFormulaType GBCGLCBMIAK; // 0x2A8
		::RPG::GameCore::AttackFormulaType IGFACFHGICC; // 0x2AC
		::RPG::GameCore::FixPoint ALMAOOAEJFE; // 0x2B0
		::RPG::GameCore::FixPoint PKOJBLHNJCC; // 0x2B8
		::RPG::GameCore::FixPoint PEEAIABLDCL; // 0x2C0
		::RPG::GameCore::FixPoint BKDJANGPFCD; // 0x2C8
		::RPG::GameCore::FixPoint PEFHMJOJDGL; // 0x2D0
		::RPG::GameCore::FixPoint MFDBIOPGJID; // 0x2D8
		::System::UInt32 KNIABGNIBJA; // 0x2E0
		::RPG::GameCore::SkillEffect NMBKGBAGCDI; // 0x2E4
		::RPG::GameCore::FixPoint KAAKGPLEKNG; // 0x2E8
		::RPG::GameCore::FixPoint HBHLFLBKOPK; // 0x2F0
		::RPG::GameCore::FixPoint EILBOHBPMNK; // 0x2F8
		::RPG::GameCore::FixPoint AKINLDAMMMP; // 0x300
		::RPG::GameCore::FixPoint OHCIHFMAMJA; // 0x308
		::RPG::GameCore::FixPoint LIHJCGOPDPM; // 0x310
		::RPG::GameCore::FixPoint AMFMKHCENNO; // 0x318
		::RPG::GameCore::FixPoint FJGPHPGJDJC; // 0x320
		::RPG::GameCore::FixPoint LHFDJADAHHG; // 0x328
		::RPG::GameCore::FixPoint LNGOGIHEJMA; // 0x330
		::FJLAKILIMEN DDMHHFBIJMA; // 0x338
		::RPG::GameCore::FixPoint PJBALIFKHIL; // 0x3C0
		::RPG::GameCore::FixPoint PEJNNKJJIOJ; // 0x3C8
		::RPG::GameCore::FixPoint ECGPMEJIHOK; // 0x3D0
		::RPG::GameCore::AbilityLinearProperty LOCDPCCPHPB; // 0x3D8
		::RPG::GameCore::FixPoint MGCOFELGBED; // 0x420
		::RPG::GameCore::AbilityLinearProperty FJDLANFOKLJ; // 0x428
		::RPG::GameCore::FixPoint MOPLFAMKGFK; // 0x470
		::RPG::GameCore::AttackType JLCBDNLOHGI; // 0x478
		::RPG::GameCore::AttackDamageType PCAGLLJGPGH; // 0x47C
		::RPG::GameCore::AbilityLinearPropertyWithOverride EBGKJIJDHFI; // 0x480
		::RPG::GameCore::FixPoint JMDBAAOHCNN; // 0x4D0
		::RPG::GameCore::FixPoint FAOLDFNJBEN; // 0x4D8
		::RPG::GameCore::FixPoint KMJBEOLMPAA; // 0x4E0
		::RPG::GameCore::FixPoint KHPIFFFJPOF; // 0x4E8
		::RPG::GameCore::FixPoint HGLMNJPPMHO; // 0x4F0
		::RPG::GameCore::FixPoint GIJDEEMPOJB; // 0x4F8
		::RPG::GameCore::FixPoint GFBKLIGDCHG; // 0x500
		::RPG::GameCore::FixPoint JDELCLMGBDA; // 0x508
		::RPG::GameCore::FixPoint HHAFHJHGIOG; // 0x510
		::System::Boolean GFJJBADBDKP; // 0x518
		::System::Boolean AOBHEMEMDJH; // 0x519
		::System::Boolean DJPJFIEDPDA; // 0x51A
		::System::Boolean ELJHLJPMLAE; // 0x51B
		::RPG::GameCore::DamageBlockType HEEAMKPLEGD; // 0x51C
		::RPG::GameCore::FixPoint JEDCEAGNOAI; // 0x520
		::RPG::GameCore::FixPoint JLPCBGJHLON; // 0x528
		::RPG::GameCore::FixPoint BCDLGHMMAJC; // 0x530
		::RPG::GameCore::FixPoint LOEHPLGLAKD; // 0x538
		::RPG::GameCore::FixPoint PKJDEMKJNIC; // 0x540
		::RPG::GameCore::AttackFormulaType PJCKCNFJGDA; // 0x548
		::System::Boolean NHOJOIEDGEH; // 0x54C
		::System::Boolean DMGFGJMGFOF; // 0x54D
		::System::Boolean HLGONPKPIBO; // 0x54E
		::System::Boolean BLONLALNHHH; // 0x54F
		::RPG::GameCore::FixPoint CGCLKCOFHHM; // 0x550
		::RPG::GameCore::FixPoint KMIINLJKBBJ; // 0x558
		::RPG::GameCore::FixPoint NAACKINMKHM; // 0x560
		::RPG::GameCore::FixPoint GEPHNJDDADN; // 0x568
		::RPG::GameCore::FixPoint NINECGOCDDK; // 0x570
		::RPG::GameCore::FixPoint PODLCDEGHOJ; // 0x578
		::RPG::GameCore::AbilityLinearPropertyWithOverride IOLDEBPMIBG; // 0x580
		::RPG::GameCore::FixPoint BMPCMLOCNJJ; // 0x5D0
		::RPG::GameCore::FixPoint NMAMPAHJNED; // 0x5D8
		::RPG::GameCore::FixPoint INEJFIOMGGH; // 0x5E0
		::RPG::GameCore::FixPoint GHOOECIPNII; // 0x5E8
		::RPG::GameCore::FixPoint BKNAOCONPCH; // 0x5F0
		::RPG::GameCore::FixPoint AICLEMNCBED; // 0x5F8
		::RPG::GameCore::FixPoint KFHMPGNEAKB; // 0x600
		::RPG::GameCore::FixPoint BHGPBFLPHAF; // 0x608
		::RPG::GameCore::FixPoint FEPHEPBIFKE; // 0x610
		::RPG::GameCore::FixPoint CFCPIBOBADI; // 0x618
		::RPG::GameCore::FixPoint HHCHCBFDHMF; // 0x620
		::RPG::GameCore::FixPoint HNIBCAFNEPC; // 0x628
		::RPG::GameCore::FixPoint NJNCAKDHFNP; // 0x630
		::RPG::GameCore::FixPoint IMPHBPAJAGB; // 0x638
		::RPG::GameCore::FixPoint PGDPGEMDAPI; // 0x640
		::RPG::GameCore::FixPoint MNLAEFDMBBC; // 0x648
		::RPG::GameCore::FixPoint GLEMLNEHAOE; // 0x650
		::RPG::GameCore::FixPoint FDHMKLGFOED; // 0x658
		::RPG::GameCore::FixPoint EGIOEPCCEEI; // 0x660
		::RPG::GameCore::FixPoint HBKAKNLFLJM; // 0x668
		::RPG::GameCore::FixPoint DLEALABDPEA; // 0x670
		::RPG::GameCore::FixPoint OJGLPNIGMBK; // 0x678
		::RPG::GameCore::FixPoint BAIBCLLIGJD; // 0x680
		::RPG::GameCore::FixPoint FOMOBLKFPNG; // 0x688
		::RPG::GameCore::FixPoint DJNLILLLEPL; // 0x690
		::RPG::GameCore::AbilityLinearProperty LANHKEOHNOF; // 0x698
		::RPG::GameCore::FixPoint DPDFHBPGOAI; // 0x6E0
		::RPG::GameCore::FixPoint LHGAKNJFGLD; // 0x6E8
		::RPG::GameCore::FixPoint NNKOIEDMHHB; // 0x6F0
		::RPG::GameCore::FixPoint GJCPNEECKPA; // 0x6F8
		::RPG::GameCore::FixPoint MGLLPCDPOAC; // 0x700
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
