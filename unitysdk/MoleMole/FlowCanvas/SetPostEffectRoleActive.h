#pragma once
#include "unitysdk/unitysdk.h"

#define MOLEMOLE_FLOWCANVAS_SETPOSTEFFECTROLEACTIVE_INVOKE_OFFSET UNITYSDK_OFFSET(0x14669FC0)
#define MOLEMOLE_FLOWCANVAS_SETPOSTEFFECTROLEACTIVE__CTOR_OFFSET UNITYSDK_OFFSET(0x1466A010)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int SetPostEffectRoleActive_TypeDefinitionIndex = 72195;

	class SetPostEffectRoleActive
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_SETPOSTEFFECTROLEACTIVE__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::Boolean isActive)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_SETPOSTEFFECTROLEACTIVE_INVOKE_OFFSET))(this, isActive);
		}
	};
}
