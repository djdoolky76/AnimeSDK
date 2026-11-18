#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class CJIEIHEDMME;

#define MOLEMOLE_UIACTIVITYTEMPLECOMPCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x19B9E2C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityTempleCompContext_TypeDefinitionIndex = 62719;

	class UIActivityTempleCompContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::CJIEIHEDMME* activityData; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYTEMPLECOMPCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
