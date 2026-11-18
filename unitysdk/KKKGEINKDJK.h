#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CFMCGELOMGN.h"
#include "unitysdk/BFOCDLOGMBH.h"

class ADGLKCAKFJL;
class GBODHPNNLJJ;
class KGBFLHNJHHN;
class NPJCOPGAFGF;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KKKGEINKDJK_BNIJAKDGHIK_OFFSET UNITYSDK_OFFSET(0x1DB8BBF0)
#define KKKGEINKDJK_MDGCOKBMLFG_OFFSET UNITYSDK_OFFSET(0x1DB8B440)
#define KKKGEINKDJK__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB8B100)

inline static constexpr unsigned int KKKGEINKDJK_TypeDefinitionIndex = 93846;

class KKKGEINKDJK : public ::CFMCGELOMGN
{
public:
	::System::Collections::Generic::List_1<::GBODHPNNLJJ*>* DDICNHNEHBD; // 0xD8

	::System::Void _ctor(::BFOCDLOGMBH LJBPECKCCEA, ::NPJCOPGAFGF* PFJJJOBKCPE, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::BFOCDLOGMBH, ::NPJCOPGAFGF*, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + KKKGEINKDJK__CTOR_OFFSET))(this, LJBPECKCCEA, PFJJJOBKCPE, NKMKJFCBBCK);
	}

	::System::Boolean MDGCOKBMLFG(::NPJCOPGAFGF* PFJJJOBKCPE)
	{
		return ((::System::Boolean(*)(::PVOID, ::NPJCOPGAFGF*))((::PBYTE)hIl2Cpp + KKKGEINKDJK_MDGCOKBMLFG_OFFSET))(this, PFJJJOBKCPE);
	}

	::System::Double BNIJAKDGHIK(::ADGLKCAKFJL* AAOCANGHBDG)
	{
		return ((::System::Double(*)(::PVOID, ::ADGLKCAKFJL*))((::PBYTE)hIl2Cpp + KKKGEINKDJK_BNIJAKDGHIK_OFFSET))(this, AAOCANGHBDG);
	}
};
