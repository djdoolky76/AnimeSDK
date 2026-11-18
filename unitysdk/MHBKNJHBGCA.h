#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BGMMEOHOOEA.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MHBKNJHBGCA_ALEELPICCHK_OFFSET UNITYSDK_OFFSET(0x18E0B910)
#define MHBKNJHBGCA_CLBGAHIFNPH_OFFSET UNITYSDK_OFFSET(0x18E0ADD0)
#define MHBKNJHBGCA_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x18E0BA60)
#define MHBKNJHBGCA_DMOLIELPHPA_OFFSET UNITYSDK_OFFSET(0x18E0B7B0)
#define MHBKNJHBGCA_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x18E0BA50)
#define MHBKNJHBGCA_GMACOEFEDNH_OFFSET UNITYSDK_OFFSET(0x18E0B0A0)
#define MHBKNJHBGCA_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x18E0B7A0)
#define MHBKNJHBGCA_OEBHMPJENNB_OFFSET UNITYSDK_OFFSET(0x18E0B4D0)
#define MHBKNJHBGCA_PPAFGBILMME_OFFSET UNITYSDK_OFFSET(0x18E0B370)
#define MHBKNJHBGCA__CTOR_OFFSET UNITYSDK_OFFSET(0x18E0ADC0)

inline static constexpr unsigned int MHBKNJHBGCA_TypeDefinitionIndex = 9141;

class MHBKNJHBGCA : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Single>* LBIOCGEHCJN; // 0x10
	::System::Collections::Generic::List_1<::System::Single>* BGIJHKBLNGE; // 0x18
	::BGMMEOHOOEA HBDPAIKANDB; // 0x20
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x30
	::System::Collections::Generic::List_1<::System::Single>* FHFHCKAECLC; // 0x38
	::System::Int32 PNCJEBLIGGL; // 0x40
	::System::Byte CNIAANMNOCF; // 0x44
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x45
	::System::Byte ACIOBDEBDNK; // 0x46
	::System::Byte _padding0[0x1];
	::System::Single FEHKJBGFNAL; // 0x48
	::System::Single MOPJNENHPPF; // 0x4C

	::System::Void _ctor(::BGMMEOHOOEA LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::BGMMEOHOOEA, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + MHBKNJHBGCA__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Collections::Generic::List_1<::System::Single>* CLBGAHIFNPH()
	{
		return ((::System::Collections::Generic::List_1<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MHBKNJHBGCA_CLBGAHIFNPH_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Single>* GMACOEFEDNH()
	{
		return ((::System::Collections::Generic::List_1<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MHBKNJHBGCA_GMACOEFEDNH_OFFSET))(this);
	}

	::System::Single PPAFGBILMME()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MHBKNJHBGCA_PPAFGBILMME_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Single>* OEBHMPJENNB()
	{
		return ((::System::Collections::Generic::List_1<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MHBKNJHBGCA_OEBHMPJENNB_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MHBKNJHBGCA_LJANCIBECFG_OFFSET))(this);
	}

	::System::Single DMOLIELPHPA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MHBKNJHBGCA_DMOLIELPHPA_OFFSET))(this);
	}

	::System::Int32 ALEELPICCHK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MHBKNJHBGCA_ALEELPICCHK_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MHBKNJHBGCA_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHBKNJHBGCA_COFGIJJOFLP_OFFSET))(this);
	}
};
