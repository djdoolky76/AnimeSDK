#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/OLPPOJJADDO.h"

template <typename T> class DBMAHDDGMHM_1;

#define PPMPIJMPDLJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C67AA80)
#define PPMPIJMPDLJ_PGKDINGDONO_OFFSET UNITYSDK_OFFSET(0x1C67ACC0)
#define PPMPIJMPDLJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1C67ACB0)

inline static constexpr unsigned int PPMPIJMPDLJ_TypeDefinitionIndex = 72126;

class PPMPIJMPDLJ : public ::System::Object
{
public:
	::DBMAHDDGMHM_1<::System::Int32>* NOCEJKJAHJC; // 0x10
	::DBMAHDDGMHM_1<::System::Boolean>* ODKGAHDFMAP; // 0x18
	::DBMAHDDGMHM_1<::System::Boolean>* PADGHPGBNLG; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPMPIJMPDLJ__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPMPIJMPDLJ_DISPOSE_OFFSET))(this);
	}

	::OLPPOJJADDO PGKDINGDONO()
	{
		return ((::OLPPOJJADDO(*)(::PVOID))((::PBYTE)hIl2Cpp + PPMPIJMPDLJ_PGKDINGDONO_OFFSET))(this);
	}
};
