#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/OLPPOJJADDO.h"

class CFHOEGBMPKN;
template <typename T> class DBMAHDDGMHM_1;

#define ADDCHBEEJGN_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16467690)
#define ADDCHBEEJGN_PGKDINGDONO_OFFSET UNITYSDK_OFFSET(0x16467990)
#define ADDCHBEEJGN__CTOR_OFFSET UNITYSDK_OFFSET(0x16467500)

inline static constexpr unsigned int ADDCHBEEJGN_TypeDefinitionIndex = 46587;

class ADDCHBEEJGN : public ::System::Object
{
public:
	::DBMAHDDGMHM_1<::System::Int32>* KFLOIMADMMK; // 0x10
	::DBMAHDDGMHM_1<::System::Boolean>* ODKGAHDFMAP; // 0x18
	::DBMAHDDGMHM_1<::System::Boolean>* PADGHPGBNLG; // 0x20
	::CFHOEGBMPKN* EDKGMLLKLJM; // 0x28

	::System::Void _ctor(::System::Int32 PFCGKNPHBDN, ::System::Boolean ILGBBIMEBDA, ::System::Boolean NOPDNJHLGJI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + ADDCHBEEJGN__CTOR_OFFSET))(this, PFCGKNPHBDN, ILGBBIMEBDA, NOPDNJHLGJI);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADDCHBEEJGN_DISPOSE_OFFSET))(this);
	}

	::OLPPOJJADDO PGKDINGDONO()
	{
		return ((::OLPPOJJADDO(*)(::PVOID))((::PBYTE)hIl2Cpp + ADDCHBEEJGN_PGKDINGDONO_OFFSET))(this);
	}
};
