#pragma once
#include "unitysdk/unitysdk.h"

#define MOLEMOLE_FLOWCANVAS_HACKERGAMESELECTFLOATBYPLATFORM_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A083F80)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMESELECTFLOATBYPLATFORM__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0840E0)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int HackerGameSelectFloatByPlatform_TypeDefinitionIndex = 71130;

	class HackerGameSelectFloatByPlatform
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMESELECTFLOATBYPLATFORM__CTOR_OFFSET))(this);
		}

		::System::Single Invoke(::System::Single none, ::System::Single mobile, ::System::Single pc, ::System::Single console, ::System::Single mobileConsole)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMESELECTFLOATBYPLATFORM_INVOKE_OFFSET))(this, none, mobile, pc, console, mobileConsole);
		}
	};
}
