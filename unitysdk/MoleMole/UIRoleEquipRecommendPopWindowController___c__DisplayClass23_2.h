#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class HPAALNOJJKM;

#define MOLEMOLE_UIROLEEQUIPRECOMMENDPOPWINDOWCONTROLLER___C__DISPLAYCLASS23_2__CTOR_OFFSET UNITYSDK_OFFSET(0x17BE2320)
#define MOLEMOLE_UIROLEEQUIPRECOMMENDPOPWINDOWCONTROLLER___C__DISPLAYCLASS23_2__REFRESHRANDPROPERTYFILTERITEMS_B__3_OFFSET UNITYSDK_OFFSET(0x17BE2A70)

namespace MoleMole
{
	inline static constexpr unsigned int UIRoleEquipRecommendPopWindowController___c__DisplayClass23_2_TypeDefinitionIndex = 65596;

	template <typename T1, typename T2>
	class UIRoleEquipRecommendPopWindowController___c__DisplayClass23_2 : public ::System::Object
	{
	public:
		::System::Int32 PropertyId; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEEQUIPRECOMMENDPOPWINDOWCONTROLLER___C__DISPLAYCLASS23_2__CTOR_OFFSET))(this);
		}

		::System::Boolean _RefreshRandPropertyFilterItems_b__3(::HPAALNOJJKM* selectProperty)
		{
			return ((::System::Boolean(*)(::PVOID, ::HPAALNOJJKM*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEEQUIPRECOMMENDPOPWINDOWCONTROLLER___C__DISPLAYCLASS23_2__REFRESHRANDPROPERTYFILTERITEMS_B__3_OFFSET))(this, selectProperty);
		}
	};
}
