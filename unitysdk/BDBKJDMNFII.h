#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DENBPLEJLAJ;

#define BDBKJDMNFII_BCMBLHMKGMA_OFFSET UNITYSDK_OFFSET(0x150684A0)
#define BDBKJDMNFII_FLPJIOOCOMK_OFFSET UNITYSDK_OFFSET(0x15068420)
#define BDBKJDMNFII_MEFMMJEANOK_OFFSET UNITYSDK_OFFSET(0x15068460)
#define BDBKJDMNFII__CTOR_OFFSET UNITYSDK_OFFSET(0x150684E0)

inline static constexpr unsigned int BDBKJDMNFII_TypeDefinitionIndex = 40955;

class BDBKJDMNFII : public ::System::Object
{
public:
	::DENBPLEJLAJ* CBDANDDJPEL; // 0x10

	::System::Void _ctor(::DENBPLEJLAJ* MHEPAPJILHF)
	{
		return ((::System::Void(*)(::PVOID, ::DENBPLEJLAJ*))((::PBYTE)hIl2Cpp + BDBKJDMNFII__CTOR_OFFSET))(this, MHEPAPJILHF);
	}

	::System::Boolean FLPJIOOCOMK()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BDBKJDMNFII_FLPJIOOCOMK_OFFSET))(this);
	}

	::System::Boolean MEFMMJEANOK()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BDBKJDMNFII_MEFMMJEANOK_OFFSET))(this);
	}

	::System::Void BCMBLHMKGMA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDBKJDMNFII_BCMBLHMKGMA_OFFSET))(this);
	}
};
