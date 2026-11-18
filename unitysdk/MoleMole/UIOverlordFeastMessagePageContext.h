#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIOVERLORDFEASTMESSAGEPAGECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x15D25BC0)

namespace MoleMole
{
	inline static constexpr unsigned int UIOverlordFeastMessagePageContext_TypeDefinitionIndex = 92517;

	class UIOverlordFeastMessagePageContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 TargetDevID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTMESSAGEPAGECONTEXT__CTOR_OFFSET))(this);
		}
	};
}
