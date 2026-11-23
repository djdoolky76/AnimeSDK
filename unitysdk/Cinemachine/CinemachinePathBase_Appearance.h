#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/E46B881AA2636190.h"

#define CINEMACHINE_CINEMACHINEPATHBASE_APPEARANCE__CTOR_OFFSET UNITYSDK_OFFSET(0x2A27230)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachinePathBase_Appearance_TypeDefinitionIndex = 18291;

	class CinemachinePathBase_Appearance : public ::System::Object
	{
	public:
		::UnityEngine::E46B881AA2636190 pathColor; // 0x10
		::UnityEngine::E46B881AA2636190 inactivePathColor; // 0x20
		::System::Single width; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEPATHBASE_APPEARANCE__CTOR_OFFSET))(this);
		}
	};
}
