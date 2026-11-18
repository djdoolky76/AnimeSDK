#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIMECHBOOTARGETPOPWINDOWCONTROLLERCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x188189E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMechBooTargetPopWindowControllerContext_TypeDefinitionIndex = 70942;

	class UIMechBooTargetPopWindowControllerContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Boolean ShowOkBtn; // 0x28
		::System::Boolean HideMaskClose; // 0x29
		::System::Byte _padding0[0x2];
		::System::Int32 ScriptID; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOTARGETPOPWINDOWCONTROLLERCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
