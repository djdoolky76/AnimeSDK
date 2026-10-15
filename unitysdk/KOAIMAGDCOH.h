#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"
class KOAIMAGDCOH_JHMIPHMOCHA;
class KOAIMAGDCOH_MPBMCPMMMHH;
namespace RPG::Client { class MonoTVScreenControl; }
namespace RPG::Client { class MonoTVScreenLod; }
namespace RPG::Client { class VideoTexture; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class MonoBehaviour; }
namespace UnityEngine { class Texture2D; }

#define KOAIMAGDCOH_AEHJDPLGCIC_OFFSET UNITYSDK_OFFSET(0xB587E40)
#define KOAIMAGDCOH_BPNFEJCPAND_OFFSET UNITYSDK_OFFSET(0xB586D30)
#define KOAIMAGDCOH_CTOR_OFFSET UNITYSDK_OFFSET(0xB588A90)
#define KOAIMAGDCOH_DCIMEJMLFJB_OFFSET UNITYSDK_OFFSET(0xB587200)
#define KOAIMAGDCOH_DHPGJJBPGOI_OFFSET UNITYSDK_OFFSET(0xB586A00)
#define KOAIMAGDCOH_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB5870A0)
#define KOAIMAGDCOH_EEJIGJCNPHL_OFFSET UNITYSDK_OFFSET(0xB586AA0)
#define KOAIMAGDCOH_EGLKDKFFLBN_OFFSET UNITYSDK_OFFSET(0xB588A40)
#define KOAIMAGDCOH_EPEJKLCCKDO_OFFSET UNITYSDK_OFFSET(0xB5885D0)
#define KOAIMAGDCOH_FAHDHGIDMDC_OFFSET UNITYSDK_OFFSET(0xB586F40)
#define KOAIMAGDCOH_FBEIHOLDIIM_OFFSET UNITYSDK_OFFSET(0xB587CC0)
#define KOAIMAGDCOH_FFBNPLBJOPE_OFFSET UNITYSDK_OFFSET(0xB586C40)
#define KOAIMAGDCOH_FFFEIMLOCJH_OFFSET UNITYSDK_OFFSET(0xB587000)
#define KOAIMAGDCOH_FNACALDOOIF_OFFSET UNITYSDK_OFFSET(0xB587100)
#define KOAIMAGDCOH_HMPFMAJFFLE_OFFSET UNITYSDK_OFFSET(0xB586E30)
#define KOAIMAGDCOH_IDNDIKBHPKA_OFFSET UNITYSDK_OFFSET(0xB5867E0)
#define KOAIMAGDCOH_JGEPGPBFBCO_OFFSET UNITYSDK_OFFSET(0xB5873B0)
#define KOAIMAGDCOH_KGOKBELAILP_OFFSET UNITYSDK_OFFSET(0xB5863E0)
#define KOAIMAGDCOH_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xB586ED0)
#define KOAIMAGDCOH_LFBCOHIHLHK_OFFSET UNITYSDK_OFFSET(0xB587A90)
#define KOAIMAGDCOH_LHJEGCHAJAN_OFFSET UNITYSDK_OFFSET(0xB5877F0)
#define KOAIMAGDCOH_LMNMPKHIOCB_OFFSET UNITYSDK_OFFSET(0xB5880D0)
#define KOAIMAGDCOH_MDDGPPAOOGG_OFFSET UNITYSDK_OFFSET(0xB5881D0)
#define KOAIMAGDCOH_MFCDKJIHDEH_OFFSET UNITYSDK_OFFSET(0xB5872C0)
#define KOAIMAGDCOH_NGAKAPCFABC_OFFSET UNITYSDK_OFFSET(0xB588410)
#define KOAIMAGDCOH_NHPHLABCMOI_OFFSET UNITYSDK_OFFSET(0xB587720)
#define KOAIMAGDCOH_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0xB586F90)
#define KOAIMAGDCOH_NPHKFPBALHO_OFFSET UNITYSDK_OFFSET(0xB587530)
#define KOAIMAGDCOH_OIKBHGICGMF_OFFSET UNITYSDK_OFFSET(0xB587C40)
#define KOAIMAGDCOH_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0xB588490)
#define KOAIMAGDCOH_PBLJIHOHIAB_OFFSET UNITYSDK_OFFSET(0xB588150)
#define KOAIMAGDCOH_PCNAKDOLCCD_OFFSET UNITYSDK_OFFSET(0xB5871B0)
#define KOAIMAGDCOH_PEKMBKMNCMC_OFFSET UNITYSDK_OFFSET(0xB587310)
#define KOAIMAGDCOH_PLNCKDADELF_OFFSET UNITYSDK_OFFSET(0xB588680)

