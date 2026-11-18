#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OLLCHBFEFBA;
class PHICPBCACKJ;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GPCIFMIAKCN_ABDLEONNPAJ_OFFSET UNITYSDK_OFFSET(0x1F308BC0)
#define GPCIFMIAKCN_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1F308AB0)
#define GPCIFMIAKCN_LJMIPGJJELP_OFFSET UNITYSDK_OFFSET(0x1F308B30)
#define GPCIFMIAKCN__CTOR_OFFSET UNITYSDK_OFFSET(0x1F308A30)

inline static constexpr unsigned int GPCIFMIAKCN_TypeDefinitionIndex = 29039;

class GPCIFMIAKCN : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::OLLCHBFEFBA*>* CKEHFIICAIE; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPCIFMIAKCN__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPCIFMIAKCN_DISPOSE_OFFSET))(this);
	}

	::System::Void LJMIPGJJELP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPCIFMIAKCN_LJMIPGJJELP_OFFSET))(this);
	}

	::System::Void ABDLEONNPAJ(::PHICPBCACKJ* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::PHICPBCACKJ*))((::PBYTE)hIl2Cpp + GPCIFMIAKCN_ABDLEONNPAJ_OFFSET))(this, KECKGDFIALJ);
	}
};
