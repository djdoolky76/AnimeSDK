#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JPBHPONJIAA.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/OLPPOJJADDO.h"

class CFHOEGBMPKN;
template <typename T> class DBMAHDDGMHM_1;

#define OIJLJAMNFHK_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B79D7C0)
#define OIJLJAMNFHK_PGKDINGDONO_OFFSET UNITYSDK_OFFSET(0x1B79D9A0)
#define OIJLJAMNFHK__CTOR_OFFSET UNITYSDK_OFFSET(0x1B79D680)

inline static constexpr unsigned int OIJLJAMNFHK_TypeDefinitionIndex = 40437;

class OIJLJAMNFHK : public ::System::Object
{
public:
	::DBMAHDDGMHM_1<::System::Boolean>* MCJCCJOEKGN; // 0x10
	::CFHOEGBMPKN* EDKGMLLKLJM; // 0x18
	::JPBHPONJIAA FOPOENJINMH; // 0x20
	::System::Int32 NOCEJKJAHJC; // 0x24

	::System::Void _ctor(::System::Boolean AJFFIBBGBCG)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OIJLJAMNFHK__CTOR_OFFSET))(this, AJFFIBBGBCG);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIJLJAMNFHK_DISPOSE_OFFSET))(this);
	}

	::OLPPOJJADDO PGKDINGDONO()
	{
		return ((::OLPPOJJADDO(*)(::PVOID))((::PBYTE)hIl2Cpp + OIJLJAMNFHK_PGKDINGDONO_OFFSET))(this);
	}
};
