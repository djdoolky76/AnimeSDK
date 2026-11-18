#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class EMONNCFEDAO;
class HGAJKHIMKJP;

#define MOLEMOLE_UIROLEEQUIPREPLACEWIDGETCONTROLLER___C__DISPLAYCLASS160_0__CTOR_OFFSET UNITYSDK_OFFSET(0x155E5240)
#define MOLEMOLE_UIROLEEQUIPREPLACEWIDGETCONTROLLER___C__DISPLAYCLASS160_0__ENSUREEQUIPEDITEMINLIST_B__0_OFFSET UNITYSDK_OFFSET(0x155E5250)

namespace MoleMole
{
	inline static constexpr unsigned int UIRoleEquipReplaceWidgetController___c__DisplayClass160_0_TypeDefinitionIndex = 40818;

	class UIRoleEquipReplaceWidgetController___c__DisplayClass160_0 : public ::System::Object
	{
	public:
		::HGAJKHIMKJP* equipedData; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEEQUIPREPLACEWIDGETCONTROLLER___C__DISPLAYCLASS160_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _EnsureEquipedItemInList_b__0(::EMONNCFEDAO* view)
		{
			return ((::System::Boolean(*)(::PVOID, ::EMONNCFEDAO*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEEQUIPREPLACEWIDGETCONTROLLER___C__DISPLAYCLASS160_0__ENSUREEQUIPEDITEMINLIST_B__0_OFFSET))(this, view);
		}
	};
}
