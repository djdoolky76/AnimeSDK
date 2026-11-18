#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/OBKDGDPMJLH.h"
#include "unitysdk/System/Nullable_1.h"

#define MOLEMOLE_UIGACHAOPTPAGECONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x18099A50)

namespace MoleMole
{
	inline static constexpr unsigned int UIGachaOptPageController_Context_TypeDefinitionIndex = 74058;

	class UIGachaOptPageController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Nullable_1<::OBKDGDPMJLH> InitialCustomizeType; // 0x28
		::System::Int32 GachaID; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAOPTPAGECONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
