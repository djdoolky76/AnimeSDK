#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class KIPELNFMIAP;

#define MOLEMOLE_UIMAINCITYREVIVALCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x19044590)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCityRevivalContext_TypeDefinitionIndex = 86717;

	class UIMainCityRevivalContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::KIPELNFMIAP* progress; // 0x28
		::System::Int32 landID; // 0x30

		::System::Void _ctor(::System::Int32 landID, ::KIPELNFMIAP* progress)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::KIPELNFMIAP*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYREVIVALCONTEXT__CTOR_OFFSET))(this, landID, progress);
		}
	};
}
