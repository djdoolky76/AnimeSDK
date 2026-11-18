#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BFMAKOAGGCP_BAEGPLBIDBJ.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { class String; }

#define MOLEMOLE_UIMECHBOOREFORMTASKROWWIDGETCONTROLLERCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x18EA0C30)

namespace MoleMole
{
	inline static constexpr unsigned int UIMechBooReformTaskRowWidgetControllerContext_TypeDefinitionIndex = 41994;

	class UIMechBooReformTaskRowWidgetControllerContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::String* IconPath; // 0x28
		::System::Int32 RequireNum; // 0x30
		::BFMAKOAGGCP_BAEGPLBIDBJ PropertyType; // 0x34
		::System::Int32 CurNum; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOREFORMTASKROWWIDGETCONTROLLERCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
