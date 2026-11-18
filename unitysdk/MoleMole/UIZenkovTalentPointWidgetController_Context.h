#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class EKGAHGCJOAN_PLPDLPGLIAD;
namespace System { class Object; }
template <typename T> class JIOLFCAGOFH_1;

#define MOLEMOLE_UIZENKOVTALENTPOINTWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x14E55FF0)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovTalentPointWidgetController_Context_TypeDefinitionIndex = 61072;

	class UIZenkovTalentPointWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::JIOLFCAGOFH_1<::System::Object*>* CurrentSelectedNode; // 0x28
		::EKGAHGCJOAN_PLPDLPGLIAD* Node; // 0x30
		::System::Boolean ShowInfoOnly; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVTALENTPOINTWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
