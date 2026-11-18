#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GLMJLGBGPIH_HEIKFMDENNK.h"
#include "unitysdk/MCFDGHNNOHB.h"
#include "unitysdk/GEHABKADDPJ.h"

class KGBFLHNJHHN;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GLMJLGBGPIH_CHMDFPCHCGL_OFFSET UNITYSDK_OFFSET(0x1664E380)
#define GLMJLGBGPIH_HGLDOFONKKA_OFFSET UNITYSDK_OFFSET(0x1664E370)
#define GLMJLGBGPIH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1664DE10)
#define GLMJLGBGPIH__CTOR_OFFSET UNITYSDK_OFFSET(0x1664DBF0)

inline static constexpr unsigned int GLMJLGBGPIH_TypeDefinitionIndex = 11859;

class GLMJLGBGPIH : public ::MCFDGHNNOHB
{
public:
	::System::String* HAEAMPGMAOI; // 0x40
	::System::Collections::Generic::List_1<::System::Int32>* PLPFPGHHLOD; // 0x48
	::System::Collections::Generic::List_1<::System::String*>* KLDMPGPGMFG; // 0x50
	::GLMJLGBGPIH_HEIKFMDENNK _OPGCICBOMBO_k__BackingField; // 0x58
	::System::Char KCKOEGMBPIK; // 0x5C

	::System::Void _ctor(::GEHABKADDPJ LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::GEHABKADDPJ, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + GLMJLGBGPIH__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GLMJLGBGPIH_TOSTRING_OFFSET))(this);
	}

	::System::Void HGLDOFONKKA(::GLMJLGBGPIH_HEIKFMDENNK EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::GLMJLGBGPIH_HEIKFMDENNK))((::PBYTE)hIl2Cpp + GLMJLGBGPIH_HGLDOFONKKA_OFFSET))(this, EGEGIMGMJHN);
	}

	::GLMJLGBGPIH_HEIKFMDENNK CHMDFPCHCGL()
	{
		return ((::GLMJLGBGPIH_HEIKFMDENNK(*)(::PVOID))((::PBYTE)hIl2Cpp + GLMJLGBGPIH_CHMDFPCHCGL_OFFSET))(this);
	}
};