inline static constexpr unsigned int KOAIMAGDCOH_TypeDefinitionIndex = 68804;

	class KOAIMAGDCOH : public ::RPG::Client::BehaviorBase
	{
	public:
		::RPG::Client::VideoTexture* GLMAMEPIJPO; // 0x18
		::RPG::Client::MonoTVScreenLod* LLLNNJMGKJL; // 0x20
		::RPG::Client::MonoTVScreenControl* LDDGOAGJNPF; // 0x28
		::KOAIMAGDCOH_MPBMCPMMMHH* BGDLMLKDDKL; // 0x30
		::RPG::GameCore::GameEntity* ICHEDAEHEBG; // 0x38
		::KOAIMAGDCOH_JHMIPHMOCHA* LFGMLJCCPCH; // 0x40
		::KOAIMAGDCOH_MPBMCPMMMHH* INLJIGPACJN; // 0x48
		::System::UInt32 KCBLNCKPNNI; // 0x50
		::System::Boolean IJNPLKCMLLL; // 0x54
		::System::Boolean NDFPMFHADNJ; // 0x55
		::System::Byte _padding0[0x2];
		::System::Single EEOFFMIMFCG; // 0x58
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOAIMAGDCOH_CTOR_OFFSET))(this);
		}

		::KOAIMAGDCOH_JHMIPHMOCHA* KGOKBELAILP(::System::Int32 a1)
		{
			return ((::KOAIMAGDCOH_JHMIPHMOCHA*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KOAIMAGDCOH_KGOKBELAILP_OFFSET))(this, a1);
		}

		::KOAIMAGDCOH_JHMIPHMOCHA* IDNDIKBHPKA(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::KOAIMAGDCOH_JHMIPHMOCHA*(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + KOAIMAGDCOH_IDNDIKBHPKA_OFFSET))(this, a1);
		}

		::System::Void DHPGJJBPGOI(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KOAIMAGDCOH_DHPGJJBPGOI_OFFSET))(this, a1);
		}

		::System::Void HMPFMAJFFLE(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + KOAIMAGDCOH_HMPFMAJFFLE_OFFSET))(this, a1);
		}

		::System::Void KPJGDHLENIP(::UnityEngine::MonoBehaviour* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + KOAIMAGDCOH_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void FAHDHGIDMDC(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + KOAIMAGDCOH_FAHDHGIDMDC_OFFSET))(this, a1);
		}

		::System::Void NPAFMEBNFOB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOAIMAGDCOH_NPAFMEBNFOB_OFFSET))(this);
		}

		::System::Void EEJIGJCNPHL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOAIMAGDCOH_EEJIGJCNPHL_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOAIMAGDCOH_DISPOSE_OFFSET))(this);
		}

		::System::Void FNACALDOOIF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOAIMAGDCOH_FNACALDOOIF_OFFSET))(this);
		}

		::System::Void PCNAKDOLCCD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOAIMAGDCOH_PCNAKDOLCCD_OFFSET))(this);
		}

		::System::Void MFCDKJIHDEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOAIMAGDCOH_MFCDKJIHDEH_OFFSET))(this);
		}

		::System::Void FFBNPLBJOPE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOAIMAGDCOH_FFBNPLBJOPE_OFFSET))(this);
		}

		::System::Void BPNFEJCPAND()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOAIMAGDCOH_BPNFEJCPAND_OFFSET))(this);
		}

		::System::Void JGEPGPBFBCO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOAIMAGDCOH_JGEPGPBFBCO_OFFSET))(this);
		}

		::System::Void PEKMBKMNCMC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOAIMAGDCOH_PEKMBKMNCMC_OFFSET))(this);
		}

		::System::Void NPHKFPBALHO(::KOAIMAGDCOH_MPBMCPMMMHH* a1, ::UnityEngine::Texture2D* a2)
		{
			return ((::System::Void(*)(::PVOID, ::KOAIMAGDCOH_MPBMCPMMMHH*, ::UnityEngine::Texture2D*))((::PBYTE)hIl2Cpp + KOAIMAGDCOH_NPHKFPBALHO_OFFSET))(this, a1, a2);
		}

		::System::Void LHJEGCHAJAN(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + KOAIMAGDCOH_LHJEGCHAJAN_OFFSET))(this, a1);
		}

		::System::Void LFBCOHIHLHK(::KOAIMAGDCOH_MPBMCPMMMHH* a1, ::System::String* a2, ::UnityEngine::Texture2D* a3)
		{
			return ((::System::Void(*)(::PVOID, ::KOAIMAGDCOH_MPBMCPMMMHH*, ::System::String*, ::UnityEngine::Texture2D*))((::PBYTE)hIl2Cpp + KOAIMAGDCOH_LFBCOHIHLHK_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OIKBHGICGMF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOAIMAGDCOH_OIKBHGICGMF_OFFSET))(this);
		}

		::System::Void FBEIHOLDIIM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOAIMAGDCOH_FBEIHOLDIIM_OFFSET))(this);
		}

		::System::Void AEHJDPLGCIC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOAIMAGDCOH_AEHJDPLGCIC_OFFSET))(this);
		}

		::System::Boolean LMNMPKHIOCB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KOAIMAGDCOH_LMNMPKHIOCB_OFFSET))(this);
		}

		::System::Void PBLJIHOHIAB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOAIMAGDCOH_PBLJIHOHIAB_OFFSET))(this);
		}

		::System::Void MDDGPPAOOGG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOAIMAGDCOH_MDDGPPAOOGG_OFFSET))(this);
		}

		::System::Void NGAKAPCFABC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOAIMAGDCOH_NGAKAPCFABC_OFFSET))(this);
		}

		::System::Void DCIMEJMLFJB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOAIMAGDCOH_DCIMEJMLFJB_OFFSET))(this);
		}

		::System::Void FFFEIMLOCJH(::KOAIMAGDCOH_MPBMCPMMMHH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KOAIMAGDCOH_MPBMCPMMMHH*))((::PBYTE)hIl2Cpp + KOAIMAGDCOH_FFFEIMLOCJH_OFFSET))(this, a1);
		}

		::System::Void NHPHLABCMOI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOAIMAGDCOH_NHPHLABCMOI_OFFSET))(this);
		}

		::System::Void PAGKOAEOLKA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOAIMAGDCOH_PAGKOAEOLKA_OFFSET))(this);
		}

		::System::Void EPEJKLCCKDO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOAIMAGDCOH_EPEJKLCCKDO_OFFSET))(this);
		}

		::System::Void PLNCKDADELF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOAIMAGDCOH_PLNCKDADELF_OFFSET))(this);
		}

		::System::Void EGLKDKFFLBN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOAIMAGDCOH_EGLKDKFFLBN_OFFSET))(this);
		}

	};
