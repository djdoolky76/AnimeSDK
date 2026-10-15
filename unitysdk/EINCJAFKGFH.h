#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/AstraFXRendererDelegate.h"
class CFGKDALDABC;

#define EINCJAFKGFH_AFTERCREATERESOURCES_OFFSET UNITYSDK_OFFSET(0x154D2ED0)
#define EINCJAFKGFH_AFTEREXECUTEPASSES_OFFSET UNITYSDK_OFFSET(0x154D3170)
#define EINCJAFKGFH_BEFOREEXECUTEPASSES_OFFSET UNITYSDK_OFFSET(0x154D3020)
#define EINCJAFKGFH_CTOR_OFFSET UNITYSDK_OFFSET(0x154D32C0)
#define EINCJAFKGFH_RESETSIMULATIONSTATE_OFFSET UNITYSDK_OFFSET(0x154D2CF0)

inline static constexpr unsigned int EINCJAFKGFH_TypeDefinitionIndex = 73690;

	class EINCJAFKGFH : public ::UnityEngine::AstraFXRendererDelegate
	{
	public:
		::CFGKDALDABC* COKDGBEABHP; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EINCJAFKGFH_CTOR_OFFSET))(this);
		}

		::System::Void ResetSimulationState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EINCJAFKGFH_RESETSIMULATIONSTATE_OFFSET))(this);
		}

		::System::Void AfterCreateResources()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EINCJAFKGFH_AFTERCREATERESOURCES_OFFSET))(this);
		}

		::System::Void BeforeExecutePasses()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EINCJAFKGFH_BEFOREEXECUTEPASSES_OFFSET))(this);
		}

		::System::Void AfterExecutePasses()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EINCJAFKGFH_AFTEREXECUTEPASSES_OFFSET))(this);
		}

	};
