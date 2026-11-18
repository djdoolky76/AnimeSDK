#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIMainStoryPageController; }
namespace MoleMole { class UITape3DModelController; }
namespace System { class Action; }

#define MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER___C__DISPLAYCLASS39_1__CTOR_OFFSET UNITYSDK_OFFSET(0x164C7C80)
#define MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER___C__DISPLAYCLASS39_1__STARTPERFORMANCE_B__2_OFFSET UNITYSDK_OFFSET(0x164C7DC0)
#define MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER___C__DISPLAYCLASS39_1__STARTPERFORMANCE_B__3_OFFSET UNITYSDK_OFFSET(0x164C8050)
#define MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER___C__DISPLAYCLASS39_1__STARTPERFORMANCE_B__4_OFFSET UNITYSDK_OFFSET(0x164C8220)

namespace MoleMole
{
	inline static constexpr unsigned int UITapesGroup3DModelController___c__DisplayClass39_1_TypeDefinitionIndex = 84910;

	template <typename T>
	class UITapesGroup3DModelController___c__DisplayClass39_1 : public ::System::Object
	{
	public:
		::MoleMole::UITape3DModelController* initCenterTape; // 0x10
		::System::Object* CS___8__locals1; // 0x18
		::System::Action* __9__3; // 0x20
		::System::Action* __9__4; // 0x28
		::MoleMole::UIMainStoryPageController* mainStoryPage; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER___C__DISPLAYCLASS39_1__CTOR_OFFSET))(this);
		}

		::System::Void _StartPerformance_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER___C__DISPLAYCLASS39_1__STARTPERFORMANCE_B__2_OFFSET))(this);
		}

		::System::Void _StartPerformance_b__3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER___C__DISPLAYCLASS39_1__STARTPERFORMANCE_B__3_OFFSET))(this);
		}

		::System::Void _StartPerformance_b__4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER___C__DISPLAYCLASS39_1__STARTPERFORMANCE_B__4_OFFSET))(this);
		}
	};
}
