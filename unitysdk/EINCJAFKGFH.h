#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/AstraFXRendererDelegate.h"
class CFGKDALDABC;

#define EINCJAFKGFH_AFTERCREATERESOURCES_OFFSET UNITYSDK_OFFSET(0x16413880)
#define EINCJAFKGFH_AFTEREXECUTEPASSES_OFFSET UNITYSDK_OFFSET(0x16413B20)
#define EINCJAFKGFH_BEFOREEXECUTEPASSES_OFFSET UNITYSDK_OFFSET(0x164139D0)
#define EINCJAFKGFH_CTOR_OFFSET UNITYSDK_OFFSET(0x16413C70)
#define EINCJAFKGFH_RESETSIMULATIONSTATE_OFFSET UNITYSDK_OFFSET(0x164136A0)

inline static constexpr unsigned int EINCJAFKGFH_TypeDefinitionIndex = 75813;

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
