#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIAVATARSTORYACTIVITYPAGECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1410C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIAvatarStoryActivityPageContext_TypeDefinitionIndex = 62544;

	class UIAvatarStoryActivityPageContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 invokeEntry; // 0x28
		::System::Boolean disableNewbie; // 0x2C
		::System::Byte _padding0[0x3];
		::System::Int32 focusQuest; // 0x30
		::System::Int32 tab; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARSTORYACTIVITYPAGECONTEXT__CTOR_OFFSET))(this);
		}
	};
}
