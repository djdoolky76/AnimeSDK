#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FHGAOMHILGE.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ILFLHDONENB_COABIBLPPAD_OFFSET UNITYSDK_OFFSET(0x1A4FC880)
#define ILFLHDONENB_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1A4FCB50)
#define ILFLHDONENB_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1A4FC480)
#define ILFLHDONENB_KBAPOMIBKLD_OFFSET UNITYSDK_OFFSET(0x1A4FC5A0)
#define ILFLHDONENB_KGJIJHDKNBA_OFFSET UNITYSDK_OFFSET(0x1A4FC490)
#define ILFLHDONENB_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1A4FC870)
#define ILFLHDONENB_MILHMBIPBDF_OFFSET UNITYSDK_OFFSET(0x1A4FCC40)
#define ILFLHDONENB__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4FC470)

inline static constexpr unsigned int ILFLHDONENB_TypeDefinitionIndex = 17033;

class ILFLHDONENB : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* LCKMFJLOGOJ; // 0x10
	::System::String* NLHOAJLMDFI; // 0x18
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::FHGAOMHILGE HBDPAIKANDB; // 0x28
	::System::String* EBHBIHMKOND; // 0x38
	::System::Collections::Generic::List_1<::System::Int32>* AJGEGFMOLMI; // 0x40
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x48
	::System::Byte CNIAANMNOCF; // 0x49
	::System::Byte ACIOBDEBDNK; // 0x4A

	::System::Void _ctor(::FHGAOMHILGE LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::FHGAOMHILGE, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + ILFLHDONENB__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ILFLHDONENB_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::String* KGJIJHDKNBA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILFLHDONENB_KGJIJHDKNBA_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* KBAPOMIBKLD()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILFLHDONENB_KBAPOMIBKLD_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ILFLHDONENB_LJANCIBECFG_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* COABIBLPPAD()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILFLHDONENB_COABIBLPPAD_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILFLHDONENB_COFGIJJOFLP_OFFSET))(this);
	}

	::System::String* MILHMBIPBDF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILFLHDONENB_MILHMBIPBDF_OFFSET))(this);
	}
};
