#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class KOIDMLPJGML;

#define MOLEMOLE_UILEVELRESULTV2_VR_PAGECONTROLLER___C__DISPLAYCLASS10_0__CTOR_OFFSET UNITYSDK_OFFSET(0x14C8C140)
#define MOLEMOLE_UILEVELRESULTV2_VR_PAGECONTROLLER___C__DISPLAYCLASS10_0__REFRESHFAIRYBTNSTATE_B__17_OFFSET UNITYSDK_OFFSET(0x14C8C150)
#define MOLEMOLE_UILEVELRESULTV2_VR_PAGECONTROLLER___C__DISPLAYCLASS10_0__REFRESHFAIRYBTNSTATE_B__18_OFFSET UNITYSDK_OFFSET(0x14C8C180)

namespace MoleMole
{
	inline static constexpr unsigned int UILevelResultV2_VR_PageController___c__DisplayClass10_0_TypeDefinitionIndex = 43737;

	class UILevelResultV2_VR_PageController___c__DisplayClass10_0 : public ::System::Object
	{
	public:
		::System::Int32 materialItemId; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELRESULTV2_VR_PAGECONTROLLER___C__DISPLAYCLASS10_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _RefreshFairyBtnState_b__17(::KOIDMLPJGML* reward)
		{
			return ((::System::Boolean(*)(::PVOID, ::KOIDMLPJGML*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELRESULTV2_VR_PAGECONTROLLER___C__DISPLAYCLASS10_0__REFRESHFAIRYBTNSTATE_B__17_OFFSET))(this, reward);
		}

		::System::Boolean _RefreshFairyBtnState_b__18(::KOIDMLPJGML* reward)
		{
			return ((::System::Boolean(*)(::PVOID, ::KOIDMLPJGML*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELRESULTV2_VR_PAGECONTROLLER___C__DISPLAYCLASS10_0__REFRESHFAIRYBTNSTATE_B__18_OFFSET))(this, reward);
		}
	};
}
