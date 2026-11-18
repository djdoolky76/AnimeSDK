#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIDIGIBOOPLAYERCHANGEWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x184AA8E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIDigibooPlayerChangeWidgetController_Context_TypeDefinitionIndex = 71084;

	class UIDigibooPlayerChangeWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* DigibooUIDList; // 0x28
		::System::UInt32 DefaultSelectUID; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDIGIBOOPLAYERCHANGEWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
