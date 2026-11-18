#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MDPAGGGKMJM;

#define LDFHMJCIGDC_CDPOLJHFLLN_NPHDGBMBENP_OFFSET UNITYSDK_OFFSET(0x19982060)
#define LDFHMJCIGDC_CDPOLJHFLLN__CTOR_OFFSET UNITYSDK_OFFSET(0x19982050)

inline static constexpr unsigned int LDFHMJCIGDC_CDPOLJHFLLN_TypeDefinitionIndex = 49142;

class LDFHMJCIGDC_CDPOLJHFLLN : public ::System::Object
{
public:
	::System::Int32 OBNIAHNMHPF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDFHMJCIGDC_CDPOLJHFLLN__CTOR_OFFSET))(this);
	}

	::System::Boolean NPHDGBMBENP(::MDPAGGGKMJM* DFMKILICPFB)
	{
		return ((::System::Boolean(*)(::PVOID, ::MDPAGGGKMJM*))((::PBYTE)hIl2Cpp + LDFHMJCIGDC_CDPOLJHFLLN_NPHDGBMBENP_OFFSET))(this, DFMKILICPFB);
	}
};
