#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_UIZENKOVDATAINFOWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1671A0C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovDataInfoWidgetController_Context_TypeDefinitionIndex = 88891;

	class UIZenkovDataInfoWidgetController_Context : public ::System::Object
	{
	public:
		::System::String* Value; // 0x10
		::System::String* Name; // 0x18
		::System::Int32 StartNum; // 0x20
		::System::Int32 StarLevel; // 0x24
		::System::Boolean IsEmpty; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVDATAINFOWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
