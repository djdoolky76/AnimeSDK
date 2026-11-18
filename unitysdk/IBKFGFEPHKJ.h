#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MMGDPADIBHO.h"
#include "unitysdk/MNAIPGFPOGM.h"
#include "unitysdk/NKEJGLONGCA.h"

class BJMEDGEANLF;
class DGJBKOBDHPO;
class KGBFLHNJHHN;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IBKFGFEPHKJ_MDGCOKBMLFG_OFFSET UNITYSDK_OFFSET(0x1E743AA0)
#define IBKFGFEPHKJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1E743750)

inline static constexpr unsigned int IBKFGFEPHKJ_TypeDefinitionIndex = 94712;

class IBKFGFEPHKJ : public ::MNAIPGFPOGM
{
public:
	::System::Collections::Generic::List_1<::MMGDPADIBHO>* MDJHFGCLCEP; // 0x48
	::BJMEDGEANLF* KBKOEJHBADA; // 0x50

	::System::Void _ctor(::NKEJGLONGCA LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::NKEJGLONGCA, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + IBKFGFEPHKJ__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean MDGCOKBMLFG(::DGJBKOBDHPO* NCGPDIPFFGJ)
	{
		return ((::System::Boolean(*)(::PVOID, ::DGJBKOBDHPO*))((::PBYTE)hIl2Cpp + IBKFGFEPHKJ_MDGCOKBMLFG_OFFSET))(this, NCGPDIPFFGJ);
	}
};
