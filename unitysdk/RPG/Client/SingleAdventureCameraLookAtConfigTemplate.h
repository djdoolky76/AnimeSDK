#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SingleAdventureCameraLookAtConfigTemplateEnum.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class BaseAdventureCameraLookAt; }

#define RPG_CLIENT_SINGLEADVENTURECAMERALOOKATCONFIGTEMPLATE_CTOR_OFFSET UNITYSDK_OFFSET(0x1B416C50)

namespace RPG::Client
{
	inline static constexpr unsigned int SingleAdventureCameraLookAtConfigTemplate_TypeDefinitionIndex = 71484;

	class SingleAdventureCameraLookAtConfigTemplate : public ::System::Object
	{
	public:
		::RPG::GameCore::SingleAdventureCameraLookAtConfigTemplateEnum Enum; // 0x10
		::System::Byte _padding0[0x4];
		::RPG::GameCore::BaseAdventureCameraLookAt* Config; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SINGLEADVENTURECAMERALOOKATCONFIGTEMPLATE_CTOR_OFFSET))(this);
		}

	};
}
