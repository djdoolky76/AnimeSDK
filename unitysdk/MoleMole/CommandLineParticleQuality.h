#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EMaterialModifierPerformanceLevel.h"
#include "unitysdk/System/Nullable_1.h"

namespace MoleMole { class ParticleQualityProfileContext; }
namespace System { class Object; }

#define MOLEMOLE_COMMANDLINEPARTICLEQUALITY_ALEKEEINDAO_OFFSET UNITYSDK_OFFSET(0x19B02890)
#define MOLEMOLE_COMMANDLINEPARTICLEQUALITY_PMKOMFHNKOE_OFFSET UNITYSDK_OFFSET(0x19B02A20)
#define MOLEMOLE_COMMANDLINEPARTICLEQUALITY__CTOR_OFFSET UNITYSDK_OFFSET(0x19B029E0)

namespace MoleMole
{
	inline static constexpr unsigned int CommandLineParticleQuality_TypeDefinitionIndex = 89779;

	class CommandLineParticleQuality
	{
	public:
		::System::Nullable_1<::System::Object*> ParticleResolutionLevel; // 0x18
		::System::Nullable_1<::System::Object*> ParticleLodLevel; // 0x20
		::System::Nullable_1<::System::Object*> ParticleLightLevel; // 0x28
		::System::Nullable_1<::MoleMole::EMaterialModifierPerformanceLevel> MaterialModifierPerformanceLevel; // 0x30
		::System::Nullable_1<::System::Boolean> DisableGhostEffect; // 0x38
		::System::Nullable_1<::System::Boolean> DisableCutMarks; // 0x3A
		::System::Nullable_1<::System::Object*> DamageDecalQuality; // 0x3C
		::System::Nullable_1<::System::Boolean> DisableDropItemBornIdleEffect; // 0x44
		::System::Nullable_1<::System::Boolean> DisableAbilityActionEffect; // 0x46

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMMANDLINEPARTICLEQUALITY__CTOR_OFFSET))(this);
		}

		::MoleMole::CommandLineParticleQuality* ALEKEEINDAO(::MoleMole::ParticleQualityProfileContext* LJBPECKCCEA)
		{
			return ((::MoleMole::CommandLineParticleQuality*(*)(::PVOID, ::MoleMole::ParticleQualityProfileContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMMANDLINEPARTICLEQUALITY_ALEKEEINDAO_OFFSET))(this, LJBPECKCCEA);
		}

		::MoleMole::ParticleQualityProfileContext* PMKOMFHNKOE(::MoleMole::ParticleQualityProfileContext* LJBPECKCCEA)
		{
			return ((::MoleMole::ParticleQualityProfileContext*(*)(::PVOID, ::MoleMole::ParticleQualityProfileContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMMANDLINEPARTICLEQUALITY_PMKOMFHNKOE_OFFSET))(this, LJBPECKCCEA);
		}
	};
}
