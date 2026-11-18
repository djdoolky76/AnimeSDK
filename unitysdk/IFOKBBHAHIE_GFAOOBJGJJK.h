#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class HDOGFPCLFLM;
class IFOKBBHAHIE_KJEKFDEKFIG;

#define IFOKBBHAHIE_GFAOOBJGJJK_DDLNEFLGGAC_OFFSET UNITYSDK_OFFSET(0x1A462610)
#define IFOKBBHAHIE_GFAOOBJGJJK__CTOR_OFFSET UNITYSDK_OFFSET(0x1A462600)

inline static constexpr unsigned int IFOKBBHAHIE_GFAOOBJGJJK_TypeDefinitionIndex = 67440;

class IFOKBBHAHIE_GFAOOBJGJJK : public ::System::Object
{
public:
	::HDOGFPCLFLM* JLBIEIBJOJH; // 0x10
	::IFOKBBHAHIE_KJEKFDEKFIG* FGBNBFHOKAA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFOKBBHAHIE_GFAOOBJGJJK__CTOR_OFFSET))(this);
	}

	::System::Void DDLNEFLGGAC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFOKBBHAHIE_GFAOOBJGJJK_DDLNEFLGGAC_OFFSET))(this);
	}
};
