#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class HLCKDBBPGDA;

#define MOLEMOLE_UIHADALZONELAYER_PHOTOITEMWIDGETCONTROLLER_LAYERINFOCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x18E6AE90)

namespace MoleMole
{
	inline static constexpr unsigned int UIHadalZoneLayer_PhotoItemWidgetController_LayerInfoContext_TypeDefinitionIndex = 56371;

	class UIHadalZoneLayer_PhotoItemWidgetController_LayerInfoContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::HLCKDBBPGDA* record; // 0x28
		::System::Int32 totalLayerCount; // 0x30
		::System::Int32 layerIndex; // 0x34
		::System::Boolean isFixed; // 0x38
		::System::Byte _padding0[0x3];
		::System::Int32 zoneId; // 0x3C
		::System::Int32 layerId; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONELAYER_PHOTOITEMWIDGETCONTROLLER_LAYERINFOCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
