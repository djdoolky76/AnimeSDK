#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CPGMICPIIKN.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Foundation/NameValueSortedArray_1.h"
#include "unitysdk/HIIGFEMMDKE.h"

class GODLLLCHCHF;

#define APKFHDOGGJH_JMDEKPONKMF_OFFSET UNITYSDK_OFFSET(0x728480)
#define APKFHDOGGJH_NKDCADABLCL_OFFSET UNITYSDK_OFFSET(0x3B9490)
#define APKFHDOGGJH__CTOR_OFFSET UNITYSDK_OFFSET(0x358470)

inline static constexpr unsigned int APKFHDOGGJH_TypeDefinitionIndex = 45458;

struct alignas(4) APKFHDOGGJH
{
	::CPGMICPIIKN DOGDMPNDAHA; // 0x10

	::System::Void _ctor(::Foundation::NameValueSortedArray_1<::HIIGFEMMDKE> LNIOJLHBIHO)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::NameValueSortedArray_1<::HIIGFEMMDKE>))((::PBYTE)hIl2Cpp + APKFHDOGGJH__CTOR_OFFSET))(this, LNIOJLHBIHO);
	}

	::System::Void JMDEKPONKMF(::GODLLLCHCHF* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::GODLLLCHCHF*))((::PBYTE)hIl2Cpp + APKFHDOGGJH_JMDEKPONKMF_OFFSET))(this, AAOCANGHBDG);
	}

	::System::Boolean NKDCADABLCL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + APKFHDOGGJH_NKDCADABLCL_OFFSET))(this);
	}
};
