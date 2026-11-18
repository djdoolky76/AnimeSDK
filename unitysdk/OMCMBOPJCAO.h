#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MDMHNFGFLJD.h"
#include "unitysdk/FKLDANAIJBA.h"
#include "unitysdk/OMCMBOPJCAO_CFLBCCADAKO.h"

class KGBFLHNJHHN;
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define OMCMBOPJCAO_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x1AB38C80)
#define OMCMBOPJCAO_LJHJMHBJGNL_OFFSET UNITYSDK_OFFSET(0x1AB38EC0)
#define OMCMBOPJCAO__CTOR_OFFSET UNITYSDK_OFFSET(0x1AB38C00)

inline static constexpr unsigned int OMCMBOPJCAO_TypeDefinitionIndex = 10998;

class OMCMBOPJCAO : public ::MDMHNFGFLJD
{
public:
	::System::Collections::Generic::List_1<::System::Object*>* NNNLJHDNJOH; // 0x70

	::System::Void _ctor(::FKLDANAIJBA LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::FKLDANAIJBA, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + OMCMBOPJCAO__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::OMCMBOPJCAO_CFLBCCADAKO LJHJMHBJGNL(::System::Int32 HALFGBEAKAK)
	{
		return ((::OMCMBOPJCAO_CFLBCCADAKO(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OMCMBOPJCAO_LJHJMHBJGNL_OFFSET))(this, HALFGBEAKAK);
	}

	::System::Void CNHBDOMKKDE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMCMBOPJCAO_CNHBDOMKKDE_OFFSET))(this);
	}
};
