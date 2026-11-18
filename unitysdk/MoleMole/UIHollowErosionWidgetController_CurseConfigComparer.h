#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DBEJKJDLNAI;

#define MOLEMOLE_UIHOLLOWEROSIONWIDGETCONTROLLER_CURSECONFIGCOMPARER_COMPARE_OFFSET UNITYSDK_OFFSET(0x1A4090E0)
#define MOLEMOLE_UIHOLLOWEROSIONWIDGETCONTROLLER_CURSECONFIGCOMPARER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A409250)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowErosionWidgetController_CurseConfigComparer_TypeDefinitionIndex = 86715;

	class UIHollowErosionWidgetController_CurseConfigComparer : public ::System::Object
	{
	public:
		// static const ::System::String* SPECIAL_TAG; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWEROSIONWIDGETCONTROLLER_CURSECONFIGCOMPARER__CTOR_OFFSET))(this);
		}

		::System::Int32 Compare(::DBEJKJDLNAI* x, ::DBEJKJDLNAI* y)
		{
			return ((::System::Int32(*)(::PVOID, ::DBEJKJDLNAI*, ::DBEJKJDLNAI*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWEROSIONWIDGETCONTROLLER_CURSECONFIGCOMPARER_COMPARE_OFFSET))(this, x, y);
		}
	};
}
