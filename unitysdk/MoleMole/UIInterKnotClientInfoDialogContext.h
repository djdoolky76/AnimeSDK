#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/NDHLHBHJBHF_OMDGJHFNEEL.h"

#define MOLEMOLE_UIINTERKNOTCLIENTINFODIALOGCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x18CF70A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIInterKnotClientInfoDialogContext_TypeDefinitionIndex = 63213;

	class UIInterKnotClientInfoDialogContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 questID; // 0x28
		::NDHLHBHJBHF_OMDGJHFNEEL status; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTCLIENTINFODIALOGCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
