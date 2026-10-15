#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PEPNFLNCDHG_BlinkEnableSource.h"
#include "unitysdk/PEPNFLNCDHG_EmoEnableSource.h"
#include "unitysdk/RPG/GameCore/EmotionType.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/RPG/Client/Emo2DAtlasConfig.h"
class EONKJJEBGLN;
namespace RPG::Client { class CharacterTalkEmotion; }
namespace RPG::Client { class EmoPlayableGraphConfig; }
namespace RPG::Client { class MockAnimator; }
namespace RPG::Client { class MonoEmo2DAtlas; }
namespace RPG::Client { class MonoEmoAnimBlinkLayerController; }
namespace RPG::Client { class MonoEmoAnimMouthShapeLayerController; }
namespace RPG::Client { class MonoEmoBlendShapesController; }
namespace RPG::Client { class MonoEmoNpcEyeController; }
namespace RPG::Client { class MonoEmoPlayableGraph; }
namespace RPG::Client { class TalkEmotionData; }
namespace RPG::GameCore { class CharacterEmoConfig; }
namespace RPG::GameCore { class CharacterEmoContextConfig; }
namespace RPG::GameCore { class CharacterModelComponent; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Coroutine; }
namespace UnityEngine { class SkinnedMeshRenderer; }

#define PEPNFLNCDHG_AAHFKBJBLOG_OFFSET UNITYSDK_OFFSET(0xC1FD950)
#define PEPNFLNCDHG_ABJGGHBPLDH_OFFSET UNITYSDK_OFFSET(0xC1F9A70)
#define PEPNFLNCDHG_AFFAGACNGCK_OFFSET UNITYSDK_OFFSET(0xC1F98E0)
#define PEPNFLNCDHG_AGEEOFENFMP_OFFSET UNITYSDK_OFFSET(0xC1FE6E0)
#define PEPNFLNCDHG_AIELAJAJMCN_OFFSET UNITYSDK_OFFSET(0xC1FDAE0)
#define PEPNFLNCDHG_AJILHEKDBPI_OFFSET UNITYSDK_OFFSET(0xC1FD650)
#define PEPNFLNCDHG_ALAKFANPCMN_OFFSET UNITYSDK_OFFSET(0xC1FDA80)
#define PEPNFLNCDHG_APNEPBLGJKF_OFFSET UNITYSDK_OFFSET(0xC1FAEE0)
#define PEPNFLNCDHG_BDIIADDGLBO_OFFSET UNITYSDK_OFFSET(0xC1FE110)
#define PEPNFLNCDHG_BFLLMALNMLL_OFFSET UNITYSDK_OFFSET(0xC1FFB70)
#define PEPNFLNCDHG_BKIBMIAJMJH_OFFSET UNITYSDK_OFFSET(0xC200050)
#define PEPNFLNCDHG_BOMHOFPKPFO_OFFSET UNITYSDK_OFFSET(0xC1FDDE0)
#define PEPNFLNCDHG_BPBHOMJBFHG_OFFSET UNITYSDK_OFFSET(0xC1FF7C0)
#define PEPNFLNCDHG_CBBLKCEPBDN_OFFSET UNITYSDK_OFFSET(0xC1FE1C0)
#define PEPNFLNCDHG_CCTOR_OFFSET UNITYSDK_OFFSET(0xC200060)
#define PEPNFLNCDHG_CDGLHAEIMLH_OFFSET UNITYSDK_OFFSET(0xC1FDAC0)
#define PEPNFLNCDHG_CFMAHIAOMCB_OFFSET UNITYSDK_OFFSET(0xC1FD5E0)
#define PEPNFLNCDHG_CGEIEDONAGM_OFFSET UNITYSDK_OFFSET(0xC1FE3C0)
#define PEPNFLNCDHG_CGOMIFCKAGA_OFFSET UNITYSDK_OFFSET(0xC1FB690)
#define PEPNFLNCDHG_CHBNPAPFGEB_OFFSET UNITYSDK_OFFSET(0xC1FDC50)
#define PEPNFLNCDHG_CIHMMOKKFHM_OFFSET UNITYSDK_OFFSET(0xC1FBDD0)
#define PEPNFLNCDHG_CKFBOOALPFO_OFFSET UNITYSDK_OFFSET(0xC1FE5C0)
#define PEPNFLNCDHG_CKMIFOAPOAD_OFFSET UNITYSDK_OFFSET(0xC1FB070)
#define PEPNFLNCDHG_CLMFPGIKBFP_OFFSET UNITYSDK_OFFSET(0xC1FAF40)
#define PEPNFLNCDHG_CTOR_OFFSET UNITYSDK_OFFSET(0xC1FE700)
#define PEPNFLNCDHG_DACNGFAILDK_OFFSET UNITYSDK_OFFSET(0xC1FEA00)
#define PEPNFLNCDHG_DEMLBOHECBO_OFFSET UNITYSDK_OFFSET(0xC1FFDC0)
#define PEPNFLNCDHG_DFCJMDHKJIK_OFFSET UNITYSDK_OFFSET(0xC1FADB0)
#define PEPNFLNCDHG_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC1FE9A0)
#define PEPNFLNCDHG_DKCFOCLNCGG_OFFSET UNITYSDK_OFFSET(0xC1FC1B0)
#define PEPNFLNCDHG_EAOBGIEKJJA_OFFSET UNITYSDK_OFFSET(0xC1FE530)
#define PEPNFLNCDHG_EBALFIPNLNC_OFFSET UNITYSDK_OFFSET(0xC1FF450)
#define PEPNFLNCDHG_EGIHFOANELB_OFFSET UNITYSDK_OFFSET(0xC1FDAD0)
#define PEPNFLNCDHG_EHHACAFFMNP_OFFSET UNITYSDK_OFFSET(0xC1FDBC0)
#define PEPNFLNCDHG_EJEEEKFOOOK_OFFSET UNITYSDK_OFFSET(0xC1FB390)
#define PEPNFLNCDHG_EKFOEMGPLIG_OFFSET UNITYSDK_OFFSET(0xC1FF8E0)
#define PEPNFLNCDHG_EMFIGLCNJIP_OFFSET UNITYSDK_OFFSET(0xC1FB840)
#define PEPNFLNCDHG_EOFLECCEFLF_OFFSET UNITYSDK_OFFSET(0xC1FD8B0)
#define PEPNFLNCDHG_FAONKDHLEMP_OFFSET UNITYSDK_OFFSET(0xC1FDA00)
#define PEPNFLNCDHG_FIABLKFJCBF_OFFSET UNITYSDK_OFFSET(0xC1FE8C0)
#define PEPNFLNCDHG_FJCADIEDFNM_OFFSET UNITYSDK_OFFSET(0xC1F9890)
#define PEPNFLNCDHG_GCOHLBKEIEE_OFFSET UNITYSDK_OFFSET(0xC1FD070)
#define PEPNFLNCDHG_GNKBMOIOFFC_OFFSET UNITYSDK_OFFSET(0xC1FF000)
#define PEPNFLNCDHG_HBAMHLKDLHF_OFFSET UNITYSDK_OFFSET(0xC1FC850)
#define PEPNFLNCDHG_HBOGMHPICJF_OFFSET UNITYSDK_OFFSET(0xC1FC080)
#define PEPNFLNCDHG_HFEPFFCLBMI_OFFSET UNITYSDK_OFFSET(0xC1FDF50)
#define PEPNFLNCDHG_HKLMOLNJJOE_OFFSET UNITYSDK_OFFSET(0xC1FF930)
#define PEPNFLNCDHG_HNFHGGINBHF_OFFSET UNITYSDK_OFFSET(0xC1FD560)
#define PEPNFLNCDHG_HODEJMOCFPP_OFFSET UNITYSDK_OFFSET(0xC1FD6F0)
#define PEPNFLNCDHG_HOPDIHFEIAI_OFFSET UNITYSDK_OFFSET(0xC1FBA20)
#define PEPNFLNCDHG_HPDGJJIODFO_OFFSET UNITYSDK_OFFSET(0xC1FA2F0)
#define PEPNFLNCDHG_IAMNOJACOIK_OFFSET UNITYSDK_OFFSET(0xC1FDE40)
#define PEPNFLNCDHG_IFHJANMDCMM_OFFSET UNITYSDK_OFFSET(0xC1FCC00)
#define PEPNFLNCDHG_IFMNMKALKJF_OFFSET UNITYSDK_OFFSET(0xC1FDD00)
#define PEPNFLNCDHG_IIELBMGDKJE_OFFSET UNITYSDK_OFFSET(0xC1FE240)
#define PEPNFLNCDHG_IJAKFNAFPCM_OFFSET UNITYSDK_OFFSET(0xC1FCAB0)
#define PEPNFLNCDHG_ILJLEALIGLB_OFFSET UNITYSDK_OFFSET(0xC1FE6F0)
#define PEPNFLNCDHG_IPPLMJMOEPF_OFFSET UNITYSDK_OFFSET(0xC1FCFB0)
#define PEPNFLNCDHG_JCIEPKNHBDG_OFFSET UNITYSDK_OFFSET(0xC1F9EC0)
#define PEPNFLNCDHG_JDINKILGBEN_OFFSET UNITYSDK_OFFSET(0xC1FE2C0)
#define PEPNFLNCDHG_JEIGDAHOFGJ_OFFSET UNITYSDK_OFFSET(0xC1FA730)
#define PEPNFLNCDHG_JHDMCDCFDDP_OFFSET UNITYSDK_OFFSET(0xC1FEF60)
#define PEPNFLNCDHG_JHKMHDIIMDL_OFFSET UNITYSDK_OFFSET(0xC1FF980)
#define PEPNFLNCDHG_KCLOEBEJBHD_OFFSET UNITYSDK_OFFSET(0xC1FB020)
#define PEPNFLNCDHG_KHEFBDHAFPD_OFFSET UNITYSDK_OFFSET(0xC1FFFD0)
#define PEPNFLNCDHG_KIHJMCJDEPE_OFFSET UNITYSDK_OFFSET(0xC1F9B60)
#define PEPNFLNCDHG_KJBJLAIEPBI_OFFSET UNITYSDK_OFFSET(0xC1FA780)
#define PEPNFLNCDHG_KLMLLECMEKA_OFFSET UNITYSDK_OFFSET(0xC1FA0E0)
#define PEPNFLNCDHG_LDELPJEIMKG_OFFSET UNITYSDK_OFFSET(0xC1FB7E0)
#define PEPNFLNCDHG_LDKDNOHOEKN_OFFSET UNITYSDK_OFFSET(0xC1FA130)
#define PEPNFLNCDHG_LGPLHCGEBLM_OFFSET UNITYSDK_OFFSET(0xC1FC5B0)
#define PEPNFLNCDHG_LKMFAHEHCCA_OFFSET UNITYSDK_OFFSET(0xC1FC930)
#define PEPNFLNCDHG_LLNPJMGFFIN_OFFSET UNITYSDK_OFFSET(0xC1FF120)
#define PEPNFLNCDHG_LMCEDCHJKFF_OFFSET UNITYSDK_OFFSET(0xC1FE840)
#define PEPNFLNCDHG_LOGJKFOKEBC_OFFSET UNITYSDK_OFFSET(0xC1F9E50)
#define PEPNFLNCDHG_MBGLCMMIDBH_OFFSET UNITYSDK_OFFSET(0xC1FCC60)
#define PEPNFLNCDHG_MDGOOADENNL_OFFSET UNITYSDK_OFFSET(0xC1FA990)
#define PEPNFLNCDHG_MFIOFOBDLBF_OFFSET UNITYSDK_OFFSET(0xC1FE450)
#define PEPNFLNCDHG_MOBGPCCOHBM_OFFSET UNITYSDK_OFFSET(0xC1FCD70)
#define PEPNFLNCDHG_NBJABDPHAFG_OFFSET UNITYSDK_OFFSET(0xC1FD490)
#define PEPNFLNCDHG_NEFCACGFOIG_OFFSET UNITYSDK_OFFSET(0xC1FB0C0)
#define PEPNFLNCDHG_NKHOLHDIDIC_OFFSET UNITYSDK_OFFSET(0xC1FFD30)
#define PEPNFLNCDHG_NMNLDDMGDAE_OFFSET UNITYSDK_OFFSET(0xC1FB600)
#define PEPNFLNCDHG_OEFFHOAILPE_OFFSET UNITYSDK_OFFSET(0xC1FA500)
#define PEPNFLNCDHG_OJBMJBMDGBA_OFFSET UNITYSDK_OFFSET(0xC1F9B00)
#define PEPNFLNCDHG_OJCOENFILOM_OFFSET UNITYSDK_OFFSET(0xC1FFAB0)
#define PEPNFLNCDHG_OJLMDHMJCHC_OFFSET UNITYSDK_OFFSET(0xC1FA3A0)
#define PEPNFLNCDHG_ONJCKPEHHIJ_OFFSET UNITYSDK_OFFSET(0xC1FE350)
#define PEPNFLNCDHG_ONLLMPLGCDK_OFFSET UNITYSDK_OFFSET(0xC1FB320)
#define PEPNFLNCDHG_ONMODELARTLOADED_OFFSET UNITYSDK_OFFSET(0xC1FEBD0)
#define PEPNFLNCDHG_ONMODELARTUNLOADED_OFFSET UNITYSDK_OFFSET(0xC1FEAE0)
#define PEPNFLNCDHG_OOIBIIENAKI_OFFSET UNITYSDK_OFFSET(0xC1FAE10)
#define PEPNFLNCDHG_PBFDJBPKCLA_OFFSET UNITYSDK_OFFSET(0xC1FEEC0)
#define PEPNFLNCDHG_PCECIHPHEML_OFFSET UNITYSDK_OFFSET(0xC1FCE30)
#define PEPNFLNCDHG_PEEAFIPMCGP_OFFSET UNITYSDK_OFFSET(0xC1FD1F0)
#define PEPNFLNCDHG_PIDDPGGHPKH_OFFSET UNITYSDK_OFFSET(0xC1FFBD0)
#define PEPNFLNCDHG_PLDEEFLBCIP_OFFSET UNITYSDK_OFFSET(0xC1FD810)
#define PEPNFLNCDHG_PMAEEMELMGJ_OFFSET UNITYSDK_OFFSET(0xC1FD750)
#define PEPNFLNCDHG_PNCCGKIFJHK_OFFSET UNITYSDK_OFFSET(0xC1FBC30)
#define PEPNFLNCDHG_TICK_OFFSET UNITYSDK_OFFSET(0xC1FF720)
#define PEPNFLNCDHG__ONINITOWNERREF_OFFSET UNITYSDK_OFFSET(0xC1FE7B0)
#define PEPNFLNCDHG__UNLOADEMOTIONCLIP_B__38_0_OFFSET UNITYSDK_OFFSET(0xC2000A0)

