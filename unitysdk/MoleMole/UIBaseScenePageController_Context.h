#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/PONEGOPCLPF.h"
#include "unitysdk/System/Nullable_1.h"

#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_CONTEXT_GET_DEFAULTSTATE_OFFSET UNITYSDK_OFFSET(0x17FF9B80)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_CONTEXT_SET_DEFAULTSTATE_OFFSET UNITYSDK_OFFSET(0x17FF9B90)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x17FF9BA0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBaseScenePageController_Context_TypeDefinitionIndex = 87061;

	class UIBaseScenePageController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Nullable_1<::PONEGOPCLPF> _DefaultState_k__BackingField; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}

		::System::Nullable_1<::PONEGOPCLPF> get_DefaultState()
		{
			return ((::System::Nullable_1<::PONEGOPCLPF>(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER_CONTEXT_GET_DEFAULTSTATE_OFFSET))(this);
		}

		::System::Void set_DefaultState(::System::Nullable_1<::PONEGOPCLPF> value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::PONEGOPCLPF>))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER_CONTEXT_SET_DEFAULTSTATE_OFFSET))(this, value);
		}
	};
}
