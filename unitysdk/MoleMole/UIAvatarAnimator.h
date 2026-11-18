#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIBaseAnimator.h"

#define MOLEMOLE_UIAVATARANIMATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1964DC10)

namespace MoleMole
{
	inline static constexpr unsigned int UIAvatarAnimator_TypeDefinitionIndex = 83151;

	class UIAvatarAnimator : public ::MoleMole::UIBaseAnimator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARANIMATOR__CTOR_OFFSET))(this);
		}
	};
}
