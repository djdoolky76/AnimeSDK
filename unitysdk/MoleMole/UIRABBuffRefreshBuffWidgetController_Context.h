#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class DCFKHKBLIMA;

#define MOLEMOLE_UIRABBUFFREFRESHBUFFWIDGETCONTROLLER_CONTEXT_CHECKANIMEQUAL_OFFSET UNITYSDK_OFFSET(0x147F34E0)
#define MOLEMOLE_UIRABBUFFREFRESHBUFFWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x147F3540)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABBuffRefreshBuffWidgetController_Context_TypeDefinitionIndex = 92591;

	class UIRABBuffRefreshBuffWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::DCFKHKBLIMA* BuddyData; // 0x28
		::System::Boolean IsNew; // 0x30
		::System::Boolean NewOrOldFactor; // 0x31
		::System::Byte _padding0[0x2];
		::System::Int32 FactorId; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABBUFFREFRESHBUFFWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}

		::System::Boolean CheckAnimEqual(::MoleMole::UIRABBuffRefreshBuffWidgetController_Context* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIRABBuffRefreshBuffWidgetController_Context*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABBUFFREFRESHBUFFWIDGETCONTROLLER_CONTEXT_CHECKANIMEQUAL_OFFSET))(this, other);
		}
	};
}
