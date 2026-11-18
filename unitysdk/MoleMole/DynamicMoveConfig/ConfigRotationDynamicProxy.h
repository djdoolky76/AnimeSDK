#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigRotation.h"
#include "unitysdk/PJGGDJJPPJP_ALLPGHPMHHC.h"

class GEIHCPAOKKK;
class JCADHFOKIHK;
class PJGGDJJPPJP;
namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_DYNAMICMOVECONFIG_CONFIGROTATIONDYNAMICPROXY_GET_INS_OFFSET UNITYSDK_OFFSET(0x142CF090)
#define MOLEMOLE_DYNAMICMOVECONFIG_CONFIGROTATIONDYNAMICPROXY_PROCESS_OFFSET UNITYSDK_OFFSET(0x142CF1E0)
#define MOLEMOLE_DYNAMICMOVECONFIG_CONFIGROTATIONDYNAMICPROXY_SETUP_OFFSET UNITYSDK_OFFSET(0x142CF120)
#define MOLEMOLE_DYNAMICMOVECONFIG_CONFIGROTATIONDYNAMICPROXY__CCTOR_OFFSET UNITYSDK_OFFSET(0x142CF280)
#define MOLEMOLE_DYNAMICMOVECONFIG_CONFIGROTATIONDYNAMICPROXY__CTOR_OFFSET UNITYSDK_OFFSET(0x142CF070)
#define MOLEMOLE_DYNAMICMOVECONFIG_CONFIGROTATIONDYNAMICPROXY___BASE_SETUP_OFFSET UNITYSDK_OFFSET(0x142CF290)

namespace MoleMole::DynamicMoveConfig
{
	inline static constexpr unsigned int ConfigRotationDynamicProxy_TypeDefinitionIndex = 45098;

	class ConfigRotationDynamicProxy : public ::MoleMole::Config::ConfigRotation
	{
	public:
		static ::MoleMole::DynamicMoveConfig::ConfigRotationDynamicProxy** StaticGet__ins()
		{
			return (::MoleMole::DynamicMoveConfig::ConfigRotationDynamicProxy**)Il2CppClass::FromTypeDefinitionIndex(ConfigRotationDynamicProxy_TypeDefinitionIndex)->GetStaticField(0x4F880);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DYNAMICMOVECONFIG_CONFIGROTATIONDYNAMICPROXY__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_DYNAMICMOVECONFIG_CONFIGROTATIONDYNAMICPROXY__CCTOR_OFFSET))();
		}

		static ::MoleMole::DynamicMoveConfig::ConfigRotationDynamicProxy* get_Ins()
		{
			return ((::MoleMole::DynamicMoveConfig::ConfigRotationDynamicProxy*(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_DYNAMICMOVECONFIG_CONFIGROTATIONDYNAMICPROXY_GET_INS_OFFSET))();
		}

		::System::Void Setup(::PJGGDJJPPJP* movementComponent, ::MoleMole::Battle::Entity* other, ::PJGGDJJPPJP_ALLPGHPMHHC& rotateState, ::MoleMole::Battle::Entity* caster, ::JCADHFOKIHK* instancedAbility)
		{
			return ((::System::Void(*)(::PVOID, ::PJGGDJJPPJP*, ::MoleMole::Battle::Entity*, ::PJGGDJJPPJP_ALLPGHPMHHC&, ::MoleMole::Battle::Entity*, ::JCADHFOKIHK*))((::PBYTE)hIl2Cpp + MOLEMOLE_DYNAMICMOVECONFIG_CONFIGROTATIONDYNAMICPROXY_SETUP_OFFSET))(this, movementComponent, other, rotateState, caster, instancedAbility);
		}

		::System::Void Process(::GEIHCPAOKKK* modelComponent, ::PJGGDJJPPJP* movementComponent, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::GEIHCPAOKKK*, ::PJGGDJJPPJP*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_DYNAMICMOVECONFIG_CONFIGROTATIONDYNAMICPROXY_PROCESS_OFFSET))(this, modelComponent, movementComponent, deltaTime);
		}

		::System::Void __base_Setup(::PJGGDJJPPJP* P0, ::MoleMole::Battle::Entity* P1, ::PJGGDJJPPJP_ALLPGHPMHHC& P2, ::MoleMole::Battle::Entity* P3, ::JCADHFOKIHK* P4)
		{
			return ((::System::Void(*)(::PVOID, ::PJGGDJJPPJP*, ::MoleMole::Battle::Entity*, ::PJGGDJJPPJP_ALLPGHPMHHC&, ::MoleMole::Battle::Entity*, ::JCADHFOKIHK*))((::PBYTE)hIl2Cpp + MOLEMOLE_DYNAMICMOVECONFIG_CONFIGROTATIONDYNAMICPROXY___BASE_SETUP_OFFSET))(this, P0, P1, P2, P3, P4);
		}
	};
}
