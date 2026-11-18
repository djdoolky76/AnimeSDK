#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define ODGJLEDJBJI_JMJBMOAPADD_DCNMPBPEMIC_OFFSET UNITYSDK_OFFSET(0x15F5C510)
#define ODGJLEDJBJI_JMJBMOAPADD_PDMEJGAPLMC_OFFSET UNITYSDK_OFFSET(0x15F5C520)
#define ODGJLEDJBJI_JMJBMOAPADD__CTOR_OFFSET UNITYSDK_OFFSET(0x15F5C500)

inline static constexpr unsigned int ODGJLEDJBJI_JMJBMOAPADD_TypeDefinitionIndex = 73477;

class ODGJLEDJBJI_JMJBMOAPADD : public ::System::Object
{
public:
	::System::Action_1<::System::Int32>* NKGCDDCMBCF; // 0x10
	::System::Action* POCANNAFFOA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODGJLEDJBJI_JMJBMOAPADD__CTOR_OFFSET))(this);
	}

	::System::Void DCNMPBPEMIC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODGJLEDJBJI_JMJBMOAPADD_DCNMPBPEMIC_OFFSET))(this);
	}

	::System::Void PDMEJGAPLMC(::System::Int32 DJCNCELJPOM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ODGJLEDJBJI_JMJBMOAPADD_PDMEJGAPLMC_OFFSET))(this, DJCNCELJPOM);
	}
};
