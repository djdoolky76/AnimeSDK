#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/AstraFXRendererDelegate.h"
class AstraFX_DemoComponent;

#define CDPOHKKEPBH_AFTERCREATERESOURCES_OFFSET UNITYSDK_OFFSET(0xC779380)
#define CDPOHKKEPBH_AFTEREXECUTEPASSES_OFFSET UNITYSDK_OFFSET(0xC779490)
#define CDPOHKKEPBH_BEFOREEXECUTEPASSES_OFFSET UNITYSDK_OFFSET(0xC779410)
#define CDPOHKKEPBH_CTOR_OFFSET UNITYSDK_OFFSET(0xC7794E0)
#define CDPOHKKEPBH_RESETSIMULATIONSTATE_OFFSET UNITYSDK_OFFSET(0xC779280)

inline static constexpr unsigned int CDPOHKKEPBH_TypeDefinitionIndex = 47594;

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
