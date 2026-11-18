#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JGELKBLKFHE.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/DPHLOBCHIEA.h"
#include "unitysdk/System/Threading/CancellationToken.h"

class BNJCPKEEACF;
class CANOPECPHCD;
class DCFKHKBLIMA;
namespace System { class Action; }
namespace System { class EventArgs; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HJPCFPCGDPH_ABKKMIGEKFM_OFFSET UNITYSDK_OFFSET(0x17B0BAE0)
#define HJPCFPCGDPH_AFENOAFKLPP_OFFSET UNITYSDK_OFFSET(0x17B0C550)
#define HJPCFPCGDPH_AHDEPICNLDF_OFFSET UNITYSDK_OFFSET(0x17B0B000)
#define HJPCFPCGDPH_CAHDKFGJFBG_OFFSET UNITYSDK_OFFSET(0x17B0C280)
#define HJPCFPCGDPH_CNIKAMOAANF_OFFSET UNITYSDK_OFFSET(0x17B0A8A0)
#define HJPCFPCGDPH_DOPGAFCKMNF_OFFSET UNITYSDK_OFFSET(0x17B0C1F0)
#define HJPCFPCGDPH_DPPFAPBCFNG_OFFSET UNITYSDK_OFFSET(0x17B0AF20)
#define HJPCFPCGDPH_FNOENHHELFF_OFFSET UNITYSDK_OFFSET(0x17B09BF0)
#define HJPCFPCGDPH_GBHHGNIABIO_OFFSET UNITYSDK_OFFSET(0x17B0A930)
#define HJPCFPCGDPH_GOMBHADBBCH_OFFSET UNITYSDK_OFFSET(0x17B0AB00)
#define HJPCFPCGDPH_IJMOICJDPPG_OFFSET UNITYSDK_OFFSET(0x17B099E0)
#define HJPCFPCGDPH_INHKKALCIML_OFFSET UNITYSDK_OFFSET(0x17B09AC0)
#define HJPCFPCGDPH_LMAGHCKABOC_OFFSET UNITYSDK_OFFSET(0x17B0BF50)
#define HJPCFPCGDPH_MDCMHNECIAJ_OFFSET UNITYSDK_OFFSET(0x17B0C000)
#define HJPCFPCGDPH_MLNHEFJGNGA_OFFSET UNITYSDK_OFFSET(0x17B0A7A0)
#define HJPCFPCGDPH_MNOFKCJAGOD_OFFSET UNITYSDK_OFFSET(0x17B082D0)
#define HJPCFPCGDPH_ONSHUTDOWN_OFFSET UNITYSDK_OFFSET(0x17B09090)
#define HJPCFPCGDPH_ONSTART_OFFSET UNITYSDK_OFFSET(0x17B07B60)
#define HJPCFPCGDPH__CTOR_OFFSET UNITYSDK_OFFSET(0x17B09950)

inline static constexpr unsigned int HJPCFPCGDPH_TypeDefinitionIndex = 56972;

class HJPCFPCGDPH : public ::JGELKBLKFHE
{
public:
	static ::System::UInt32* StaticGet_ABCDDKOGHEF()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(HJPCFPCGDPH_TypeDefinitionIndex)->GetStaticField(0x13450);
	}
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::BNJCPKEEACF*>* JOFEFLCFGJI; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJPCFPCGDPH__CTOR_OFFSET))(this);
	}

	::System::Void OnStart()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJPCFPCGDPH_ONSTART_OFFSET))(this);
	}

	::System::Void OnShutDown()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJPCFPCGDPH_ONSHUTDOWN_OFFSET))(this);
	}

	::BNJCPKEEACF* IJMOICJDPPG(::DPHLOBCHIEA PHHDHIBOCKA)
	{
		return ((::BNJCPKEEACF*(*)(::PVOID, ::DPHLOBCHIEA))((::PBYTE)hIl2Cpp + HJPCFPCGDPH_IJMOICJDPPG_OFFSET))(this, PHHDHIBOCKA);
	}

	::System::Void INHKKALCIML(::DPHLOBCHIEA PHHDHIBOCKA)
	{
		return ((::System::Void(*)(::PVOID, ::DPHLOBCHIEA))((::PBYTE)hIl2Cpp + HJPCFPCGDPH_INHKKALCIML_OFFSET))(this, PHHDHIBOCKA);
	}

	::System::Void FNOENHHELFF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJPCFPCGDPH_FNOENHHELFF_OFFSET))(this);
	}

	::DPHLOBCHIEA MLNHEFJGNGA()
	{
		return ((::DPHLOBCHIEA(*)(::PVOID))((::PBYTE)hIl2Cpp + HJPCFPCGDPH_MLNHEFJGNGA_OFFSET))(this);
	}

	::System::Void CNIKAMOAANF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJPCFPCGDPH_CNIKAMOAANF_OFFSET))(this);
	}

	::System::Void GBHHGNIABIO(::DPHLOBCHIEA AAOCANGHBDG, ::CANOPECPHCD* IMCKNHBFJEJ, ::System::Collections::Generic::List_1<::System::Int32>* FPAHJNBMBBM, ::System::Threading::CancellationToken AMIDHEAIANO)
	{
		return ((::System::Void(*)(::PVOID, ::DPHLOBCHIEA, ::CANOPECPHCD*, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + HJPCFPCGDPH_GBHHGNIABIO_OFFSET))(this, AAOCANGHBDG, IMCKNHBFJEJ, FPAHJNBMBBM, AMIDHEAIANO);
	}

	::System::Void GOMBHADBBCH(::System::EventArgs* EIFONLCJOPG)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + HJPCFPCGDPH_GOMBHADBBCH_OFFSET))(this, EIFONLCJOPG);
	}

	::Cysharp::Threading::Tasks::UniTask DPPFAPBCFNG(::DPHLOBCHIEA AAOCANGHBDG, ::CANOPECPHCD* IMCKNHBFJEJ, ::System::Collections::Generic::List_1<::System::Int32>* FPAHJNBMBBM, ::System::Threading::CancellationToken AMIDHEAIANO)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::DPHLOBCHIEA, ::CANOPECPHCD*, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + HJPCFPCGDPH_DPPFAPBCFNG_OFFSET))(this, AAOCANGHBDG, IMCKNHBFJEJ, FPAHJNBMBBM, AMIDHEAIANO);
	}

	::System::Void AHDEPICNLDF(::System::Int32 LJMPPBEMEPP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HJPCFPCGDPH_AHDEPICNLDF_OFFSET))(this, LJMPPBEMEPP);
	}

	::System::Collections::Generic::List_1<::DCFKHKBLIMA*>* ABKKMIGEKFM(::DPHLOBCHIEA PHHDHIBOCKA)
	{
		return ((::System::Collections::Generic::List_1<::DCFKHKBLIMA*>*(*)(::PVOID, ::DPHLOBCHIEA))((::PBYTE)hIl2Cpp + HJPCFPCGDPH_ABKKMIGEKFM_OFFSET))(this, PHHDHIBOCKA);
	}

	::DCFKHKBLIMA* LMAGHCKABOC(::DPHLOBCHIEA PHHDHIBOCKA, ::System::Int32 LJMPPBEMEPP)
	{
		return ((::DCFKHKBLIMA*(*)(::PVOID, ::DPHLOBCHIEA, ::System::Int32))((::PBYTE)hIl2Cpp + HJPCFPCGDPH_LMAGHCKABOC_OFFSET))(this, PHHDHIBOCKA, LJMPPBEMEPP);
	}

	::System::Void MDCMHNECIAJ(::System::EventArgs* EIFONLCJOPG)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + HJPCFPCGDPH_MDCMHNECIAJ_OFFSET))(this, EIFONLCJOPG);
	}

	::System::Void DOPGAFCKMNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJPCFPCGDPH_DOPGAFCKMNF_OFFSET))(this);
	}

	::System::Void MNOFKCJAGOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJPCFPCGDPH_MNOFKCJAGOD_OFFSET))(this);
	}

	::System::Void CAHDKFGJFBG(::System::EventArgs* EIFONLCJOPG)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + HJPCFPCGDPH_CAHDKFGJFBG_OFFSET))(this, EIFONLCJOPG);
	}

	::System::Void AFENOAFKLPP(::System::Int32 HALFGBEAKAK, ::System::Boolean OEFELJAHKBN, ::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + HJPCFPCGDPH_AFENOAFKLPP_OFFSET))(this, HALFGBEAKAK, OEFELJAHKBN, EJGDHCIBCJH);
	}
};
