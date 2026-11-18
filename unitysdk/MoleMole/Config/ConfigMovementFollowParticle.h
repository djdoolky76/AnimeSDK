#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigMovement.h"
#include "unitysdk/UnityEngine/Vector3.h"

class GEIHCPAOKKK;
class JCADHFOKIHK;
class PJGGDJJPPJP;
namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_CONFIG_CONFIGMOVEMENTFOLLOWPARTICLE_GETPOSITION_OFFSET UNITYSDK_OFFSET(0x11E9BCE0)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTFOLLOWPARTICLE_PROCESSRIGIDBODY_OFFSET UNITYSDK_OFFSET(0x11E9BE50)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTFOLLOWPARTICLE_SETUPLOGICMOVEMENT_OFFSET UNITYSDK_OFFSET(0x11E9BC00)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTFOLLOWPARTICLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x11E9C300)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTFOLLOWPARTICLE__CTOR_OFFSET UNITYSDK_OFFSET(0x11E9C2F0)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTFOLLOWPARTICLE___BASE_SETUPLOGICMOVEMENT_OFFSET UNITYSDK_OFFSET(0x11E9C340)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigMovementFollowParticle_TypeDefinitionIndex = 61735;

	class ConfigMovementFollowParticle : public ::MoleMole::Config::ConfigMovement
	{
	public:
		static ::MoleMole::Config::ConfigMovementFollowParticle** StaticGet_StaticMovementFollowParticle()
		{
			return (::MoleMole::Config::ConfigMovementFollowParticle**)Il2CppClass::FromTypeDefinitionIndex(ConfigMovementFollowParticle_TypeDefinitionIndex)->GetStaticField(0x48680);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTFOLLOWPARTICLE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTFOLLOWPARTICLE__CCTOR_OFFSET))();
		}

		::System::Void SetupLogicMovement(::PJGGDJJPPJP* movementComponent, ::MoleMole::Battle::Entity* other, ::MoleMole::Battle::Entity* caster, ::JCADHFOKIHK* instancedAbility)
		{
			return ((::System::Void(*)(::PVOID, ::PJGGDJJPPJP*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::JCADHFOKIHK*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTFOLLOWPARTICLE_SETUPLOGICMOVEMENT_OFFSET))(this, movementComponent, other, caster, instancedAbility);
		}

		::UnityEngine::Vector3 GetPosition(::GEIHCPAOKKK* modelComponent, ::PJGGDJJPPJP* movementComponent)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::GEIHCPAOKKK*, ::PJGGDJJPPJP*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTFOLLOWPARTICLE_GETPOSITION_OFFSET))(this, modelComponent, movementComponent);
		}

		::System::Void ProcessRigidbody(::GEIHCPAOKKK* modelComponent, ::PJGGDJJPPJP* movementComponent, ::System::Single deltaTime, ::System::Single timeScale, ::JCADHFOKIHK* instancedAbility)
		{
			return ((::System::Void(*)(::PVOID, ::GEIHCPAOKKK*, ::PJGGDJJPPJP*, ::System::Single, ::System::Single, ::JCADHFOKIHK*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTFOLLOWPARTICLE_PROCESSRIGIDBODY_OFFSET))(this, modelComponent, movementComponent, deltaTime, timeScale, instancedAbility);
		}

		::System::Void __base_SetupLogicMovement(::PJGGDJJPPJP* P0, ::MoleMole::Battle::Entity* P1, ::MoleMole::Battle::Entity* P2, ::JCADHFOKIHK* P3)
		{
			return ((::System::Void(*)(::PVOID, ::PJGGDJJPPJP*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::JCADHFOKIHK*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTFOLLOWPARTICLE___BASE_SETUPLOGICMOVEMENT_OFFSET))(this, P0, P1, P2, P3);
		}
	};
}
