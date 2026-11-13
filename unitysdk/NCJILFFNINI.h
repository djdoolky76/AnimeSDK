#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FJLAKILIMEN.h"
#include "unitysdk/JDMNPLMAKGE.h"
#include "unitysdk/LNEPPDLABKI.h"
#include "unitysdk/RPG/GameCore/AbilityLinearProperty.h"
#include "unitysdk/RPG/GameCore/AbilityLinearPropertyWithOverride.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/AttackFormulaType.h"
#include "unitysdk/RPG/GameCore/AttackType.h"
#include "unitysdk/RPG/GameCore/AttackTypeMask.h"
#include "unitysdk/RPG/GameCore/DamageBlockType.h"
#include "unitysdk/RPG/GameCore/DamageIntegerizeCategory.h"
#include "unitysdk/RPG/GameCore/FinalDamageFormulaType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/SkillEffect.h"
#include "unitysdk/System/Object.h"
class AHPGNJNPGPA;
class HLOPOIKJHBO;
class KHPIHFGEONC;
namespace RPG { template <typename T> class PoolList_1; }
namespace RPG::GameCore { class DamageBehaviorTemplate; }
namespace RPG::GameCore { class JsonEnum; }
namespace RPG::GameCore { class TurnBasedAbilityComponent; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NCJILFFNINI_CTOR_OFFSET UNITYSDK_OFFSET(0x150FEB40)
#define NCJILFFNINI_GBOAGIMFJCK_OFFSET UNITYSDK_OFFSET(0x150FEC10)
#define NCJILFFNINI_LCLBHGBDCDM_OFFSET UNITYSDK_OFFSET(0x150FEE40)
#define NCJILFFNINI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x150FF070)

inline static constexpr unsigned int NCJILFFNINI_TypeDefinitionIndex = 55586;

