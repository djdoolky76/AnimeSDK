#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class EOJLPBEILMB;

#define MOLEMOLE_UICINEMACOLLECTPAGECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x18D41C60)

namespace MoleMole
{
	inline static constexpr unsigned int UICinemaCollectPageContext_TypeDefinitionIndex = 38864;

	class UICinemaCollectPageContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::EOJLPBEILMB* collectHandler; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMACOLLECTPAGECONTEXT__CTOR_OFFSET))(this);
		}
	};
}
