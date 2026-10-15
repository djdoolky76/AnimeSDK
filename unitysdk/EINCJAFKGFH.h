#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/AstraFXRendererDelegate.h"
class CFGKDALDABC;

#define EINCJAFKGFH_AFTERCREATERESOURCES_OFFSET UNITYSDK_OFFSET(0x154C7090)
#define EINCJAFKGFH_AFTEREXECUTEPASSES_OFFSET UNITYSDK_OFFSET(0x154C7330)
#define EINCJAFKGFH_BEFOREEXECUTEPASSES_OFFSET UNITYSDK_OFFSET(0x154C71E0)
#define EINCJAFKGFH_CTOR_OFFSET UNITYSDK_OFFSET(0x154C7480)
#define EINCJAFKGFH_RESETSIMULATIONSTATE_OFFSET UNITYSDK_OFFSET(0x154C6EB0)

inline static constexpr unsigned int EINCJAFKGFH_TypeDefinitionIndex = 73689;

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
