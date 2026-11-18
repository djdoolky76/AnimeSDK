#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_UIRECOMMENDTYPESUITROWWIDGETCONTROLLER___C__DISPLAYCLASS16_1__CTOR_OFFSET UNITYSDK_OFFSET(0x168EC560)
#define MOLEMOLE_UIRECOMMENDTYPESUITROWWIDGETCONTROLLER___C__DISPLAYCLASS16_1__REFRESHVIEW_B__5_OFFSET UNITYSDK_OFFSET(0x168EC570)

namespace MoleMole
{
	inline static constexpr unsigned int UIRecommendTypeSuitRowWidgetController___c__DisplayClass16_1_TypeDefinitionIndex = 63709;

	template <typename T>
	class UIRecommendTypeSuitRowWidgetController___c__DisplayClass16_1 : public ::System::Object
	{
	public:
		::System::Int32 equipItemID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRECOMMENDTYPESUITROWWIDGETCONTROLLER___C__DISPLAYCLASS16_1__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshView_b__5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRECOMMENDTYPESUITROWWIDGETCONTROLLER___C__DISPLAYCLASS16_1__REFRESHVIEW_B__5_OFFSET))(this);
		}
	};
}
