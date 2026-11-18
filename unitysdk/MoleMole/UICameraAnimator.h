#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIBaseAnimator.h"

#define MOLEMOLE_UICAMERAANIMATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x188FF0A0)

namespace MoleMole
{
	inline static constexpr unsigned int UICameraAnimator_TypeDefinitionIndex = 81575;

	class UICameraAnimator : public ::MoleMole::UIBaseAnimator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMERAANIMATOR__CTOR_OFFSET))(this);
		}
	};
}
