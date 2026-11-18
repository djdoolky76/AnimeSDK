#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UISTRATEGYGUIDEFAIRYTIPSPOPCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x13AFF1B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIStrategyGuideFairyTipsPopContext_TypeDefinitionIndex = 68138;

	class UIStrategyGuideFairyTipsPopContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::UInt32 SourceType; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTRATEGYGUIDEFAIRYTIPSPOPCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
