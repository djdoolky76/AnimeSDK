#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/SceneQualityLevel.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Rendering/Universal/SceneEffectQuality.h"

namespace MoleMole { class SceneQualityProfileContext; }

#define MOLEMOLE_COMMANDLINESCENEQUALITY_ALEKEEINDAO_OFFSET UNITYSDK_OFFSET(0x192254E0)
#define MOLEMOLE_COMMANDLINESCENEQUALITY_PMKOMFHNKOE_OFFSET UNITYSDK_OFFSET(0x19225630)
#define MOLEMOLE_COMMANDLINESCENEQUALITY__CTOR_OFFSET UNITYSDK_OFFSET(0x192255F0)

namespace MoleMole
{
	inline static constexpr unsigned int CommandLineSceneQuality_TypeDefinitionIndex = 55639;

	class CommandLineSceneQuality
	{
	public:
		::System::Nullable_1<::MoleMole::SceneQualityLevel> Quality; // 0x18
		::System::Nullable_1<::UnityEngine::Rendering::Universal::SceneEffectQuality> SceneEffectQuality; // 0x20
		::System::Nullable_1<::System::Single> SceneEffectCullingDistance; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMMANDLINESCENEQUALITY__CTOR_OFFSET))(this);
		}

		::MoleMole::CommandLineSceneQuality* ALEKEEINDAO(::MoleMole::SceneQualityProfileContext* LJBPECKCCEA)
		{
			return ((::MoleMole::CommandLineSceneQuality*(*)(::PVOID, ::MoleMole::SceneQualityProfileContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMMANDLINESCENEQUALITY_ALEKEEINDAO_OFFSET))(this, LJBPECKCCEA);
		}

		::MoleMole::SceneQualityProfileContext* PMKOMFHNKOE(::MoleMole::SceneQualityProfileContext* LJBPECKCCEA)
		{
			return ((::MoleMole::SceneQualityProfileContext*(*)(::PVOID, ::MoleMole::SceneQualityProfileContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMMANDLINESCENEQUALITY_PMKOMFHNKOE_OFFSET))(this, LJBPECKCCEA);
		}
	};
}
