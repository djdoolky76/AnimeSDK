#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/PAOFHMIAFAE.h"

class KPMBBKJABGC;
class MOGLNKNAJPM;

#define MOLEMOLE_UICINEMAINVITEPAGECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1597E980)

namespace MoleMole
{
	inline static constexpr unsigned int UICinemaInvitePageContext_TypeDefinitionIndex = 66026;

	class UICinemaInvitePageContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::MOGLNKNAJPM* nowSelectLevelData; // 0x28
		::KPMBBKJABGC* inviteHandler; // 0x30
		::PAOFHMIAFAE initState; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAINVITEPAGECONTEXT__CTOR_OFFSET))(this);
		}
	};
}
