#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/OLPPOJJADDO.h"

class CFHOEGBMPKN;
template <typename T> class DBMAHDDGMHM_1;

#define KHNFBAKPIHL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x14FDD1E0)
#define KHNFBAKPIHL_PGKDINGDONO_OFFSET UNITYSDK_OFFSET(0x14FDD3C0)
#define KHNFBAKPIHL__CTOR_OFFSET UNITYSDK_OFFSET(0x14FDD0A0)

inline static constexpr unsigned int KHNFBAKPIHL_TypeDefinitionIndex = 70601;

class KHNFBAKPIHL : public ::System::Object
{
public:
	::DBMAHDDGMHM_1<::System::Boolean>* MCJCCJOEKGN; // 0x10
	::CFHOEGBMPKN* EDKGMLLKLJM; // 0x18
	::System::Int32 NOCEJKJAHJC; // 0x20

	::System::Void _ctor(::System::Int32 CJDFCANOBHM, ::System::Boolean AJFFIBBGBCG)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + KHNFBAKPIHL__CTOR_OFFSET))(this, CJDFCANOBHM, AJFFIBBGBCG);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHNFBAKPIHL_DISPOSE_OFFSET))(this);
	}

	::OLPPOJJADDO PGKDINGDONO()
	{
		return ((::OLPPOJJADDO(*)(::PVOID))((::PBYTE)hIl2Cpp + KHNFBAKPIHL_PGKDINGDONO_OFFSET))(this);
	}
};
