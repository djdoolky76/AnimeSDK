#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class EBHJDFFGMIH;
template <typename T> class JIOLFCAGOFH_1;
template <typename T> class LGFJMNEABJP_1;

#define MOLEMOLE_UIBANGKOVBANGBOOSELECTITEMWIDGETCONTROLLER_DATA__CTOR_OFFSET UNITYSDK_OFFSET(0x19BC4830)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangkovBangbooSelectItemWidgetController_Data_TypeDefinitionIndex = 67589;

	class UIBangkovBangbooSelectItemWidgetController_Data : public ::System::Object
	{
	public:
		::JIOLFCAGOFH_1<::System::Int32>* FocusedIndex; // 0x10
		::LGFJMNEABJP_1<::System::Int32>* SelectedIndex; // 0x18
		::EBHJDFFGMIH* Config; // 0x20
		::System::Boolean IsLocked; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVBANGBOOSELECTITEMWIDGETCONTROLLER_DATA__CTOR_OFFSET))(this);
		}
	};
}
