#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIGAMEUIBOARDPAGECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1783F730)

namespace MoleMole
{
	inline static constexpr unsigned int UIGameUIBoardPageContext_TypeDefinitionIndex = 39062;

	class UIGameUIBoardPageContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 JumpPage; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGAMEUIBOARDPAGECONTEXT__CTOR_OFFSET))(this);
		}
	};
}
