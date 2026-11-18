#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIMissionTipsRowMultiWidgetController; }
namespace System { class Action; }

#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS186_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1740C370)
#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS186_1__PLAYRECOMMENDTRACK_B__3_OFFSET UNITYSDK_OFFSET(0x1740C380)
#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS186_1__PLAYRECOMMENDTRACK_B__4_OFFSET UNITYSDK_OFFSET(0x1740C530)

namespace MoleMole
{
	inline static constexpr unsigned int UIMissionTipsContainerWidgetController___c__DisplayClass186_1_TypeDefinitionIndex = 77624;

	template <typename T>
	class UIMissionTipsContainerWidgetController___c__DisplayClass186_1 : public ::System::Object
	{
	public:
		::System::Action* __9__4; // 0x10
		::System::Object* CS___8__locals1; // 0x18
		::MoleMole::UIMissionTipsRowMultiWidgetController* widget; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS186_1__CTOR_OFFSET))(this);
		}

		::System::Void _PlayRecommendTrack_b__3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS186_1__PLAYRECOMMENDTRACK_B__3_OFFSET))(this);
		}

		::System::Void _PlayRecommendTrack_b__4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS186_1__PLAYRECOMMENDTRACK_B__4_OFFSET))(this);
		}
	};
}
