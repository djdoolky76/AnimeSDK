#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class MFBKLAENAEC;

#define MOLEMOLE_UIBANBOONETSYSTEM3DMODELCONTROLLER_PANELDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x18D20A10)

namespace MoleMole
{
	inline static constexpr unsigned int UIBanbooNetSystem3DModelController_PanelData_TypeDefinitionIndex = 87100;

	class UIBanbooNetSystem3DModelController_PanelData : public ::MoleMole::UIControllerContextBase
	{
	public:
		::MFBKLAENAEC* StartTimelineTask; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANBOONETSYSTEM3DMODELCONTROLLER_PANELDATA__CTOR_OFFSET))(this);
		}
	};
}
