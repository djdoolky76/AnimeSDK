#pragma once
#include "unitysdk/unitysdk.h"

#define RPG_CLIENT_TEMPLATEMONOPLUGIN_CTOR_OFFSET UNITYSDK_OFFSET(0xE1FDCF0)

namespace RPG::Client
{
	inline static constexpr unsigned int TemplateMonoPlugin_TypeDefinitionIndex = 70779;

	class TemplateMonoPlugin
	{
	public:
		::System::Int32 ExampleProperty; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEMPLATEMONOPLUGIN_CTOR_OFFSET))(this);
		}

	};
}
