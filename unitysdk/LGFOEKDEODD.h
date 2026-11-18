#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/OLPPOJJADDO.h"

template <typename T> class DBMAHDDGMHM_1;

#define LGFOEKDEODD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A606A80)
#define LGFOEKDEODD_PGKDINGDONO_OFFSET UNITYSDK_OFFSET(0x1A606CC0)
#define LGFOEKDEODD__CTOR_OFFSET UNITYSDK_OFFSET(0x1A606CB0)

inline static constexpr unsigned int LGFOEKDEODD_TypeDefinitionIndex = 44065;

class LGFOEKDEODD : public ::System::Object
{
public:
	::DBMAHDDGMHM_1<::System::Int32>* KFLOIMADMMK; // 0x10
	::DBMAHDDGMHM_1<::System::Boolean>* ODKGAHDFMAP; // 0x18
	::DBMAHDDGMHM_1<::System::Boolean>* PADGHPGBNLG; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGFOEKDEODD__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGFOEKDEODD_DISPOSE_OFFSET))(this);
	}

	::OLPPOJJADDO PGKDINGDONO()
	{
		return ((::OLPPOJJADDO(*)(::PVOID))((::PBYTE)hIl2Cpp + LGFOEKDEODD_PGKDINGDONO_OFFSET))(this);
	}
};
