#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BJCMHPNAICD.h"
#include "unitysdk/HNFADNMADCK.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NCGAIANKHNE_AKJAILHOIEC_OFFSET UNITYSDK_OFFSET(0x18E1AB20)
#define NCGAIANKHNE_BHDDDKEFHIH_OFFSET UNITYSDK_OFFSET(0x18E1A8A0)
#define NCGAIANKHNE_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x18E1A380)
#define NCGAIANKHNE_EJMKLCNAHIE_OFFSET UNITYSDK_OFFSET(0x18E1A5A0)
#define NCGAIANKHNE_EMCKDNNEPJA_OFFSET UNITYSDK_OFFSET(0x18E1A080)
#define NCGAIANKHNE_FDGFFGLNNMI_OFFSET UNITYSDK_OFFSET(0x18E1A9E0)
#define NCGAIANKHNE_FKGHIGBMBEP_OFFSET UNITYSDK_OFFSET(0x18E1A480)
#define NCGAIANKHNE_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x18E1A590)
#define NCGAIANKHNE_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x18E1A470)
#define NCGAIANKHNE__CTOR_OFFSET UNITYSDK_OFFSET(0x18E1A070)

inline static constexpr unsigned int NCGAIANKHNE_TypeDefinitionIndex = 13662;

class NCGAIANKHNE : public ::System::Object
{
public:
	::System::String* OPOHNGDAJLD; // 0x10
	::System::Collections::Generic::List_1<::HNFADNMADCK>* IBJEKCIAKKE; // 0x18
	::System::Collections::Generic::List_1<::HNFADNMADCK>* OEGOEJMNOAL; // 0x20
	::BJCMHPNAICD HBDPAIKANDB; // 0x28
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x38
	::System::Int32 NDKCOMIBDLN; // 0x40
	::System::Int32 MANMABKMPMG; // 0x44
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x48
	::System::Byte CNIAANMNOCF; // 0x49
	::System::Byte ACIOBDEBDNK; // 0x4A
	::System::Byte _padding0[0x1];
	::System::Int32 KMCGEFBLCHO; // 0x4C

	::System::Void _ctor(::BJCMHPNAICD LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::BJCMHPNAICD, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + NCGAIANKHNE__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Collections::Generic::List_1<::HNFADNMADCK>* EMCKDNNEPJA()
	{
		return ((::System::Collections::Generic::List_1<::HNFADNMADCK>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCGAIANKHNE_EMCKDNNEPJA_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCGAIANKHNE_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NCGAIANKHNE_LJANCIBECFG_OFFSET))(this);
	}

	::System::String* FKGHIGBMBEP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCGAIANKHNE_FKGHIGBMBEP_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NCGAIANKHNE_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Collections::Generic::List_1<::HNFADNMADCK>* EJMKLCNAHIE()
	{
		return ((::System::Collections::Generic::List_1<::HNFADNMADCK>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCGAIANKHNE_EJMKLCNAHIE_OFFSET))(this);
	}

	::System::Int32 BHDDDKEFHIH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NCGAIANKHNE_BHDDDKEFHIH_OFFSET))(this);
	}

	::System::Int32 FDGFFGLNNMI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NCGAIANKHNE_FDGFFGLNNMI_OFFSET))(this);
	}

	::System::Int32 AKJAILHOIEC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NCGAIANKHNE_AKJAILHOIEC_OFFSET))(this);
	}
};
