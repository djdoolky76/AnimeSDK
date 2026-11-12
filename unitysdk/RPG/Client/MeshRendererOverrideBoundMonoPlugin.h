#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class String; }

#define RPG_CLIENT_MESHRENDEREROVERRIDEBOUNDMONOPLUGIN_CTOR_OFFSET UNITYSDK_OFFSET(0xE124630)
#define RPG_CLIENT_MESHRENDEREROVERRIDEBOUNDMONOPLUGIN_GETTICKLODTEMPLATENAME_OFFSET UNITYSDK_OFFSET(0xE1245E0)

namespace RPG::Client
{
	inline static constexpr unsigned int MeshRendererOverrideBoundMonoPlugin_TypeDefinitionIndex = 72655;

	class MeshRendererOverrideBoundMonoPlugin
	{
	public:
		::System::Single BoundExpand; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESHRENDEREROVERRIDEBOUNDMONOPLUGIN_CTOR_OFFSET))(this);
		}

		::System::String* GetTickLodTemplateName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESHRENDEREROVERRIDEBOUNDMONOPLUGIN_GETTICKLODTEMPLATENAME_OFFSET))(this);
		}

	};
}
