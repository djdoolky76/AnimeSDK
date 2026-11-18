#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define HLENFIOHJFL_LLNKPKPPEKO_GBJBJGHJDMK_OFFSET UNITYSDK_OFFSET(0x17A58D20)
#define HLENFIOHJFL_LLNKPKPPEKO_LFHIGEEHIAC_OFFSET UNITYSDK_OFFSET(0x17A58D30)
#define HLENFIOHJFL_LLNKPKPPEKO__CTOR_OFFSET UNITYSDK_OFFSET(0x17A58D10)

inline static constexpr unsigned int HLENFIOHJFL_LLNKPKPPEKO_TypeDefinitionIndex = 54204;

class HLENFIOHJFL_LLNKPKPPEKO : public ::System::Object
{
public:
	::System::Action* NKGCDDCMBCF; // 0x10
	::System::Action* EJGDHCIBCJH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLENFIOHJFL_LLNKPKPPEKO__CTOR_OFFSET))(this);
	}

	::System::Void GBJBJGHJDMK(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + HLENFIOHJFL_LLNKPKPPEKO_GBJBJGHJDMK_OFFSET))(this, BHDNBGLCNOM);
	}

	::System::Void LFHIGEEHIAC(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + HLENFIOHJFL_LLNKPKPPEKO_LFHIGEEHIAC_OFFSET))(this, BHDNBGLCNOM);
	}
};
