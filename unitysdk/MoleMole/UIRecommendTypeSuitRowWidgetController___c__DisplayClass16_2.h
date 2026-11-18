#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_UIRECOMMENDTYPESUITROWWIDGETCONTROLLER___C__DISPLAYCLASS16_2__CTOR_OFFSET UNITYSDK_OFFSET(0x18FF8750)
#define MOLEMOLE_UIRECOMMENDTYPESUITROWWIDGETCONTROLLER___C__DISPLAYCLASS16_2__REFRESHVIEW_B__6_OFFSET UNITYSDK_OFFSET(0x18FF8760)

namespace MoleMole
{
	inline static constexpr unsigned int UIRecommendTypeSuitRowWidgetController___c__DisplayClass16_2_TypeDefinitionIndex = 63708;

	template <typename T1, typename T2>
	class UIRecommendTypeSuitRowWidgetController___c__DisplayClass16_2 : public ::System::Object
	{
	public:
		::System::Int32 equipItemID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRECOMMENDTYPESUITROWWIDGETCONTROLLER___C__DISPLAYCLASS16_2__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshView_b__6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRECOMMENDTYPESUITROWWIDGETCONTROLLER___C__DISPLAYCLASS16_2__REFRESHVIEW_B__6_OFFSET))(this);
		}
	};
}
