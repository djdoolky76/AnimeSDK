#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole { class UITape3DModelController; }

#define MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER___C__DISPLAYCLASS42_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1718CA40)
#define MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER___C__DISPLAYCLASS42_1__PERFORMANCESHRINK_B__1_OFFSET UNITYSDK_OFFSET(0x1718CA50)

namespace MoleMole
{
	inline static constexpr unsigned int UITapesGroup3DModelController___c__DisplayClass42_1_TypeDefinitionIndex = 84921;

	template <typename T>
	class UITapesGroup3DModelController___c__DisplayClass42_1 : public ::System::Object
	{
	public:
		::MoleMole::UITape3DModelController* tape; // 0x10
		::System::Object* CS___8__locals1; // 0x18
		::UnityEngine::Vector3 targetPos; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER___C__DISPLAYCLASS42_1__CTOR_OFFSET))(this);
		}

		::System::Void _PerformanceShrink_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER___C__DISPLAYCLASS42_1__PERFORMANCESHRINK_B__1_OFFSET))(this);
		}
	};
}
