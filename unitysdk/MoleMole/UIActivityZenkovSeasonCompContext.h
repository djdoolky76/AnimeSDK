#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class CJIEIHEDMME;

#define MOLEMOLE_UIACTIVITYZENKOVSEASONCOMPCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x18861790)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityZenkovSeasonCompContext_TypeDefinitionIndex = 87829;

	class UIActivityZenkovSeasonCompContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::CJIEIHEDMME* activityData; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYZENKOVSEASONCOMPCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
