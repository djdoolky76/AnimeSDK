#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class JIGCAHMLJAH;
class KPCIBOKHDFK;

#define BNFIIBMAMDO_GLKHMMCGHPK_KBJGILBAIPA_OFFSET UNITYSDK_OFFSET(0xFF8F190)
#define BNFIIBMAMDO_GLKHMMCGHPK__CTOR_OFFSET UNITYSDK_OFFSET(0xFF8F180)

inline static constexpr unsigned int BNFIIBMAMDO_GLKHMMCGHPK_TypeDefinitionIndex = 80868;

class BNFIIBMAMDO_GLKHMMCGHPK : public ::System::Object
{
public:
	::KPCIBOKHDFK* HPGJDGAFADD; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNFIIBMAMDO_GLKHMMCGHPK__CTOR_OFFSET))(this);
	}

	::System::Boolean KBJGILBAIPA(::JIGCAHMLJAH* NFFNEFLKPDG)
	{
		return ((::System::Boolean(*)(::PVOID, ::JIGCAHMLJAH*))((::PBYTE)hIl2Cpp + BNFIIBMAMDO_GLKHMMCGHPK_KBJGILBAIPA_OFFSET))(this, NFFNEFLKPDG);
	}
};
