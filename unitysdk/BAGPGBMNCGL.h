#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
class CEFFHDKFCPN;
class NNKPAIAPPHP;
class PDCLCPAKHAI;
namespace RPG::Client { class MarbleDamageTextInfo; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BAGPGBMNCGL_AGFFIMAINOK_OFFSET UNITYSDK_OFFSET(0x199D47C0)
#define BAGPGBMNCGL_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x199D4CA0)
#define BAGPGBMNCGL_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x199D4DE0)
#define BAGPGBMNCGL_BHHCDELJDPP_OFFSET UNITYSDK_OFFSET(0x199D3C90)
#define BAGPGBMNCGL_CTOR_OFFSET UNITYSDK_OFFSET(0x199D4F00)
#define BAGPGBMNCGL_DNHAHCKBCME_OFFSET UNITYSDK_OFFSET(0x199D4310)
#define BAGPGBMNCGL_GCIHCJPLLIN_OFFSET UNITYSDK_OFFSET(0x199D4460)
#define BAGPGBMNCGL_GOLNGLBKFBP_OFFSET UNITYSDK_OFFSET(0x199D3FB0)
#define BAGPGBMNCGL_HENHANNPFOB_OFFSET UNITYSDK_OFFSET(0x199D3E60)
#define BAGPGBMNCGL_IHJICLCHIJD_OFFSET UNITYSDK_OFFSET(0x199D4810)
#define BAGPGBMNCGL_KDBNNJGCMAA_OFFSET UNITYSDK_OFFSET(0x199D4B90)
#define BAGPGBMNCGL_LFFCCMHHNBH_OFFSET UNITYSDK_OFFSET(0x199D4A80)
#define BAGPGBMNCGL_MKPLLPMIKFG_OFFSET UNITYSDK_OFFSET(0x199D4920)
#define BAGPGBMNCGL_NCDPJPFMPCF_OFFSET UNITYSDK_OFFSET(0x199D4970)
#define BAGPGBMNCGL_NCGEKBHFJNF_OFFSET UNITYSDK_OFFSET(0x199D2B70)
#define BAGPGBMNCGL_NPBEHFONGDK_OFFSET UNITYSDK_OFFSET(0x199D3AC0)
#define BAGPGBMNCGL_PIBELACGCKP_OFFSET UNITYSDK_OFFSET(0x199D46C0)
#define BAGPGBMNCGL_PIFGBPJPJLL_OFFSET UNITYSDK_OFFSET(0x199D4210)
#define BAGPGBMNCGL__INITVARONCE_OFFSET UNITYSDK_OFFSET(0x199D2930)
#define BAGPGBMNCGL__ONBIND_OFFSET UNITYSDK_OFFSET(0x199D2970)
#define BAGPGBMNCGL__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x199D39C0)
#define BAGPGBMNCGL__ONTICK_OFFSET UNITYSDK_OFFSET(0x199D3A50)
#define BAGPGBMNCGL__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x199D2B20)

inline static constexpr unsigned int BAGPGBMNCGL_TypeDefinitionIndex = 67768;

	class BAGPGBMNCGL : public ::FMPCODLIOLG
	{
	public:
		::System::Collections::Generic::List_1<::CEFFHDKFCPN*>* MJKJNLFBPGF; // 0x60
		::System::Collections::Generic::List_1<::NNKPAIAPPHP*>* LPFDIFLNOLC; // 0x68
		::System::Collections::Generic::List_1<::PDCLCPAKHAI*>* DPEINDBPKCA; // 0x70
		::System::Collections::Generic::List_1<::RPG::Client::MarbleDamageTextInfo*>* IACEDLGPNGO; // 0x78
		// static const ::System::Object EEKFOFLGHBF; // 0x0
		// static const ::System::Object JDBHGNPFMGB; // 0x0
		// static const ::System::Object CBNILLMFLEM; // 0x0
		// static const ::System::String* PGBMHLJHDHM; // 0x0
		// static const ::System::String* JKDKACEAJMI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAGPGBMNCGL_CTOR_OFFSET))(this);
		}

