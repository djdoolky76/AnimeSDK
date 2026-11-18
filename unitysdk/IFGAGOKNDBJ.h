#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EMECPADFOCL.h"
#include "unitysdk/HNFADNMADCK.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IFGAGOKNDBJ_BKBKCEBFJFG_OFFSET UNITYSDK_OFFSET(0x15A95B20)
#define IFGAGOKNDBJ_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x15A95A30)
#define IFGAGOKNDBJ_EBGBOIKFOAM_OFFSET UNITYSDK_OFFSET(0x15A95E30)
#define IFGAGOKNDBJ_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x15A95E20)
#define IFGAGOKNDBJ_KLNNNNBFIAB_OFFSET UNITYSDK_OFFSET(0x15A95510)
#define IFGAGOKNDBJ_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x15A95500)
#define IFGAGOKNDBJ_NKHPLKJMEJO_OFFSET UNITYSDK_OFFSET(0x15A95920)
#define IFGAGOKNDBJ_POAFNGLHNEJ_OFFSET UNITYSDK_OFFSET(0x15A95810)
#define IFGAGOKNDBJ__CTOR_OFFSET UNITYSDK_OFFSET(0x15A954F0)

inline static constexpr unsigned int IFGAGOKNDBJ_TypeDefinitionIndex = 9755;

class IFGAGOKNDBJ : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* EEGDHCLPHAJ; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* JEICCGALJND; // 0x18
	::System::String* ACMDNFMEMGK; // 0x20
	::EMECPADFOCL HBDPAIKANDB; // 0x28
	::System::Collections::Generic::List_1<::HNFADNMADCK>* JAFNMLPIJCL; // 0x38
	::System::String* GOCBOFIIGDA; // 0x40
	::System::String* PCMNDNDEJAH; // 0x48
	::System::Collections::Generic::List_1<::HNFADNMADCK>* HNONABFMPGB; // 0x50
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x58
	::System::Int32 EFMFKHEOCJF; // 0x60
	::System::Byte CNIAANMNOCF; // 0x64
	::System::Byte ACIOBDEBDNK; // 0x65
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x66

	::System::Void _ctor(::EMECPADFOCL LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::EMECPADFOCL, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + IFGAGOKNDBJ__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IFGAGOKNDBJ_LJANCIBECFG_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::HNFADNMADCK>* KLNNNNBFIAB()
	{
		return ((::System::Collections::Generic::List_1<::HNFADNMADCK>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFGAGOKNDBJ_KLNNNNBFIAB_OFFSET))(this);
	}

	::System::String* POAFNGLHNEJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFGAGOKNDBJ_POAFNGLHNEJ_OFFSET))(this);
	}

	::System::String* NKHPLKJMEJO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFGAGOKNDBJ_NKHPLKJMEJO_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFGAGOKNDBJ_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::HNFADNMADCK>* BKBKCEBFJFG()
	{
		return ((::System::Collections::Generic::List_1<::HNFADNMADCK>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFGAGOKNDBJ_BKBKCEBFJFG_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IFGAGOKNDBJ_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::String* EBGBOIKFOAM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFGAGOKNDBJ_EBGBOIKFOAM_OFFSET))(this);
	}
};
