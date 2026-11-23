#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Texture2D; }

#define TA_ENVIRONMENTSYSTEM_ES2DLUT__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace TA::EnvironmentSystem
{
	inline static constexpr unsigned int ES2DLut_TypeDefinitionIndex = 16281;

	class ES2DLut : public ::System::Object
	{
	public:
		::UnityEngine::Texture2D* Value; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_ES2DLUT__CTOR_OFFSET))(this);
		}
	};
}
