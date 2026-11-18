#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IEEPAHOCENL.h"
#include "unitysdk/LLJHKEAFOAF.h"

#define INGJDMLKPBO_BEIBDILOALI_OFFSET UNITYSDK_OFFSET(0xF87F280)
#define INGJDMLKPBO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xF87F180)
#define INGJDMLKPBO_FCFOEJGPDNO_OFFSET UNITYSDK_OFFSET(0xF87F0C0)
#define INGJDMLKPBO_HLOFJPBAMKN_OFFSET UNITYSDK_OFFSET(0xF87F310)
#define INGJDMLKPBO_IHCNOMJLLJO_OFFSET UNITYSDK_OFFSET(0xF87F100)
#define INGJDMLKPBO_PBONIJDEJMD_OFFSET UNITYSDK_OFFSET(0xF87F1D0)
#define INGJDMLKPBO__CTOR_OFFSET UNITYSDK_OFFSET(0xF87F030)

inline static constexpr unsigned int INGJDMLKPBO_TypeDefinitionIndex = 47629;

class INGJDMLKPBO : public ::IEEPAHOCENL
{
public:
	::LLJHKEAFOAF AACPBNANNPJ; // 0x18
	::System::Boolean OKLIABOHJHE; // 0x28

	::System::Void _ctor(::System::Single HPCILAJBBHH, ::System::Int32 JHFKDGBCOBA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + INGJDMLKPBO__CTOR_OFFSET))(this, HPCILAJBBHH, JHFKDGBCOBA);
	}

	::System::Boolean FCFOEJGPDNO()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INGJDMLKPBO_FCFOEJGPDNO_OFFSET))(this);
	}

	::System::Void IHCNOMJLLJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INGJDMLKPBO_IHCNOMJLLJO_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INGJDMLKPBO_DISPOSE_OFFSET))(this);
	}

	::System::Void PBONIJDEJMD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INGJDMLKPBO_PBONIJDEJMD_OFFSET))(this);
	}

	::System::Void BEIBDILOALI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INGJDMLKPBO_BEIBDILOALI_OFFSET))(this);
	}

	::System::Void HLOFJPBAMKN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INGJDMLKPBO_HLOFJPBAMKN_OFFSET))(this);
	}
};
