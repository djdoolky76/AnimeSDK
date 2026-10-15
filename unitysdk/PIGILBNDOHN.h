#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/AstraFXRendererDelegate.h"
namespace AstraFX::Fireworks { class AstraFX_FireworksMonoPlugin; }

#define PIGILBNDOHN_AFTERCREATERESOURCES_OFFSET UNITYSDK_OFFSET(0xC258460)
#define PIGILBNDOHN_AFTEREXECUTEPASSES_OFFSET UNITYSDK_OFFSET(0xC258580)
#define PIGILBNDOHN_BEFOREEXECUTEPASSES_OFFSET UNITYSDK_OFFSET(0xC2584E0)
#define PIGILBNDOHN_CTOR_OFFSET UNITYSDK_OFFSET(0xC258600)
#define PIGILBNDOHN_RESETSIMULATIONSTATE_OFFSET UNITYSDK_OFFSET(0xC258320)

inline static constexpr unsigned int PIGILBNDOHN_TypeDefinitionIndex = 49024;

	class PIGILBNDOHN : public ::UnityEngine::AstraFXRendererDelegate
	{
	public:
		::AstraFX::Fireworks::AstraFX_FireworksMonoPlugin* HDDFKAGFMIM; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIGILBNDOHN_CTOR_OFFSET))(this);
		}

		::System::Void ResetSimulationState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIGILBNDOHN_RESETSIMULATIONSTATE_OFFSET))(this);
		}

		::System::Void AfterCreateResources()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIGILBNDOHN_AFTERCREATERESOURCES_OFFSET))(this);
		}

		::System::Void BeforeExecutePasses()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIGILBNDOHN_BEFOREEXECUTEPASSES_OFFSET))(this);
		}

		::System::Void AfterExecutePasses()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIGILBNDOHN_AFTEREXECUTEPASSES_OFFSET))(this);
		}

	};
