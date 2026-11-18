#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FPLFHEENEBL.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EHJAOHDGIGE_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x19F48490)
#define EHJAOHDGIGE_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x19F48150)
#define EHJAOHDGIGE_GOFGEHAELBL_OFFSET UNITYSDK_OFFSET(0x19F48970)
#define EHJAOHDGIGE_ICOMMHALIOG_OFFSET UNITYSDK_OFFSET(0x19F48160)
#define EHJAOHDGIGE_JENMOKHKDIC_OFFSET UNITYSDK_OFFSET(0x19F48860)
#define EHJAOHDGIGE_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x19F48850)
#define EHJAOHDGIGE_MFCBLIFOINE_OFFSET UNITYSDK_OFFSET(0x19F48270)
#define EHJAOHDGIGE_OBIGIEAIBOM_OFFSET UNITYSDK_OFFSET(0x19F48580)
#define EHJAOHDGIGE_ONPFNLJBIAE_OFFSET UNITYSDK_OFFSET(0x19F48380)
#define EHJAOHDGIGE__CTOR_OFFSET UNITYSDK_OFFSET(0x19F48140)

inline static constexpr unsigned int EHJAOHDGIGE_TypeDefinitionIndex = 14138;

class EHJAOHDGIGE : public ::System::Object
{
public:
	::System::String* MMBENKDCCBM; // 0x10
	::System::String* NFKONCKEENH; // 0x18
	::System::String* OOILBBNNEED; // 0x20
	::FPLFHEENEBL HBDPAIKANDB; // 0x28
	::System::Collections::Generic::List_1<::System::Int32>* HEHANOFDFKC; // 0x38
	::System::String* ACLOINGKKAI; // 0x40
	::System::String* EHHKGHCECJN; // 0x48
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x50
	::System::Int32 PCMOJLNOPPM; // 0x58
	::System::Byte CNIAANMNOCF; // 0x5C
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x5D
	::System::Byte ACIOBDEBDNK; // 0x5E

	::System::Void _ctor(::FPLFHEENEBL LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::FPLFHEENEBL, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + EHJAOHDGIGE__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EHJAOHDGIGE_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::String* ICOMMHALIOG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EHJAOHDGIGE_ICOMMHALIOG_OFFSET))(this);
	}

	::System::String* MFCBLIFOINE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EHJAOHDGIGE_MFCBLIFOINE_OFFSET))(this);
	}

	::System::String* ONPFNLJBIAE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EHJAOHDGIGE_ONPFNLJBIAE_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHJAOHDGIGE_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* OBIGIEAIBOM()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EHJAOHDGIGE_OBIGIEAIBOM_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EHJAOHDGIGE_LJANCIBECFG_OFFSET))(this);
	}

	::System::String* JENMOKHKDIC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EHJAOHDGIGE_JENMOKHKDIC_OFFSET))(this);
	}

	::System::String* GOFGEHAELBL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EHJAOHDGIGE_GOFGEHAELBL_OFFSET))(this);
	}
};
