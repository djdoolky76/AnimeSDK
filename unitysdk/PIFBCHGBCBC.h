#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FCPEGLOOKGH.h"
#include "unitysdk/IFIFPNGJGGK.h"
#include "unitysdk/OBFAMOOPBDA.h"
#include "unitysdk/System/ValueType.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define PIFBCHGBCBC_CCMOODOHNFC_OFFSET UNITYSDK_OFFSET(0x750470)
#define PIFBCHGBCBC_HFCLPJCOPGF_OFFSET UNITYSDK_OFFSET(0x750480)
#define PIFBCHGBCBC__CCTOR_OFFSET UNITYSDK_OFFSET(0x150CA200)

inline static constexpr unsigned int PIFBCHGBCBC_TypeDefinitionIndex = 92709;

struct alignas(8) PIFBCHGBCBC
{
	static ::PIFBCHGBCBC* StaticGet_FDJHEBHLJLD()
	{
		return (::PIFBCHGBCBC*)Il2CppClass::FromTypeDefinitionIndex(PIFBCHGBCBC_TypeDefinitionIndex)->GetStaticField(0x50860);
	}
	::System::Collections::Generic::List_1<::OBFAMOOPBDA>* ENGKAJDIFLK; // 0x10

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PIFBCHGBCBC__CCTOR_OFFSET))();
	}

	::System::Void CCMOODOHNFC(::System::Int32 JHFKDGBCOBA, ::FCPEGLOOKGH CLGFKHNFHKB, ::IFIFPNGJGGK MAAEPJFMMAF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FCPEGLOOKGH, ::IFIFPNGJGGK))((::PBYTE)hIl2Cpp + PIFBCHGBCBC_CCMOODOHNFC_OFFSET))(this, JHFKDGBCOBA, CLGFKHNFHKB, MAAEPJFMMAF);
	}

	::System::Void HFCLPJCOPGF(::System::Int32 JHFKDGBCOBA, ::FCPEGLOOKGH CLGFKHNFHKB, ::IFIFPNGJGGK MAAEPJFMMAF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FCPEGLOOKGH, ::IFIFPNGJGGK))((::PBYTE)hIl2Cpp + PIFBCHGBCBC_HFCLPJCOPGF_OFFSET))(this, JHFKDGBCOBA, CLGFKHNFHKB, MAAEPJFMMAF);
	}
};
