#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FBMOHEFENME_OLAPONLEDAK.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/RPG/GameCore/BattleUIPanelType.h"
#include "unitysdk/IGKFNIEJGLM.h"
class AFOPMEOBPCM;
class BABICHJDNNH;
class BDDIPLIPPOI;
class CFJDNIMHGOG;
class EIDIGCLKLOA;
class FBMOHEFENME;
class HHINDILGODF;
class HLIKFKIBEBA;
class IBHLNEHKEEN;
class IFIMBOKCJIO;
class JHCGMFOMNPB;
class KJAADOJLNMD;
class KJPJAHNBOHB;
class KMMMMKICJIE;
namespace RPG::GameCore { class BattleInstance; }
namespace RPG::GameCore { class SetBtnBattleHintInfo; }
namespace System { class Object; }

#define ILJDILDNADJ_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x164AFCB0)
#define ILJDILDNADJ_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x164AFED0)
#define ILJDILDNADJ_BAAPOOFBAFB_OFFSET UNITYSDK_OFFSET(0x164AF9C0)
#define ILJDILDNADJ_BNGOJOFDCGI_OFFSET UNITYSDK_OFFSET(0x164AEE80)
#define ILJDILDNADJ_BNLIGJJCMHO_OFFSET UNITYSDK_OFFSET(0x164AF8D0)
#define ILJDILDNADJ_CKPBDIMIAMA_OFFSET UNITYSDK_OFFSET(0x164ADC20)
#define ILJDILDNADJ_CTOR_OFFSET UNITYSDK_OFFSET(0x164B00C0)
#define ILJDILDNADJ_DGIPCFJANCH_OFFSET UNITYSDK_OFFSET(0x164AEF50)
#define ILJDILDNADJ_DHHDFAAJMMC_OFFSET UNITYSDK_OFFSET(0x164AD4D0)
#define ILJDILDNADJ_DKLGNCJBFEH_OFFSET UNITYSDK_OFFSET(0x164AF810)
#define ILJDILDNADJ_FBNNPLAEGJK_OFFSET UNITYSDK_OFFSET(0x164AE380)
#define ILJDILDNADJ_FCGEBLJALPC_OFFSET UNITYSDK_OFFSET(0x164AF040)
#define ILJDILDNADJ_FDLJJHJIEMC_OFFSET UNITYSDK_OFFSET(0x164AFB60)
#define ILJDILDNADJ_FENOAIMECHO_OFFSET UNITYSDK_OFFSET(0x164AEEE0)
#define ILJDILDNADJ_FFOKOMKOOMO_OFFSET UNITYSDK_OFFSET(0x164AF160)
#define ILJDILDNADJ_FGPPFGKEFLJ_1_OFFSET UNITYSDK_OFFSET(0x164AF340)
#define ILJDILDNADJ_FGPPFGKEFLJ_OFFSET UNITYSDK_OFFSET(0x164AF250)
#define ILJDILDNADJ_FMBEHOGJLAA_OFFSET UNITYSDK_OFFSET(0x164AEBC0)
#define ILJDILDNADJ_GDKHOAPABAA_OFFSET UNITYSDK_OFFSET(0x164AEA10)
#define ILJDILDNADJ_GGAOPMMEDNP_OFFSET UNITYSDK_OFFSET(0x164ADAB0)
#define ILJDILDNADJ_HEGONKOBNCM_OFFSET UNITYSDK_OFFSET(0x164AF6C0)
#define ILJDILDNADJ_HJABOKNEIOJ_OFFSET UNITYSDK_OFFSET(0x164ADFB0)
#define ILJDILDNADJ_HMDGGFNBFKC_OFFSET UNITYSDK_OFFSET(0x164AF4B0)
#define ILJDILDNADJ_HOPBGDEJJHO_OFFSET UNITYSDK_OFFSET(0x164AE110)
#define ILJDILDNADJ_IBHANGOOLAA_OFFSET UNITYSDK_OFFSET(0x164AD940)
#define ILJDILDNADJ_IMFFGCCIKEH_OFFSET UNITYSDK_OFFSET(0x164AE470)
#define ILJDILDNADJ_IOFJJFLOEOI_OFFSET UNITYSDK_OFFSET(0x164AFAA0)
#define ILJDILDNADJ_JJBGNJFCHPL_OFFSET UNITYSDK_OFFSET(0x164AE830)
#define ILJDILDNADJ_KGGJMCEMDLA_OFFSET UNITYSDK_OFFSET(0x164AD7D0)
#define ILJDILDNADJ_LMCABFDICLI_OFFSET UNITYSDK_OFFSET(0x164AF430)
#define ILJDILDNADJ_MDKHENDDPHA_OFFSET UNITYSDK_OFFSET(0x164AEDC0)
#define ILJDILDNADJ_MECMNPEPHAD_OFFSET UNITYSDK_OFFSET(0x164AE270)
#define ILJDILDNADJ_MEHCNGCAKOH_OFFSET UNITYSDK_OFFSET(0x164ADC60)
#define ILJDILDNADJ_MOAONNBHJBM_OFFSET UNITYSDK_OFFSET(0x164AE770)
#define ILJDILDNADJ_MPPMPJGGDKG_OFFSET UNITYSDK_OFFSET(0x164AE680)
#define ILJDILDNADJ_NBHAFJKHDMM_OFFSET UNITYSDK_OFFSET(0x164AE530)
#define ILJDILDNADJ_NHOAKGLNIBM_OFFSET UNITYSDK_OFFSET(0x164ADDC0)
#define ILJDILDNADJ_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0x164AD620)
#define ILJDILDNADJ_OFMFOIDMJOE_OFFSET UNITYSDK_OFFSET(0x164AE8C0)
#define ILJDILDNADJ_PFANHMDKAFO_OFFSET UNITYSDK_OFFSET(0x164AE7D0)
#define ILJDILDNADJ_PHEAIENMGLG_OFFSET UNITYSDK_OFFSET(0x164AF640)
#define ILJDILDNADJ__ONBIND_OFFSET UNITYSDK_OFFSET(0x164AD570)
#define ILJDILDNADJ___BATTLECOLLEGEPLAYFADEIN_B__12_0_OFFSET UNITYSDK_OFFSET(0x164B0130)
#define ILJDILDNADJ___TREASUREDUNGEONPLAYFADEIN_B__10_0_OFFSET UNITYSDK_OFFSET(0x164B0100)

