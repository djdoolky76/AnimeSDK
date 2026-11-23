#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace UnityEngine { class Material; }

#define PAMPELGAMES_ROADCONSTRUCTOR_SO_DEFAULTREFERENCES__CTOR_OFFSET UNITYSDK_OFFSET(0x1F270C0)

namespace PampelGames::RoadConstructor
{
	inline static constexpr unsigned int SO_DefaultReferences_TypeDefinitionIndex = 18825;

	class SO_DefaultReferences : public ::UnityEngine::ScriptableObject
	{
	public:
		::UnityEngine::Material* invisibleMaterial; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAMPELGAMES_ROADCONSTRUCTOR_SO_DEFAULTREFERENCES__CTOR_OFFSET))(this);
		}
	};
}
