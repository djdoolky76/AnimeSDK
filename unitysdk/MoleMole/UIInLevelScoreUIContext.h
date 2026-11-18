#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class PJICGHPLOGI;

#define MOLEMOLE_UIINLEVELSCOREUICONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A2B57E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelScoreUIContext_TypeDefinitionIndex = 75926;

	class UIInLevelScoreUIContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::PJICGHPLOGI* newsBubbleSupport; // 0x28
		::System::Int32 GroupID; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSCOREUICONTEXT__CTOR_OFFSET))(this);
		}
	};
}
