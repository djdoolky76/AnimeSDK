#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace System { class String; }

#define RPG_CLIENT_REFLECTIONHSVVOLUMEMONOPLUGIN_CTOR_OFFSET UNITYSDK_OFFSET(0xDE59FA0)
#define RPG_CLIENT_REFLECTIONHSVVOLUMEMONOPLUGIN_GETTICKLODTEMPLATENAME_OFFSET UNITYSDK_OFFSET(0xDE59F50)

namespace RPG::Client
{
	inline static constexpr unsigned int ReflectionHSVVolumeMonoPlugin_TypeDefinitionIndex = 70707;

	class ReflectionHSVVolumeMonoPlugin
	{
	public:
		::UnityEngine::Vector3 ALKEOLEEKAH; // 0x30
		::UnityEngine::Vector3 FBOCAFLELGJ; // 0x3C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_REFLECTIONHSVVOLUMEMONOPLUGIN_CTOR_OFFSET))(this);
		}

		::System::String* GetTickLodTemplateName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_REFLECTIONHSVVOLUMEMONOPLUGIN_GETTICKLODTEMPLATENAME_OFFSET))(this);
		}

	};
}