inline static constexpr unsigned int ILJDILDNADJ_TypeDefinitionIndex = 72237;

	class ILJDILDNADJ : public ::FMPCODLIOLG
	{
	public:
		::FBMOHEFENME* LMLNMBIKDAE; // 0x60
		::KJPJAHNBOHB* IFKCFGPAMAL; // 0x68
		::AFOPMEOBPCM* EMEAEHDCJAF; // 0x70
		::IFIMBOKCJIO* MFEICFDDPNE; // 0x78
		::KJAADOJLNMD* AMMLOJKIGCD; // 0x80
		::BDDIPLIPPOI* LCKINHKHCEN; // 0x88
		::FBMOHEFENME_OLAPONLEDAK LCPELAJLCAF; // 0x90
		::RPG::GameCore::BattleInstance* IFKCCHIFMOC; // 0xA0
		::HHINDILGODF* KCPCGIBNEFH; // 0xA8
		::BABICHJDNNH* MPFCBGICHHL; // 0xB0
		::IBHLNEHKEEN* MGANILFMAAF; // 0xB8
		::EIDIGCLKLOA* MJGIBIDGMBM; // 0xC0
		::KMMMMKICJIE* HONLLGPHOGC; // 0xC8
		::JHCGMFOMNPB* NPGLHOPNNPL; // 0xD0
		::System::Boolean AKBPNMEFGAO; // 0xD8
		::System::Boolean FCCPKCMOCGG; // 0xD9
		::System::Byte _padding0[0x2];
		::RPG::GameCore::BattleUIPanelType APGLFBAFEOB; // 0xDC
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILJDILDNADJ_CTOR_OFFSET))(this);
		}

		::System::Void DHHDFAAJMMC(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + ILJDILDNADJ_DHHDFAAJMMC_OFFSET))(this, a1);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILJDILDNADJ__ONBIND_OFFSET))(this);
		}

		::System::Void NKPPGDENJAE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILJDILDNADJ_NKPPGDENJAE_OFFSET))(this);
		}

		::System::Void JJBGNJFCHPL(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ILJDILDNADJ_JJBGNJFCHPL_OFFSET))(this, a1);
		}

		::System::Boolean MDKHENDDPHA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ILJDILDNADJ_MDKHENDDPHA_OFFSET))(this);
		}

		::System::Void BNGOJOFDCGI(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ILJDILDNADJ_BNGOJOFDCGI_OFFSET))(this, a1);
		}

		::System::Void FENOAIMECHO(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ILJDILDNADJ_FENOAIMECHO_OFFSET))(this, a1);
		}

		::System::Void FCGEBLJALPC(::RPG::GameCore::SetBtnBattleHintInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SetBtnBattleHintInfo*))((::PBYTE)hIl2Cpp + ILJDILDNADJ_FCGEBLJALPC_OFFSET))(this, a1);
		}

		::System::Void KGGJMCEMDLA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILJDILDNADJ_KGGJMCEMDLA_OFFSET))(this);
		}

		::System::Void OFMFOIDMJOE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILJDILDNADJ_OFMFOIDMJOE_OFFSET))(this);
		}

		::System::Void IBHANGOOLAA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILJDILDNADJ_IBHANGOOLAA_OFFSET))(this);
		}

		::System::Void GDKHOAPABAA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILJDILDNADJ_GDKHOAPABAA_OFFSET))(this);
		}

		::System::Void GGAOPMMEDNP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILJDILDNADJ_GGAOPMMEDNP_OFFSET))(this);
		}

		::System::Void DGIPCFJANCH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILJDILDNADJ_DGIPCFJANCH_OFFSET))(this);
		}

		::System::Void CKPBDIMIAMA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILJDILDNADJ_CKPBDIMIAMA_OFFSET))(this);
		}

		::System::Void MEHCNGCAKOH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILJDILDNADJ_MEHCNGCAKOH_OFFSET))(this);
		}

		::System::Void FFOKOMKOOMO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILJDILDNADJ_FFOKOMKOOMO_OFFSET))(this);
		}

		::System::Void NHOAKGLNIBM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILJDILDNADJ_NHOAKGLNIBM_OFFSET))(this);
		}

		::System::Void HJABOKNEIOJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILJDILDNADJ_HJABOKNEIOJ_OFFSET))(this);
		}

		::System::Void MECMNPEPHAD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILJDILDNADJ_MECMNPEPHAD_OFFSET))(this);
		}

		::System::Void HOPBGDEJJHO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILJDILDNADJ_HOPBGDEJJHO_OFFSET))(this);
		}

		::System::Void FBNNPLAEGJK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILJDILDNADJ_FBNNPLAEGJK_OFFSET))(this);
		}

		::System::Void IMFFGCCIKEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILJDILDNADJ_IMFFGCCIKEH_OFFSET))(this);
		}

		::System::Void NBHAFJKHDMM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILJDILDNADJ_NBHAFJKHDMM_OFFSET))(this);
		}

		::System::Void FMBEHOGJLAA(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ILJDILDNADJ_FMBEHOGJLAA_OFFSET))(this, a1);
		}

		::System::Void MPPMPJGGDKG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILJDILDNADJ_MPPMPJGGDKG_OFFSET))(this);
		}

		::System::Void FGPPFGKEFLJ(::CFJDNIMHGOG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CFJDNIMHGOG*))((::PBYTE)hIl2Cpp + ILJDILDNADJ_FGPPFGKEFLJ_OFFSET))(this, a1);
		}

		::System::Void FGPPFGKEFLJ_1(::HLIKFKIBEBA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HLIKFKIBEBA*))((::PBYTE)hIl2Cpp + ILJDILDNADJ_FGPPFGKEFLJ_1_OFFSET))(this, a1);
		}

		::System::Void LMCABFDICLI(::EIDIGCLKLOA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EIDIGCLKLOA*))((::PBYTE)hIl2Cpp + ILJDILDNADJ_LMCABFDICLI_OFFSET))(this, a1);
		}

		::System::Void PHEAIENMGLG(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ILJDILDNADJ_PHEAIENMGLG_OFFSET))(this, a1);
		}

		::System::Void HMDGGFNBFKC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILJDILDNADJ_HMDGGFNBFKC_OFFSET))(this);
		}

		::System::Void MOAONNBHJBM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILJDILDNADJ_MOAONNBHJBM_OFFSET))(this);
		}

		::System::Void PFANHMDKAFO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILJDILDNADJ_PFANHMDKAFO_OFFSET))(this);
		}

		::System::Void HEGONKOBNCM(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ILJDILDNADJ_HEGONKOBNCM_OFFSET))(this, a1);
		}

		::System::Void DKLGNCJBFEH(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ILJDILDNADJ_DKLGNCJBFEH_OFFSET))(this, a1);
		}

		::System::Void BNLIGJJCMHO(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ILJDILDNADJ_BNLIGJJCMHO_OFFSET))(this, a1);
		}

		::System::Void BAAPOOFBAFB(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ILJDILDNADJ_BAAPOOFBAFB_OFFSET))(this, a1);
		}

		::System::Void IOFJJFLOEOI(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ILJDILDNADJ_IOFJJFLOEOI_OFFSET))(this, a1);
		}

		::System::Void FDLJJHJIEMC(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ILJDILDNADJ_FDLJJHJIEMC_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILJDILDNADJ_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILJDILDNADJ_AUTOREMOVECALLBACK_OFFSET))(this);
		}

		::System::Void __TreasureDungeonPlayFadeIn_b__10_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILJDILDNADJ___TREASUREDUNGEONPLAYFADEIN_B__10_0_OFFSET))(this);
		}

		::System::Void __BattleCollegePlayFadeIn_b__12_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILJDILDNADJ___BATTLECOLLEGEPLAYFADEIN_B__12_0_OFFSET))(this);
		}

	};
