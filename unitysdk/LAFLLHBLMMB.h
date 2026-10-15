#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PhysicsRigidBodyType.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2BodyType.h"
#include "unitysdk/System/Object.h"

#define LAFLLHBLMMB_DPOIIHDJGGF_1_OFFSET UNITYSDK_OFFSET(0x1C6F1AB0)
#define LAFLLHBLMMB_DPOIIHDJGGF_OFFSET UNITYSDK_OFFSET(0x1C6F1A10)

inline static constexpr unsigned int LAFLLHBLMMB_TypeDefinitionIndex = 36551;

	class LAFLLHBLMMB : public ::System::Object
	{
	public:
		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyType DPOIIHDJGGF(::RPG::GameCore::PhysicsRigidBodyType a1)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyType(*)(::RPG::GameCore::PhysicsRigidBodyType))((::PBYTE)hIl2Cpp + LAFLLHBLMMB_DPOIIHDJGGF_OFFSET))(a1);
		}

		static ::RPG::GameCore::PhysicsRigidBodyType DPOIIHDJGGF_1(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyType a1)
		{
			return ((::RPG::GameCore::PhysicsRigidBodyType(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyType))((::PBYTE)hIl2Cpp + LAFLLHBLMMB_DPOIIHDJGGF_1_OFFSET))(a1);
		}

	};
