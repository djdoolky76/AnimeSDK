#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class CJIEIHEDMME;

#define MOLEMOLE_UIACTIVITYROLESKINAWARDCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0DAC80)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityRoleSkinAwardContext_TypeDefinitionIndex = 78968;

	class UIActivityRoleSkinAwardContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::CJIEIHEDMME* activityData; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYROLESKINAWARDCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
