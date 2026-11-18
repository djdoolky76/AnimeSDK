#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigRotation.h"
#include "unitysdk/PJGGDJJPPJP_ALLPGHPMHHC.h"

class GEIHCPAOKKK;
class JCADHFOKIHK;
class PJGGDJJPPJP;
namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_CONFIG_CONFIGROTATIONFOLLOWPARTICLE_PROCESS_OFFSET UNITYSDK_OFFSET(0x190A5420)
#define MOLEMOLE_CONFIG_CONFIGROTATIONFOLLOWPARTICLE_SETUP_OFFSET UNITYSDK_OFFSET(0x190A5380)
#define MOLEMOLE_CONFIG_CONFIGROTATIONFOLLOWPARTICLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x190A5610)
#define MOLEMOLE_CONFIG_CONFIGROTATIONFOLLOWPARTICLE__CTOR_OFFSET UNITYSDK_OFFSET(0x190A55F0)
#define MOLEMOLE_CONFIG_CONFIGROTATIONFOLLOWPARTICLE___BASE_SETUP_OFFSET UNITYSDK_OFFSET(0x190A5670)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigRotationFollowParticle_TypeDefinitionIndex = 43911;

	class ConfigRotationFollowParticle : public ::MoleMole::Config::ConfigRotation
	{
	public:
		static ::MoleMole::Config::ConfigRotationFollowParticle** StaticGet_StaticRotationFollowParticle()
		{
			return (::MoleMole::Config::ConfigRotationFollowParticle**)Il2CppClass::FromTypeDefinitionIndex(ConfigRotationFollowParticle_TypeDefinitionIndex)->GetStaticField(0x41A50);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGROTATIONFOLLOWPARTICLE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGROTATIONFOLLOWPARTICLE__CCTOR_OFFSET))();
		}

		::System::Void Setup(::PJGGDJJPPJP* movementComponent, ::MoleMole::Battle::Entity* other, ::PJGGDJJPPJP_ALLPGHPMHHC& rotateState, ::MoleMole::Battle::Entity* caster, ::JCADHFOKIHK* instancedAbility)
		{
			return ((::System::Void(*)(::PVOID, ::PJGGDJJPPJP*, ::MoleMole::Battle::Entity*, ::PJGGDJJPPJP_ALLPGHPMHHC&, ::MoleMole::Battle::Entity*, ::JCADHFOKIHK*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGROTATIONFOLLOWPARTICLE_SETUP_OFFSET))(this, movementComponent, other, rotateState, caster, instancedAbility);
		}

		::System::Void Process(::GEIHCPAOKKK* characterModelComp, ::PJGGDJJPPJP* movementComponent, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::GEIHCPAOKKK*, ::PJGGDJJPPJP*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGROTATIONFOLLOWPARTICLE_PROCESS_OFFSET))(this, characterModelComp, movementComponent, deltaTime);
		}

		::System::Void __base_Setup(::PJGGDJJPPJP* P0, ::MoleMole::Battle::Entity* P1, ::PJGGDJJPPJP_ALLPGHPMHHC& P2, ::MoleMole::Battle::Entity* P3, ::JCADHFOKIHK* P4)
		{
			return ((::System::Void(*)(::PVOID, ::PJGGDJJPPJP*, ::MoleMole::Battle::Entity*, ::PJGGDJJPPJP_ALLPGHPMHHC&, ::MoleMole::Battle::Entity*, ::JCADHFOKIHK*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGROTATIONFOLLOWPARTICLE___BASE_SETUP_OFFSET))(this, P0, P1, P2, P3, P4);
		}
	};
}
