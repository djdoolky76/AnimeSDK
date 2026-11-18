#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class KCDKJNPJEDM;
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UISKINSETINFOWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x15D635E0)

namespace MoleMole
{
	inline static constexpr unsigned int UISkinSetInfoWidgetController_Context_TypeDefinitionIndex = 85527;

	class UISkinSetInfoWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action_1<::KCDKJNPJEDM*>* OnPreviewItemSelected; // 0x28
		::System::Int32 ComboID; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISKINSETINFOWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
