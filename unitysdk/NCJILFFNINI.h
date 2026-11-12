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

#define NCJILFFNINI_CTOR_OFFSET UNITYSDK_OFFSET(0xC399DE0)
#define NCJILFFNINI_GBOAGIMFJCK_OFFSET UNITYSDK_OFFSET(0xC399EC0)
#define NCJILFFNINI_LCLBHGBDCDM_OFFSET UNITYSDK_OFFSET(0xC39A0F0)
#define NCJILFFNINI_TOSTRING_OFFSET UNITYSDK_OFFSET(0xC39A320)

inline static constexpr unsigned int NCJILFFNINI_TypeDefinitionIndex = 55586;

	class NCJILFFNINI : public ::System::Object
	{
	public:
		::Il2CppArray<::HLOPOIKJHBO*>* OCIPOMOHBJC; // 0x10
		::Il2CppArray<::HLOPOIKJHBO*>* AKDHBIADDOL; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::FixPoint>* IEHDBDLFEGI; // 0x20
		::RPG::GameCore::TurnBasedAbilityComponent* OBGGPEHLPBG; // 0x28
		::System::String* HPIMGAKOIPM; // 0x30
		::RPG::GameCore::TurnBasedAbilityComponent* DOCIPOEABOM; // 0x38
		::JDMNPLMAKGE MBMCEPGDIBM; // 0x40
		::RPG::PoolList_1<::LNEPPDLABKI>* GEFFDFFLPPF; // 0xF8
		::System::Collections::Generic::List_1<::RPG::GameCore::JsonEnum*>* FNFIBNPBPKF; // 0x100
		::RPG::GameCore::TurnBasedAbilityComponent* GNOCBLOMLAC; // 0x108
		::KHPIHFGEONC* IDLICNKMEOC; // 0x110
		::RPG::GameCore::DamageBehaviorTemplate* CJBFIMFEEJD; // 0x118
		::RPG::GameCore::TurnBasedModifierInstance* EAEJGPLLGMI; // 0x120
		::AHPGNJNPGPA* AMNONNKEAEB; // 0x128
		::RPG::GameCore::FixPoint FHEPEPDLJPD; // 0x130
		::RPG::GameCore::FixPoint BMPCMLOCNJJ; // 0x138
		::RPG::GameCore::FixPoint FOMOBLKFPNG; // 0x140
		::RPG::GameCore::FixPoint LNGOGIHEJMA; // 0x148
		::RPG::GameCore::FixPoint HGLMNJPPMHO; // 0x150
		::RPG::GameCore::FixPoint FAOLDFNJBEN; // 0x158
		::RPG::GameCore::FixPoint NMAMPAHJNED; // 0x160
		::RPG::GameCore::FixPoint CNNINPEOHCH; // 0x168
		::RPG::GameCore::FixPoint NINECGOCDDK; // 0x170
		::RPG::GameCore::FixPoint BKNAOCONPCH; // 0x178
		::RPG::GameCore::FixPoint PNIFPDHCMAB; // 0x180
		::FJLAKILIMEN DDMHHFBIJMA; // 0x188
		::RPG::GameCore::FixPoint PKOJBLHNJCC; // 0x210
		::RPG::GameCore::FixPoint ODOECAHLNNI; // 0x218
		::RPG::GameCore::FixPoint MFDBIOPGJID; // 0x220
		::RPG::GameCore::FixPoint BNNKHNNCPHN; // 0x228
		::RPG::GameCore::FixPoint BADEMHFGGKP; // 0x230
		::RPG::GameCore::FixPoint ADGFKAMPNKL; // 0x238
		::RPG::GameCore::FixPoint BCDLGHMMAJC; // 0x240
		::RPG::GameCore::FixPoint AICLEMNCBED; // 0x248
		::RPG::GameCore::AbilityLinearProperty FLADILIABLE; // 0x250
		::RPG::GameCore::FixPoint PADDJNBMFOF; // 0x298
		::RPG::GameCore::FixPoint GLEMLNEHAOE; // 0x2A0
		::RPG::GameCore::FixPoint GJCPNEECKPA; // 0x2A8
		::RPG::GameCore::FixPoint MGPJNPHFDNO; // 0x2B0
		::RPG::GameCore::FixPoint EGIOEPCCEEI; // 0x2B8
		::RPG::GameCore::FixPoint FKCBIDHKDDG; // 0x2C0
		::RPG::GameCore::FixPoint BKHHMHIAFOP; // 0x2C8
		::System::Boolean AAJBEJEPILH; // 0x2D0
		::System::Boolean EDGLOCBGLOC; // 0x2D1
		::System::Boolean MLBHAGIHNFA; // 0x2D2
		::System::Boolean DJPJFIEDPDA; // 0x2D3
		::RPG::GameCore::FinalDamageFormulaType GBCGLCBMIAK; // 0x2D4
		::RPG::GameCore::FixPoint EILBOHBPMNK; // 0x2D8
		::RPG::GameCore::FixPoint KCNKGFJONEA; // 0x2E0
		::RPG::GameCore::FixPoint GJGGMEHFCJB; // 0x2E8
		::RPG::GameCore::FixPoint MGLLPCDPOAC; // 0x2F0
		::RPG::GameCore::FixPoint NEOGMEGDONP; // 0x2F8
		::RPG::GameCore::FixPoint EFPAKPBCOAP; // 0x300
		::RPG::GameCore::AttackTypeMask DPLFMBALBDB; // 0x308
		::System::Boolean LJDODGNOHAE; // 0x30C
		::System::Boolean KEHDCIHKOBD; // 0x30D
		::System::Boolean BJEGFBGIOBK; // 0x30E
		::System::Boolean NHOJOIEDGEH; // 0x30F
		::RPG::GameCore::FixPoint KMJBEOLMPAA; // 0x310
		::RPG::GameCore::FixPoint JEJKFKLIOOJ; // 0x318
		::RPG::GameCore::FixPoint NAACKINMKHM; // 0x320
		::RPG::GameCore::FixPoint MGCOFELGBED; // 0x328
		::RPG::GameCore::FixPoint ONBMLBIJBPI; // 0x330
		::RPG::GameCore::FixPoint HHAFHJHGIOG; // 0x338
		::RPG::GameCore::FixPoint GEPHNJDDADN; // 0x340
		::RPG::GameCore::FixPoint NJNCAKDHFNP; // 0x348
		::RPG::GameCore::FixPoint HGOECIIHNDB; // 0x350
		::RPG::GameCore::AbilityLinearProperty LOCDPCCPHPB; // 0x358
		::RPG::GameCore::FixPoint PKJDEMKJNIC; // 0x3A0
		::RPG::GameCore::DamageIntegerizeCategory ECJIFBMNFJP; // 0x3A8
		::RPG::GameCore::AttackFormulaType IGFACFHGICC; // 0x3AC
		::RPG::GameCore::FixPoint FPIPFEKHHDL; // 0x3B0
		::RPG::GameCore::FixPoint IIBMDMGCKLJ; // 0x3B8
		::RPG::GameCore::FixPoint BKDJANGPFCD; // 0x3C0
		::RPG::GameCore::FixPoint INNKNDDFGHP; // 0x3C8
		::RPG::GameCore::FixPoint JLPCBGJHLON; // 0x3D0
		::RPG::GameCore::FixPoint LHGAKNJFGLD; // 0x3D8
		::RPG::GameCore::FixPoint FBDFPFIMBPH; // 0x3E0
		::RPG::GameCore::FixPoint PIJFLIEPIGD; // 0x3E8
		::RPG::GameCore::FixPoint PJBALIFKHIL; // 0x3F0
		::RPG::GameCore::FixPoint GHOOECIPNII; // 0x3F8
		::RPG::GameCore::FixPoint CFCPIBOBADI; // 0x400
		::RPG::GameCore::FixPoint EIDKMJEFKEF; // 0x408
		::RPG::GameCore::FixPoint PEFHMJOJDGL; // 0x410
		::RPG::GameCore::FixPoint HBHLFLBKOPK; // 0x418
		::RPG::GameCore::FixPoint FEPHEPBIFKE; // 0x420
		::RPG::GameCore::FixPoint POFJNBOCFNL; // 0x428
		::RPG::GameCore::FixPoint LIHJCGOPDPM; // 0x430
		::RPG::GameCore::FixPoint GKEEGPEAPDB; // 0x438
		::RPG::GameCore::FixPoint PKMAOKAENJO; // 0x440
		::RPG::GameCore::AbilityLinearProperty LANHKEOHNOF; // 0x448
		::RPG::GameCore::FixPoint DPDFHBPGOAI; // 0x490
		::RPG::GameCore::FixPoint KFHMPGNEAKB; // 0x498
		::RPG::GameCore::FixPoint ECOIINDIEGO; // 0x4A0
		::RPG::GameCore::FixPoint JDELCLMGBDA; // 0x4A8
		::RPG::GameCore::AttackDamageType PCAGLLJGPGH; // 0x4B0
		::System::UInt32 DPBBGIPFCOK; // 0x4B4
		::RPG::GameCore::FixPoint JMDBAAOHCNN; // 0x4B8
		::RPG::GameCore::AbilityLinearProperty FJDLANFOKLJ; // 0x4C0
		::RPG::GameCore::FixPoint EHILDGBAPDF; // 0x508
		::RPG::GameCore::FixPoint NNKOIEDMHHB; // 0x510
		::RPG::GameCore::FixPoint EMAOAOIJNID; // 0x518
		::RPG::GameCore::FixPoint HFAOEMBCFIP; // 0x520
		::RPG::GameCore::FixPoint GOEFEKLDIED; // 0x528
		::RPG::GameCore::FixPoint OJGLPNIGMBK; // 0x530
		::System::Boolean AKLCPFOFBKG; // 0x538
		::System::Boolean BLONLALNHHH; // 0x539
		::System::Boolean PJJJBBNPFIL; // 0x53A
		::System::Boolean HLGONPKPIBO; // 0x53B
		::System::Boolean DMGFGJMGFOF; // 0x53C
		::System::Boolean GFJJBADBDKP; // 0x53D
		::System::Boolean DENHHOIDBLC; // 0x53E
		::System::Boolean KKNILGDAAGI; // 0x53F
		::RPG::GameCore::AttackDamageType EAKMHKEICGJ; // 0x540
		::RPG::GameCore::SkillEffect NMBKGBAGCDI; // 0x544
		::RPG::GameCore::FixPoint NNMPNLOAGEH; // 0x548
		::RPG::GameCore::FixPoint AMAPNGCFHKO; // 0x550
		::RPG::GameCore::FixPoint HHCHCBFDHMF; // 0x558
		::RPG::GameCore::FixPoint GMOJNBJHDMM; // 0x560
		::RPG::GameCore::FixPoint LPNKMBJOCLD; // 0x568
		::RPG::GameCore::FixPoint EGIECEMPHHK; // 0x570
		::RPG::GameCore::FixPoint EAMNCMDMNLG; // 0x578
		::RPG::GameCore::FixPoint AKINLDAMMMP; // 0x580
		::RPG::GameCore::FixPoint GIJLEFHHAIO; // 0x588
		::RPG::GameCore::FixPoint GIJDEEMPOJB; // 0x590
		::RPG::GameCore::FixPoint ENDFCCFMHJD; // 0x598
		::RPG::GameCore::FixPoint CGCLKCOFHHM; // 0x5A0
		::RPG::GameCore::FixPoint JEDCEAGNOAI; // 0x5A8
		::RPG::GameCore::FixPoint ECGPMEJIHOK; // 0x5B0
		::RPG::GameCore::FixPoint GFEHDEFHECJ; // 0x5B8
		::RPG::GameCore::FixPoint MOPLFAMKGFK; // 0x5C0
		::RPG::GameCore::FixPoint KILFHKJMLMG; // 0x5C8
		::RPG::GameCore::FixPoint KJAALAINDIC; // 0x5D0
		::RPG::GameCore::FixPoint KFACOIJFLJG; // 0x5D8
		::RPG::GameCore::FixPoint BHGPBFLPHAF; // 0x5E0
		::RPG::GameCore::AbilityLinearPropertyWithOverride EBGKJIJDHFI; // 0x5E8
		::RPG::GameCore::AttackType JLCBDNLOHGI; // 0x638
		::System::Boolean HDMPHJGFGDE; // 0x63C
		::System::Boolean DJMDPEHJOGC; // 0x63D
		::System::Boolean FLANOKPKDOC; // 0x63E
		::System::Byte _padding0[0x1];
		::RPG::GameCore::FixPoint LHFDJADAHHG; // 0x640
		::RPG::GameCore::DamageBlockType HEEAMKPLEGD; // 0x648
		::System::UInt32 KNIABGNIBJA; // 0x64C
		::RPG::GameCore::FixPoint FDHMKLGFOED; // 0x650
		::RPG::GameCore::FixPoint KMIINLJKBBJ; // 0x658
		::RPG::GameCore::FixPoint IIOCCBNGIAM; // 0x660
		::RPG::GameCore::FixPoint AMFMKHCENNO; // 0x668
		::RPG::GameCore::FixPoint DLEALABDPEA; // 0x670
		::RPG::GameCore::FixPoint INEJFIOMGGH; // 0x678
		::RPG::GameCore::FixPoint MNLAEFDMBBC; // 0x680
		::RPG::GameCore::FixPoint PEJNNKJJIOJ; // 0x688
		::RPG::GameCore::FixPoint HCFEOIABJFK; // 0x690
		::RPG::GameCore::FixPoint HNIBCAFNEPC; // 0x698
		::RPG::GameCore::FixPoint KHPIFFFJPOF; // 0x6A0
		::RPG::GameCore::FixPoint PBPIDALFLCF; // 0x6A8
		::RPG::GameCore::FixPoint ALMAOOAEJFE; // 0x6B0
		::RPG::GameCore::FixPoint KNEPAPEIOPB; // 0x6B8
		::RPG::GameCore::FixPoint DJNLILLLEPL; // 0x6C0
		::RPG::GameCore::FixPoint PGDPGEMDAPI; // 0x6C8
		::RPG::GameCore::AttackFormulaType PJCKCNFJGDA; // 0x6D0
		::System::Boolean AOBHEMEMDJH; // 0x6D4
		::System::Boolean JCBHAFCHIPF; // 0x6D5
		::System::Boolean INNMMBDBGJC; // 0x6D6
		::System::Boolean ELJHLJPMLAE; // 0x6D7
		::RPG::GameCore::FixPoint BAIBCLLIGJD; // 0x6D8
		::RPG::GameCore::FixPoint PEEAIABLDCL; // 0x6E0
		::RPG::GameCore::AbilityLinearPropertyWithOverride IOLDEBPMIBG; // 0x6E8
		::RPG::GameCore::FixPoint KAAKGPLEKNG; // 0x738
		::RPG::GameCore::FixPoint IEDDEFKCOBL; // 0x740
		::RPG::GameCore::FixPoint IOPDNFDGANL; // 0x748
		::RPG::GameCore::FixPoint PODLCDEGHOJ; // 0x750
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
