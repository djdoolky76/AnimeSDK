#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JHPHNLPJNGI.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NJHGMNCIIKD_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1C094980)
#define NJHGMNCIIKD_EPKHFGDILDG_OFFSET UNITYSDK_OFFSET(0x1C094480)
#define NJHGMNCIIKD_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1C094590)
#define NJHGMNCIIKD_HAICFECAGPF_OFFSET UNITYSDK_OFFSET(0x1C094BC0)
#define NJHGMNCIIKD_IONJGOPJOAL_OFFSET UNITYSDK_OFFSET(0x1C094A80)
#define NJHGMNCIIKD_LIBLBNOLABO_OFFSET UNITYSDK_OFFSET(0x1C0946B0)
#define NJHGMNCIIKD_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1C094A70)
#define NJHGMNCIIKD_PLNBBDEBIII_OFFSET UNITYSDK_OFFSET(0x1C0945A0)
#define NJHGMNCIIKD__CTOR_OFFSET UNITYSDK_OFFSET(0x1C094470)

inline static constexpr unsigned int NJHGMNCIIKD_TypeDefinitionIndex = 13017;

class NJHGMNCIIKD : public ::System::Object
{
public:
	::System::String* ADLMAEAOJOB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x18
	::JHPHNLPJNGI HBDPAIKANDB; // 0x20
	::System::Collections::Generic::List_1<::System::Int32>* GPJANGDFBCJ; // 0x30
	::System::String* KGGHFIJGFDI; // 0x38
	::System::Byte CNIAANMNOCF; // 0x40
	::System::Byte ACIOBDEBDNK; // 0x41
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x42
	::System::Byte _padding0[0x1];
	::System::Int32 OEJAICOAOHB; // 0x44
	::System::Int32 IFJKDHCDPCF; // 0x48

	::System::Void _ctor(::JHPHNLPJNGI LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::JHPHNLPJNGI, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + NJHGMNCIIKD__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::String* EPKHFGDILDG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NJHGMNCIIKD_EPKHFGDILDG_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NJHGMNCIIKD_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::String* PLNBBDEBIII()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NJHGMNCIIKD_PLNBBDEBIII_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* LIBLBNOLABO()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NJHGMNCIIKD_LIBLBNOLABO_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJHGMNCIIKD_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NJHGMNCIIKD_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 IONJGOPJOAL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NJHGMNCIIKD_IONJGOPJOAL_OFFSET))(this);
	}

	::System::Int32 HAICFECAGPF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NJHGMNCIIKD_HAICFECAGPF_OFFSET))(this);
	}
};
