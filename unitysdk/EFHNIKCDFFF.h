#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DDLACPFFNBL.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EFHNIKCDFFF_BBDDDBILPDG_OFFSET UNITYSDK_OFFSET(0x1A19C590)
#define EFHNIKCDFFF_CIADMPMDAEJ_OFFSET UNITYSDK_OFFSET(0x1A19C120)
#define EFHNIKCDFFF_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1A19C9B0)
#define EFHNIKCDFFF_FAAICIAFNEC_OFFSET UNITYSDK_OFFSET(0x1A19C450)
#define EFHNIKCDFFF_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1A19C6D0)
#define EFHNIKCDFFF_GNKIIJKJFLG_OFFSET UNITYSDK_OFFSET(0x1A19C2C0)
#define EFHNIKCDFFF_HFKNBJCGIKA_OFFSET UNITYSDK_OFFSET(0x1A19BE50)
#define EFHNIKCDFFF_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1A19C2B0)
#define EFHNIKCDFFF_NCDLBDKNLPF_OFFSET UNITYSDK_OFFSET(0x1A19C6E0)
#define EFHNIKCDFFF__CTOR_OFFSET UNITYSDK_OFFSET(0x1A158FE0)

inline static constexpr unsigned int EFHNIKCDFFF_TypeDefinitionIndex = 17432;

class EFHNIKCDFFF : public ::System::Object
{
public:
	::System::String* NPEJCEGLPGF; // 0x10
	::System::String* FJACCBKBIFG; // 0x18
	::System::Collections::Generic::List_1<::System::Boolean>* EFFDPEMGMNG; // 0x20
	::System::Collections::Generic::List_1<::System::Int32>* IAEOIHAOJNC; // 0x28
	::DDLACPFFNBL HBDPAIKANDB; // 0x30
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x40
	::System::Int32 PLOKBBJGFCL; // 0x48
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x4C
	::System::Byte CNIAANMNOCF; // 0x4D
	::System::Byte ACIOBDEBDNK; // 0x4E
	::System::Byte _padding0[0x1];
	::System::Int32 CBBFDHJBGGB; // 0x50

	::System::Void _ctor(::DDLACPFFNBL LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::DDLACPFFNBL, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + EFHNIKCDFFF__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Collections::Generic::List_1<::System::Int32>* HFKNBJCGIKA()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EFHNIKCDFFF_HFKNBJCGIKA_OFFSET))(this);
	}

	::System::String* CIADMPMDAEJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EFHNIKCDFFF_CIADMPMDAEJ_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EFHNIKCDFFF_LJANCIBECFG_OFFSET))(this);
	}

	::System::String* GNKIIJKJFLG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EFHNIKCDFFF_GNKIIJKJFLG_OFFSET))(this);
	}

	::System::Int32 FAAICIAFNEC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EFHNIKCDFFF_FAAICIAFNEC_OFFSET))(this);
	}

	::System::Int32 BBDDDBILPDG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EFHNIKCDFFF_BBDDDBILPDG_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EFHNIKCDFFF_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Collections::Generic::List_1<::System::Boolean>* NCDLBDKNLPF()
	{
		return ((::System::Collections::Generic::List_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EFHNIKCDFFF_NCDLBDKNLPF_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFHNIKCDFFF_COFGIJJOFLP_OFFSET))(this);
	}
};
