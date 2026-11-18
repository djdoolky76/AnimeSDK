#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_UIZENKOVTAGINFOWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x12FBEED0)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovTagInfoWidgetController_Context_TypeDefinitionIndex = 39550;

	class UIZenkovTagInfoWidgetController_Context : public ::System::Object
	{
	public:
		::System::String* TextShaderPath; // 0x10
		::System::String* TagText; // 0x18
		::System::Boolean IsEmpty; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVTAGINFOWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
