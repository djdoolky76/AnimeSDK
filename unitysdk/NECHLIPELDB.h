#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JBNPPMHGFDE.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/KCBBKGEEMGK.h"

class KGBFLHNJHHN;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NECHLIPELDB_ABBDNOMOFMP_OFFSET UNITYSDK_OFFSET(0x19DBF6C0)
#define NECHLIPELDB__CTOR_OFFSET UNITYSDK_OFFSET(0x19DBF5C0)

inline static constexpr unsigned int NECHLIPELDB_TypeDefinitionIndex = 15542;

class NECHLIPELDB : public ::JBNPPMHGFDE
{
public:
	::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::String*, ::System::Boolean>>* KPKCMPAIGID; // 0x60
	::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::String*, ::System::Boolean>>* BIKBMMKGIKA; // 0x68

	::System::Void _ctor(::KCBBKGEEMGK LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::KCBBKGEEMGK, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + NECHLIPELDB__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void ABBDNOMOFMP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NECHLIPELDB_ABBDNOMOFMP_OFFSET))(this);
	}
};
