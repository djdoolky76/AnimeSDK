#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/CustomLightQualityFilter.h"

#define RPG_CLIENT_MONODEFERREDDECALMONOPLUGIN_CTOR_OFFSET UNITYSDK_OFFSET(0xD74AA90)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoDeferredDecalMonoPlugin_TypeDefinitionIndex = 70923;

	class MonoDeferredDecalMonoPlugin
	{
	public:
		::RPG::CustomRP::CustomLightQualityFilter LightQualityFilter; // 0x30
		::System::Int32 LightQualityVersion; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODEFERREDDECALMONOPLUGIN_CTOR_OFFSET))(this);
		}

	};
}
