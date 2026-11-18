#pragma once
#include "unitysdk/unitysdk.h"

#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_ENTITYLOCATIONPOLICY__CTOR_OFFSET UNITYSDK_OFFSET(0x16405250)

namespace MoleMole::Config::CameraSequence::Utils
{
	inline static constexpr unsigned int EntityLocationPolicy_TypeDefinitionIndex = 65134;

	class EntityLocationPolicy
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_ENTITYLOCATIONPOLICY__CTOR_OFFSET))(this);
		}
	};
}
