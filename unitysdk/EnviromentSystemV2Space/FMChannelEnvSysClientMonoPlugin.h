#pragma once
#include "unitysdk/unitysdk.h"

#define ENVIROMENTSYSTEMV2SPACE_FMCHANNELENVSYSCLIENTMONOPLUGIN_CTOR_OFFSET UNITYSDK_OFFSET(0x15653730)

namespace EnviromentSystemV2Space
{
	inline static constexpr unsigned int FMChannelEnvSysClientMonoPlugin_TypeDefinitionIndex = 49567;

	class FMChannelEnvSysClientMonoPlugin
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_FMCHANNELENVSYSCLIENTMONOPLUGIN_CTOR_OFFSET))(this);
		}

	};
}
