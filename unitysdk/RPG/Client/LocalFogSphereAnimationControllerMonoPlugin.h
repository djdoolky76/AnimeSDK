#pragma once
#include "unitysdk/unitysdk.h"
class LocalFogSphereInstance;
namespace System { class String; }

#define RPG_CLIENT_LOCALFOGSPHEREANIMATIONCONTROLLERMONOPLUGIN_CTOR_OFFSET UNITYSDK_OFFSET(0xD495650)
#define RPG_CLIENT_LOCALFOGSPHEREANIMATIONCONTROLLERMONOPLUGIN_GETTICKLODTEMPLATENAME_OFFSET UNITYSDK_OFFSET(0xD495600)

namespace RPG::Client
{
	inline static constexpr unsigned int LocalFogSphereAnimationControllerMonoPlugin_TypeDefinitionIndex = 70647;

	class LocalFogSphereAnimationControllerMonoPlugin
	{
	public:
		::LocalFogSphereInstance* TargetFog; // 0x30
		::System::Boolean AlwaysUpdateMaterialBlock; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALFOGSPHEREANIMATIONCONTROLLERMONOPLUGIN_CTOR_OFFSET))(this);
		}

		::System::String* GetTickLodTemplateName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALFOGSPHEREANIMATIONCONTROLLERMONOPLUGIN_GETTICKLODTEMPLATENAME_OFFSET))(this);
		}

	};
}
