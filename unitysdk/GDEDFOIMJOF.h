#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HNIPGEHIIOC.h"
#include "unitysdk/MINBODCIHAN.h"

class ADGLKCAKFJL;
class GBODHPNNLJJ;
class KGBFLHNJHHN;
class KOFDCMKCGIG;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GDEDFOIMJOF_BNIJAKDGHIK_OFFSET UNITYSDK_OFFSET(0x1D3E3420)
#define GDEDFOIMJOF_MDGCOKBMLFG_OFFSET UNITYSDK_OFFSET(0x1D3E34C0)
#define GDEDFOIMJOF__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3E30E0)

inline static constexpr unsigned int GDEDFOIMJOF_TypeDefinitionIndex = 94109;

class GDEDFOIMJOF : public ::HNIPGEHIIOC
{
public:
	::System::Collections::Generic::List_1<::GBODHPNNLJJ*>* DDICNHNEHBD; // 0x60

	::System::Void _ctor(::MINBODCIHAN LJBPECKCCEA, ::KOFDCMKCGIG* PFJJJOBKCPE, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::MINBODCIHAN, ::KOFDCMKCGIG*, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + GDEDFOIMJOF__CTOR_OFFSET))(this, LJBPECKCCEA, PFJJJOBKCPE, NKMKJFCBBCK);
	}

	::System::Double BNIJAKDGHIK(::ADGLKCAKFJL* AAOCANGHBDG)
	{
		return ((::System::Double(*)(::PVOID, ::ADGLKCAKFJL*))((::PBYTE)hIl2Cpp + GDEDFOIMJOF_BNIJAKDGHIK_OFFSET))(this, AAOCANGHBDG);
	}

	::System::Boolean MDGCOKBMLFG(::KOFDCMKCGIG* PFJJJOBKCPE)
	{
		return ((::System::Boolean(*)(::PVOID, ::KOFDCMKCGIG*))((::PBYTE)hIl2Cpp + GDEDFOIMJOF_MDGCOKBMLFG_OFFSET))(this, PFJJJOBKCPE);
	}
};
