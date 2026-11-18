#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EEGNCADIMBJ.h"
#include "unitysdk/HFLADMCGDOG.h"

#define CGAEIMPMDMM_FIAFJIEEDKJ_OFFSET UNITYSDK_OFFSET(0x1694D4A0)
#define CGAEIMPMDMM_FPJCBGDDECA_OFFSET UNITYSDK_OFFSET(0x1694D490)
#define CGAEIMPMDMM_HPJLFGGDCAA_OFFSET UNITYSDK_OFFSET(0x1694D4B0)
#define CGAEIMPMDMM__CTOR_OFFSET UNITYSDK_OFFSET(0x1694D480)

inline static constexpr unsigned int CGAEIMPMDMM_TypeDefinitionIndex = 38416;

class CGAEIMPMDMM : public ::EEGNCADIMBJ
{
public:
	::System::Void _ctor(::HFLADMCGDOG CIAHAAKLADN)
	{
		return ((::System::Void(*)(::PVOID, ::HFLADMCGDOG))((::PBYTE)hIl2Cpp + CGAEIMPMDMM__CTOR_OFFSET))(this, CIAHAAKLADN);
	}

	::System::Boolean FPJCBGDDECA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CGAEIMPMDMM_FPJCBGDDECA_OFFSET))(this);
	}

	::System::Boolean FIAFJIEEDKJ()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CGAEIMPMDMM_FIAFJIEEDKJ_OFFSET))(this);
	}

	::System::Boolean HPJLFGGDCAA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CGAEIMPMDMM_HPJLFGGDCAA_OFFSET))(this);
	}
};
