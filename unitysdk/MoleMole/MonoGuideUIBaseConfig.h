#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define MOLEMOLE_MONOGUIDEUIBASECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x15AC2230)

namespace MoleMole
{
	inline static constexpr unsigned int MonoGuideUIBaseConfig_TypeDefinitionIndex = 44243;

	class MonoGuideUIBaseConfig : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Vector2 BorderRange; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGUIDEUIBASECONFIG__CTOR_OFFSET))(this);
		}
	};
}
