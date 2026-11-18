#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { class String; }

#define MOLEMOLE_UIMAINCITYSIDEBARITEMGATHERCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x193A0730)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCitySidebarItemGatherContext_TypeDefinitionIndex = 87886;

	class UIMainCitySidebarItemGatherContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::String* ParentPath; // 0x28
		::System::Int32 StartIndex; // 0x30
		::System::Int32 GroupId; // 0x34
		::System::Int32 TotalGroupCount; // 0x38
		::System::Boolean PreviewMode; // 0x3C
		::System::Boolean IsShowTitle; // 0x3D
		::System::Boolean IsLast; // 0x3E
		::System::Byte _padding0[0x1];
		::System::Int32 TotalLineCount; // 0x40
		::System::Int32 GroupIndex; // 0x44
		::System::Int32 MaxCount; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYSIDEBARITEMGATHERCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
