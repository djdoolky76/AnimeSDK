#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/MoleMole/UIHandBookPopWindowController_EHandBookTab.h"

#define MOLEMOLE_UIHANDBOOKPOPCONTEXT_APPLYJUMPPARAS_OFFSET UNITYSDK_OFFSET(0x18390D50)
#define MOLEMOLE_UIHANDBOOKPOPCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x183911E0)
#define MOLEMOLE_UIHANDBOOKPOPCONTEXT___BASE_APPLYJUMPPARAS_OFFSET UNITYSDK_OFFSET(0x18391240)

namespace MoleMole
{
	inline static constexpr unsigned int UIHandBookPopContext_TypeDefinitionIndex = 91648;

	class UIHandBookPopContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 ModuleID; // 0x28
		::System::Int32 trainQuestID; // 0x2C
		::MoleMole::UIHandBookPopWindowController_EHandBookTab startTab; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKPOPCONTEXT__CTOR_OFFSET))(this);
		}

		::System::Void ApplyJumpParas()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKPOPCONTEXT_APPLYJUMPPARAS_OFFSET))(this);
		}

		::System::Void __base_ApplyJumpParas()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKPOPCONTEXT___BASE_APPLYJUMPPARAS_OFFSET))(this);
		}
	};
}
