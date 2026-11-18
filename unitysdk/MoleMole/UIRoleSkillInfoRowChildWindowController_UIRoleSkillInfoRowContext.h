#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIROLESKILLINFOROWCHILDWINDOWCONTROLLER_UIROLESKILLINFOROWCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x179AD900)

namespace MoleMole
{
	inline static constexpr unsigned int UIRoleSkillInfoRowChildWindowController_UIRoleSkillInfoRowContext_TypeDefinitionIndex = 72170;

	class UIRoleSkillInfoRowChildWindowController_UIRoleSkillInfoRowContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Boolean EnableTermInteraction; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESKILLINFOROWCHILDWINDOWCONTROLLER_UIROLESKILLINFOROWCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
