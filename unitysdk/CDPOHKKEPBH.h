#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/AstraFXRendererDelegate.h"
class AstraFX_DemoComponent;

#define CDPOHKKEPBH_AFTERCREATERESOURCES_OFFSET UNITYSDK_OFFSET(0x173C1F00)
#define CDPOHKKEPBH_AFTEREXECUTEPASSES_OFFSET UNITYSDK_OFFSET(0x173C2010)
#define CDPOHKKEPBH_BEFOREEXECUTEPASSES_OFFSET UNITYSDK_OFFSET(0x173C1F90)
#define CDPOHKKEPBH_CTOR_OFFSET UNITYSDK_OFFSET(0x173C2060)
#define CDPOHKKEPBH_RESETSIMULATIONSTATE_OFFSET UNITYSDK_OFFSET(0x173C1E00)

inline static constexpr unsigned int CDPOHKKEPBH_TypeDefinitionIndex = 48623;

	class CDPOHKKEPBH : public ::UnityEngine::AstraFXRendererDelegate
	{
	public:
		::AstraFX_DemoComponent* NACDICJFAND; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDPOHKKEPBH_CTOR_OFFSET))(this);
		}

		::System::Void ResetSimulationState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDPOHKKEPBH_RESETSIMULATIONSTATE_OFFSET))(this);
		}

		::System::Void AfterCreateResources()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDPOHKKEPBH_AFTERCREATERESOURCES_OFFSET))(this);
		}

		::System::Void BeforeExecutePasses()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDPOHKKEPBH_BEFOREEXECUTEPASSES_OFFSET))(this);
		}

		::System::Void AfterExecutePasses()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDPOHKKEPBH_AFTEREXECUTEPASSES_OFFSET))(this);
		}

	};
