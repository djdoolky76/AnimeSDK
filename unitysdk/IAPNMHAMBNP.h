#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/AstraFXRendererDelegate.h"
namespace UnityEngine { class Mesh; }

#define IAPNMHAMBNP_CTOR_OFFSET UNITYSDK_OFFSET(0x15E199D0)
#define IAPNMHAMBNP_IGGNLLFCMBN_OFFSET UNITYSDK_OFFSET(0x15E19670)
#define IAPNMHAMBNP_RESETSIMULATIONSTATE_OFFSET UNITYSDK_OFFSET(0x15E197C0)

inline static constexpr unsigned int IAPNMHAMBNP_TypeDefinitionIndex = 47596;

	class IAPNMHAMBNP : public ::UnityEngine::AstraFXRendererDelegate
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAPNMHAMBNP_CTOR_OFFSET))(this);
		}

		::UnityEngine::Mesh* IGGNLLFCMBN()
		{
			return ((::UnityEngine::Mesh*(*)(::PVOID))((::PBYTE)hIl2Cpp + IAPNMHAMBNP_IGGNLLFCMBN_OFFSET))(this);
		}

		::System::Void ResetSimulationState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAPNMHAMBNP_RESETSIMULATIONSTATE_OFFSET))(this);
		}

	};
