#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class CACLMPKMPHM;
namespace MoleMole { class ConfigUIUrbanMap; }

#define MOLEMOLE_UIURBANMAPHUDSINGLEIMAGEWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x164CF170)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapHUDSingleImageWidgetController_Context_TypeDefinitionIndex = 76250;

	class UIUrbanMapHUDSingleImageWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::CACLMPKMPHM* MapRadarStateItemData; // 0x28
		::MoleMole::ConfigUIUrbanMap* So; // 0x30
		::System::Int32 MapAreaId; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPHUDSINGLEIMAGEWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
