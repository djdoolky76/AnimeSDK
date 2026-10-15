#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }
namespace UnityEngine { class Transform; }

#define BLHBKGNIBBM_NBIBAPLHGNC_CTOR_OFFSET UNITYSDK_OFFSET(0xBA72480)

inline static constexpr unsigned int BLHBKGNIBBM_NBIBAPLHGNC_TypeDefinitionIndex = 71792;

	class BLHBKGNIBBM_NBIBAPLHGNC : public ::System::Object
	{
	public:
		::UnityEngine::Transform* EGMMEEKIKMA; // 0x10
		::RPG::GameCore::GameEntity* GGKGFABFGFE; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLHBKGNIBBM_NBIBAPLHGNC_CTOR_OFFSET))(this);
		}

	};
