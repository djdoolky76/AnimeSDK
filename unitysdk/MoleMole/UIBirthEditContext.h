#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { class Action; }

#define MOLEMOLE_UIBIRTHEDITCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x19845320)

namespace MoleMole
{
	inline static constexpr unsigned int UIBirthEditContext_TypeDefinitionIndex = 65500;

	class UIBirthEditContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action* setCallback; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBIRTHEDITCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
