#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AENICMHEIBH_ICGFKDPMBBN;

#define AENICMHEIBH_DIPKIBDKBIK_FAAKNMNDGEA_OFFSET UNITYSDK_OFFSET(0x135DA620)
#define AENICMHEIBH_DIPKIBDKBIK_NPDAIDPPOMP_OFFSET UNITYSDK_OFFSET(0x135DA480)
#define AENICMHEIBH_DIPKIBDKBIK__CTOR_OFFSET UNITYSDK_OFFSET(0x135DA470)

inline static constexpr unsigned int AENICMHEIBH_DIPKIBDKBIK_TypeDefinitionIndex = 85675;

class AENICMHEIBH_DIPKIBDKBIK : public ::System::Object
{
public:
	::AENICMHEIBH_ICGFKDPMBBN* KECKGDFIALJ; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AENICMHEIBH_DIPKIBDKBIK__CTOR_OFFSET))(this);
	}

	::System::Void NPDAIDPPOMP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AENICMHEIBH_DIPKIBDKBIK_NPDAIDPPOMP_OFFSET))(this);
	}

	::System::Void FAAKNMNDGEA(::System::UInt32 MGMDLMBEDJF)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AENICMHEIBH_DIPKIBDKBIK_FAAKNMNDGEA_OFFSET))(this, MGMDLMBEDJF);
	}
};
