#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace ABC::UI { class CollectViewItem; }

#define ABC_UI_MONOUIAUTOVIEW_FC41ED6FC5AC05BE_ACA20D026C304DD7_OFFSET UNITYSDK_OFFSET(0x1F957E0)
#define ABC_UI_MONOUIAUTOVIEW_FC41ED6FC5AC05BE__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace ABC::UI
{
	inline static constexpr unsigned int MonoUIAutoView_FC41ED6FC5AC05BE_TypeDefinitionIndex = 7927;

	class MonoUIAutoView_FC41ED6FC5AC05BE : public ::System::Object
	{
	public:
		::ABC::UI::CollectViewItem* EC35F88C87A83BEB; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_UI_MONOUIAUTOVIEW_FC41ED6FC5AC05BE__CTOR_OFFSET))(this);
		}

		::System::Boolean ACA20D026C304DD7(::ABC::UI::CollectViewItem* AC365A1048B611A5)
		{
			return ((::System::Boolean(*)(::PVOID, ::ABC::UI::CollectViewItem*))((::PBYTE)hIl2Cpp + ABC_UI_MONOUIAUTOVIEW_FC41ED6FC5AC05BE_ACA20D026C304DD7_OFFSET))(this, AC365A1048B611A5);
		}
	};
}
