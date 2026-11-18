#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MLJGMELKNCC_ONKAPFOMFDK;

#define LFAGLCFKOMP_COMPARE_OFFSET UNITYSDK_OFFSET(0x1A307D50)
#define LFAGLCFKOMP__CTOR_OFFSET UNITYSDK_OFFSET(0x1A3080F0)

inline static constexpr unsigned int LFAGLCFKOMP_TypeDefinitionIndex = 65539;

class LFAGLCFKOMP : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFAGLCFKOMP__CTOR_OFFSET))(this);
	}

	::System::Int32 Compare(::MLJGMELKNCC_ONKAPFOMFDK* FFKBEGIHIGG, ::MLJGMELKNCC_ONKAPFOMFDK* CKADGLGJJAB)
	{
		return ((::System::Int32(*)(::PVOID, ::MLJGMELKNCC_ONKAPFOMFDK*, ::MLJGMELKNCC_ONKAPFOMFDK*))((::PBYTE)hIl2Cpp + LFAGLCFKOMP_COMPARE_OFFSET))(this, FFKBEGIHIGG, CKADGLGJJAB);
	}
};
