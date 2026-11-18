#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigMovement.h"

class GEIHCPAOKKK;
class JCADHFOKIHK;
class PJGGDJJPPJP;
namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_DYNAMICMOVECONFIG_CONFIGMOVEMENTDYNAMICPROXY_GET_INS_OFFSET UNITYSDK_OFFSET(0x118F8C60)
#define MOLEMOLE_DYNAMICMOVECONFIG_CONFIGMOVEMENTDYNAMICPROXY_PROCESSRIGIDBODY_OFFSET UNITYSDK_OFFSET(0x118F8D70)
#define MOLEMOLE_DYNAMICMOVECONFIG_CONFIGMOVEMENTDYNAMICPROXY_SETUPLOGICMOVEMENT_OFFSET UNITYSDK_OFFSET(0x118F8CD0)
#define MOLEMOLE_DYNAMICMOVECONFIG_CONFIGMOVEMENTDYNAMICPROXY__CCTOR_OFFSET UNITYSDK_OFFSET(0x118F8EF0)
#define MOLEMOLE_DYNAMICMOVECONFIG_CONFIGMOVEMENTDYNAMICPROXY__CTOR_OFFSET UNITYSDK_OFFSET(0x118F8C50)
#define MOLEMOLE_DYNAMICMOVECONFIG_CONFIGMOVEMENTDYNAMICPROXY___BASE_SETUPLOGICMOVEMENT_OFFSET UNITYSDK_OFFSET(0x118F8F00)

namespace MoleMole::DynamicMoveConfig
{
	inline static constexpr unsigned int ConfigMovementDynamicProxy_TypeDefinitionIndex = 86587;

	class ConfigMovementDynamicProxy : public ::MoleMole::Config::ConfigMovement
	{
	public:
		static ::MoleMole::DynamicMoveConfig::ConfigMovementDynamicProxy** StaticGet__ins()
		{
			return (::MoleMole::DynamicMoveConfig::ConfigMovementDynamicProxy**)Il2CppClass::FromTypeDefinitionIndex(ConfigMovementDynamicProxy_TypeDefinitionIndex)->GetStaticField(0x516D0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DYNAMICMOVECONFIG_CONFIGMOVEMENTDYNAMICPROXY__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_DYNAMICMOVECONFIG_CONFIGMOVEMENTDYNAMICPROXY__CCTOR_OFFSET))();
		}

		static ::MoleMole::DynamicMoveConfig::ConfigMovementDynamicProxy* get_Ins()
		{
			return ((::MoleMole::DynamicMoveConfig::ConfigMovementDynamicProxy*(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_DYNAMICMOVECONFIG_CONFIGMOVEMENTDYNAMICPROXY_GET_INS_OFFSET))();
		}

		::System::Void SetupLogicMovement(::PJGGDJJPPJP* movementComponent, ::MoleMole::Battle::Entity* other, ::MoleMole::Battle::Entity* caster, ::JCADHFOKIHK* instancedAbility)
		{
			return ((::System::Void(*)(::PVOID, ::PJGGDJJPPJP*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::JCADHFOKIHK*))((::PBYTE)hIl2Cpp + MOLEMOLE_DYNAMICMOVECONFIG_CONFIGMOVEMENTDYNAMICPROXY_SETUPLOGICMOVEMENT_OFFSET))(this, movementComponent, other, caster, instancedAbility);
		}

		::System::Void ProcessRigidbody(::GEIHCPAOKKK* modelComponent, ::PJGGDJJPPJP* movementComponent, ::System::Single deltaTime, ::System::Single timeScale, ::JCADHFOKIHK* instancedAbility)
		{
			return ((::System::Void(*)(::PVOID, ::GEIHCPAOKKK*, ::PJGGDJJPPJP*, ::System::Single, ::System::Single, ::JCADHFOKIHK*))((::PBYTE)hIl2Cpp + MOLEMOLE_DYNAMICMOVECONFIG_CONFIGMOVEMENTDYNAMICPROXY_PROCESSRIGIDBODY_OFFSET))(this, modelComponent, movementComponent, deltaTime, timeScale, instancedAbility);
		}

		::System::Void __base_SetupLogicMovement(::PJGGDJJPPJP* P0, ::MoleMole::Battle::Entity* P1, ::MoleMole::Battle::Entity* P2, ::JCADHFOKIHK* P3)
		{
			return ((::System::Void(*)(::PVOID, ::PJGGDJJPPJP*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::JCADHFOKIHK*))((::PBYTE)hIl2Cpp + MOLEMOLE_DYNAMICMOVECONFIG_CONFIGMOVEMENTDYNAMICPROXY___BASE_SETUPLOGICMOVEMENT_OFFSET))(this, P0, P1, P2, P3);
		}
	};
}
