#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIMECHBOOPREPPAGECONTROLLERCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x18818990)

namespace MoleMole
{
	inline static constexpr unsigned int UIMechBooPrepPageControllerContext_TypeDefinitionIndex = 72700;

	class UIMechBooPrepPageControllerContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 DefaultTabIndex; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOPREPPAGECONTROLLERCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