inline static constexpr unsigned int PEPNFLNCDHG_TypeDefinitionIndex = 57243;

	class PEPNFLNCDHG : public ::RPG::GameCore::GameComponentBase
	{
	public:
		::RPG::Client::MonoEmoPlayableGraph* CKJMABDDMIB; // 0x18
		::System::String* OMAKBFDGGMC; // 0x20
		::RPG::Client::MonoEmoAnimMouthShapeLayerController* INEAGHLGLLG; // 0x28
		::UnityEngine::Coroutine* HGHNDMPFPGA; // 0x30
		::RPG::Client::MockAnimator* NAHOHKAHBPK; // 0x38
		::RPG::Client::MonoEmo2DAtlas* ABEHJBKBGMF; // 0x40
		::System::String* LGOJBNILINB; // 0x48
		::RPG::Client::MonoEmoNpcEyeController* EDJNAOGCGOA; // 0x50
		::System::String* EFHABMJADDD; // 0x58
		::UnityEngine::SkinnedMeshRenderer* IMMGMMFDCLE; // 0x60
		::RPG::GameCore::CharacterModelComponent* EHFENKGDGJD; // 0x68
		::RPG::Client::MonoEmoAnimBlinkLayerController* PPGCOMJPCJA; // 0x70
		::RPG::Client::CharacterTalkEmotion* LLBJMGOABGP; // 0x78
		::System::String* OCICNDMCFIE; // 0x80
		::EONKJJEBGLN* NAIALJJNIGG; // 0x88
		::System::String* JFMLIJAIBGF; // 0x90
		::RPG::Client::MonoEmoBlendShapesController* INGMNMOLPAG; // 0x98
		::System::String* KHHMJHDIPGE; // 0xA0
		::EONKJJEBGLN* PEABCBBBHFH; // 0xA8
		::RPG::GameCore::CharacterEmoContextConfig* LEHNNGGDPBP; // 0xB0
		::System::Int32 NAOEMMCBOAJ; // 0xB8
		::System::Int32 EHCEFAKHFFK; // 0xBC
		::System::UInt32 KBNEPLFPAEP; // 0xC0
		::System::Int32 MMFOCIEPJAD; // 0xC4
		::System::Int32 BGNPBAALOJF; // 0xC8
		::RPG::GameCore::EmotionType ACFBPCOAJFM; // 0xCC
		::System::Boolean CFNDFJNBLCF; // 0xD0
		::System::Boolean CMIPLHPLMKK; // 0xD1
		::System::Boolean PNJAAMGCPAL; // 0xD2
		::System::Boolean IFCGBBGIKHD; // 0xD3
		::System::Boolean HGANEDBKKEK; // 0xD4
		::System::Boolean CDLMHJILKLC; // 0xD5
		::System::Boolean CNDEMKKBNDN; // 0xD6
		static ::System::Int32* StaticGet_ABMCNBLDLEH()
		{
			return (::System::Int32*)UnitySDK::FromName("", "PEPNFLNCDHG")->GetStaticField(0x157D0);
		}

		// static const ::System::String* CKPEADONMLA; // 0x0
		// static const ::System::String* ALHANPJAIEP; // 0x0
		// static const ::System::String* AAJBJKNJKIP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEPNFLNCDHG_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PEPNFLNCDHG_CCTOR_OFFSET))();
		}

		::System::Void FJCADIEDFNM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEPNFLNCDHG_FJCADIEDFNM_OFFSET))(this);
		}

		::System::Void AFFAGACNGCK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEPNFLNCDHG_AFFAGACNGCK_OFFSET))(this);
		}

		::System::Void ABJGGHBPLDH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEPNFLNCDHG_ABJGGHBPLDH_OFFSET))(this);
		}

		::System::Void KIHJMCJDEPE(::RPG::Client::Emo2DAtlasConfig a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Emo2DAtlasConfig, ::System::Boolean))((::PBYTE)hIl2Cpp + PEPNFLNCDHG_KIHJMCJDEPE_OFFSET))(this, a1, a2);
		}

		::System::Void LOGJKFOKEBC(::RPG::Client::Emo2DAtlasConfig a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Emo2DAtlasConfig))((::PBYTE)hIl2Cpp + PEPNFLNCDHG_LOGJKFOKEBC_OFFSET))(this, a1);
		}

		::System::Void OJBMJBMDGBA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEPNFLNCDHG_OJBMJBMDGBA_OFFSET))(this);
		}

		::System::Void JCIEPKNHBDG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEPNFLNCDHG_JCIEPKNHBDG_OFFSET))(this);
		}

		::System::Void KLMLLECMEKA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEPNFLNCDHG_KLMLLECMEKA_OFFSET))(this);
		}

		::System::Void LDKDNOHOEKN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PEPNFLNCDHG_LDKDNOHOEKN_OFFSET))(this, a1);
		}

		::System::Void HPDGJJIODFO(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + PEPNFLNCDHG_HPDGJJIODFO_OFFSET))(this, a1, a2);
		}

		::System::Void OJLMDHMJCHC(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PEPNFLNCDHG_OJLMDHMJCHC_OFFSET))(this, a1);
		}

		::System::Void OEFFHOAILPE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEPNFLNCDHG_OEFFHOAILPE_OFFSET))(this);
		}

		::System::Void JEIGDAHOFGJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEPNFLNCDHG_JEIGDAHOFGJ_OFFSET))(this);
		}

		::System::Void KJBJLAIEPBI(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PEPNFLNCDHG_KJBJLAIEPBI_OFFSET))(this, a1);
		}

		::System::Void MDGOOADENNL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEPNFLNCDHG_MDGOOADENNL_OFFSET))(this);
		}

		::System::Void DFCJMDHKJIK(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PEPNFLNCDHG_DFCJMDHKJIK_OFFSET))(this, a1);
		}

		::System::Void OOIBIIENAKI(::System::UInt32 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Single))((::PBYTE)hIl2Cpp + PEPNFLNCDHG_OOIBIIENAKI_OFFSET))(this, a1, a2);
		}

		::System::Void APNEPBLGJKF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEPNFLNCDHG_APNEPBLGJKF_OFFSET))(this);
		}

		::System::Void CLMFPGIKBFP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEPNFLNCDHG_CLMFPGIKBFP_OFFSET))(this);
		}

		::System::Void CKMIFOAPOAD(::RPG::GameCore::CharacterEmoContextConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterEmoContextConfig*))((::PBYTE)hIl2Cpp + PEPNFLNCDHG_CKMIFOAPOAD_OFFSET))(this, a1);
		}

		::System::Void NEFCACGFOIG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEPNFLNCDHG_NEFCACGFOIG_OFFSET))(this);
		}

		::System::Void NMNLDDMGDAE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEPNFLNCDHG_NMNLDDMGDAE_OFFSET))(this);
		}

		::System::Void EMFIGLCNJIP(::PEPNFLNCDHG_EmoEnableSource a1, ::System::Boolean a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::PEPNFLNCDHG_EmoEnableSource, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + PEPNFLNCDHG_EMFIGLCNJIP_OFFSET))(this, a1, a2, a3);
		}

		::System::Void PNCCGKIFJHK(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PEPNFLNCDHG_PNCCGKIFJHK_OFFSET))(this, a1);
		}

		::System::Void HOPDIHFEIAI(::System::Boolean a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + PEPNFLNCDHG_HOPDIHFEIAI_OFFSET))(this, a1, a2);
		}

		::System::Void CIHMMOKKFHM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEPNFLNCDHG_CIHMMOKKFHM_OFFSET))(this);
		}

		::System::Void HBOGMHPICJF(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PEPNFLNCDHG_HBOGMHPICJF_OFFSET))(this, a1);
		}

		::System::Void DKCFOCLNCGG(::System::String* a1, ::System::Single a2, ::System::Boolean a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + PEPNFLNCDHG_DKCFOCLNCGG_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void LKMFAHEHCCA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PEPNFLNCDHG_LKMFAHEHCCA_OFFSET))(this, a1);
		}

		::System::Void EJEEEKFOOOK(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + PEPNFLNCDHG_EJEEEKFOOOK_OFFSET))(this, a1, a2);
		}

		::System::Void LGPLHCGEBLM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEPNFLNCDHG_LGPLHCGEBLM_OFFSET))(this);
		}

		::System::Void MBGLCMMIDBH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEPNFLNCDHG_MBGLCMMIDBH_OFFSET))(this);
		}

		::System::Void LDELPJEIMKG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEPNFLNCDHG_LDELPJEIMKG_OFFSET))(this);
		}

		::System::Void MOBGPCCOHBM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEPNFLNCDHG_MOBGPCCOHBM_OFFSET))(this);
		}

		::System::Void IJAKFNAFPCM(::RPG::GameCore::CharacterEmoConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterEmoConfig*))((::PBYTE)hIl2Cpp + PEPNFLNCDHG_IJAKFNAFPCM_OFFSET))(this, a1);
		}

		::System::Void CGOMIFCKAGA(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PEPNFLNCDHG_CGOMIFCKAGA_OFFSET))(this, a1);
		}

		::System::Void HBAMHLKDLHF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEPNFLNCDHG_HBAMHLKDLHF_OFFSET))(this);
		}

		::System::Void KCLOEBEJBHD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEPNFLNCDHG_KCLOEBEJBHD_OFFSET))(this);
		}

		::System::Void PCECIHPHEML()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEPNFLNCDHG_PCECIHPHEML_OFFSET))(this);
		}

		::System::Void IPPLMJMOEPF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEPNFLNCDHG_IPPLMJMOEPF_OFFSET))(this);
		}

		::System::Boolean ONLLMPLGCDK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PEPNFLNCDHG_ONLLMPLGCDK_OFFSET))(this);
		}

		::System::Void GCOHLBKEIEE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEPNFLNCDHG_GCOHLBKEIEE_OFFSET))(this);
		}

		::System::Void NBJABDPHAFG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEPNFLNCDHG_NBJABDPHAFG_OFFSET))(this);
		}

		::System::Void HNFHGGINBHF(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PEPNFLNCDHG_HNFHGGINBHF_OFFSET))(this, a1);
		}

		::System::Void CFMAHIAOMCB(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + PEPNFLNCDHG_CFMAHIAOMCB_OFFSET))(this, a1, a2);
		}

		::System::Void HODEJMOCFPP(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PEPNFLNCDHG_HODEJMOCFPP_OFFSET))(this, a1);
		}

		::System::Void AJILHEKDBPI(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + PEPNFLNCDHG_AJILHEKDBPI_OFFSET))(this, a1, a2);
		}

		::System::Void PMAEEMELMGJ(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PEPNFLNCDHG_PMAEEMELMGJ_OFFSET))(this, a1);
		}

		::System::Void PLDEEFLBCIP(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PEPNFLNCDHG_PLDEEFLBCIP_OFFSET))(this, a1);
		}

		::System::Void EOFLECCEFLF(::System::UInt32 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Single))((::PBYTE)hIl2Cpp + PEPNFLNCDHG_EOFLECCEFLF_OFFSET))(this, a1, a2);
		}

		::System::Void AAHFKBJBLOG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEPNFLNCDHG_AAHFKBJBLOG_OFFSET))(this);
		}

		::System::Void FAONKDHLEMP(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PEPNFLNCDHG_FAONKDHLEMP_OFFSET))(this, a1);
		}

		::RPG::Client::MonoEmoNpcEyeController* ALAKFANPCMN()
		{
			return ((::RPG::Client::MonoEmoNpcEyeController*(*)(::PVOID))((::PBYTE)hIl2Cpp + PEPNFLNCDHG_ALAKFANPCMN_OFFSET))(this);
		}

		::RPG::Client::MonoEmoNpcEyeController* PEEAFIPMCGP()
		{
			return ((::RPG::Client::MonoEmoNpcEyeController*(*)(::PVOID))((::PBYTE)hIl2Cpp + PEPNFLNCDHG_PEEAFIPMCGP_OFFSET))(this);
		}

		::System::String* CDGLHAEIMLH()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PEPNFLNCDHG_CDGLHAEIMLH_OFFSET))(this);
		}

		::System::Boolean EGIHFOANELB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PEPNFLNCDHG_EGIHFOANELB_OFFSET))(this);
		}

		::System::Void AIELAJAJMCN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEPNFLNCDHG_AIELAJAJMCN_OFFSET))(this);
		}

		::System::Void IFMNMKALKJF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEPNFLNCDHG_IFMNMKALKJF_OFFSET))(this);
		}

		::System::Void IAMNOJACOIK(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PEPNFLNCDHG_IAMNOJACOIK_OFFSET))(this, a1);
		}

		::System::Void HFEPFFCLBMI(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PEPNFLNCDHG_HFEPFFCLBMI_OFFSET))(this, a1);
		}

		::System::Void BDIIADDGLBO(::RPG::Client::EmoPlayableGraphConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::EmoPlayableGraphConfig*))((::PBYTE)hIl2Cpp + PEPNFLNCDHG_BDIIADDGLBO_OFFSET))(this, a1);
		}

		::System::Void CBBLKCEPBDN(::System::UInt32 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Single))((::PBYTE)hIl2Cpp + PEPNFLNCDHG_CBBLKCEPBDN_OFFSET))(this, a1, a2);
		}

		::System::Void IIELBMGDKJE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEPNFLNCDHG_IIELBMGDKJE_OFFSET))(this);
		}

		::System::Void JDINKILGBEN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEPNFLNCDHG_JDINKILGBEN_OFFSET))(this);
		}

		::System::Void ONJCKPEHHIJ(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PEPNFLNCDHG_ONJCKPEHHIJ_OFFSET))(this, a1);
		}

		::System::Void CGEIEDONAGM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEPNFLNCDHG_CGEIEDONAGM_OFFSET))(this);
		}

		::System::Void EHHACAFFMNP(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PEPNFLNCDHG_EHHACAFFMNP_OFFSET))(this, a1);
		}

		::System::Void CHBNPAPFGEB(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + PEPNFLNCDHG_CHBNPAPFGEB_OFFSET))(this, a1, a2);
		}

		::System::Void EAOBGIEKJJA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PEPNFLNCDHG_EAOBGIEKJJA_OFFSET))(this, a1);
		}

		::RPG::Client::TalkEmotionData* MFIOFOBDLBF(::System::String* a1)
		{
			return ((::RPG::Client::TalkEmotionData*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PEPNFLNCDHG_MFIOFOBDLBF_OFFSET))(this, a1);
		}

		::System::Void CKFBOOALPFO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEPNFLNCDHG_CKFBOOALPFO_OFFSET))(this);
		}

		::System::Void BOMHOFPKPFO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEPNFLNCDHG_BOMHOFPKPFO_OFFSET))(this);
		}

		::RPG::Client::MonoEmoPlayableGraph* AGEEOFENFMP()
		{
			return ((::RPG::Client::MonoEmoPlayableGraph*(*)(::PVOID))((::PBYTE)hIl2Cpp + PEPNFLNCDHG_AGEEOFENFMP_OFFSET))(this);
		}

		::System::String* ILJLEALIGLB()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PEPNFLNCDHG_ILJLEALIGLB_OFFSET))(this);
		}

		::System::Void _OnInitOwnerRef()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEPNFLNCDHG__ONINITOWNERREF_OFFSET))(this);
		}

		::System::Void LMCEDCHJKFF(::RPG::GameCore::CharacterEmoContextConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterEmoContextConfig*))((::PBYTE)hIl2Cpp + PEPNFLNCDHG_LMCEDCHJKFF_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEPNFLNCDHG_DISPOSE_OFFSET))(this);
		}

		::System::Void OnModelArtLoaded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEPNFLNCDHG_ONMODELARTLOADED_OFFSET))(this);
		}

		::System::Void OnModelArtUnloaded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEPNFLNCDHG_ONMODELARTUNLOADED_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PEPNFLNCDHG_TICK_OFFSET))(this, a1);
		}

		::System::Void JHDMCDCFDDP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEPNFLNCDHG_JHDMCDCFDDP_OFFSET))(this);
		}

		::System::Void EKFOEMGPLIG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEPNFLNCDHG_EKFOEMGPLIG_OFFSET))(this);
		}

		::System::Void HKLMOLNJJOE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEPNFLNCDHG_HKLMOLNJJOE_OFFSET))(this);
		}

		::System::Void JHKMHDIIMDL(::System::UInt32 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Single))((::PBYTE)hIl2Cpp + PEPNFLNCDHG_JHKMHDIIMDL_OFFSET))(this, a1, a2);
		}

		::System::Void OJCOENFILOM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PEPNFLNCDHG_OJCOENFILOM_OFFSET))(this, a1);
		}

		::System::Void BFLLMALNMLL(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PEPNFLNCDHG_BFLLMALNMLL_OFFSET))(this, a1);
		}

		::System::Void PIDDPGGHPKH(::PEPNFLNCDHG_BlinkEnableSource a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::PEPNFLNCDHG_BlinkEnableSource, ::System::Boolean))((::PBYTE)hIl2Cpp + PEPNFLNCDHG_PIDDPGGHPKH_OFFSET))(this, a1, a2);
		}

		::System::Void FIABLKFJCBF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEPNFLNCDHG_FIABLKFJCBF_OFFSET))(this);
		}

		::System::Void DACNGFAILDK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEPNFLNCDHG_DACNGFAILDK_OFFSET))(this);
		}

		::System::Void NKHOLHDIDIC(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PEPNFLNCDHG_NKHOLHDIDIC_OFFSET))(this, a1);
		}

		::System::Void DEMLBOHECBO(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PEPNFLNCDHG_DEMLBOHECBO_OFFSET))(this, a1);
		}

		::System::Void LLNPJMGFFIN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEPNFLNCDHG_LLNPJMGFFIN_OFFSET))(this);
		}

		::System::Void EBALFIPNLNC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEPNFLNCDHG_EBALFIPNLNC_OFFSET))(this);
		}

		::System::Void BPBHOMJBFHG(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PEPNFLNCDHG_BPBHOMJBFHG_OFFSET))(this, a1);
		}

		::System::Void GNKBMOIOFFC(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PEPNFLNCDHG_GNKBMOIOFFC_OFFSET))(this, a1);
		}

		::System::Void PBFDJBPKCLA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEPNFLNCDHG_PBFDJBPKCLA_OFFSET))(this);
		}

		::System::Void KHEFBDHAFPD(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PEPNFLNCDHG_KHEFBDHAFPD_OFFSET))(this, a1);
		}

		::System::Boolean IFHJANMDCMM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PEPNFLNCDHG_IFHJANMDCMM_OFFSET))(this);
		}

		::RPG::GameCore::EmotionType BKIBMIAJMJH()
		{
			return ((::RPG::GameCore::EmotionType(*)(::PVOID))((::PBYTE)hIl2Cpp + PEPNFLNCDHG_BKIBMIAJMJH_OFFSET))(this);
		}

		::System::Boolean _UnloadEmotionClip_b__38_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PEPNFLNCDHG__UNLOADEMOTIONCLIP_B__38_0_OFFSET))(this);
		}

	};
