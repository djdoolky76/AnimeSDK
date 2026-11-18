#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class CJIEIHEDMME;

#define MOLEMOLE_UIACTIVITYCOMPGOTOMISSIONCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A758760)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityCompGotoMissionContext_TypeDefinitionIndex = 74195;

	class UIActivityCompGotoMissionContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::CJIEIHEDMME* activityData; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCOMPGOTOMISSIONCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
