#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PAMPOBIPLCE.h"

class NBGLCPPINBN;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
template <typename T> class LJHFMILANJA_1;

#define CLNLNNKCALP_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1533F090)
#define CLNLNNKCALP_KHJDDFAKABK_OFFSET UNITYSDK_OFFSET(0x1533F100)
#define CLNLNNKCALP_LKPDIIAPAFO_OFFSET UNITYSDK_OFFSET(0x1533F7D0)
#define CLNLNNKCALP_OMOLGMIAKLM_OFFSET UNITYSDK_OFFSET(0x1533F350)
#define CLNLNNKCALP_ONCREATE_OFFSET UNITYSDK_OFFSET(0x1533EFA0)
#define CLNLNNKCALP_PGAJDKOIAKF_OFFSET UNITYSDK_OFFSET(0x1533F6C0)
#define CLNLNNKCALP__CTOR_OFFSET UNITYSDK_OFFSET(0x1533F330)

inline static constexpr unsigned int CLNLNNKCALP_TypeDefinitionIndex = 42750;

class CLNLNNKCALP
{
public:
	::System::Collections::Generic::Dictionary_2<::PAMPOBIPLCE, ::LJHFMILANJA_1<::System::Boolean>*>* HFKNHKDDDDG; // 0x10
	::NBGLCPPINBN* BGJOPBCCMOC; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLNLNNKCALP__CTOR_OFFSET))(this);
	}

	::System::Void OnCreate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLNLNNKCALP_ONCREATE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLNLNNKCALP_DISPOSE_OFFSET))(this);
	}

	::System::Boolean OMOLGMIAKLM(::PAMPOBIPLCE KAMJLKGLFDB)
	{
		return ((::System::Boolean(*)(::PVOID, ::PAMPOBIPLCE))((::PBYTE)hIl2Cpp + CLNLNNKCALP_OMOLGMIAKLM_OFFSET))(this, KAMJLKGLFDB);
	}

	::System::Void KHJDDFAKABK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLNLNNKCALP_KHJDDFAKABK_OFFSET))(this);
	}

	::System::Void PGAJDKOIAKF(::PAMPOBIPLCE KAMJLKGLFDB)
	{
		return ((::System::Void(*)(::PVOID, ::PAMPOBIPLCE))((::PBYTE)hIl2Cpp + CLNLNNKCALP_PGAJDKOIAKF_OFFSET))(this, KAMJLKGLFDB);
	}

	::LJHFMILANJA_1<::System::Boolean>* LKPDIIAPAFO(::PAMPOBIPLCE KAMJLKGLFDB)
	{
		return ((::LJHFMILANJA_1<::System::Boolean>*(*)(::PVOID, ::PAMPOBIPLCE))((::PBYTE)hIl2Cpp + CLNLNNKCALP_LKPDIIAPAFO_OFFSET))(this, KAMJLKGLFDB);
	}
};
