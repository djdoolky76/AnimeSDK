#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JMFHCJECPIA.h"
#include "unitysdk/System/Object.h"

class HCDDIPKLECL;

#define ALLILHAJFKJ_FPNGPBAONJC_OFFSET UNITYSDK_OFFSET(0x1648D3A0)
#define ALLILHAJFKJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1648D3E0)

inline static constexpr unsigned int ALLILHAJFKJ_TypeDefinitionIndex = 74741;

class ALLILHAJFKJ : public ::System::Object
{
public:
	::HCDDIPKLECL* CENFDFIKBDC; // 0x10
	::JMFHCJECPIA GJOKHCLJFML; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALLILHAJFKJ__CTOR_OFFSET))(this);
	}

	::System::Boolean FPNGPBAONJC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ALLILHAJFKJ_FPNGPBAONJC_OFFSET))(this);
	}
};
