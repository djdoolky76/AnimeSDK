#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIBubbleTips; }
namespace System { class String; }

#define MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER___C__DISPLAYCLASS103_1__CTOR_OFFSET UNITYSDK_OFFSET(0x173CE640)
#define MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER___C__DISPLAYCLASS103_1__ONNEWSTIPOPENDELAYEND_B__1_OFFSET UNITYSDK_OFFSET(0x173CE650)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralNewsBubbleRowWidgetController___c__DisplayClass103_1_TypeDefinitionIndex = 80566;

	template <typename T>
	class UIGeneralNewsBubbleRowWidgetController___c__DisplayClass103_1 : public ::System::Object
	{
	public:
		::System::Object* CS___8__locals1; // 0x10
		::MoleMole::UIBubbleTips* show; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER___C__DISPLAYCLASS103_1__CTOR_OFFSET))(this);
		}

		::System::String* _OnNewsTipOpenDelayEnd_b__1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER___C__DISPLAYCLASS103_1__ONNEWSTIPOPENDELAYEND_B__1_OFFSET))(this);
		}
	};
}
