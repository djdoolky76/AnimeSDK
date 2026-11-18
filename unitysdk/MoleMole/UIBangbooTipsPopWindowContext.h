#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class OKNLLLIOBAA;

#define MOLEMOLE_UIBANGBOOTIPSPOPWINDOWCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x19FA4980)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangbooTipsPopWindowContext_TypeDefinitionIndex = 55271;

	class UIBangbooTipsPopWindowContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::OKNLLLIOBAA* skill; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOTIPSPOPWINDOWCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
