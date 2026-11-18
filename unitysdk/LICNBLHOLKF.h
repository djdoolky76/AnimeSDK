#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MMMAAMFILEI.h"
#include "unitysdk/System/Object.h"

class JDKIIIOGHAN;
class MFMNHELPIMP;
class PGPGCALLBHK;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Transform; }

#define LICNBLHOLKF_ABDFGFEAPBA_OFFSET UNITYSDK_OFFSET(0xD42EF90)
#define LICNBLHOLKF_CHKEOFALFDL_OFFSET UNITYSDK_OFFSET(0xD430460)
#define LICNBLHOLKF_COPIDBEMEIE_OFFSET UNITYSDK_OFFSET(0xD430220)
#define LICNBLHOLKF_DEMAHOFGAEI_OFFSET UNITYSDK_OFFSET(0xD42FE60)
#define LICNBLHOLKF_EAIEMKCKHMD_OFFSET UNITYSDK_OFFSET(0xD42FE50)
#define LICNBLHOLKF_EKJFFPKOAAN_OFFSET UNITYSDK_OFFSET(0xD42F700)
#define LICNBLHOLKF_FHBMJHNAGBG_OFFSET UNITYSDK_OFFSET(0xD4302F0)
#define LICNBLHOLKF_GGDJKKPFOJF_OFFSET UNITYSDK_OFFSET(0xD42E9F0)
#define LICNBLHOLKF_HNDGJKPNIHA_OFFSET UNITYSDK_OFFSET(0xD42F290)
#define LICNBLHOLKF_IMHLCGLJHNC_OFFSET UNITYSDK_OFFSET(0xD42F010)
#define LICNBLHOLKF_JPCJOJCDCIF_OFFSET UNITYSDK_OFFSET(0xD42F2D0)
#define LICNBLHOLKF_OKJCHFGIKBH_OFFSET UNITYSDK_OFFSET(0xD430230)
#define LICNBLHOLKF_ONTRIGGERENTER_OFFSET UNITYSDK_OFFSET(0xD42F1F0)
#define LICNBLHOLKF_ONTRIGGEREXIT_OFFSET UNITYSDK_OFFSET(0xD42F240)
#define LICNBLHOLKF__CTOR_OFFSET UNITYSDK_OFFSET(0xD42E810)

inline static constexpr unsigned int LICNBLHOLKF_TypeDefinitionIndex = 73681;

class LICNBLHOLKF : public ::System::Object
{
public:
	::MFMNHELPIMP* NCLAHIKBBBH; // 0x10
	::System::Collections::Generic::List_1<::UnityEngine::Transform*>* NBFGOJCNHIC; // 0x18
	::System::Collections::Generic::List_1<::JDKIIIOGHAN*>* HIMFMBCAKIG; // 0x20
	::System::Collections::Generic::List_1<::UnityEngine::Transform*>* CPLBJBGOBLE; // 0x28
	::PGPGCALLBHK* FFGIIGDHENJ; // 0x30
	::System::Single FEFJGNEIODA; // 0x38
	::System::Single BNNINOAOHNH; // 0x3C
	::System::Int32 EBEMKLDOCKA; // 0x40
	::System::Single ELMBDMAHFOF; // 0x44
	::MMMAAMFILEI JKBLDFBGBPK; // 0x48
	::System::Single LEACLGIELGL; // 0x4C
	::System::Single DICENAHFINB; // 0x50

	::System::Void _ctor(::MFMNHELPIMP* NCLAHIKBBBH)
	{
		return ((::System::Void(*)(::PVOID, ::MFMNHELPIMP*))((::PBYTE)hIl2Cpp + LICNBLHOLKF__CTOR_OFFSET))(this, NCLAHIKBBBH);
	}

	::System::Void ABDFGFEAPBA(::UnityEngine::Collider* HODAIDNDKHD)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + LICNBLHOLKF_ABDFGFEAPBA_OFFSET))(this, HODAIDNDKHD);
	}

	::System::Void IMHLCGLJHNC(::UnityEngine::Collider* HODAIDNDKHD)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + LICNBLHOLKF_IMHLCGLJHNC_OFFSET))(this, HODAIDNDKHD);
	}

	::System::Void OnTriggerEnter(::UnityEngine::Collider* HODAIDNDKHD, ::MFMNHELPIMP* NCLAHIKBBBH)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*, ::MFMNHELPIMP*))((::PBYTE)hIl2Cpp + LICNBLHOLKF_ONTRIGGERENTER_OFFSET))(this, HODAIDNDKHD, NCLAHIKBBBH);
	}

	::System::Void OnTriggerExit(::UnityEngine::Collider* HODAIDNDKHD, ::MFMNHELPIMP* NCLAHIKBBBH)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*, ::MFMNHELPIMP*))((::PBYTE)hIl2Cpp + LICNBLHOLKF_ONTRIGGEREXIT_OFFSET))(this, HODAIDNDKHD, NCLAHIKBBBH);
	}

	::System::Void HNDGJKPNIHA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LICNBLHOLKF_HNDGJKPNIHA_OFFSET))(this);
	}

	::System::Void JPCJOJCDCIF(::MFMNHELPIMP* NCLAHIKBBBH)
	{
		return ((::System::Void(*)(::PVOID, ::MFMNHELPIMP*))((::PBYTE)hIl2Cpp + LICNBLHOLKF_JPCJOJCDCIF_OFFSET))(this, NCLAHIKBBBH);
	}

	::System::Void EKJFFPKOAAN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LICNBLHOLKF_EKJFFPKOAAN_OFFSET))(this);
	}

	::MFMNHELPIMP* EAIEMKCKHMD()
	{
		return ((::MFMNHELPIMP*(*)(::PVOID))((::PBYTE)hIl2Cpp + LICNBLHOLKF_EAIEMKCKHMD_OFFSET))(this);
	}

	::System::Void DEMAHOFGAEI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LICNBLHOLKF_DEMAHOFGAEI_OFFSET))(this);
	}

	::PGPGCALLBHK* COPIDBEMEIE()
	{
		return ((::PGPGCALLBHK*(*)(::PVOID))((::PBYTE)hIl2Cpp + LICNBLHOLKF_COPIDBEMEIE_OFFSET))(this);
	}

	::System::Void OKJCHFGIKBH(::System::Single FNIOPKPHDEH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LICNBLHOLKF_OKJCHFGIKBH_OFFSET))(this, FNIOPKPHDEH);
	}

	::System::Void FHBMJHNAGBG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LICNBLHOLKF_FHBMJHNAGBG_OFFSET))(this);
	}

	::System::Void CHKEOFALFDL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LICNBLHOLKF_CHKEOFALFDL_OFFSET))(this);
	}

	::System::Void GGDJKKPFOJF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LICNBLHOLKF_GGDJKKPFOJF_OFFSET))(this);
	}
};
