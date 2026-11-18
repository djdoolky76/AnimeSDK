#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AIOFAMODPOO.h"
#include "unitysdk/HAKNEAAKAMD.h"
#include "unitysdk/HPBIMDNDPLK.h"
#include "unitysdk/MoleMole/ESettingPlatform.h"
#include "unitysdk/MoleMole/ESystemSettingType.h"
#include "unitysdk/MoleMole/EUILayoutPlatform.h"
#include "unitysdk/MoleMole/EZenkovConsoleInteractInputMode.h"
#include "unitysdk/MoleMole/EZenkovPyroisBlinkHoldInputType.h"
#include "unitysdk/MoleMole/InLevelPauseLevelTab.h"
#include "unitysdk/MoleMole/LogicButtonInputType.h"
#include "unitysdk/MoleMole/PCSuperResolutionType.h"
#include "unitysdk/MoleMole/SpecialGamepadInputHintType.h"
#include "unitysdk/Share/ESwitchType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/GamepadButton.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/MouseButton.h"
#include "unitysdk/UnityEngine/InputSystem/Key.h"
#include "unitysdk/FBGGKHIKCPP.h"

namespace MoleMole { class SystemSettingEntryBase; }
namespace MoleMole { template <typename T> class ConfigLazyLoadItem_1; }
namespace MoleMole::Config { class ConfigInputSetting; }
namespace MoleMole::Config { class ConfigSoundSetting; }
namespace MoleMole::Config { class ConfigSubSystemSettingBase; }
namespace MoleMole::Config { class ConfigSystemSetting; }
namespace MoleMole::Config { class InputActionTextIconConfig; }
namespace MoleMole::Config { class InputCodeSetting; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CHODNEDHGJE_AAOFNINMDKH_OFFSET UNITYSDK_OFFSET(0x196FFBE0)
#define CHODNEDHGJE_ABNLJBEDBOM_OFFSET UNITYSDK_OFFSET(0x196FED00)
#define CHODNEDHGJE_ADHEAFBLHFE_OFFSET UNITYSDK_OFFSET(0x19706F30)
#define CHODNEDHGJE_AFCLCNIPCOO_OFFSET UNITYSDK_OFFSET(0x1970BD10)
#define CHODNEDHGJE_AJEMEGEAPEO_OFFSET UNITYSDK_OFFSET(0x19701D90)
#define CHODNEDHGJE_AMBKJMOJOPJ_OFFSET UNITYSDK_OFFSET(0x19708DD0)
#define CHODNEDHGJE_AOLPPGNPHKM_OFFSET UNITYSDK_OFFSET(0x196FE900)
#define CHODNEDHGJE_BBKMMNMGADA_OFFSET UNITYSDK_OFFSET(0x197035A0)
#define CHODNEDHGJE_BJCGBILFFLG_OFFSET UNITYSDK_OFFSET(0x19703A20)
#define CHODNEDHGJE_BMGGNEFMFNM_OFFSET UNITYSDK_OFFSET(0x19700600)
#define CHODNEDHGJE_BOGJIKJFMCF_OFFSET UNITYSDK_OFFSET(0x1970B060)
#define CHODNEDHGJE_CCGFPFJGALF_OFFSET UNITYSDK_OFFSET(0x196FE6C0)
#define CHODNEDHGJE_CNGNGPDNNFM_OFFSET UNITYSDK_OFFSET(0x19703640)
#define CHODNEDHGJE_CPDFCDONECK_OFFSET UNITYSDK_OFFSET(0x19702C00)
#define CHODNEDHGJE_CPHCLPKDEAI_OFFSET UNITYSDK_OFFSET(0x1970BDB0)
#define CHODNEDHGJE_DBBFKEIGOJC_OFFSET UNITYSDK_OFFSET(0x1970B900)
#define CHODNEDHGJE_DGMLFELCAIO_OFFSET UNITYSDK_OFFSET(0x19702AF0)
#define CHODNEDHGJE_DHIBDFLPLGB_OFFSET UNITYSDK_OFFSET(0x197006A0)
#define CHODNEDHGJE_DHKADMMICEE_OFFSET UNITYSDK_OFFSET(0x196FF560)
#define CHODNEDHGJE_DMHJFKDJEOD_OFFSET UNITYSDK_OFFSET(0x19703D70)
#define CHODNEDHGJE_DMJCFDONLKP_OFFSET UNITYSDK_OFFSET(0x196FFE20)
#define CHODNEDHGJE_DNOLPEHABMN_OFFSET UNITYSDK_OFFSET(0x19709AB0)
#define CHODNEDHGJE_EAIEDMKIJOF_OFFSET UNITYSDK_OFFSET(0x197067A0)
#define CHODNEDHGJE_EANDGCCMAIE_OFFSET UNITYSDK_OFFSET(0x19708BF0)
#define CHODNEDHGJE_EGFPLGLAKNL_OFFSET UNITYSDK_OFFSET(0x196FF900)
#define CHODNEDHGJE_EGNJFEEOPMA_OFFSET UNITYSDK_OFFSET(0x196FCCD0)
#define CHODNEDHGJE_EJNHGEPDBAG_OFFSET UNITYSDK_OFFSET(0x19703C80)
#define CHODNEDHGJE_EMDIDJCJGLP_OFFSET UNITYSDK_OFFSET(0x19707600)
#define CHODNEDHGJE_FCMNCOPGOJG_OFFSET UNITYSDK_OFFSET(0x19703E10)
#define CHODNEDHGJE_FDBIBJLDIGD_OFFSET UNITYSDK_OFFSET(0x19708850)
#define CHODNEDHGJE_FEBOJKMBGKI_OFFSET UNITYSDK_OFFSET(0x196FCD70)
#define CHODNEDHGJE_FEJBCKLDEDE_OFFSET UNITYSDK_OFFSET(0x196FD900)
#define CHODNEDHGJE_FKCPDCKLOBB_OFFSET UNITYSDK_OFFSET(0x1970ABB0)
#define CHODNEDHGJE_FNINLKJCMBB_OFFSET UNITYSDK_OFFSET(0x19701CF0)
#define CHODNEDHGJE_GALBEFIFFMP_OFFSET UNITYSDK_OFFSET(0x19703290)
#define CHODNEDHGJE_GBIGJFOBGOE_OFFSET UNITYSDK_OFFSET(0x1970BB20)
#define CHODNEDHGJE_GCHDGBADBIL_OFFSET UNITYSDK_OFFSET(0x19708510)
#define CHODNEDHGJE_GHDPEGCFAMM_OFFSET UNITYSDK_OFFSET(0x19709C70)
#define CHODNEDHGJE_HBNLKJKEHCK_OFFSET UNITYSDK_OFFSET(0x196FEFE0)
#define CHODNEDHGJE_HEBPHEOHINA_OFFSET UNITYSDK_OFFSET(0x19702150)
#define CHODNEDHGJE_HEEDCPLDBHM_OFFSET UNITYSDK_OFFSET(0x196FFCD0)
#define CHODNEDHGJE_HEGFGAICKGN_OFFSET UNITYSDK_OFFSET(0x19708C60)
#define CHODNEDHGJE_HELMAOJFHBL_OFFSET UNITYSDK_OFFSET(0x197025A0)
#define CHODNEDHGJE_HGJICGHKBMA_OFFSET UNITYSDK_OFFSET(0x19709300)
#define CHODNEDHGJE_HIIIEFEBNGK_OFFSET UNITYSDK_OFFSET(0x19708D00)
#define CHODNEDHGJE_HJDOIGNJJEA_OFFSET UNITYSDK_OFFSET(0x19707990)
#define CHODNEDHGJE_HJOBAJHKBOL_OFFSET UNITYSDK_OFFSET(0x19705A60)
#define CHODNEDHGJE_ICGDHEFNEAD_OFFSET UNITYSDK_OFFSET(0x19709A50)
#define CHODNEDHGJE_IDNGKCHMGKL_OFFSET UNITYSDK_OFFSET(0x197069A0)
#define CHODNEDHGJE_IFIKOOBDFAC_OFFSET UNITYSDK_OFFSET(0x1970A5A0)
#define CHODNEDHGJE_IGFCNCKFDAO_OFFSET UNITYSDK_OFFSET(0x19707F70)
#define CHODNEDHGJE_IJNKJKGDPBH_OFFSET UNITYSDK_OFFSET(0x196FE570)
#define CHODNEDHGJE_IMICBJFJNDP_OFFSET UNITYSDK_OFFSET(0x19709CB0)
#define CHODNEDHGJE_IONOPEPPANH_OFFSET UNITYSDK_OFFSET(0x19702550)
#define CHODNEDHGJE_JNGABHEDKAG_OFFSET UNITYSDK_OFFSET(0x19708210)
#define CHODNEDHGJE_KCONONFDJGP_OFFSET UNITYSDK_OFFSET(0x196FD4C0)
#define CHODNEDHGJE_KGNEJKNNODJ_OFFSET UNITYSDK_OFFSET(0x196FDB10)
#define CHODNEDHGJE_KJBNNANCMGP_OFFSET UNITYSDK_OFFSET(0x196FF9A0)
#define CHODNEDHGJE_KLFHAECANFE_OFFSET UNITYSDK_OFFSET(0x196FCFF0)
#define CHODNEDHGJE_KMCOEAPCFBA_OFFSET UNITYSDK_OFFSET(0x197045C0)
#define CHODNEDHGJE_LJFDAEEPKAM_OFFSET UNITYSDK_OFFSET(0x197017A0)
#define CHODNEDHGJE_LKDHABNBLOC_OFFSET UNITYSDK_OFFSET(0x19704210)
#define CHODNEDHGJE_LNCCBBDGBNG_OFFSET UNITYSDK_OFFSET(0x197024F0)
#define CHODNEDHGJE_MBNIBIGMDFM_OFFSET UNITYSDK_OFFSET(0x19707B20)
#define CHODNEDHGJE_MEIPOPKCEBJ_OFFSET UNITYSDK_OFFSET(0x196FDD40)
#define CHODNEDHGJE_MEMGFBNLDPA_OFFSET UNITYSDK_OFFSET(0x1970AA10)
#define CHODNEDHGJE_MHKGDJAKPIG_OFFSET UNITYSDK_OFFSET(0x19702F00)
#define CHODNEDHGJE_MIAAFBPHHEE_OFFSET UNITYSDK_OFFSET(0x19709EA0)
#define CHODNEDHGJE_MIDELGAGCKE_OFFSET UNITYSDK_OFFSET(0x19706B90)
#define CHODNEDHGJE_MIGNODPMJPG_OFFSET UNITYSDK_OFFSET(0x1970B4D0)
#define CHODNEDHGJE_MKJKGNCJEEA_OFFSET UNITYSDK_OFFSET(0x19707450)
#define CHODNEDHGJE_MMBAKCMIKMG_OFFSET UNITYSDK_OFFSET(0x197009F0)
#define CHODNEDHGJE_NANIPKDDEJH_OFFSET UNITYSDK_OFFSET(0x19705F90)
#define CHODNEDHGJE_NGLBJLEHBHD_OFFSET UNITYSDK_OFFSET(0x196FD330)
#define CHODNEDHGJE_NNOMPKIBFGC_OFFSET UNITYSDK_OFFSET(0x19706FD0)
#define CHODNEDHGJE_NOHFNEEAPPG_OFFSET UNITYSDK_OFFSET(0x196FD6A0)
#define CHODNEDHGJE_NPJBGEPIPIA_OFFSET UNITYSDK_OFFSET(0x19700470)
#define CHODNEDHGJE_OCMMKFCJKCD_OFFSET UNITYSDK_OFFSET(0x19701400)
#define CHODNEDHGJE_OEBLOGIOENF_OFFSET UNITYSDK_OFFSET(0x197093B0)
#define CHODNEDHGJE_OELPJIGPBHE_OFFSET UNITYSDK_OFFSET(0x19703F10)
#define CHODNEDHGJE_OFPGLOPHDLO_OFFSET UNITYSDK_OFFSET(0x197061A0)
#define CHODNEDHGJE_OGPGCJKEKBD_OFFSET UNITYSDK_OFFSET(0x1970A630)
#define CHODNEDHGJE_OMDCOMJIIJJ_OFFSET UNITYSDK_OFFSET(0x1970B2C0)
#define CHODNEDHGJE_OMHEPMBMDKL_OFFSET UNITYSDK_OFFSET(0x196FE8C0)
#define CHODNEDHGJE_ONNNPECCOCH_OFFSET UNITYSDK_OFFSET(0x197028E0)
#define CHODNEDHGJE_OOBGBFIBFMO_OFFSET UNITYSDK_OFFSET(0x19709160)
#define CHODNEDHGJE_PJKEDGBCLGB_OFFSET UNITYSDK_OFFSET(0x196FFA90)
#define CHODNEDHGJE_PPIHJNPMMNI_OFFSET UNITYSDK_OFFSET(0x19701C40)
#define CHODNEDHGJE__CCTOR_OFFSET UNITYSDK_OFFSET(0x196FC780)

inline static constexpr unsigned int CHODNEDHGJE_TypeDefinitionIndex = 88591;

class CHODNEDHGJE : public ::System::Object
{
public:
	static ::System::Collections::Generic::List_1<::MoleMole::InLevelPauseLevelTab>** StaticGet_BJIHKFLDCAC()
	{
		return (::System::Collections::Generic::List_1<::MoleMole::InLevelPauseLevelTab>**)Il2CppClass::FromTypeDefinitionIndex(CHODNEDHGJE_TypeDefinitionIndex)->GetStaticField(0x4AC50);
	}
	static ::System::Collections::Generic::Dictionary_2<::MoleMole::LogicButtonInputType, ::MoleMole::Config::InputCodeSetting*>** StaticGet_JLHKGBJDJKK()
	{
		return (::System::Collections::Generic::Dictionary_2<::MoleMole::LogicButtonInputType, ::MoleMole::Config::InputCodeSetting*>**)Il2CppClass::FromTypeDefinitionIndex(CHODNEDHGJE_TypeDefinitionIndex)->GetStaticField(0x4AC58);
	}
	static ::MoleMole::ConfigLazyLoadItem_1<::MoleMole::Config::ConfigSystemSetting*>** StaticGet_LLDPDMPLAKO()
	{
		return (::MoleMole::ConfigLazyLoadItem_1<::MoleMole::Config::ConfigSystemSetting*>**)Il2CppClass::FromTypeDefinitionIndex(CHODNEDHGJE_TypeDefinitionIndex)->GetStaticField(0x4AC60);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::ESettingPlatform>** StaticGet_KKLIFKIOGOE()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::ESettingPlatform>**)Il2CppClass::FromTypeDefinitionIndex(CHODNEDHGJE_TypeDefinitionIndex)->GetStaticField(0x4AC68);
	}
	static ::System::Collections::Generic::Dictionary_2<::MoleMole::ESystemSettingType, ::MoleMole::ConfigLazyLoadItem_1<::MoleMole::Config::ConfigSubSystemSettingBase*>*>** StaticGet_NFHHKLKCNMO()
	{
		return (::System::Collections::Generic::Dictionary_2<::MoleMole::ESystemSettingType, ::MoleMole::ConfigLazyLoadItem_1<::MoleMole::Config::ConfigSubSystemSettingBase*>*>**)Il2CppClass::FromTypeDefinitionIndex(CHODNEDHGJE_TypeDefinitionIndex)->GetStaticField(0x4AC70);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CHODNEDHGJE__CCTOR_OFFSET))();
	}

	static ::System::Boolean EGNJFEEOPMA(::MoleMole::ESettingPlatform BFGGEDPHPKE, ::System::Boolean GGAJNLBAFKK)
	{
		return ((::System::Boolean(*)(::MoleMole::ESettingPlatform, ::System::Boolean))((::PBYTE)hIl2Cpp + CHODNEDHGJE_EGNJFEEOPMA_OFFSET))(BFGGEDPHPKE, GGAJNLBAFKK);
	}

	static ::System::Int32 KLFHAECANFE()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CHODNEDHGJE_KLFHAECANFE_OFFSET))();
	}

	static ::System::Single KCONONFDJGP(::System::Int32 MOBNMDEDJIP)
	{
		return ((::System::Single(*)(::System::Int32))((::PBYTE)hIl2Cpp + CHODNEDHGJE_KCONONFDJGP_OFFSET))(MOBNMDEDJIP);
	}

	static ::System::Int32 NOHFNEEAPPG()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CHODNEDHGJE_NOHFNEEAPPG_OFFSET))();
	}

	static ::System::Collections::Generic::List_1<::MoleMole::ESystemSettingType>* FEJBCKLDEDE()
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::ESystemSettingType>*(*)())((::PBYTE)hIl2Cpp + CHODNEDHGJE_FEJBCKLDEDE_OFFSET))();
	}

	static ::System::Boolean IJNKJKGDPBH(::MoleMole::LogicButtonInputType GLIPLEKODIL)
	{
		return ((::System::Boolean(*)(::MoleMole::LogicButtonInputType))((::PBYTE)hIl2Cpp + CHODNEDHGJE_IJNKJKGDPBH_OFFSET))(GLIPLEKODIL);
	}

	static ::System::Boolean OMHEPMBMDKL(::System::Action* DIOMMCOEAMP)
	{
		return ((::System::Boolean(*)(::System::Action*))((::PBYTE)hIl2Cpp + CHODNEDHGJE_OMHEPMBMDKL_OFFSET))(DIOMMCOEAMP);
	}

	static ::System::Collections::Generic::List_1<::MoleMole::SystemSettingEntryBase*>* AOLPPGNPHKM()
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::SystemSettingEntryBase*>*(*)())((::PBYTE)hIl2Cpp + CHODNEDHGJE_AOLPPGNPHKM_OFFSET))();
	}

	static ::System::Void DHKADMMICEE(::System::Boolean LIOLEKICFIM, ::System::Boolean ELEKPLMKGPF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CHODNEDHGJE_DHKADMMICEE_OFFSET))(LIOLEKICFIM, ELEKPLMKGPF);
	}

	static ::System::Boolean EGFPLGLAKNL(::MoleMole::ESettingPlatform BFGGEDPHPKE, ::System::Boolean GGAJNLBAFKK)
	{
		return ((::System::Boolean(*)(::MoleMole::ESettingPlatform, ::System::Boolean))((::PBYTE)hIl2Cpp + CHODNEDHGJE_EGFPLGLAKNL_OFFSET))(BFGGEDPHPKE, GGAJNLBAFKK);
	}

	static ::System::Int32 KJBNNANCMGP(::MoleMole::LogicButtonInputType GLIPLEKODIL)
	{
		return ((::System::Int32(*)(::MoleMole::LogicButtonInputType))((::PBYTE)hIl2Cpp + CHODNEDHGJE_KJBNNANCMGP_OFFSET))(GLIPLEKODIL);
	}

	static ::System::Int32 AAOFNINMDKH(::MoleMole::LogicButtonInputType GLIPLEKODIL)
	{
		return ((::System::Int32(*)(::MoleMole::LogicButtonInputType))((::PBYTE)hIl2Cpp + CHODNEDHGJE_AAOFNINMDKH_OFFSET))(GLIPLEKODIL);
	}

	static ::System::Collections::Generic::Dictionary_2<::MoleMole::InLevelPauseLevelTab, ::System::Collections::Generic::List_1<::MoleMole::ESystemSettingType>*>* DMJCFDONLKP(::System::Action_1<::System::Collections::Generic::Dictionary_2<::MoleMole::InLevelPauseLevelTab, ::System::Collections::Generic::List_1<::MoleMole::ESystemSettingType>*>*>* AFLGCCCJFMA)
	{
		return ((::System::Collections::Generic::Dictionary_2<::MoleMole::InLevelPauseLevelTab, ::System::Collections::Generic::List_1<::MoleMole::ESystemSettingType>*>*(*)(::System::Action_1<::System::Collections::Generic::Dictionary_2<::MoleMole::InLevelPauseLevelTab, ::System::Collections::Generic::List_1<::MoleMole::ESystemSettingType>*>*>*))((::PBYTE)hIl2Cpp + CHODNEDHGJE_DMJCFDONLKP_OFFSET))(AFLGCCCJFMA);
	}

	static ::System::Int32 NPJBGEPIPIA()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CHODNEDHGJE_NPJBGEPIPIA_OFFSET))();
	}

	static ::MoleMole::Config::ConfigSystemSetting* KGNEJKNNODJ()
	{
		return ((::MoleMole::Config::ConfigSystemSetting*(*)())((::PBYTE)hIl2Cpp + CHODNEDHGJE_KGNEJKNNODJ_OFFSET))();
	}

	static ::System::Boolean BMGGNEFMFNM(::MoleMole::ESettingPlatform BFGGEDPHPKE, ::System::Boolean GGAJNLBAFKK)
	{
		return ((::System::Boolean(*)(::MoleMole::ESettingPlatform, ::System::Boolean))((::PBYTE)hIl2Cpp + CHODNEDHGJE_BMGGNEFMFNM_OFFSET))(BFGGEDPHPKE, GGAJNLBAFKK);
	}

	static ::System::Boolean DHIBDFLPLGB()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CHODNEDHGJE_DHIBDFLPLGB_OFFSET))();
	}

	static ::System::Boolean MMBAKCMIKMG(::FBGGKHIKCPP HMMMOCJAEOA, ::AIOFAMODPOO JGGPPJNIAKN, ::System::Int32 OPDCIPKOLAF, ::System::Int32 EDMNOCPIKIM, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::MoleMole::LogicButtonInputType>*>* MALPKCFNELH, ::System::Collections::Generic::List_1<::FBGGKHIKCPP>*& PIKDJPMCIJK)
	{
		return ((::System::Boolean(*)(::FBGGKHIKCPP, ::AIOFAMODPOO, ::System::Int32, ::System::Int32, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::MoleMole::LogicButtonInputType>*>*, ::System::Collections::Generic::List_1<::FBGGKHIKCPP>*&))((::PBYTE)hIl2Cpp + CHODNEDHGJE_MMBAKCMIKMG_OFFSET))(HMMMOCJAEOA, JGGPPJNIAKN, OPDCIPKOLAF, EDMNOCPIKIM, MALPKCFNELH, PIKDJPMCIJK);
	}

	static ::System::Boolean LJFDAEEPKAM(::MoleMole::Config::ConfigSoundSetting* MGIIPNDNGLG)
	{
		return ((::System::Boolean(*)(::MoleMole::Config::ConfigSoundSetting*))((::PBYTE)hIl2Cpp + CHODNEDHGJE_LJFDAEEPKAM_OFFSET))(MGIIPNDNGLG);
	}

	static ::System::Void AJEMEGEAPEO(::System::Boolean FLJPINEGKHM, ::System::Boolean GBMFLDHDGKO, ::System::Boolean PDDKJHKIFFH)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CHODNEDHGJE_AJEMEGEAPEO_OFFSET))(FLJPINEGKHM, GBMFLDHDGKO, PDDKJHKIFFH);
	}

	static ::System::Void HEBPHEOHINA(::MoleMole::EUILayoutPlatform NCLPPLGFCMO, ::System::Boolean ELEKPLMKGPF)
	{
		return ((::System::Void(*)(::MoleMole::EUILayoutPlatform, ::System::Boolean))((::PBYTE)hIl2Cpp + CHODNEDHGJE_HEBPHEOHINA_OFFSET))(NCLPPLGFCMO, ELEKPLMKGPF);
	}

	static ::Share::ESwitchType LNCCBBDGBNG(::MoleMole::ESystemSettingType KNLHNJJGLBA)
	{
		return ((::Share::ESwitchType(*)(::MoleMole::ESystemSettingType))((::PBYTE)hIl2Cpp + CHODNEDHGJE_LNCCBBDGBNG_OFFSET))(KNLHNJJGLBA);
	}

	static ::System::Boolean IONOPEPPANH(::MoleMole::ESystemSettingType JELHEKJMJNI)
	{
		return ((::System::Boolean(*)(::MoleMole::ESystemSettingType))((::PBYTE)hIl2Cpp + CHODNEDHGJE_IONOPEPPANH_OFFSET))(JELHEKJMJNI);
	}

	static ::System::Boolean HELMAOJFHBL(::MoleMole::ESystemSettingType JELHEKJMJNI)
	{
		return ((::System::Boolean(*)(::MoleMole::ESystemSettingType))((::PBYTE)hIl2Cpp + CHODNEDHGJE_HELMAOJFHBL_OFFSET))(JELHEKJMJNI);
	}

	static ::System::String* ONNNPECCOCH(::UnityEngine::InputSystem::LowLevel::MouseButton FGDHBPIDDDC)
	{
		return ((::System::String*(*)(::UnityEngine::InputSystem::LowLevel::MouseButton))((::PBYTE)hIl2Cpp + CHODNEDHGJE_ONNNPECCOCH_OFFSET))(FGDHBPIDDDC);
	}

	static ::HPBIMDNDPLK OCMMKFCJKCD(::MoleMole::LogicButtonInputType KKKMLLLKPHB, ::AIOFAMODPOO JGGPPJNIAKN)
	{
		return ((::HPBIMDNDPLK(*)(::MoleMole::LogicButtonInputType, ::AIOFAMODPOO))((::PBYTE)hIl2Cpp + CHODNEDHGJE_OCMMKFCJKCD_OFFSET))(KKKMLLLKPHB, JGGPPJNIAKN);
	}

	static ::System::Void DGMLFELCAIO(::System::Single HBFKHANEEND, ::System::Action_1<::System::Single>* JOLIEKHCGDJ, ::System::Action_1<::System::String*>* MGAKJHJAGJI, ::System::String* GDGGMIJHAJJ)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CHODNEDHGJE_DGMLFELCAIO_OFFSET))(HBFKHANEEND, JOLIEKHCGDJ, MGAKJHJAGJI, GDGGMIJHAJJ);
	}

	static ::System::Void MHKGDJAKPIG(::MoleMole::EZenkovPyroisBlinkHoldInputType OFHEMEAHKFH)
	{
		return ((::System::Void(*)(::MoleMole::EZenkovPyroisBlinkHoldInputType))((::PBYTE)hIl2Cpp + CHODNEDHGJE_MHKGDJAKPIG_OFFSET))(OFHEMEAHKFH);
	}

	static ::System::Boolean GALBEFIFFMP(::AIOFAMODPOO CFFNHIPJEJO, ::HPBIMDNDPLK LPIHAHMNBIG)
	{
		return ((::System::Boolean(*)(::AIOFAMODPOO, ::HPBIMDNDPLK))((::PBYTE)hIl2Cpp + CHODNEDHGJE_GALBEFIFFMP_OFFSET))(CFFNHIPJEJO, LPIHAHMNBIG);
	}

	static ::MoleMole::Config::InputActionTextIconConfig* BBKMMNMGADA()
	{
		return ((::MoleMole::Config::InputActionTextIconConfig*(*)())((::PBYTE)hIl2Cpp + CHODNEDHGJE_BBKMMNMGADA_OFFSET))();
	}

	static ::System::Boolean CNGNGPDNNFM(::System::Action* DIOMMCOEAMP)
	{
		return ((::System::Boolean(*)(::System::Action*))((::PBYTE)hIl2Cpp + CHODNEDHGJE_CNGNGPDNNFM_OFFSET))(DIOMMCOEAMP);
	}

	static ::System::Int32 EJNHGEPDBAG(::MoleMole::LogicButtonInputType GLIPLEKODIL)
	{
		return ((::System::Int32(*)(::MoleMole::LogicButtonInputType))((::PBYTE)hIl2Cpp + CHODNEDHGJE_EJNHGEPDBAG_OFFSET))(GLIPLEKODIL);
	}

	static ::System::Void DMHJFKDJEOD(::System::Single AOEKHHICKFN)
	{
		return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + CHODNEDHGJE_DMHJFKDJEOD_OFFSET))(AOEKHHICKFN);
	}

	static ::System::Boolean ABNLJBEDBOM(::MoleMole::ESystemSettingType JELHEKJMJNI, ::MoleMole::ESettingPlatform GDLOCGDAJGL)
	{
		return ((::System::Boolean(*)(::MoleMole::ESystemSettingType, ::MoleMole::ESettingPlatform))((::PBYTE)hIl2Cpp + CHODNEDHGJE_ABNLJBEDBOM_OFFSET))(JELHEKJMJNI, GDLOCGDAJGL);
	}

	static ::System::Boolean FCMNCOPGOJG(::MoleMole::ESettingPlatform BFGGEDPHPKE, ::System::Boolean GGAJNLBAFKK)
	{
		return ((::System::Boolean(*)(::MoleMole::ESettingPlatform, ::System::Boolean))((::PBYTE)hIl2Cpp + CHODNEDHGJE_FCMNCOPGOJG_OFFSET))(BFGGEDPHPKE, GGAJNLBAFKK);
	}

	static ::System::Void OELPJIGPBHE(::System::Int32 OJFJIAPJBNH)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CHODNEDHGJE_OELPJIGPBHE_OFFSET))(OJFJIAPJBNH);
	}

	static ::System::Void LKDHABNBLOC(::System::Boolean EBAJLMBGMFE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CHODNEDHGJE_LKDHABNBLOC_OFFSET))(EBAJLMBGMFE, IBNICCGMILF);
	}

	static ::System::Collections::Generic::List_1<::MoleMole::ESystemSettingType>* NANIPKDDEJH()
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::ESystemSettingType>*(*)())((::PBYTE)hIl2Cpp + CHODNEDHGJE_NANIPKDDEJH_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::MoleMole::ESystemSettingType, ::System::Collections::Generic::List_1<::MoleMole::SystemSettingEntryBase*>*>* OFPGLOPHDLO()
	{
		return ((::System::Collections::Generic::Dictionary_2<::MoleMole::ESystemSettingType, ::System::Collections::Generic::List_1<::MoleMole::SystemSettingEntryBase*>*>*(*)())((::PBYTE)hIl2Cpp + CHODNEDHGJE_OFPGLOPHDLO_OFFSET))();
	}

	static ::MoleMole::ESystemSettingType EAIEDMKIJOF(::MoleMole::ESystemSettingType INAFMBDBJJD)
	{
		return ((::MoleMole::ESystemSettingType(*)(::MoleMole::ESystemSettingType))((::PBYTE)hIl2Cpp + CHODNEDHGJE_EAIEDMKIJOF_OFFSET))(INAFMBDBJJD);
	}

	static ::System::Single IDNGKCHMGKL(::System::Int32 MCOHLHMKLIP)
	{
		return ((::System::Single(*)(::System::Int32))((::PBYTE)hIl2Cpp + CHODNEDHGJE_IDNGKCHMGKL_OFFSET))(MCOHLHMKLIP);
	}

	static ::System::Void MIDELGAGCKE(::System::Boolean HMFEKIJNLNH, ::System::Boolean ELEKPLMKGPF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CHODNEDHGJE_MIDELGAGCKE_OFFSET))(HMFEKIJNLNH, ELEKPLMKGPF);
	}

	static ::System::Boolean ADHEAFBLHFE(::MoleMole::ESettingPlatform BFGGEDPHPKE, ::System::Boolean GGAJNLBAFKK)
	{
		return ((::System::Boolean(*)(::MoleMole::ESettingPlatform, ::System::Boolean))((::PBYTE)hIl2Cpp + CHODNEDHGJE_ADHEAFBLHFE_OFFSET))(BFGGEDPHPKE, GGAJNLBAFKK);
	}

	static ::System::Boolean HEEDCPLDBHM(::MoleMole::LogicButtonInputType GLIPLEKODIL)
	{
		return ((::System::Boolean(*)(::MoleMole::LogicButtonInputType))((::PBYTE)hIl2Cpp + CHODNEDHGJE_HEEDCPLDBHM_OFFSET))(GLIPLEKODIL);
	}

	static ::System::String* PPIHJNPMMNI()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + CHODNEDHGJE_PPIHJNPMMNI_OFFSET))();
	}

	static ::System::Int32 NGLBJLEHBHD()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CHODNEDHGJE_NGLBJLEHBHD_OFFSET))();
	}

	static ::System::String* NNOMPKIBFGC(::MoleMole::SpecialGamepadInputHintType AILNGKFDMFI, ::HAKNEAAKAMD JOEHADMEMNA)
	{
		return ((::System::String*(*)(::MoleMole::SpecialGamepadInputHintType, ::HAKNEAAKAMD))((::PBYTE)hIl2Cpp + CHODNEDHGJE_NNOMPKIBFGC_OFFSET))(AILNGKFDMFI, JOEHADMEMNA);
	}

	static ::System::Collections::Generic::Dictionary_2<::MoleMole::LogicButtonInputType, ::MoleMole::Config::InputCodeSetting*>* CCGFPFJGALF()
	{
		return ((::System::Collections::Generic::Dictionary_2<::MoleMole::LogicButtonInputType, ::MoleMole::Config::InputCodeSetting*>*(*)())((::PBYTE)hIl2Cpp + CHODNEDHGJE_CCGFPFJGALF_OFFSET))();
	}

	static ::System::Boolean MKJKGNCJEEA()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CHODNEDHGJE_MKJKGNCJEEA_OFFSET))();
	}

	static ::System::Void EMDIDJCJGLP(::MoleMole::PCSuperResolutionType CLGFKHNFHKB)
	{
		return ((::System::Void(*)(::MoleMole::PCSuperResolutionType))((::PBYTE)hIl2Cpp + CHODNEDHGJE_EMDIDJCJGLP_OFFSET))(CLGFKHNFHKB);
	}

	static ::System::Int32 HJDOIGNJJEA()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CHODNEDHGJE_HJDOIGNJJEA_OFFSET))();
	}

	static ::System::String* MBNIBIGMDFM(::UnityEngine::InputSystem::Key FGDHBPIDDDC)
	{
		return ((::System::String*(*)(::UnityEngine::InputSystem::Key))((::PBYTE)hIl2Cpp + CHODNEDHGJE_MBNIBIGMDFM_OFFSET))(FGDHBPIDDDC);
	}

	static ::System::Boolean IGFCNCKFDAO()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CHODNEDHGJE_IGFCNCKFDAO_OFFSET))();
	}

	static ::System::Void JNGABHEDKAG(::System::Int32 OJFJIAPJBNH)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CHODNEDHGJE_JNGABHEDKAG_OFFSET))(OJFJIAPJBNH);
	}

	static ::System::Int32 GCHDGBADBIL()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CHODNEDHGJE_GCHDGBADBIL_OFFSET))();
	}

	static ::System::String* FDBIBJLDIGD(::UnityEngine::InputSystem::LowLevel::GamepadButton FGDHBPIDDDC, ::HAKNEAAKAMD JOEHADMEMNA)
	{
		return ((::System::String*(*)(::UnityEngine::InputSystem::LowLevel::GamepadButton, ::HAKNEAAKAMD))((::PBYTE)hIl2Cpp + CHODNEDHGJE_FDBIBJLDIGD_OFFSET))(FGDHBPIDDDC, JOEHADMEMNA);
	}

	static ::System::Boolean MEIPOPKCEBJ(::MoleMole::ESystemSettingType JELHEKJMJNI, ::System::Boolean MOGHFKPGCDH)
	{
		return ((::System::Boolean(*)(::MoleMole::ESystemSettingType, ::System::Boolean))((::PBYTE)hIl2Cpp + CHODNEDHGJE_MEIPOPKCEBJ_OFFSET))(JELHEKJMJNI, MOGHFKPGCDH);
	}

	static ::System::Boolean HEGFGAICKGN(::MoleMole::ESettingPlatform BFGGEDPHPKE, ::System::Boolean GGAJNLBAFKK)
	{
		return ((::System::Boolean(*)(::MoleMole::ESettingPlatform, ::System::Boolean))((::PBYTE)hIl2Cpp + CHODNEDHGJE_HEGFGAICKGN_OFFSET))(BFGGEDPHPKE, GGAJNLBAFKK);
	}

	static ::System::Collections::Generic::List_1<::MoleMole::SystemSettingEntryBase*>* HBNLKJKEHCK(::MoleMole::ESystemSettingType KNLHNJJGLBA)
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::SystemSettingEntryBase*>*(*)(::MoleMole::ESystemSettingType))((::PBYTE)hIl2Cpp + CHODNEDHGJE_HBNLKJKEHCK_OFFSET))(KNLHNJJGLBA);
	}

	static ::System::Void HIIIEFEBNGK(::System::Action* DIOMMCOEAMP)
	{
		return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + CHODNEDHGJE_HIIIEFEBNGK_OFFSET))(DIOMMCOEAMP);
	}

	static ::System::Void AMBKJMOJOPJ(::MoleMole::EZenkovConsoleInteractInputMode CIOKPDGAOAH)
	{
		return ((::System::Void(*)(::MoleMole::EZenkovConsoleInteractInputMode))((::PBYTE)hIl2Cpp + CHODNEDHGJE_AMBKJMOJOPJ_OFFSET))(CIOKPDGAOAH);
	}

	static ::System::String* OOBGBFIBFMO(::HPBIMDNDPLK LPIHAHMNBIG)
	{
		return ((::System::String*(*)(::HPBIMDNDPLK))((::PBYTE)hIl2Cpp + CHODNEDHGJE_OOBGBFIBFMO_OFFSET))(LPIHAHMNBIG);
	}

	static ::System::Boolean HGJICGHKBMA(::MoleMole::ESettingPlatform BFGGEDPHPKE, ::System::Boolean GGAJNLBAFKK)
	{
		return ((::System::Boolean(*)(::MoleMole::ESettingPlatform, ::System::Boolean))((::PBYTE)hIl2Cpp + CHODNEDHGJE_HGJICGHKBMA_OFFSET))(BFGGEDPHPKE, GGAJNLBAFKK);
	}

	static ::System::Boolean FNINLKJCMBB(::MoleMole::ESettingPlatform BFGGEDPHPKE, ::System::Boolean GGAJNLBAFKK)
	{
		return ((::System::Boolean(*)(::MoleMole::ESettingPlatform, ::System::Boolean))((::PBYTE)hIl2Cpp + CHODNEDHGJE_FNINLKJCMBB_OFFSET))(BFGGEDPHPKE, GGAJNLBAFKK);
	}

	static ::System::Void CPDFCDONECK(::System::Boolean EBAJLMBGMFE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CHODNEDHGJE_CPDFCDONECK_OFFSET))(EBAJLMBGMFE, IBNICCGMILF);
	}

	static ::System::Void HJOBAJHKBOL(::MoleMole::Config::ConfigInputSetting* MIGKFEIANKM)
	{
		return ((::System::Void(*)(::MoleMole::Config::ConfigInputSetting*))((::PBYTE)hIl2Cpp + CHODNEDHGJE_HJOBAJHKBOL_OFFSET))(MIGKFEIANKM);
	}

	static ::System::Int32 BJCGBILFFLG()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CHODNEDHGJE_BJCGBILFFLG_OFFSET))();
	}

	static ::System::Int32 OEBLOGIOENF(::MoleMole::Config::ConfigSoundSetting* MGIIPNDNGLG)
	{
		return ((::System::Int32(*)(::MoleMole::Config::ConfigSoundSetting*))((::PBYTE)hIl2Cpp + CHODNEDHGJE_OEBLOGIOENF_OFFSET))(MGIIPNDNGLG);
	}

	static ::System::Boolean ICGDHEFNEAD(::MoleMole::ESystemSettingType JELHEKJMJNI)
	{
		return ((::System::Boolean(*)(::MoleMole::ESystemSettingType))((::PBYTE)hIl2Cpp + CHODNEDHGJE_ICGDHEFNEAD_OFFSET))(JELHEKJMJNI);
	}

	static ::System::Void DNOLPEHABMN(::System::Boolean FLJPINEGKHM, ::System::Action* EJGDHCIBCJH, ::System::Action* NKGCDDCMBCF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + CHODNEDHGJE_DNOLPEHABMN_OFFSET))(FLJPINEGKHM, EJGDHCIBCJH, NKGCDDCMBCF);
	}

	static ::System::Int32 GHDPEGCFAMM()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CHODNEDHGJE_GHDPEGCFAMM_OFFSET))();
	}

	static ::System::Single IMICBJFJNDP(::System::Int32 MOBNMDEDJIP)
	{
		return ((::System::Single(*)(::System::Int32))((::PBYTE)hIl2Cpp + CHODNEDHGJE_IMICBJFJNDP_OFFSET))(MOBNMDEDJIP);
	}

	static ::System::Void MIAAFBPHHEE(::MoleMole::LogicButtonInputType KKKMLLLKPHB, ::HPBIMDNDPLK LPIHAHMNBIG, ::AIOFAMODPOO JGGPPJNIAKN, ::System::Int32 CGEOMPGDEKI, ::System::Int32 NAIOJPENPBM, ::System::Collections::Generic::List_1<::FBGGKHIKCPP>*& PIKDJPMCIJK)
	{
		return ((::System::Void(*)(::MoleMole::LogicButtonInputType, ::HPBIMDNDPLK, ::AIOFAMODPOO, ::System::Int32, ::System::Int32, ::System::Collections::Generic::List_1<::FBGGKHIKCPP>*&))((::PBYTE)hIl2Cpp + CHODNEDHGJE_MIAAFBPHHEE_OFFSET))(KKKMLLLKPHB, LPIHAHMNBIG, JGGPPJNIAKN, CGEOMPGDEKI, NAIOJPENPBM, PIKDJPMCIJK);
	}

	static ::System::Boolean EANDGCCMAIE(::MoleMole::ESystemSettingType JELHEKJMJNI, ::System::Boolean MLKALDBOGII)
	{
		return ((::System::Boolean(*)(::MoleMole::ESystemSettingType, ::System::Boolean))((::PBYTE)hIl2Cpp + CHODNEDHGJE_EANDGCCMAIE_OFFSET))(JELHEKJMJNI, MLKALDBOGII);
	}

	static ::System::Void IFIKOOBDFAC(::System::Boolean GOHGOJJFMBF)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CHODNEDHGJE_IFIKOOBDFAC_OFFSET))(GOHGOJJFMBF);
	}

	static ::System::Int32 MEMGFBNLDPA()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CHODNEDHGJE_MEMGFBNLDPA_OFFSET))();
	}

	static ::System::String* FKCPDCKLOBB(::UnityEngine::InputSystem::Key FGDHBPIDDDC)
	{
		return ((::System::String*(*)(::UnityEngine::InputSystem::Key))((::PBYTE)hIl2Cpp + CHODNEDHGJE_FKCPDCKLOBB_OFFSET))(FGDHBPIDDDC);
	}

	static ::System::Int32 BOGJIKJFMCF()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CHODNEDHGJE_BOGJIKJFMCF_OFFSET))();
	}

	static ::System::Void KMCOEAPCFBA()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CHODNEDHGJE_KMCOEAPCFBA_OFFSET))();
	}

	static ::MoleMole::ESettingPlatform FEBOJKMBGKI(::System::Boolean GGAJNLBAFKK)
	{
		return ((::MoleMole::ESettingPlatform(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CHODNEDHGJE_FEBOJKMBGKI_OFFSET))(GGAJNLBAFKK);
	}

	static ::System::Collections::Generic::List_1<::MoleMole::ESystemSettingType>* OMDCOMJIIJJ()
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::ESystemSettingType>*(*)())((::PBYTE)hIl2Cpp + CHODNEDHGJE_OMDCOMJIIJJ_OFFSET))();
	}

	static ::System::Void MIGNODPMJPG(::System::Int32 OJFJIAPJBNH)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CHODNEDHGJE_MIGNODPMJPG_OFFSET))(OJFJIAPJBNH);
	}

	static ::System::Boolean DBBFKEIGOJC()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CHODNEDHGJE_DBBFKEIGOJC_OFFSET))();
	}

	static ::System::Single GBIGJFOBGOE(::System::Int32 MCOHLHMKLIP)
	{
		return ((::System::Single(*)(::System::Int32))((::PBYTE)hIl2Cpp + CHODNEDHGJE_GBIGJFOBGOE_OFFSET))(MCOHLHMKLIP);
	}

	static ::System::Void AFCLCNIPCOO(::System::Action* DIOMMCOEAMP)
	{
		return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + CHODNEDHGJE_AFCLCNIPCOO_OFFSET))(DIOMMCOEAMP);
	}

	static ::System::Void OGPGCJKEKBD(::System::Int32 IDDKHAKLPOH, ::System::Int32 IFDBOLFKMII, ::System::Boolean GOHGOJJFMBF)
	{
		return ((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CHODNEDHGJE_OGPGCJKEKBD_OFFSET))(IDDKHAKLPOH, IFDBOLFKMII, GOHGOJJFMBF);
	}

	static ::System::Boolean PJKEDGBCLGB(::MoleMole::LogicButtonInputType GLIPLEKODIL)
	{
		return ((::System::Boolean(*)(::MoleMole::LogicButtonInputType))((::PBYTE)hIl2Cpp + CHODNEDHGJE_PJKEDGBCLGB_OFFSET))(GLIPLEKODIL);
	}

	static ::System::Int32 CPHCLPKDEAI(::MoleMole::Config::ConfigSoundSetting* MGIIPNDNGLG)
	{
		return ((::System::Int32(*)(::MoleMole::Config::ConfigSoundSetting*))((::PBYTE)hIl2Cpp + CHODNEDHGJE_CPHCLPKDEAI_OFFSET))(MGIIPNDNGLG);
	}
};
