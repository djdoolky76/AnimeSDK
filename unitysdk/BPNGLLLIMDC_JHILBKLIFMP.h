#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BPNGLLLIMDC;
class OAKIIJGHPDA;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BPNGLLLIMDC_JHILBKLIFMP_COMPARE_OFFSET UNITYSDK_OFFSET(0x1858F010)
#define BPNGLLLIMDC_JHILBKLIFMP__CTOR_OFFSET UNITYSDK_OFFSET(0x1858EF10)

inline static constexpr unsigned int BPNGLLLIMDC_JHILBKLIFMP_TypeDefinitionIndex = 56047;

class BPNGLLLIMDC_JHILBKLIFMP : public ::System::Object
{
public:
	::BPNGLLLIMDC* LHPFMGBDFPN; // 0x10
	::System::Collections::Generic::List_1<::System::Object*>* DBCJNGEGCOK; // 0x18
	::System::Boolean HLAIFNGHFML; // 0x20

	::System::Void _ctor(::System::Collections::Generic::List_1<::System::Object*>* DJLOKMMLFJC, ::System::Boolean HLAIFNGHFML)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Object*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + BPNGLLLIMDC_JHILBKLIFMP__CTOR_OFFSET))(this, DJLOKMMLFJC, HLAIFNGHFML);
	}

	::System::Int32 Compare(::OAKIIJGHPDA* FFKBEGIHIGG, ::OAKIIJGHPDA* CKADGLGJJAB)
	{
		return ((::System::Int32(*)(::PVOID, ::OAKIIJGHPDA*, ::OAKIIJGHPDA*))((::PBYTE)hIl2Cpp + BPNGLLLIMDC_JHILBKLIFMP_COMPARE_OFFSET))(this, FFKBEGIHIGG, CKADGLGJJAB);
	}
};
