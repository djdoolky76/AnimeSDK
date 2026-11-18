#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_UIVHSSTOREPROMOTERSELECTPOPWINDOWCONTROLLER_PROMOTERSELECTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x170A1EE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIVHSStorePromoterSelectPopWindowController_PromoterSelectData_TypeDefinitionIndex = 74379;

	class UIVHSStorePromoterSelectPopWindowController_PromoterSelectData : public ::System::Object
	{
	public:
		::System::UInt32 dataID; // 0x10
		::System::Boolean select; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTOREPROMOTERSELECTPOPWINDOWCONTROLLER_PROMOTERSELECTDATA__CTOR_OFFSET))(this);
		}
	};
}
