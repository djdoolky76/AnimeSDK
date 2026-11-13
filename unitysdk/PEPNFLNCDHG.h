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

#define PEPNFLNCDHG_AAHFKBJBLOG_OFFSET UNITYSDK_OFFSET(0x1454C570)
#define PEPNFLNCDHG_ABJGGHBPLDH_OFFSET UNITYSDK_OFFSET(0x14548690)
#define PEPNFLNCDHG_AFFAGACNGCK_OFFSET UNITYSDK_OFFSET(0x145484F0)
#define PEPNFLNCDHG_AGEEOFENFMP_OFFSET UNITYSDK_OFFSET(0x1454D2F0)
#define PEPNFLNCDHG_AIELAJAJMCN_OFFSET UNITYSDK_OFFSET(0x1454C700)
#define PEPNFLNCDHG_AJILHEKDBPI_OFFSET UNITYSDK_OFFSET(0x1454C270)
#define PEPNFLNCDHG_ALAKFANPCMN_OFFSET UNITYSDK_OFFSET(0x1454C6A0)
#define PEPNFLNCDHG_APNEPBLGJKF_OFFSET UNITYSDK_OFFSET(0x14549B00)
#define PEPNFLNCDHG_BDIIADDGLBO_OFFSET UNITYSDK_OFFSET(0x1454CD20)
#define PEPNFLNCDHG_BFLLMALNMLL_OFFSET UNITYSDK_OFFSET(0x1454E730)
#define PEPNFLNCDHG_BKIBMIAJMJH_OFFSET UNITYSDK_OFFSET(0x1454EC10)
#define PEPNFLNCDHG_BOMHOFPKPFO_OFFSET UNITYSDK_OFFSET(0x1454C9F0)
#define PEPNFLNCDHG_BPBHOMJBFHG_OFFSET UNITYSDK_OFFSET(0x1454E380)
#define PEPNFLNCDHG_CBBLKCEPBDN_OFFSET UNITYSDK_OFFSET(0x1454CDD0)
#define PEPNFLNCDHG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1454EC20)
#define PEPNFLNCDHG_CDGLHAEIMLH_OFFSET UNITYSDK_OFFSET(0x1454C6E0)
#define PEPNFLNCDHG_CFMAHIAOMCB_OFFSET UNITYSDK_OFFSET(0x1454C200)
#define PEPNFLNCDHG_CGEIEDONAGM_OFFSET UNITYSDK_OFFSET(0x1454CFD0)
#define PEPNFLNCDHG_CGOMIFCKAGA_OFFSET UNITYSDK_OFFSET(0x1454A2A0)
#define PEPNFLNCDHG_CHBNPAPFGEB_OFFSET UNITYSDK_OFFSET(0x1454C860)
#define PEPNFLNCDHG_CIHMMOKKFHM_OFFSET UNITYSDK_OFFSET(0x1454A9E0)
#define PEPNFLNCDHG_CKFBOOALPFO_OFFSET UNITYSDK_OFFSET(0x1454D1D0)
#define PEPNFLNCDHG_CKMIFOAPOAD_OFFSET UNITYSDK_OFFSET(0x14549C80)
#define PEPNFLNCDHG_CLMFPGIKBFP_OFFSET UNITYSDK_OFFSET(0x14549B60)
#define PEPNFLNCDHG_CTOR_OFFSET UNITYSDK_OFFSET(0x1454D310)
#define PEPNFLNCDHG_DACNGFAILDK_OFFSET UNITYSDK_OFFSET(0x1454D600)
#define PEPNFLNCDHG_DEMLBOHECBO_OFFSET UNITYSDK_OFFSET(0x1454E980)
#define PEPNFLNCDHG_DFCJMDHKJIK_OFFSET UNITYSDK_OFFSET(0x145499D0)
#define PEPNFLNCDHG_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1454D5A0)
#define PEPNFLNCDHG_DKCFOCLNCGG_OFFSET UNITYSDK_OFFSET(0x1454ADC0)
#define PEPNFLNCDHG_EAOBGIEKJJA_OFFSET UNITYSDK_OFFSET(0x1454D150)
#define PEPNFLNCDHG_EBALFIPNLNC_OFFSET UNITYSDK_OFFSET(0x1454E040)
#define PEPNFLNCDHG_EGIHFOANELB_OFFSET UNITYSDK_OFFSET(0x1454C6F0)
#define PEPNFLNCDHG_EHHACAFFMNP_OFFSET UNITYSDK_OFFSET(0x1454C7D0)
#define PEPNFLNCDHG_EJEEEKFOOOK_OFFSET UNITYSDK_OFFSET(0x14549FA0)
#define PEPNFLNCDHG_EKFOEMGPLIG_OFFSET UNITYSDK_OFFSET(0x1454E4A0)
#define PEPNFLNCDHG_EMFIGLCNJIP_OFFSET UNITYSDK_OFFSET(0x1454A460)
#define PEPNFLNCDHG_EOFLECCEFLF_OFFSET UNITYSDK_OFFSET(0x1454C4E0)
#define PEPNFLNCDHG_FAONKDHLEMP_OFFSET UNITYSDK_OFFSET(0x1454C620)
#define PEPNFLNCDHG_FIABLKFJCBF_OFFSET UNITYSDK_OFFSET(0x1454D4C0)
#define PEPNFLNCDHG_FJCADIEDFNM_OFFSET UNITYSDK_OFFSET(0x145484A0)
#define PEPNFLNCDHG_GCOHLBKEIEE_OFFSET UNITYSDK_OFFSET(0x1454BC80)
#define PEPNFLNCDHG_GNKBMOIOFFC_OFFSET UNITYSDK_OFFSET(0x1454DBF0)
#define PEPNFLNCDHG_HBAMHLKDLHF_OFFSET UNITYSDK_OFFSET(0x1454B460)
#define PEPNFLNCDHG_HBOGMHPICJF_OFFSET UNITYSDK_OFFSET(0x1454AC90)
#define PEPNFLNCDHG_HFEPFFCLBMI_OFFSET UNITYSDK_OFFSET(0x1454CB60)
#define PEPNFLNCDHG_HKLMOLNJJOE_OFFSET UNITYSDK_OFFSET(0x1454E4F0)
#define PEPNFLNCDHG_HNFHGGINBHF_OFFSET UNITYSDK_OFFSET(0x1454C180)
#define PEPNFLNCDHG_HODEJMOCFPP_OFFSET UNITYSDK_OFFSET(0x1454C310)
#define PEPNFLNCDHG_HOPDIHFEIAI_OFFSET UNITYSDK_OFFSET(0x1454A630)
#define PEPNFLNCDHG_HPDGJJIODFO_OFFSET UNITYSDK_OFFSET(0x14548F00)
#define PEPNFLNCDHG_IAMNOJACOIK_OFFSET UNITYSDK_OFFSET(0x1454CA50)
#define PEPNFLNCDHG_IFHJANMDCMM_OFFSET UNITYSDK_OFFSET(0x1454B810)
#define PEPNFLNCDHG_IFMNMKALKJF_OFFSET UNITYSDK_OFFSET(0x1454C910)
#define PEPNFLNCDHG_IIELBMGDKJE_OFFSET UNITYSDK_OFFSET(0x1454CE50)
#define PEPNFLNCDHG_IJAKFNAFPCM_OFFSET UNITYSDK_OFFSET(0x1454B6B0)
#define PEPNFLNCDHG_ILJLEALIGLB_OFFSET UNITYSDK_OFFSET(0x1454D300)
#define PEPNFLNCDHG_IPPLMJMOEPF_OFFSET UNITYSDK_OFFSET(0x1454BBC0)
#define PEPNFLNCDHG_JCIEPKNHBDG_OFFSET UNITYSDK_OFFSET(0x14548AD0)
#define PEPNFLNCDHG_JDINKILGBEN_OFFSET UNITYSDK_OFFSET(0x1454CED0)
#define PEPNFLNCDHG_JEIGDAHOFGJ_OFFSET UNITYSDK_OFFSET(0x14549340)
#define PEPNFLNCDHG_JHDMCDCFDDP_OFFSET UNITYSDK_OFFSET(0x1454DB50)
#define PEPNFLNCDHG_JHKMHDIIMDL_OFFSET UNITYSDK_OFFSET(0x1454E540)
#define PEPNFLNCDHG_KCLOEBEJBHD_OFFSET UNITYSDK_OFFSET(0x14549C30)
#define PEPNFLNCDHG_KHEFBDHAFPD_OFFSET UNITYSDK_OFFSET(0x1454EB90)
#define PEPNFLNCDHG_KIHJMCJDEPE_OFFSET UNITYSDK_OFFSET(0x14548790)
#define PEPNFLNCDHG_KJBJLAIEPBI_OFFSET UNITYSDK_OFFSET(0x145493A0)
#define PEPNFLNCDHG_KLMLLECMEKA_OFFSET UNITYSDK_OFFSET(0x14548CF0)
#define PEPNFLNCDHG_LDELPJEIMKG_OFFSET UNITYSDK_OFFSET(0x1454A400)
#define PEPNFLNCDHG_LDKDNOHOEKN_OFFSET UNITYSDK_OFFSET(0x14548D40)
#define PEPNFLNCDHG_LGPLHCGEBLM_OFFSET UNITYSDK_OFFSET(0x1454B1C0)
#define PEPNFLNCDHG_LKMFAHEHCCA_OFFSET UNITYSDK_OFFSET(0x1454B540)
#define PEPNFLNCDHG_LLNPJMGFFIN_OFFSET UNITYSDK_OFFSET(0x1454DD10)
#define PEPNFLNCDHG_LMCEDCHJKFF_OFFSET UNITYSDK_OFFSET(0x1454D450)
#define PEPNFLNCDHG_LOGJKFOKEBC_OFFSET UNITYSDK_OFFSET(0x14548A50)
#define PEPNFLNCDHG_MBGLCMMIDBH_OFFSET UNITYSDK_OFFSET(0x1454B870)
#define PEPNFLNCDHG_MDGOOADENNL_OFFSET UNITYSDK_OFFSET(0x145495B0)
#define PEPNFLNCDHG_MFIOFOBDLBF_OFFSET UNITYSDK_OFFSET(0x1454D060)
#define PEPNFLNCDHG_MOBGPCCOHBM_OFFSET UNITYSDK_OFFSET(0x1454B980)
#define PEPNFLNCDHG_NBJABDPHAFG_OFFSET UNITYSDK_OFFSET(0x1454C090)
#define PEPNFLNCDHG_NEFCACGFOIG_OFFSET UNITYSDK_OFFSET(0x14549CD0)
#define PEPNFLNCDHG_NKHOLHDIDIC_OFFSET UNITYSDK_OFFSET(0x1454E8F0)
#define PEPNFLNCDHG_NMNLDDMGDAE_OFFSET UNITYSDK_OFFSET(0x1454A210)
#define PEPNFLNCDHG_OEFFHOAILPE_OFFSET UNITYSDK_OFFSET(0x14549110)
#define PEPNFLNCDHG_OJBMJBMDGBA_OFFSET UNITYSDK_OFFSET(0x14548730)
#define PEPNFLNCDHG_OJCOENFILOM_OFFSET UNITYSDK_OFFSET(0x1454E670)
#define PEPNFLNCDHG_OJLMDHMJCHC_OFFSET UNITYSDK_OFFSET(0x14548FB0)
#define PEPNFLNCDHG_ONJCKPEHHIJ_OFFSET UNITYSDK_OFFSET(0x1454CF60)
#define PEPNFLNCDHG_ONLLMPLGCDK_OFFSET UNITYSDK_OFFSET(0x14549F30)
#define PEPNFLNCDHG_ONMODELARTLOADED_OFFSET UNITYSDK_OFFSET(0x1454D7D0)
#define PEPNFLNCDHG_ONMODELARTUNLOADED_OFFSET UNITYSDK_OFFSET(0x1454D6E0)
#define PEPNFLNCDHG_OOIBIIENAKI_OFFSET UNITYSDK_OFFSET(0x14549A30)
#define PEPNFLNCDHG_PBFDJBPKCLA_OFFSET UNITYSDK_OFFSET(0x1454DAC0)
#define PEPNFLNCDHG_PCECIHPHEML_OFFSET UNITYSDK_OFFSET(0x1454BA40)
#define PEPNFLNCDHG_PEEAFIPMCGP_OFFSET UNITYSDK_OFFSET(0x1454BDF0)
#define PEPNFLNCDHG_PIDDPGGHPKH_OFFSET UNITYSDK_OFFSET(0x1454E790)
#define PEPNFLNCDHG_PLDEEFLBCIP_OFFSET UNITYSDK_OFFSET(0x1454C450)
#define PEPNFLNCDHG_PMAEEMELMGJ_OFFSET UNITYSDK_OFFSET(0x1454C370)
#define PEPNFLNCDHG_PNCCGKIFJHK_OFFSET UNITYSDK_OFFSET(0x1454A840)
#define PEPNFLNCDHG_TICK_OFFSET UNITYSDK_OFFSET(0x1454E2E0)
#define PEPNFLNCDHG__ONINITOWNERREF_OFFSET UNITYSDK_OFFSET(0x1454D3C0)
#define PEPNFLNCDHG__UNLOADEMOTIONCLIP_B__38_0_OFFSET UNITYSDK_OFFSET(0x1454EC60)

