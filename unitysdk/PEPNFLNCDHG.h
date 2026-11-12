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

#define PEPNFLNCDHG_AAHFKBJBLOG_OFFSET UNITYSDK_OFFSET(0xCADFC50)
#define PEPNFLNCDHG_ABJGGHBPLDH_OFFSET UNITYSDK_OFFSET(0xCADBDB0)
#define PEPNFLNCDHG_AFFAGACNGCK_OFFSET UNITYSDK_OFFSET(0xCADBC20)
#define PEPNFLNCDHG_AGEEOFENFMP_OFFSET UNITYSDK_OFFSET(0xCAE09E0)
#define PEPNFLNCDHG_AIELAJAJMCN_OFFSET UNITYSDK_OFFSET(0xCADFDE0)
#define PEPNFLNCDHG_AJILHEKDBPI_OFFSET UNITYSDK_OFFSET(0xCADF950)
#define PEPNFLNCDHG_ALAKFANPCMN_OFFSET UNITYSDK_OFFSET(0xCADFD80)
#define PEPNFLNCDHG_APNEPBLGJKF_OFFSET UNITYSDK_OFFSET(0xCADD230)
#define PEPNFLNCDHG_BDIIADDGLBO_OFFSET UNITYSDK_OFFSET(0xCAE0260)
#define PEPNFLNCDHG_BFLLMALNMLL_OFFSET UNITYSDK_OFFSET(0xCAE1E60)
#define PEPNFLNCDHG_BKIBMIAJMJH_OFFSET UNITYSDK_OFFSET(0xCAE2390)
#define PEPNFLNCDHG_BOMHOFPKPFO_OFFSET UNITYSDK_OFFSET(0xCAE0980)
#define PEPNFLNCDHG_BPBHOMJBFHG_OFFSET UNITYSDK_OFFSET(0xCAE1AB0)
#define PEPNFLNCDHG_CBBLKCEPBDN_OFFSET UNITYSDK_OFFSET(0xCAE0310)
#define PEPNFLNCDHG_CCTOR_OFFSET UNITYSDK_OFFSET(0xCAE23A0)
#define PEPNFLNCDHG_CDGLHAEIMLH_OFFSET UNITYSDK_OFFSET(0xCADFDC0)
#define PEPNFLNCDHG_CFMAHIAOMCB_OFFSET UNITYSDK_OFFSET(0xCADF8E0)
#define PEPNFLNCDHG_CGEIEDONAGM_OFFSET UNITYSDK_OFFSET(0xCAE0510)
#define PEPNFLNCDHG_CGOMIFCKAGA_OFFSET UNITYSDK_OFFSET(0xCADD9D0)
#define PEPNFLNCDHG_CHBNPAPFGEB_OFFSET UNITYSDK_OFFSET(0xCAE0720)
#define PEPNFLNCDHG_CIHMMOKKFHM_OFFSET UNITYSDK_OFFSET(0xCADE100)
#define PEPNFLNCDHG_CKFBOOALPFO_OFFSET UNITYSDK_OFFSET(0xCAE0860)
#define PEPNFLNCDHG_CKMIFOAPOAD_OFFSET UNITYSDK_OFFSET(0xCADD3B0)
#define PEPNFLNCDHG_CLMFPGIKBFP_OFFSET UNITYSDK_OFFSET(0xCADD290)
#define PEPNFLNCDHG_CTOR_OFFSET UNITYSDK_OFFSET(0xCAE0A00)
#define PEPNFLNCDHG_DACNGFAILDK_OFFSET UNITYSDK_OFFSET(0xCAE0D00)
#define PEPNFLNCDHG_DEMLBOHECBO_OFFSET UNITYSDK_OFFSET(0xCAE20A0)
#define PEPNFLNCDHG_DFCJMDHKJIK_OFFSET UNITYSDK_OFFSET(0xCADD100)
#define PEPNFLNCDHG_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCAE0CA0)
#define PEPNFLNCDHG_DKCFOCLNCGG_OFFSET UNITYSDK_OFFSET(0xCADE4E0)
#define PEPNFLNCDHG_EAOBGIEKJJA_OFFSET UNITYSDK_OFFSET(0xCAE07D0)
#define PEPNFLNCDHG_EBALFIPNLNC_OFFSET UNITYSDK_OFFSET(0xCAE1740)
#define PEPNFLNCDHG_EGIHFOANELB_OFFSET UNITYSDK_OFFSET(0xCADFDD0)
#define PEPNFLNCDHG_EHHACAFFMNP_OFFSET UNITYSDK_OFFSET(0xCAE05A0)
#define PEPNFLNCDHG_EJEEEKFOOOK_OFFSET UNITYSDK_OFFSET(0xCADD6D0)
#define PEPNFLNCDHG_EKFOEMGPLIG_OFFSET UNITYSDK_OFFSET(0xCAE1BD0)
#define PEPNFLNCDHG_EMFIGLCNJIP_OFFSET UNITYSDK_OFFSET(0xCADDB80)
#define PEPNFLNCDHG_EOFLECCEFLF_OFFSET UNITYSDK_OFFSET(0xCADFBC0)
#define PEPNFLNCDHG_FAONKDHLEMP_OFFSET UNITYSDK_OFFSET(0xCADFD00)
#define PEPNFLNCDHG_FIABLKFJCBF_OFFSET UNITYSDK_OFFSET(0xCAE0BC0)
#define PEPNFLNCDHG_FJCADIEDFNM_OFFSET UNITYSDK_OFFSET(0xCADBBD0)
#define PEPNFLNCDHG_GCOHLBKEIEE_OFFSET UNITYSDK_OFFSET(0xCADF350)
#define PEPNFLNCDHG_GNKBMOIOFFC_OFFSET UNITYSDK_OFFSET(0xCAE12F0)
#define PEPNFLNCDHG_HBAMHLKDLHF_OFFSET UNITYSDK_OFFSET(0xCADEBA0)
#define PEPNFLNCDHG_HBOGMHPICJF_OFFSET UNITYSDK_OFFSET(0xCADE3B0)
#define PEPNFLNCDHG_HFEPFFCLBMI_OFFSET UNITYSDK_OFFSET(0xCAE00A0)
#define PEPNFLNCDHG_HKLMOLNJJOE_OFFSET UNITYSDK_OFFSET(0xCAE1C20)
#define PEPNFLNCDHG_HNFHGGINBHF_OFFSET UNITYSDK_OFFSET(0xCADF860)
#define PEPNFLNCDHG_HODEJMOCFPP_OFFSET UNITYSDK_OFFSET(0xCADF9F0)
#define PEPNFLNCDHG_HOPDIHFEIAI_OFFSET UNITYSDK_OFFSET(0xCADDD50)
#define PEPNFLNCDHG_HPDGJJIODFO_OFFSET UNITYSDK_OFFSET(0xCADC620)
#define PEPNFLNCDHG_IAMNOJACOIK_OFFSET UNITYSDK_OFFSET(0xCADFF90)
#define PEPNFLNCDHG_IFHJANMDCMM_OFFSET UNITYSDK_OFFSET(0xCAE2330)
#define PEPNFLNCDHG_IFMNMKALKJF_OFFSET UNITYSDK_OFFSET(0xCADFEB0)
#define PEPNFLNCDHG_IIELBMGDKJE_OFFSET UNITYSDK_OFFSET(0xCAE0390)
#define PEPNFLNCDHG_IJAKFNAFPCM_OFFSET UNITYSDK_OFFSET(0xCADEDF0)
#define PEPNFLNCDHG_ILJLEALIGLB_OFFSET UNITYSDK_OFFSET(0xCAE09F0)
#define PEPNFLNCDHG_IPPLMJMOEPF_OFFSET UNITYSDK_OFFSET(0xCADF290)
#define PEPNFLNCDHG_JCIEPKNHBDG_OFFSET UNITYSDK_OFFSET(0xCADC1C0)
#define PEPNFLNCDHG_JDINKILGBEN_OFFSET UNITYSDK_OFFSET(0xCAE0410)
#define PEPNFLNCDHG_JEIGDAHOFGJ_OFFSET UNITYSDK_OFFSET(0xCADCA60)
#define PEPNFLNCDHG_JHDMCDCFDDP_OFFSET UNITYSDK_OFFSET(0xCAE1250)
#define PEPNFLNCDHG_JHKMHDIIMDL_OFFSET UNITYSDK_OFFSET(0xCAE1C70)
#define PEPNFLNCDHG_KCLOEBEJBHD_OFFSET UNITYSDK_OFFSET(0xCADD360)
#define PEPNFLNCDHG_KHEFBDHAFPD_OFFSET UNITYSDK_OFFSET(0xCAE22B0)
#define PEPNFLNCDHG_KIHJMCJDEPE_OFFSET UNITYSDK_OFFSET(0xCADBEA0)
#define PEPNFLNCDHG_KJBJLAIEPBI_OFFSET UNITYSDK_OFFSET(0xCADCAB0)
#define PEPNFLNCDHG_KLMLLECMEKA_OFFSET UNITYSDK_OFFSET(0xCADC3F0)
#define PEPNFLNCDHG_LDELPJEIMKG_OFFSET UNITYSDK_OFFSET(0xCADDB20)
#define PEPNFLNCDHG_LDKDNOHOEKN_OFFSET UNITYSDK_OFFSET(0xCADC450)
#define PEPNFLNCDHG_LGPLHCGEBLM_OFFSET UNITYSDK_OFFSET(0xCADE8F0)
#define PEPNFLNCDHG_LKMFAHEHCCA_OFFSET UNITYSDK_OFFSET(0xCADEC80)
#define PEPNFLNCDHG_LLNPJMGFFIN_OFFSET UNITYSDK_OFFSET(0xCAE1410)
#define PEPNFLNCDHG_LMCEDCHJKFF_OFFSET UNITYSDK_OFFSET(0xCAE0B40)
#define PEPNFLNCDHG_LOGJKFOKEBC_OFFSET UNITYSDK_OFFSET(0xCADC150)
#define PEPNFLNCDHG_MBGLCMMIDBH_OFFSET UNITYSDK_OFFSET(0xCADEF40)
#define PEPNFLNCDHG_MDGOOADENNL_OFFSET UNITYSDK_OFFSET(0xCADCCC0)
#define PEPNFLNCDHG_MFIOFOBDLBF_OFFSET UNITYSDK_OFFSET(0xCAE0630)
#define PEPNFLNCDHG_MOBGPCCOHBM_OFFSET UNITYSDK_OFFSET(0xCADF050)
#define PEPNFLNCDHG_NBJABDPHAFG_OFFSET UNITYSDK_OFFSET(0xCADF770)
#define PEPNFLNCDHG_NEFCACGFOIG_OFFSET UNITYSDK_OFFSET(0xCADD400)
#define PEPNFLNCDHG_NKHOLHDIDIC_OFFSET UNITYSDK_OFFSET(0xCAE2010)
#define PEPNFLNCDHG_NMNLDDMGDAE_OFFSET UNITYSDK_OFFSET(0xCADD940)
#define PEPNFLNCDHG_OEFFHOAILPE_OFFSET UNITYSDK_OFFSET(0xCADC830)
#define PEPNFLNCDHG_OJBMJBMDGBA_OFFSET UNITYSDK_OFFSET(0xCADBE40)
#define PEPNFLNCDHG_OJCOENFILOM_OFFSET UNITYSDK_OFFSET(0xCAE1DA0)
#define PEPNFLNCDHG_OJLMDHMJCHC_OFFSET UNITYSDK_OFFSET(0xCADC6D0)
#define PEPNFLNCDHG_ONJCKPEHHIJ_OFFSET UNITYSDK_OFFSET(0xCAE04A0)
#define PEPNFLNCDHG_ONLLMPLGCDK_OFFSET UNITYSDK_OFFSET(0xCADD660)
#define PEPNFLNCDHG_ONMODELARTLOADED_OFFSET UNITYSDK_OFFSET(0xCAE0ED0)
#define PEPNFLNCDHG_ONMODELARTUNLOADED_OFFSET UNITYSDK_OFFSET(0xCAE0DE0)
#define PEPNFLNCDHG_OOIBIIENAKI_OFFSET UNITYSDK_OFFSET(0xCADD160)
#define PEPNFLNCDHG_PBFDJBPKCLA_OFFSET UNITYSDK_OFFSET(0xCAE11C0)
#define PEPNFLNCDHG_PCECIHPHEML_OFFSET UNITYSDK_OFFSET(0xCADF110)
#define PEPNFLNCDHG_PEEAFIPMCGP_OFFSET UNITYSDK_OFFSET(0xCADF4C0)
#define PEPNFLNCDHG_PIDDPGGHPKH_OFFSET UNITYSDK_OFFSET(0xCAE1EC0)
#define PEPNFLNCDHG_PLDEEFLBCIP_OFFSET UNITYSDK_OFFSET(0xCADFB30)
#define PEPNFLNCDHG_PMAEEMELMGJ_OFFSET UNITYSDK_OFFSET(0xCADFA50)
#define PEPNFLNCDHG_PNCCGKIFJHK_OFFSET UNITYSDK_OFFSET(0xCADDF60)
#define PEPNFLNCDHG_TICK_OFFSET UNITYSDK_OFFSET(0xCAE1A10)
#define PEPNFLNCDHG__ONINITOWNERREF_OFFSET UNITYSDK_OFFSET(0xCAE0AB0)
#define PEPNFLNCDHG__UNLOADEMOTIONCLIP_B__38_0_OFFSET UNITYSDK_OFFSET(0xCAE23E0)

