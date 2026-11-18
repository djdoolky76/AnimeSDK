#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OANHGFBJNMD.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define COCLFPJEBCJ_CNGFHHECIEL_OFFSET UNITYSDK_OFFSET(0x19F34290)
#define COCLFPJEBCJ_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x19F33D70)
#define COCLFPJEBCJ_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x19F33FB0)
#define COCLFPJEBCJ_LGMMOKNIHKG_OFFSET UNITYSDK_OFFSET(0x19F33E70)
#define COCLFPJEBCJ_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x19F33E60)
#define COCLFPJEBCJ_LLGHBHJBHPC_OFFSET UNITYSDK_OFFSET(0x19F343D0)
#define COCLFPJEBCJ_NPCIFBFOJMF_OFFSET UNITYSDK_OFFSET(0x19F33FC0)
#define COCLFPJEBCJ__CTOR_OFFSET UNITYSDK_OFFSET(0x19F33D60)

inline static constexpr unsigned int COCLFPJEBCJ_TypeDefinitionIndex = 10361;

class COCLFPJEBCJ : public ::System::Object
{
public:
	::OANHGFBJNMD HBDPAIKANDB; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* MCJJGECADLB; // 0x20
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x28
	::System::String* FBAIIPJJKJD; // 0x30
	::System::Int32 FPGEGHCHPFN; // 0x38
	::System::Int32 CEEBHOAKLFN; // 0x3C
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x40
	::System::Byte ACIOBDEBDNK; // 0x41
	::System::Byte CNIAANMNOCF; // 0x42

	::System::Void _ctor(::OANHGFBJNMD LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::OANHGFBJNMD, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + COCLFPJEBCJ__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COCLFPJEBCJ_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + COCLFPJEBCJ_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 LGMMOKNIHKG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + COCLFPJEBCJ_LGMMOKNIHKG_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + COCLFPJEBCJ_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Collections::Generic::List_1<::System::Int32>* NPCIFBFOJMF()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + COCLFPJEBCJ_NPCIFBFOJMF_OFFSET))(this);
	}

	::System::Int32 CNGFHHECIEL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + COCLFPJEBCJ_CNGFHHECIEL_OFFSET))(this);
	}

	::System::String* LLGHBHJBHPC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + COCLFPJEBCJ_LLGHBHJBHPC_OFFSET))(this);
	}
};
