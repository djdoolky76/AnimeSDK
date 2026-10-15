#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"
#include "unitysdk/RPG/GameCore/PhysicsRigidBodyType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LittleGameRigidBody2DComponent; }

#define RPG_GAMECORE_LITTLEGAMERIGIDBODY2DCOMPONENT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7E5F70)
#define RPG_GAMECORE_LITTLEGAMERIGIDBODY2DCOMPONENT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7E5F80)
#define RPG_GAMECORE_LITTLEGAMERIGIDBODY2DCOMPONENT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7E5F20)

namespace RPG::GameCore
{
	class LittleGameRigidBody2DComponent : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::RPG::GameCore::PhysicsRigidBodyType Type; // 0x10
		::System::Single LinearDamping; // 0x14
		::System::Single AngularDamping; // 0x18
		::System::Boolean AllowSleep; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMERIGIDBODY2DCOMPONENT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameRigidBody2DComponent* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameRigidBody2DComponent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMERIGIDBODY2DCOMPONENT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameRigidBody2DComponent* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameRigidBody2DComponent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMERIGIDBODY2DCOMPONENT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
