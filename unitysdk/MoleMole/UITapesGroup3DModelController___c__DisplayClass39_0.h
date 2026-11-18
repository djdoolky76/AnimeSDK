#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UITapesGroup3DModelController; }
namespace MoleMole { class UITapesGroup3DModelController_ArchiveTapes; }
namespace System { class Action; }

#define MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER___C__DISPLAYCLASS39_0__CTOR_OFFSET UNITYSDK_OFFSET(0x164C7850)
#define MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER___C__DISPLAYCLASS39_0__STARTPERFORMANCE_B__0_OFFSET UNITYSDK_OFFSET(0x164C7860)
#define MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER___C__DISPLAYCLASS39_0__STARTPERFORMANCE_B__1_OFFSET UNITYSDK_OFFSET(0x164C7C90)
#define MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER___C__DISPLAYCLASS39_0__STARTPERFORMANCE_B__5_OFFSET UNITYSDK_OFFSET(0x164C7D80)

namespace MoleMole
{
	inline static constexpr unsigned int UITapesGroup3DModelController___c__DisplayClass39_0_TypeDefinitionIndex = 84915;

	class UITapesGroup3DModelController___c__DisplayClass39_0 : public ::System::Object
	{
	public:
		::System::Action* __9__1; // 0x10
		::MoleMole::UITapesGroup3DModelController_ArchiveTapes* archiveTapes; // 0x18
		::MoleMole::UITapesGroup3DModelController* __4__this; // 0x20
		::System::Action* __9__5; // 0x28
		::System::Boolean initCamera; // 0x30
		::System::Byte _padding0[0x3];
		::System::Int32 switchDir; // 0x34
		::System::Single speed; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER___C__DISPLAYCLASS39_0__CTOR_OFFSET))(this);
		}

		::System::Void _StartPerformance_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER___C__DISPLAYCLASS39_0__STARTPERFORMANCE_B__0_OFFSET))(this);
		}

		::System::Void _StartPerformance_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER___C__DISPLAYCLASS39_0__STARTPERFORMANCE_B__1_OFFSET))(this);
		}

		::System::Void _StartPerformance_b__5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER___C__DISPLAYCLASS39_0__STARTPERFORMANCE_B__5_OFFSET))(this);
		}
	};
}
