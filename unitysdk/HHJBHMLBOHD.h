#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DGPDLGFBBIM.h"
#include "unitysdk/GHELKBEMMLP.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HHJBHMLBOHD_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x17474810)
#define HHJBHMLBOHD_FIGNOOEDDNC_OFFSET UNITYSDK_OFFSET(0x17474530)
#define HHJBHMLBOHD_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x17474800)
#define HHJBHMLBOHD_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x174743E0)
#define HHJBHMLBOHD_OJFHNDJPMEF_OFFSET UNITYSDK_OFFSET(0x17474290)
#define HHJBHMLBOHD_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x174743F0)
#define HHJBHMLBOHD__CTOR_OFFSET UNITYSDK_OFFSET(0x17474280)

inline static constexpr unsigned int HHJBHMLBOHD_TypeDefinitionIndex = 17236;

class HHJBHMLBOHD : public ::System::Object
{
public:
	::GHELKBEMMLP HBDPAIKANDB; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* PCCPGAMLEMB; // 0x20
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x28
	::DGPDLGFBBIM FIEBEJPFHPP; // 0x30
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x34
	::System::Byte ACIOBDEBDNK; // 0x35
	::System::Byte CNIAANMNOCF; // 0x36
	::System::Byte _padding0[0x1];
	::System::Int32 PCMOJLNOPPM; // 0x38

	::System::Void _ctor(::GHELKBEMMLP LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::GHELKBEMMLP, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + HHJBHMLBOHD__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::DGPDLGFBBIM OJFHNDJPMEF()
	{
		return ((::DGPDLGFBBIM(*)(::PVOID))((::PBYTE)hIl2Cpp + HHJBHMLBOHD_OJFHNDJPMEF_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HHJBHMLBOHD_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HHJBHMLBOHD_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* FIGNOOEDDNC()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HHJBHMLBOHD_FIGNOOEDDNC_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HHJBHMLBOHD_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHJBHMLBOHD_COFGIJJOFLP_OFFSET))(this);
	}
};
