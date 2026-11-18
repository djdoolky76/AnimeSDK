#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NBJLLOBDKHH_HEJPJGKLADK.h"
#include "unitysdk/System/Object.h"

class CEJDPLIMHKG;

#define MOLEMOLE_UITRIDICEITEMCOLLECTWIDGETCONTROLLER___C__DISPLAYCLASS17_0__CTOR_OFFSET UNITYSDK_OFFSET(0x13E74910)
#define MOLEMOLE_UITRIDICEITEMCOLLECTWIDGETCONTROLLER___C__DISPLAYCLASS17_0__REFRESHVIEW_B__0_OFFSET UNITYSDK_OFFSET(0x13E74920)

namespace MoleMole
{
	inline static constexpr unsigned int UITriDiceItemCollectWidgetController___c__DisplayClass17_0_TypeDefinitionIndex = 86216;

	class UITriDiceItemCollectWidgetController___c__DisplayClass17_0 : public ::System::Object
	{
	public:
		::NBJLLOBDKHH_HEJPJGKLADK luckType; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIDICEITEMCOLLECTWIDGETCONTROLLER___C__DISPLAYCLASS17_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _RefreshView_b__0(::CEJDPLIMHKG* item)
		{
			return ((::System::Boolean(*)(::PVOID, ::CEJDPLIMHKG*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIDICEITEMCOLLECTWIDGETCONTROLLER___C__DISPLAYCLASS17_0__REFRESHVIEW_B__0_OFFSET))(this, item);
		}
	};
}
