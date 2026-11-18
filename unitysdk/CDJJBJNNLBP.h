#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BBBOBHJMGDL.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CDJJBJNNLBP_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1A53BC10)
#define CDJJBJNNLBP_FIGNOOEDDNC_OFFSET UNITYSDK_OFFSET(0x1A53B940)
#define CDJJBJNNLBP_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1A53BD00)
#define CDJJBJNNLBP_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1A53B930)
#define CDJJBJNNLBP__CTOR_OFFSET UNITYSDK_OFFSET(0x1A53B920)

inline static constexpr unsigned int CDJJBJNNLBP_TypeDefinitionIndex = 16317;

class CDJJBJNNLBP : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* PCCPGAMLEMB; // 0x10
	::BBBOBHJMGDL HBDPAIKANDB; // 0x18
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x28
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x30
	::System::Byte ACIOBDEBDNK; // 0x31
	::System::Byte CNIAANMNOCF; // 0x32

	::System::Void _ctor(::BBBOBHJMGDL LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::BBBOBHJMGDL, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + CDJJBJNNLBP__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CDJJBJNNLBP_LJANCIBECFG_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* FIGNOOEDDNC()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CDJJBJNNLBP_FIGNOOEDDNC_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDJJBJNNLBP_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CDJJBJNNLBP_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}
};
