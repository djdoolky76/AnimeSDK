#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BFMAKOAGGCP_BAEGPLBIDBJ.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIMECHBOOPRACTICERESULTROWWIDGETCONTROLLERCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x17F9E550)

namespace MoleMole
{
	inline static constexpr unsigned int UIMechBooPracticeResultRowWidgetControllerContext_TypeDefinitionIndex = 52106;

	class UIMechBooPracticeResultRowWidgetControllerContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 OldVal; // 0x28
		::System::Int32 CriticalNum; // 0x2C
		::System::Int32 NewVal; // 0x30
		::BFMAKOAGGCP_BAEGPLBIDBJ PropertyType; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOPRACTICERESULTROWWIDGETCONTROLLERCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
