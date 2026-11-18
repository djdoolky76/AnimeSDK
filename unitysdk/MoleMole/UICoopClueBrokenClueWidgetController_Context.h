#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { class Object; }
template <typename T> class JIOLFCAGOFH_1;

#define MOLEMOLE_UICOOPCLUEBROKENCLUEWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x16680D70)

namespace MoleMole
{
	inline static constexpr unsigned int UICoopClueBrokenClueWidgetController_Context_TypeDefinitionIndex = 90603;

	class UICoopClueBrokenClueWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::JIOLFCAGOFH_1<::System::Object*>* Data; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPCLUEBROKENCLUEWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
