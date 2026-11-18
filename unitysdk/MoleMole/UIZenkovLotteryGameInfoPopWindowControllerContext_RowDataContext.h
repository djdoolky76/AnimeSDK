#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { class String; }

#define MOLEMOLE_UIZENKOVLOTTERYGAMEINFOPOPWINDOWCONTROLLERCONTEXT_ROWDATACONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x13EAB9B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovLotteryGameInfoPopWindowControllerContext_RowDataContext_TypeDefinitionIndex = 65093;

	class UIZenkovLotteryGameInfoPopWindowControllerContext_RowDataContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::String* Row3; // 0x28
		::System::String* Row2; // 0x30
		::System::String* Row1; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVLOTTERYGAMEINFOPOPWINDOWCONTROLLERCONTEXT_ROWDATACONTEXT__CTOR_OFFSET))(this);
		}
	};
}
