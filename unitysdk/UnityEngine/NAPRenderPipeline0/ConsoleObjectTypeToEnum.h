#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITYENGINE_NAPRENDERPIPELINE0_CONSOLEOBJECTTYPETOENUM__CCTOR_OFFSET UNITYSDK_OFFSET(0x1ED828D0)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int ConsoleObjectTypeToEnum_TypeDefinitionIndex = 5693;

	class ConsoleObjectTypeToEnum : public ::System::Object
	{
	public:
		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_CONSOLEOBJECTTYPETOENUM__CCTOR_OFFSET))();
		}
	};
}
