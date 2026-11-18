#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIMAINCITYSIDEBARCONTEXT_COPY_OFFSET UNITYSDK_OFFSET(0x17964CD0)
#define MOLEMOLE_UIMAINCITYSIDEBARCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x17964DC0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCitySidebarContext_TypeDefinitionIndex = 63437;

	class UIMainCitySidebarContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Boolean FromStore; // 0x28
		::System::Boolean FromBack; // 0x29
		::System::Boolean PreviewMode; // 0x2A
		::System::Byte _padding0[0x1];
		::System::Int32 CurrentSidebarFocusId; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYSIDEBARCONTEXT__CTOR_OFFSET))(this);
		}

		::MoleMole::UIMainCitySidebarContext* Copy()
		{
			return ((::MoleMole::UIMainCitySidebarContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYSIDEBARCONTEXT_COPY_OFFSET))(this);
		}
	};
}