		::System::Void _InitVarOnce()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAGPGBMNCGL__INITVARONCE_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAGPGBMNCGL__ONBIND_OFFSET))(this);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAGPGBMNCGL__SETUPVIEW_OFFSET))(this);
		}

		::System::Void _OnDispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAGPGBMNCGL__ONDISPOSE_OFFSET))(this);
		}

		::System::Void _OnTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BAGPGBMNCGL__ONTICK_OFFSET))(this, a1);
		}

		::System::Void NPBEHFONGDK(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BAGPGBMNCGL_NPBEHFONGDK_OFFSET))(this, a1);
		}

		::System::Void BHHCDELJDPP(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BAGPGBMNCGL_BHHCDELJDPP_OFFSET))(this, a1);
		}

		::System::Void AGFFIMAINOK(::RPG::Client::MarbleDamageTextInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MarbleDamageTextInfo*))((::PBYTE)hIl2Cpp + BAGPGBMNCGL_AGFFIMAINOK_OFFSET))(this, a1);
		}

		::System::Void MKPLLPMIKFG(::CEFFHDKFCPN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CEFFHDKFCPN*))((::PBYTE)hIl2Cpp + BAGPGBMNCGL_MKPLLPMIKFG_OFFSET))(this, a1);
		}

		::System::Void IHJICLCHIJD(::RPG::Client::MarbleDamageTextInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MarbleDamageTextInfo*))((::PBYTE)hIl2Cpp + BAGPGBMNCGL_IHJICLCHIJD_OFFSET))(this, a1);
		}

		::System::Void NCDPJPFMPCF(::CEFFHDKFCPN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CEFFHDKFCPN*))((::PBYTE)hIl2Cpp + BAGPGBMNCGL_NCDPJPFMPCF_OFFSET))(this, a1);
		}

		::System::Void GOLNGLBKFBP(::NNKPAIAPPHP* a1, ::RPG::Client::MarbleDamageTextInfo* a2)
		{
			return ((::System::Void(*)(::PVOID, ::NNKPAIAPPHP*, ::RPG::Client::MarbleDamageTextInfo*))((::PBYTE)hIl2Cpp + BAGPGBMNCGL_GOLNGLBKFBP_OFFSET))(this, a1, a2);
		}

		::System::Void GCIHCJPLLIN(::PDCLCPAKHAI* a1, ::CEFFHDKFCPN* a2)
		{
			return ((::System::Void(*)(::PVOID, ::PDCLCPAKHAI*, ::CEFFHDKFCPN*))((::PBYTE)hIl2Cpp + BAGPGBMNCGL_GCIHCJPLLIN_OFFSET))(this, a1, a2);
		}

		::NNKPAIAPPHP* HENHANNPFOB()
		{
			return ((::NNKPAIAPPHP*(*)(::PVOID))((::PBYTE)hIl2Cpp + BAGPGBMNCGL_HENHANNPFOB_OFFSET))(this);
		}

		::PDCLCPAKHAI* DNHAHCKBCME()
		{
			return ((::PDCLCPAKHAI*(*)(::PVOID))((::PBYTE)hIl2Cpp + BAGPGBMNCGL_DNHAHCKBCME_OFFSET))(this);
		}

		::NNKPAIAPPHP* PIFGBPJPJLL()
		{
			return ((::NNKPAIAPPHP*(*)(::PVOID))((::PBYTE)hIl2Cpp + BAGPGBMNCGL_PIFGBPJPJLL_OFFSET))(this);
		}

		::PDCLCPAKHAI* PIBELACGCKP()
		{
			return ((::PDCLCPAKHAI*(*)(::PVOID))((::PBYTE)hIl2Cpp + BAGPGBMNCGL_PIBELACGCKP_OFFSET))(this);
		}

		::System::Void NCGEKBHFJNF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAGPGBMNCGL_NCGEKBHFJNF_OFFSET))(this);
		}

		::System::Void LFFCCMHHNBH(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BAGPGBMNCGL_LFFCCMHHNBH_OFFSET))(this, a1);
		}

		::System::Void KDBNNJGCMAA(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BAGPGBMNCGL_KDBNNJGCMAA_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAGPGBMNCGL_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAGPGBMNCGL_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};
