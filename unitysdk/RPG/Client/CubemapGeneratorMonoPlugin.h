#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class String; }

#define RPG_CLIENT_CUBEMAPGENERATORMONOPLUGIN_CTOR_OFFSET UNITYSDK_OFFSET(0x1B7E43B0)
#define RPG_CLIENT_CUBEMAPGENERATORMONOPLUGIN_GETTICKLODTEMPLATENAME_OFFSET UNITYSDK_OFFSET(0x1B7E4360)

namespace RPG::Client
{
	inline static constexpr unsigned int CubemapGeneratorMonoPlugin_TypeDefinitionIndex = 73020;

	class CubemapGeneratorMonoPlugin
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CUBEMAPGENERATORMONOPLUGIN_CTOR_OFFSET))(this);
		}

		::System::String* GetTickLodTemplateName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CUBEMAPGENERATORMONOPLUGIN_GETTICKLODTEMPLATENAME_OFFSET))(this);
		}

	};
}
