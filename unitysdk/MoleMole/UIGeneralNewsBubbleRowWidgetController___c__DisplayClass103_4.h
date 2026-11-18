#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER___C__DISPLAYCLASS103_4__CTOR_OFFSET UNITYSDK_OFFSET(0x173CE630)
#define MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER___C__DISPLAYCLASS103_4__ONNEWSTIPOPENDELAYEND_B__7_OFFSET UNITYSDK_OFFSET(0x173CE870)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralNewsBubbleRowWidgetController___c__DisplayClass103_4_TypeDefinitionIndex = 80530;

	template <typename T1, typename T2, typename T3, typename T4>
	class UIGeneralNewsBubbleRowWidgetController___c__DisplayClass103_4 : public ::System::Object
	{
	public:
		::System::String* str; // 0x10
		::System::Object* CS___8__locals3; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER___C__DISPLAYCLASS103_4__CTOR_OFFSET))(this);
		}

		::System::Void _OnNewsTipOpenDelayEnd_b__7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER___C__DISPLAYCLASS103_4__ONNEWSTIPOPENDELAYEND_B__7_OFFSET))(this);
		}
	};
}
