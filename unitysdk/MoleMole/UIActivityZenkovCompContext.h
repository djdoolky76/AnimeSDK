#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class CJIEIHEDMME;

#define MOLEMOLE_UIACTIVITYZENKOVCOMPCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x199157B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityZenkovCompContext_TypeDefinitionIndex = 78204;

	class UIActivityZenkovCompContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::CJIEIHEDMME* activityData; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYZENKOVCOMPCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
