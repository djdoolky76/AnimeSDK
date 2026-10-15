#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define RPG_CLIENT_PROP_CHIMERABILLBOARDCANVASADAPTINGSCALER_CTOR_OFFSET UNITYSDK_OFFSET(0xDC53970)
#define RPG_CLIENT_PROP_CHIMERABILLBOARDCANVASADAPTINGSCALER_DMEOMAGGEKL_OFFSET UNITYSDK_OFFSET(0xDC53840)
#define RPG_CLIENT_PROP_CHIMERABILLBOARDCANVASADAPTINGSCALER_UPDATECANVASSCALEACCORDINGTOSCREENRATIO_OFFSET UNITYSDK_OFFSET(0xDC4B850)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraBillboardCanvasAdaptingScaler_TypeDefinitionIndex = 78467;

	class ChimeraBillboardCanvasAdaptingScaler : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single _CanvasScale16X9; // 0x18
		::System::Single _CanvasScale4X3; // 0x1C
		::System::Boolean _ShouldInterpolate; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERABILLBOARDCANVASADAPTINGSCALER_CTOR_OFFSET))(this);
		}

		::System::Single DMEOMAGGEKL()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERABILLBOARDCANVASADAPTINGSCALER_DMEOMAGGEKL_OFFSET))(this);
		}

		::System::Void UpdateCanvasScaleAccordingToScreenRatio()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERABILLBOARDCANVASADAPTINGSCALER_UPDATECANVASSCALEACCORDINGTOSCREENRATIO_OFFSET))(this);
		}

	};
}
