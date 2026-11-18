#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class ALGKMLLALFG;

#define MOLEMOLE_UIHOLLOWEVENTWIDGETCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A293060)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowEventWidgetContext_TypeDefinitionIndex = 60944;

	class UIHollowEventWidgetContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::ALGKMLLALFG* graph; // 0x28

		::System::Void _ctor(::ALGKMLLALFG* graph)
		{
			return ((::System::Void(*)(::PVOID, ::ALGKMLLALFG*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWEVENTWIDGETCONTEXT__CTOR_OFFSET))(this, graph);
		}
	};
}
