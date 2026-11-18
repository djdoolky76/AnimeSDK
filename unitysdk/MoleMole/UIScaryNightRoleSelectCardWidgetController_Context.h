#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class EOLACICGJBD;
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UISCARYNIGHTROLESELECTCARDWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x166D1850)

namespace MoleMole
{
	inline static constexpr unsigned int UIScaryNightRoleSelectCardWidgetController_Context_TypeDefinitionIndex = 39290;

	class UIScaryNightRoleSelectCardWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action_1<::System::Int32>* OnClick; // 0x28
		::EOLACICGJBD* Avatar; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISCARYNIGHTROLESELECTCARDWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