inline static constexpr unsigned int PEPNFLNCDHG_TypeDefinitionIndex = 58470;

	class PEPNFLNCDHG : public ::RPG::GameCore::GameComponentBase
	{
	public:
		::RPG::Client::MonoEmoNpcEyeController* EDJNAOGCGOA; // 0x18
		::RPG::GameCore::CharacterModelComponent* EHFENKGDGJD; // 0x20
		::RPG::Client::MonoEmoBlendShapesController* INGMNMOLPAG; // 0x28
		::System::String* EFHABMJADDD; // 0x30
		::System::String* KHHMJHDIPGE; // 0x38
		::UnityEngine::SkinnedMeshRenderer* IMMGMMFDCLE; // 0x40
		::System::String* JFMLIJAIBGF; // 0x48
		::System::String* OMAKBFDGGMC; // 0x50
		::RPG::Client::MonoEmo2DAtlas* ABEHJBKBGMF; // 0x58
		::EONKJJEBGLN* NAIALJJNIGG; // 0x60
		::RPG::Client::MonoEmoPlayableGraph* CKJMABDDMIB; // 0x68
		::RPG::Client::MonoEmoAnimMouthShapeLayerController* INEAGHLGLLG; // 0x70
		::EONKJJEBGLN* PEABCBBBHFH; // 0x78
		::RPG::Client::MockAnimator* NAHOHKAHBPK; // 0x80
		::UnityEngine::Coroutine* HGHNDMPFPGA; // 0x88
		::RPG::GameCore::CharacterEmoContextConfig* LEHNNGGDPBP; // 0x90
		::RPG::Client::CharacterTalkEmotion* LLBJMGOABGP; // 0x98
		::System::String* OCICNDMCFIE; // 0xA0
		::RPG::Client::MonoEmoAnimBlinkLayerController* PPGCOMJPCJA; // 0xA8
		::System::String* LGOJBNILINB; // 0xB0
		::System::Int32 BGNPBAALOJF; // 0xB8
		::System::Boolean PNJAAMGCPAL; // 0xBC
		::System::Boolean CNDEMKKBNDN; // 0xBD
		::System::Boolean HGANEDBKKEK; // 0xBE
		::System::Byte _padding0[0x1];
		::System::Int32 MMFOCIEPJAD; // 0xC0
		::System::Boolean CFNDFJNBLCF; // 0xC4
		::System::Boolean CMIPLHPLMKK; // 0xC5
		::System::Boolean CDLMHJILKLC; // 0xC6
		::System::Boolean IFCGBBGIKHD; // 0xC7
		::System::Int32 NAOEMMCBOAJ; // 0xC8
		::RPG::GameCore::EmotionType ACFBPCOAJFM; // 0xCC
		::System::UInt32 KBNEPLFPAEP; // 0xD0
		::System::Int32 EHCEFAKHFFK; // 0xD4
		static ::System::Int32* StaticGet_ABMCNBLDLEH()
		{
			return (::System::Int32*)UnitySDK::FromName("", "PEPNFLNCDHG")->GetStaticField(0x15B80);
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
