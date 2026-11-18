#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FOKCLNLNMPD.h"
#include "unitysdk/System/Object.h"

class LFDGABGKACJ;

#define LFDGABGKACJ_JCJEAFCILLG_CJPGBDMDBEF_OFFSET UNITYSDK_OFFSET(0x156585A0)
#define LFDGABGKACJ_JCJEAFCILLG__CTOR_OFFSET UNITYSDK_OFFSET(0x15658590)

inline static constexpr unsigned int LFDGABGKACJ_JCJEAFCILLG_TypeDefinitionIndex = 38974;

class LFDGABGKACJ_JCJEAFCILLG : public ::System::Object
{
public:
	::LFDGABGKACJ* KLHPEBKNIFB; // 0x10
	::FOKCLNLNMPD CLHNFKEHKCO; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFDGABGKACJ_JCJEAFCILLG__CTOR_OFFSET))(this);
	}

	::System::Void CJPGBDMDBEF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFDGABGKACJ_JCJEAFCILLG_CJPGBDMDBEF_OFFSET))(this);
	}
};
