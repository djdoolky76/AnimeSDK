#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AOAFFNDJCIL;
template <typename T> class JIOLFCAGOFH_1;

#define MOLEMOLE_UIBALLGAMEROLETABWIDGETCONTROLLER_DATA__CTOR_OFFSET UNITYSDK_OFFSET(0x19D42C30)

namespace MoleMole
{
	inline static constexpr unsigned int UIBallGameRoleTabWidgetController_Data_TypeDefinitionIndex = 38623;

	class UIBallGameRoleTabWidgetController_Data : public ::System::Object
	{
	public:
		::JIOLFCAGOFH_1<::System::Int32>* CurrentSelectedIndex; // 0x10
		::AOAFFNDJCIL* Config; // 0x18
		::System::Int32 Index; // 0x20
		::System::Boolean IsLocked; // 0x24
		::System::Boolean IsRecommend; // 0x25

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEROLETABWIDGETCONTROLLER_DATA__CTOR_OFFSET))(this);
		}
	};
}
