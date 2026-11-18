#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_POWERTIPSPOPCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x131166C0)

namespace MoleMole
{
	inline static constexpr unsigned int PowerTipsPopContext_TypeDefinitionIndex = 77704;

	class PowerTipsPopContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 LackEnergyAmount; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_POWERTIPSPOPCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
