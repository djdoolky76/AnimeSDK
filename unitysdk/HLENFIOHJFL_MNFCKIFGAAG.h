#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define HLENFIOHJFL_MNFCKIFGAAG_BLEKEEJAHGG_OFFSET UNITYSDK_OFFSET(0x14D342C0)
#define HLENFIOHJFL_MNFCKIFGAAG_GMGLAFCIFOF_OFFSET UNITYSDK_OFFSET(0x14D34260)
#define HLENFIOHJFL_MNFCKIFGAAG__CTOR_OFFSET UNITYSDK_OFFSET(0x14D34250)

inline static constexpr unsigned int HLENFIOHJFL_MNFCKIFGAAG_TypeDefinitionIndex = 54195;

class HLENFIOHJFL_MNFCKIFGAAG : public ::System::Object
{
public:
	::System::Action_1<::System::Int32>* NKGCDDCMBCF; // 0x10
	::System::Action* EJGDHCIBCJH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLENFIOHJFL_MNFCKIFGAAG__CTOR_OFFSET))(this);
	}

	::System::Void GMGLAFCIFOF(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + HLENFIOHJFL_MNFCKIFGAAG_GMGLAFCIFOF_OFFSET))(this, BHDNBGLCNOM);
	}

	::System::Void BLEKEEJAHGG(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + HLENFIOHJFL_MNFCKIFGAAG_BLEKEEJAHGG_OFFSET))(this, BHDNBGLCNOM);
	}
};
