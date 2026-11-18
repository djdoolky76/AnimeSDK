#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DOHPDHLIKHN.h"
#include "unitysdk/FJAKNHFCIDD.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KBGGKIJMICI_ACHHMKEEEJD_OFFSET UNITYSDK_OFFSET(0x14FC9DB0)
#define KBGGKIJMICI_EGHDKABJHFE_OFFSET UNITYSDK_OFFSET(0x14FC9DE0)
#define KBGGKIJMICI_LAIAJKOHKMB_OFFSET UNITYSDK_OFFSET(0x14FC9D90)
#define KBGGKIJMICI_LBNAMNHJDBC_OFFSET UNITYSDK_OFFSET(0x14FC9A30)
#define KBGGKIJMICI_NHAFDGIDLIO_OFFSET UNITYSDK_OFFSET(0x14FC9D00)
#define KBGGKIJMICI_NLJDMFNFFNJ_OFFSET UNITYSDK_OFFSET(0x14FC9DD0)
#define KBGGKIJMICI_OABPGEBHFIB_OFFSET UNITYSDK_OFFSET(0x14FC9DA0)
#define KBGGKIJMICI_OLFHPFAKDIF_OFFSET UNITYSDK_OFFSET(0x14FC9DC0)
#define KBGGKIJMICI__CTOR_OFFSET UNITYSDK_OFFSET(0x14FC99F0)

inline static constexpr unsigned int KBGGKIJMICI_TypeDefinitionIndex = 76740;

class KBGGKIJMICI : public ::FJAKNHFCIDD
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* _LNECEPNLECD_k__BackingField; // 0x20
	::DOHPDHLIKHN OBNIAHNMHPF; // 0x28
	::System::Int32 _LLMKFMHBBDH_k__BackingField; // 0x2C
	::System::Int32 _KMFFBJAOHKA_k__BackingField; // 0x30

	::System::Void _ctor(::System::Int32 HKHHHJHCGKL, ::DOHPDHLIKHN OBNIAHNMHPF, ::System::Int32 APJGHNMKNDK, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::DOHPDHLIKHN, ::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>*))((::PBYTE)hIl2Cpp + KBGGKIJMICI__CTOR_OFFSET))(this, HKHHHJHCGKL, OBNIAHNMHPF, APJGHNMKNDK, KOIBHLHLMFC);
	}

	::System::Void LBNAMNHJDBC(::FJAKNHFCIDD* FBIGIKNCLHJ)
	{
		return ((::System::Void(*)(::PVOID, ::FJAKNHFCIDD*))((::PBYTE)hIl2Cpp + KBGGKIJMICI_LBNAMNHJDBC_OFFSET))(this, FBIGIKNCLHJ);
	}

	::System::Void NHAFDGIDLIO(::FJAKNHFCIDD* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::FJAKNHFCIDD*))((::PBYTE)hIl2Cpp + KBGGKIJMICI_NHAFDGIDLIO_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void LAIAJKOHKMB(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KBGGKIJMICI_LAIAJKOHKMB_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void OABPGEBHFIB(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KBGGKIJMICI_OABPGEBHFIB_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 ACHHMKEEEJD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KBGGKIJMICI_ACHHMKEEEJD_OFFSET))(this);
	}

	::System::Void OLFHPFAKDIF(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>*))((::PBYTE)hIl2Cpp + KBGGKIJMICI_OLFHPFAKDIF_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* NLJDMFNFFNJ()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KBGGKIJMICI_NLJDMFNFFNJ_OFFSET))(this);
	}

	::System::Int32 EGHDKABJHFE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KBGGKIJMICI_EGHDKABJHFE_OFFSET))(this);
	}
};