inline static constexpr unsigned int PEPNFLNCDHG_TypeDefinitionIndex = 58470;

	class PEPNFLNCDHG : public ::RPG::GameCore::GameComponentBase
	{
	public:
		::System::String* OCICNDMCFIE; // 0x18
		::RPG::GameCore::CharacterEmoContextConfig* LEHNNGGDPBP; // 0x20
		::System::String* KHHMJHDIPGE; // 0x28
		::RPG::Client::MonoEmoPlayableGraph* CKJMABDDMIB; // 0x30
		::EONKJJEBGLN* PEABCBBBHFH; // 0x38
		::RPG::Client::MonoEmoBlendShapesController* INGMNMOLPAG; // 0x40
		::System::String* JFMLIJAIBGF; // 0x48
		::RPG::Client::MonoEmoAnimBlinkLayerController* PPGCOMJPCJA; // 0x50
		::RPG::Client::MonoEmoNpcEyeController* EDJNAOGCGOA; // 0x58
		::RPG::Client::MockAnimator* NAHOHKAHBPK; // 0x60
		::System::String* EFHABMJADDD; // 0x68
		::System::String* LGOJBNILINB; // 0x70
		::UnityEngine::Coroutine* HGHNDMPFPGA; // 0x78
		::UnityEngine::SkinnedMeshRenderer* IMMGMMFDCLE; // 0x80
		::EONKJJEBGLN* NAIALJJNIGG; // 0x88
		::RPG::Client::MonoEmo2DAtlas* ABEHJBKBGMF; // 0x90
		::RPG::GameCore::CharacterModelComponent* EHFENKGDGJD; // 0x98
		::RPG::Client::MonoEmoAnimMouthShapeLayerController* INEAGHLGLLG; // 0xA0
		::System::String* OMAKBFDGGMC; // 0xA8
		::RPG::Client::CharacterTalkEmotion* LLBJMGOABGP; // 0xB0
		::System::Boolean PNJAAMGCPAL; // 0xB8
		::System::Boolean CDLMHJILKLC; // 0xB9
		::System::Boolean IFCGBBGIKHD; // 0xBA
		::System::Boolean CFNDFJNBLCF; // 0xBB
		::System::UInt32 KBNEPLFPAEP; // 0xBC
		::System::Int32 BGNPBAALOJF; // 0xC0
		::RPG::GameCore::EmotionType ACFBPCOAJFM; // 0xC4
		::System::Boolean CNDEMKKBNDN; // 0xC8
		::System::Boolean CMIPLHPLMKK; // 0xC9
		::System::Boolean HGANEDBKKEK; // 0xCA
		::System::Byte _padding0[0x1];
		::System::Int32 MMFOCIEPJAD; // 0xCC
		::System::Int32 EHCEFAKHFFK; // 0xD0
		::System::Int32 NAOEMMCBOAJ; // 0xD4
		static ::System::Int32* StaticGet_ABMCNBLDLEH()
		{
			return (::System::Int32*)UnitySDK::FromName("", "PEPNFLNCDHG")->GetStaticField(0x15FD0);
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
