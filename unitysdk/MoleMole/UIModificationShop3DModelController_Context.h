#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class MBHOGLGMFEM;

#define MOLEMOLE_UIMODIFICATIONSHOP3DMODELCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x15D15EC0)

namespace MoleMole
{
	inline static constexpr unsigned int UIModificationShop3DModelController_Context_TypeDefinitionIndex = 56457;

	class UIModificationShop3DModelController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::MBHOGLGMFEM* storeData; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMODIFICATIONSHOP3DMODELCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
