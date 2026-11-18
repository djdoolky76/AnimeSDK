#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class NCIILDJDHMK;
namespace MoleMole { class UIVideoWidgetContext; }
namespace MoleMole { class UIVideoWidgetController; }

#define MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER___C__DISPLAYCLASS115_1__CTOR_OFFSET UNITYSDK_OFFSET(0x17864BE0)
#define MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER___C__DISPLAYCLASS115_1__SHOWSTARTPERFORMANCE_B__1_OFFSET UNITYSDK_OFFSET(0x17864BF0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowMainPageController___c__DisplayClass115_1_TypeDefinitionIndex = 84605;

	template <typename T>
	class UIHollowMainPageController___c__DisplayClass115_1 : public ::System::Object
	{
	public:
		::NCIILDJDHMK* chessboardPerformResTemplate; // 0x10
		::System::Object* CS___8__locals1; // 0x18
		::MoleMole::UIVideoWidgetContext* context; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER___C__DISPLAYCLASS115_1__CTOR_OFFSET))(this);
		}

		::System::Void _ShowStartPerformance_b__1(::MoleMole::UIVideoWidgetController* player)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIVideoWidgetController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER___C__DISPLAYCLASS115_1__SHOWSTARTPERFORMANCE_B__1_OFFSET))(this, player);
		}
	};
}
