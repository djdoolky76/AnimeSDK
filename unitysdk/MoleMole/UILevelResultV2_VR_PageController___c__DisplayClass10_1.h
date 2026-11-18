#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class KOIDMLPJGML;

#define MOLEMOLE_UILEVELRESULTV2_VR_PAGECONTROLLER___C__DISPLAYCLASS10_1__CTOR_OFFSET UNITYSDK_OFFSET(0x14C8C1D0)
#define MOLEMOLE_UILEVELRESULTV2_VR_PAGECONTROLLER___C__DISPLAYCLASS10_1__REFRESHFAIRYBTNSTATE_B__20_OFFSET UNITYSDK_OFFSET(0x14C8C1E0)
#define MOLEMOLE_UILEVELRESULTV2_VR_PAGECONTROLLER___C__DISPLAYCLASS10_1__REFRESHFAIRYBTNSTATE_B__21_OFFSET UNITYSDK_OFFSET(0x14C8C210)

namespace MoleMole
{
	inline static constexpr unsigned int UILevelResultV2_VR_PageController___c__DisplayClass10_1_TypeDefinitionIndex = 43739;

	template <typename T>
	class UILevelResultV2_VR_PageController___c__DisplayClass10_1 : public ::System::Object
	{
	public:
		::System::Int32 materialItemId; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELRESULTV2_VR_PAGECONTROLLER___C__DISPLAYCLASS10_1__CTOR_OFFSET))(this);
		}

		::System::Boolean _RefreshFairyBtnState_b__20(::KOIDMLPJGML* reward)
		{
			return ((::System::Boolean(*)(::PVOID, ::KOIDMLPJGML*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELRESULTV2_VR_PAGECONTROLLER___C__DISPLAYCLASS10_1__REFRESHFAIRYBTNSTATE_B__20_OFFSET))(this, reward);
		}

		::System::Boolean _RefreshFairyBtnState_b__21(::KOIDMLPJGML* reward)
		{
			return ((::System::Boolean(*)(::PVOID, ::KOIDMLPJGML*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELRESULTV2_VR_PAGECONTROLLER___C__DISPLAYCLASS10_1__REFRESHFAIRYBTNSTATE_B__21_OFFSET))(this, reward);
		}
	};
}
