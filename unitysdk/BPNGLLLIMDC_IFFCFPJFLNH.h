#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BPNGLLLIMDC;
class JKPJHBGLLFB;
class OAKIIJGHPDA;
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define BPNGLLLIMDC_IFFCFPJFLNH_COMPARE_OFFSET UNITYSDK_OFFSET(0x16934E10)
#define BPNGLLLIMDC_IFFCFPJFLNH__CTOR_OFFSET UNITYSDK_OFFSET(0x16934A50)

inline static constexpr unsigned int BPNGLLLIMDC_IFFCFPJFLNH_TypeDefinitionIndex = 56036;

class BPNGLLLIMDC_IFFCFPJFLNH : public ::System::Object
{
public:
	::System::Collections::Generic::IList_1<::JKPJHBGLLFB*>* MGNPPPJOJDK; // 0x10
	::BPNGLLLIMDC* LHPFMGBDFPN; // 0x18
	::System::Boolean HLAIFNGHFML; // 0x20

	::System::Void _ctor(::System::Boolean HLAIFNGHFML)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BPNGLLLIMDC_IFFCFPJFLNH__CTOR_OFFSET))(this, HLAIFNGHFML);
	}

	::System::Int32 Compare(::OAKIIJGHPDA* FFKBEGIHIGG, ::OAKIIJGHPDA* CKADGLGJJAB)
	{
		return ((::System::Int32(*)(::PVOID, ::OAKIIJGHPDA*, ::OAKIIJGHPDA*))((::PBYTE)hIl2Cpp + BPNGLLLIMDC_IFFCFPJFLNH_COMPARE_OFFSET))(this, FFKBEGIHIGG, CKADGLGJJAB);
	}
};
