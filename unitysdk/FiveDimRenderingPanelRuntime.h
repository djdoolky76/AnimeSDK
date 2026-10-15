#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FiveDimRenderingPanel.h"

#define FIVEDIMRENDERINGPANELRUNTIME_CTOR_OFFSET UNITYSDK_OFFSET(0x15927250)
#define FIVEDIMRENDERINGPANELRUNTIME_ENAIBJGFMFI_OFFSET UNITYSDK_OFFSET(0x159271C0)
#define FIVEDIMRENDERINGPANELRUNTIME_GMEDBNAABDC_OFFSET UNITYSDK_OFFSET(0x15927170)
#define FIVEDIMRENDERINGPANELRUNTIME_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x15927200)

inline static constexpr unsigned int FiveDimRenderingPanelRuntime_TypeDefinitionIndex = 47123;

	class FiveDimRenderingPanelRuntime : public ::FiveDimRenderingPanel
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANELRUNTIME_CTOR_OFFSET))(this);
		}

		::System::Void GMEDBNAABDC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANELRUNTIME_GMEDBNAABDC_OFFSET))(this);
		}

		::System::Void ENAIBJGFMFI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANELRUNTIME_ENAIBJGFMFI_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANELRUNTIME_ONDESTROY_OFFSET))(this);
		}

	};
