#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KGAGNHMODDG.h"
#include "unitysdk/JJHLIPGEKDJ.h"

class KGBFLHNJHHN;
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GEDILNJLFHM_ACMNICAJEIK_OFFSET UNITYSDK_OFFSET(0x15A7FDD0)
#define GEDILNJLFHM__CTOR_OFFSET UNITYSDK_OFFSET(0x15A7FDC0)

inline static constexpr unsigned int GEDILNJLFHM_TypeDefinitionIndex = 13497;

class GEDILNJLFHM : public ::KGAGNHMODDG
{
public:
	::System::Collections::Generic::List_1<::System::Object*>* JOHMDHGOLKH; // 0x88

	::System::Void _ctor(::JJHLIPGEKDJ LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::JJHLIPGEKDJ, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + GEDILNJLFHM__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Collections::Generic::List_1<::System::Object*>* ACMNICAJEIK()
	{
		return ((::System::Collections::Generic::List_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GEDILNJLFHM_ACMNICAJEIK_OFFSET))(this);
	}
};