	class NCJILFFNINI : public ::System::Object
	{
	public:
		::RPG::PoolList_1<::LNEPPDLABKI>* GEFFDFFLPPF; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::FixPoint>* IEHDBDLFEGI; // 0x18
		::RPG::GameCore::TurnBasedAbilityComponent* GNOCBLOMLAC; // 0x20
		::RPG::GameCore::DamageBehaviorTemplate* CJBFIMFEEJD; // 0x28
		::AHPGNJNPGPA* AMNONNKEAEB; // 0x30
		::System::String* HPIMGAKOIPM; // 0x38
		::System::Collections::Generic::List_1<::RPG::GameCore::JsonEnum*>* FNFIBNPBPKF; // 0x40
		::KHPIHFGEONC* IDLICNKMEOC; // 0x48
		::RPG::GameCore::TurnBasedAbilityComponent* DOCIPOEABOM; // 0x50
		::RPG::GameCore::TurnBasedAbilityComponent* OBGGPEHLPBG; // 0x58
		::RPG::GameCore::TurnBasedModifierInstance* EAEJGPLLGMI; // 0x60
		::JDMNPLMAKGE MBMCEPGDIBM; // 0x68
		::Il2CppArray<::HLOPOIKJHBO*>* AKDHBIADDOL; // 0x120
		::Il2CppArray<::HLOPOIKJHBO*>* OCIPOMOHBJC; // 0x128
		::RPG::GameCore::FixPoint NINECGOCDDK; // 0x130
		::RPG::GameCore::FixPoint GIJLEFHHAIO; // 0x138
		::RPG::GameCore::FixPoint EILBOHBPMNK; // 0x140
		::RPG::GameCore::FixPoint MNLAEFDMBBC; // 0x148
		::RPG::GameCore::AttackTypeMask DPLFMBALBDB; // 0x150
		::System::UInt32 KNIABGNIBJA; // 0x154
		::RPG::GameCore::FixPoint BNNKHNNCPHN; // 0x158
		::RPG::GameCore::FixPoint POFJNBOCFNL; // 0x160
		::RPG::GameCore::FixPoint AICLEMNCBED; // 0x168
		::RPG::GameCore::FixPoint LNGOGIHEJMA; // 0x170
		::RPG::GameCore::FixPoint IIBMDMGCKLJ; // 0x178
		::RPG::GameCore::FixPoint PEEAIABLDCL; // 0x180
		::RPG::GameCore::AbilityLinearProperty FLADILIABLE; // 0x188
		::RPG::GameCore::FixPoint ECOIINDIEGO; // 0x1D0
		::RPG::GameCore::FixPoint GKEEGPEAPDB; // 0x1D8
		::RPG::GameCore::AbilityLinearProperty LANHKEOHNOF; // 0x1E0
		::RPG::GameCore::FixPoint ADGFKAMPNKL; // 0x228
		::RPG::GameCore::FixPoint PIJFLIEPIGD; // 0x230
		::RPG::GameCore::FixPoint DLEALABDPEA; // 0x238
		::RPG::GameCore::FixPoint BKNAOCONPCH; // 0x240
		::RPG::GameCore::FixPoint FDHMKLGFOED; // 0x248
		::RPG::GameCore::FixPoint GMOJNBJHDMM; // 0x250
		::RPG::GameCore::FixPoint EHILDGBAPDF; // 0x258
		::RPG::GameCore::FixPoint EIDKMJEFKEF; // 0x260
		::RPG::GameCore::FixPoint KILFHKJMLMG; // 0x268
		::RPG::GameCore::FixPoint GJCPNEECKPA; // 0x270
		::RPG::GameCore::FixPoint KMIINLJKBBJ; // 0x278
		::RPG::GameCore::FixPoint HFAOEMBCFIP; // 0x280
		::RPG::GameCore::FixPoint LPNKMBJOCLD; // 0x288
		::RPG::GameCore::FixPoint IIOCCBNGIAM; // 0x290
		::RPG::GameCore::FixPoint JMDBAAOHCNN; // 0x298
		::RPG::GameCore::FixPoint GIJDEEMPOJB; // 0x2A0
		::RPG::GameCore::FixPoint KJAALAINDIC; // 0x2A8
		::RPG::GameCore::FinalDamageFormulaType GBCGLCBMIAK; // 0x2B0
		::RPG::GameCore::DamageBlockType HEEAMKPLEGD; // 0x2B4
		::RPG::GameCore::FixPoint GFEHDEFHECJ; // 0x2B8
		::RPG::GameCore::FixPoint AKINLDAMMMP; // 0x2C0
		::RPG::GameCore::FixPoint PADDJNBMFOF; // 0x2C8
		::RPG::GameCore::FixPoint OJGLPNIGMBK; // 0x2D0
		::RPG::GameCore::FixPoint PJBALIFKHIL; // 0x2D8
		::RPG::GameCore::FixPoint BHGPBFLPHAF; // 0x2E0
		::RPG::GameCore::FixPoint KMJBEOLMPAA; // 0x2E8
		::RPG::GameCore::FixPoint PKOJBLHNJCC; // 0x2F0
		::RPG::GameCore::FixPoint FKCBIDHKDDG; // 0x2F8
		::RPG::GameCore::FixPoint KFACOIJFLJG; // 0x300
		::RPG::GameCore::FixPoint MOPLFAMKGFK; // 0x308
		::RPG::GameCore::FixPoint HGOECIIHNDB; // 0x310
		::RPG::GameCore::FixPoint PKJDEMKJNIC; // 0x318
		::RPG::GameCore::FixPoint PODLCDEGHOJ; // 0x320
		::RPG::GameCore::FixPoint EFPAKPBCOAP; // 0x328
		::RPG::GameCore::FixPoint KHPIFFFJPOF; // 0x330
		::RPG::GameCore::FixPoint KNEPAPEIOPB; // 0x338
		::RPG::GameCore::FixPoint FAOLDFNJBEN; // 0x340
		::RPG::GameCore::FixPoint NMAMPAHJNED; // 0x348
		::RPG::GameCore::FixPoint AMFMKHCENNO; // 0x350
		::RPG::GameCore::FixPoint FHEPEPDLJPD; // 0x358
		::RPG::GameCore::FixPoint MGCOFELGBED; // 0x360
		::RPG::GameCore::AttackDamageType PCAGLLJGPGH; // 0x368
		::RPG::GameCore::AttackFormulaType PJCKCNFJGDA; // 0x36C
		::RPG::GameCore::AbilityLinearProperty LOCDPCCPHPB; // 0x370
		::RPG::GameCore::FixPoint KAAKGPLEKNG; // 0x3B8
		::RPG::GameCore::FixPoint BCDLGHMMAJC; // 0x3C0
		::RPG::GameCore::FixPoint NEOGMEGDONP; // 0x3C8
		::RPG::GameCore::FixPoint DPDFHBPGOAI; // 0x3D0
		::RPG::GameCore::AttackType JLCBDNLOHGI; // 0x3D8
		::RPG::GameCore::DamageIntegerizeCategory ECJIFBMNFJP; // 0x3DC
		::RPG::GameCore::FixPoint AMAPNGCFHKO; // 0x3E0
		::RPG::GameCore::FixPoint IEDDEFKCOBL; // 0x3E8
		::RPG::GameCore::FixPoint HGLMNJPPMHO; // 0x3F0
		::RPG::GameCore::FixPoint FBDFPFIMBPH; // 0x3F8
		::RPG::GameCore::FixPoint EAMNCMDMNLG; // 0x400
		::RPG::GameCore::FixPoint ECGPMEJIHOK; // 0x408
		::RPG::GameCore::FixPoint FOMOBLKFPNG; // 0x410
		::System::Boolean MLBHAGIHNFA; // 0x418
		::System::Boolean EDGLOCBGLOC; // 0x419
		::System::Boolean AOBHEMEMDJH; // 0x41A
		::System::Byte _padding0[0x1];
		::RPG::GameCore::AttackFormulaType IGFACFHGICC; // 0x41C
		::RPG::GameCore::FixPoint LHGAKNJFGLD; // 0x420
		::RPG::GameCore::FixPoint EGIOEPCCEEI; // 0x428
		::FJLAKILIMEN DDMHHFBIJMA; // 0x430
		::RPG::GameCore::FixPoint GOEFEKLDIED; // 0x4B8
		::RPG::GameCore::FixPoint JEJKFKLIOOJ; // 0x4C0
		::RPG::GameCore::FixPoint GJGGMEHFCJB; // 0x4C8
		::RPG::GameCore::FixPoint EGIECEMPHHK; // 0x4D0
		::RPG::GameCore::FixPoint KCNKGFJONEA; // 0x4D8
		::RPG::GameCore::FixPoint NNKOIEDMHHB; // 0x4E0
		::RPG::GameCore::FixPoint HHAFHJHGIOG; // 0x4E8
		::RPG::GameCore::FixPoint FPIPFEKHHDL; // 0x4F0
		::RPG::GameCore::AbilityLinearProperty FJDLANFOKLJ; // 0x4F8
		::RPG::GameCore::FixPoint BAIBCLLIGJD; // 0x540
		::RPG::GameCore::FixPoint HNIBCAFNEPC; // 0x548
		::RPG::GameCore::FixPoint FEPHEPBIFKE; // 0x550
		::RPG::GameCore::FixPoint GLEMLNEHAOE; // 0x558
		::RPG::GameCore::FixPoint CGCLKCOFHHM; // 0x560
		::RPG::GameCore::FixPoint PEJNNKJJIOJ; // 0x568
		::RPG::GameCore::FixPoint NAACKINMKHM; // 0x570
		::RPG::GameCore::FixPoint BMPCMLOCNJJ; // 0x578
		::RPG::GameCore::FixPoint MGPJNPHFDNO; // 0x580
		::RPG::GameCore::FixPoint CNNINPEOHCH; // 0x588
		::RPG::GameCore::FixPoint DJNLILLLEPL; // 0x590
		::System::Boolean KEHDCIHKOBD; // 0x598
		::System::Boolean BLONLALNHHH; // 0x599
		::System::Boolean INNMMBDBGJC; // 0x59A
		::System::Boolean HDMPHJGFGDE; // 0x59B
		::RPG::GameCore::SkillEffect NMBKGBAGCDI; // 0x59C
		::RPG::GameCore::AbilityLinearPropertyWithOverride IOLDEBPMIBG; // 0x5A0
		::RPG::GameCore::FixPoint HCFEOIABJFK; // 0x5F0
		::RPG::GameCore::FixPoint INEJFIOMGGH; // 0x5F8
		::RPG::GameCore::FixPoint HBHLFLBKOPK; // 0x600
		::RPG::GameCore::FixPoint NNMPNLOAGEH; // 0x608
		::RPG::GameCore::FixPoint PKMAOKAENJO; // 0x610
		::RPG::GameCore::FixPoint BKHHMHIAFOP; // 0x618
		::RPG::GameCore::FixPoint JEDCEAGNOAI; // 0x620
		::RPG::GameCore::FixPoint INNKNDDFGHP; // 0x628
		::RPG::GameCore::FixPoint NJNCAKDHFNP; // 0x630
		::RPG::GameCore::FixPoint BADEMHFGGKP; // 0x638
		::RPG::GameCore::FixPoint BKDJANGPFCD; // 0x640
		::RPG::GameCore::FixPoint ONBMLBIJBPI; // 0x648
		::RPG::GameCore::AbilityLinearPropertyWithOverride EBGKJIJDHFI; // 0x650
		::RPG::GameCore::FixPoint HHCHCBFDHMF; // 0x6A0
		::System::Boolean BJEGFBGIOBK; // 0x6A8
		::System::Boolean AAJBEJEPILH; // 0x6A9
		::System::Boolean DJPJFIEDPDA; // 0x6AA
		::System::Boolean ELJHLJPMLAE; // 0x6AB
		::System::Boolean NHOJOIEDGEH; // 0x6AC
		::System::Boolean AKLCPFOFBKG; // 0x6AD
		::System::Boolean DENHHOIDBLC; // 0x6AE
		::System::Boolean DJMDPEHJOGC; // 0x6AF
		::RPG::GameCore::FixPoint LIHJCGOPDPM; // 0x6B0
		::System::UInt32 DPBBGIPFCOK; // 0x6B8
		::System::Boolean KKNILGDAAGI; // 0x6BC
		::System::Boolean DMGFGJMGFOF; // 0x6BD
		::System::Boolean GFJJBADBDKP; // 0x6BE
		::System::Boolean HLGONPKPIBO; // 0x6BF
		::RPG::GameCore::FixPoint PNIFPDHCMAB; // 0x6C0
		::RPG::GameCore::FixPoint GEPHNJDDADN; // 0x6C8
		::RPG::GameCore::FixPoint JDELCLMGBDA; // 0x6D0
		::RPG::GameCore::FixPoint KFHMPGNEAKB; // 0x6D8
		::RPG::GameCore::FixPoint PGDPGEMDAPI; // 0x6E0
		::RPG::GameCore::FixPoint LHFDJADAHHG; // 0x6E8
		::RPG::GameCore::FixPoint ENDFCCFMHJD; // 0x6F0
		::RPG::GameCore::FixPoint MFDBIOPGJID; // 0x6F8
		::RPG::GameCore::FixPoint PEFHMJOJDGL; // 0x700
		::RPG::GameCore::FixPoint GHOOECIPNII; // 0x708
		::System::Boolean FLANOKPKDOC; // 0x710
		::System::Boolean JCBHAFCHIPF; // 0x711
		::System::Boolean PJJJBBNPFIL; // 0x712
		::System::Boolean LJDODGNOHAE; // 0x713
		::RPG::GameCore::AttackDamageType EAKMHKEICGJ; // 0x714
		::RPG::GameCore::FixPoint IOPDNFDGANL; // 0x718
		::RPG::GameCore::FixPoint CFCPIBOBADI; // 0x720
		::RPG::GameCore::FixPoint PBPIDALFLCF; // 0x728
		::RPG::GameCore::FixPoint JLPCBGJHLON; // 0x730
		::RPG::GameCore::FixPoint EMAOAOIJNID; // 0x738
		::RPG::GameCore::FixPoint ODOECAHLNNI; // 0x740
		::RPG::GameCore::FixPoint ALMAOOAEJFE; // 0x748
		::RPG::GameCore::FixPoint MGLLPCDPOAC; // 0x750
		::System::Void _ctor(::RPG::GameCore::TurnBasedAbilityComponent* a1, ::RPG::GameCore::TurnBasedAbilityComponent* a2, ::RPG::GameCore::TurnBasedAbilityComponent* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::TurnBasedAbilityComponent*))((::PBYTE)hIl2Cpp + NCJILFFNINI_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::RPG::GameCore::FixPoint GBOAGIMFJCK()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + NCJILFFNINI_GBOAGIMFJCK_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint LCLBHGBDCDM()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + NCJILFFNINI_LCLBHGBDCDM_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCJILFFNINI_TOSTRING_OFFSET))(this);
		}

	};
