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

#define KADNINAMKGA_CTOR_OFFSET UNITYSDK_OFFSET(0x19DA85E0)
#define KADNINAMKGA_GBOAGIMFJCK_OFFSET UNITYSDK_OFFSET(0x19DA8710)
#define KADNINAMKGA_LCLBHGBDCDM_OFFSET UNITYSDK_OFFSET(0x19DA8940)
#define KADNINAMKGA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19DA8B70)

inline static constexpr unsigned int KADNINAMKGA_TypeDefinitionIndex = 55013;

	class KADNINAMKGA : public ::System::Object
	{
	public:
		::HBIMGDOPJMI* PAIDKGLPLFK; // 0x10
		::BGMKDGACBNI* GNOCBLOMLAC; // 0x18
		::Il2CppArray<::HLOPOIKJHBO*>* AKDHBIADDOL; // 0x20
		::System::Collections::Generic::List_1<::RPG::GameCore::JsonEnum*>* FNFIBNPBPKF; // 0x28
		::MNBNFBAMKKI* EAEJGPLLGMI; // 0x30
		::JDMNPLMAKGE MBMCEPGDIBM; // 0x38
		::System::String* HPIMGAKOIPM; // 0xF0
		::AHPGNJNPGPA* AMNONNKEAEB; // 0xF8
		::Il2CppArray<::HLOPOIKJHBO*>* OCIPOMOHBJC; // 0x100
		::RPG::GameCore::DamageBehaviorTemplate* CJBFIMFEEJD; // 0x108
		::BGMKDGACBNI* DOCIPOEABOM; // 0x110
		::BGMKDGACBNI* OBGGPEHLPBG; // 0x118
		::RPG::GameCore::FixPoint JDELCLMGBDA; // 0x120
		::RPG::GameCore::FixPoint HBHLFLBKOPK; // 0x128
		::RPG::GameCore::FixPoint JMDBAAOHCNN; // 0x130
		::RPG::GameCore::AbilityLinearPropertyWithOverride IOLDEBPMIBG; // 0x138
		::System::UInt32 KNIABGNIBJA; // 0x188
		::RPG::GameCore::SkillEffect NMBKGBAGCDI; // 0x18C
		::RPG::GameCore::FixPoint AMFMKHCENNO; // 0x190
		::RPG::GameCore::FixPoint FJGPHPGJDJC; // 0x198
		::RPG::GameCore::FixPoint CGCLKCOFHHM; // 0x1A0
		::RPG::GameCore::FixPoint IMPHBPAJAGB; // 0x1A8
		::RPG::GameCore::FixPoint HGLMNJPPMHO; // 0x1B0
		::RPG::GameCore::AttackFormulaType IGFACFHGICC; // 0x1B8
		::RPG::GameCore::AttackType JLCBDNLOHGI; // 0x1BC
		::RPG::GameCore::FixPoint CFCPIBOBADI; // 0x1C0
		::RPG::GameCore::FixPoint KMJBEOLMPAA; // 0x1C8
		::RPG::GameCore::FixPoint NAACKINMKHM; // 0x1D0
		::RPG::GameCore::FixPoint HNIBCAFNEPC; // 0x1D8
		::RPG::GameCore::FixPoint BKNAOCONPCH; // 0x1E0
		::RPG::GameCore::FixPoint ECOIINDIEGO; // 0x1E8
		::RPG::GameCore::FixPoint NINECGOCDDK; // 0x1F0
		::RPG::GameCore::AbilityLinearProperty LOCDPCCPHPB; // 0x1F8
		::RPG::GameCore::FixPoint GJGGMEHFCJB; // 0x240
		::RPG::GameCore::FixPoint PEEAIABLDCL; // 0x248
		::RPG::GameCore::FixPoint MGPJNPHFDNO; // 0x250
		::RPG::GameCore::FixPoint AICLEMNCBED; // 0x258
		::RPG::GameCore::FixPoint BAIBCLLIGJD; // 0x260
		::RPG::GameCore::FixPoint EFPAKPBCOAP; // 0x268
		::RPG::GameCore::FixPoint KJAALAINDIC; // 0x270
		::RPG::GameCore::FixPoint PBPIDALFLCF; // 0x278
		::RPG::GameCore::FixPoint BADEMHFGGKP; // 0x280
		::RPG::GameCore::FixPoint INEJFIOMGGH; // 0x288
		::RPG::GameCore::FixPoint PGDPGEMDAPI; // 0x290
		::RPG::GameCore::FixPoint FEPHEPBIFKE; // 0x298
		::RPG::GameCore::FixPoint FBDFPFIMBPH; // 0x2A0
		::RPG::GameCore::FixPoint ALMAOOAEJFE; // 0x2A8
		::RPG::GameCore::FixPoint PIJFLIEPIGD; // 0x2B0
		::RPG::GameCore::FixPoint BCDLGHMMAJC; // 0x2B8
		::RPG::GameCore::FixPoint HFAOEMBCFIP; // 0x2C0
		::RPG::GameCore::FixPoint GFBKLIGDCHG; // 0x2C8
		::RPG::GameCore::FixPoint LNGOGIHEJMA; // 0x2D0
		::FJLAKILIMEN DDMHHFBIJMA; // 0x2D8
		::RPG::GameCore::FixPoint MGCOFELGBED; // 0x360
		::RPG::GameCore::FixPoint LIHJCGOPDPM; // 0x368
		::RPG::GameCore::FixPoint KFACOIJFLJG; // 0x370
		::RPG::GameCore::FixPoint KILFHKJMLMG; // 0x378
		::RPG::GameCore::FixPoint EGIOEPCCEEI; // 0x380
		::RPG::GameCore::FixPoint AKINLDAMMMP; // 0x388
		::RPG::GameCore::FixPoint ONBMLBIJBPI; // 0x390
		::RPG::GameCore::FixPoint MNLAEFDMBBC; // 0x398
		::RPG::GameCore::FixPoint DLEALABDPEA; // 0x3A0
		::RPG::GameCore::FixPoint GKEEGPEAPDB; // 0x3A8
		::RPG::GameCore::FixPoint FKCBIDHKDDG; // 0x3B0
		::RPG::GameCore::FixPoint ENDFCCFMHJD; // 0x3B8
		::RPG::GameCore::FixPoint GFEHDEFHECJ; // 0x3C0
		::RPG::GameCore::FixPoint OJGLPNIGMBK; // 0x3C8
		::RPG::GameCore::FixPoint FDHMKLGFOED; // 0x3D0
		::RPG::GameCore::FixPoint LHGAKNJFGLD; // 0x3D8
		::RPG::GameCore::FixPoint GMOJNBJHDMM; // 0x3E0
		::RPG::GameCore::FixPoint BMPCMLOCNJJ; // 0x3E8
		::RPG::GameCore::FixPoint PEFHMJOJDGL; // 0x3F0
		::RPG::GameCore::FixPoint EHILDGBAPDF; // 0x3F8
		::RPG::GameCore::FixPoint PJBALIFKHIL; // 0x400
		::RPG::GameCore::FixPoint KHPIFFFJPOF; // 0x408
		::RPG::GameCore::FixPoint GEPHNJDDADN; // 0x410
		::RPG::GameCore::FixPoint MGLLPCDPOAC; // 0x418
		::RPG::GameCore::FixPoint DPDFHBPGOAI; // 0x420
		::RPG::GameCore::AbilityLinearPropertyWithOverride EBGKJIJDHFI; // 0x428
		::RPG::GameCore::FixPoint EAMNCMDMNLG; // 0x478
		::RPG::GameCore::FixPoint OHCIHFMAMJA; // 0x480
		::RPG::GameCore::DamageBlockType HEEAMKPLEGD; // 0x488
		::RPG::GameCore::FinalDamageFormulaType GBCGLCBMIAK; // 0x48C
		::RPG::GameCore::AbilityLinearProperty LANHKEOHNOF; // 0x490
		::RPG::GameCore::FixPoint IDBKJLLOOHO; // 0x4D8
		::RPG::GameCore::FixPoint HBKAKNLFLJM; // 0x4E0
		::RPG::GameCore::FixPoint BHGPBFLPHAF; // 0x4E8
		::RPG::GameCore::AbilityLinearProperty FJDLANFOKLJ; // 0x4F0
		::RPG::GameCore::FixPoint ADGFKAMPNKL; // 0x538
		::RPG::GameCore::FixPoint PNIFPDHCMAB; // 0x540
		::RPG::GameCore::FixPoint GJCPNEECKPA; // 0x548
		::RPG::GameCore::FixPoint GHOOECIPNII; // 0x550
		::RPG::GameCore::FixPoint FOMOBLKFPNG; // 0x558
		::RPG::GameCore::FixPoint IOPDNFDGANL; // 0x560
		::RPG::GameCore::FixPoint FPIPFEKHHDL; // 0x568
		::RPG::GameCore::FixPoint NJNCAKDHFNP; // 0x570
		::RPG::GameCore::FixPoint DJNLILLLEPL; // 0x578
		::RPG::GameCore::FixPoint FHEPEPDLJPD; // 0x580
		::RPG::GameCore::FixPoint PKOJBLHNJCC; // 0x588
		::RPG::GameCore::FixPoint EILBOHBPMNK; // 0x590
		::RPG::GameCore::FixPoint JEJKFKLIOOJ; // 0x598
		::RPG::GameCore::FixPoint KFHMPGNEAKB; // 0x5A0
		::System::Boolean MLBHAGIHNFA; // 0x5A8
		::System::Boolean BLONLALNHHH; // 0x5A9
		::System::Boolean KEHDCIHKOBD; // 0x5AA
		::System::Boolean NHOJOIEDGEH; // 0x5AB
		::System::Boolean AOBHEMEMDJH; // 0x5AC
		::System::Boolean HDMPHJGFGDE; // 0x5AD
		::System::Boolean HLGONPKPIBO; // 0x5AE
		::System::Boolean DMGFGJMGFOF; // 0x5AF
		::RPG::GameCore::FixPoint MFDBIOPGJID; // 0x5B0
		::RPG::GameCore::FixPoint NNKOIEDMHHB; // 0x5B8
		::RPG::GameCore::FixPoint JEDCEAGNOAI; // 0x5C0
		::RPG::GameCore::FixPoint HHCHCBFDHMF; // 0x5C8
		::RPG::GameCore::FixPoint GOEFEKLDIED; // 0x5D0
		::RPG::GameCore::FixPoint BKHHMHIAFOP; // 0x5D8
		::RPG::GameCore::FixPoint ECGPMEJIHOK; // 0x5E0
		::RPG::GameCore::AttackFormulaType PJCKCNFJGDA; // 0x5E8
		::System::UInt32 DPBBGIPFCOK; // 0x5EC
		::RPG::GameCore::FixPoint NNMPNLOAGEH; // 0x5F0
		::RPG::GameCore::FixPoint GLEMLNEHAOE; // 0x5F8
		::RPG::GameCore::FixPoint PKJDEMKJNIC; // 0x600
		::RPG::GameCore::FixPoint HHAFHJHGIOG; // 0x608
		::RPG::GameCore::FixPoint GIJDEEMPOJB; // 0x610
		::RPG::GameCore::FixPoint EGIECEMPHHK; // 0x618
		::RPG::GameCore::FixPoint PODLCDEGHOJ; // 0x620
		::RPG::GameCore::AttackDamageType PCAGLLJGPGH; // 0x628
		::RPG::GameCore::AttackDamageType EAKMHKEICGJ; // 0x62C
		::RPG::GameCore::FixPoint NMAMPAHJNED; // 0x630
		::RPG::GameCore::FixPoint LOEHPLGLAKD; // 0x638
		::RPG::GameCore::FixPoint MOPLFAMKGFK; // 0x640
		::RPG::GameCore::FixPoint LPNKMBJOCLD; // 0x648
		::RPG::GameCore::FixPoint AMAPNGCFHKO; // 0x650
		::RPG::GameCore::AbilityLinearProperty FLADILIABLE; // 0x658
		::RPG::GameCore::FixPoint LHFDJADAHHG; // 0x6A0
		::RPG::GameCore::FixPoint KMIINLJKBBJ; // 0x6A8
		::RPG::GameCore::FixPoint PEJNNKJJIOJ; // 0x6B0
		::System::Boolean GFJJBADBDKP; // 0x6B8
		::System::Boolean DJPJFIEDPDA; // 0x6B9
		::System::Boolean BJEGFBGIOBK; // 0x6BA
		::System::Boolean ELJHLJPMLAE; // 0x6BB
		::System::Boolean EDGLOCBGLOC; // 0x6BC
		::System::Boolean AKLCPFOFBKG; // 0x6BD
		::System::Boolean DJMDPEHJOGC; // 0x6BE
		::System::Boolean DENHHOIDBLC; // 0x6BF
		::RPG::GameCore::FixPoint POFJNBOCFNL; // 0x6C0
		::RPG::GameCore::FixPoint FAOLDFNJBEN; // 0x6C8
		::RPG::GameCore::FixPoint KCNKGFJONEA; // 0x6D0
		::RPG::GameCore::FixPoint HCFEOIABJFK; // 0x6D8
		::RPG::GameCore::FixPoint NEOGMEGDONP; // 0x6E0
		::RPG::GameCore::FixPoint JLPCBGJHLON; // 0x6E8
		::RPG::GameCore::FixPoint KAAKGPLEKNG; // 0x6F0
		::RPG::GameCore::FixPoint BKDJANGPFCD; // 0x6F8
		::RPG::GameCore::FixPoint IIBMDMGCKLJ; // 0x700
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
