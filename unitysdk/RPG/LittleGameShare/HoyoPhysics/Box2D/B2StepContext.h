#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2ArraySegment_1.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2AtomicInt.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2AtomicU32.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2ConstraintGraph.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2ContactConstraintSIMD.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2FixedArray64_1.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Softness.h"
#include "unitysdk/System/Object.h"
namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class B2BodySim; }
namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class B2BodyState; }
namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class B2ContactSim; }
namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class B2JointSim; }
namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class B2SolverStage; }
namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class B2World; }

#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2STEPCONTEXT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9E68F0)

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2StepContext_TypeDefinitionIndex = 37712;

	class B2StepContext : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Int32>* enlargedShapes; // 0x10
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ArraySegment_1<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2SolverStage*> stages; // 0x18
		::System::Byte _padding0[0x8];
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ConstraintGraph graph; // 0x28
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ArraySegment_1<::System::Int32> bulletBodies; // 0x30
		::System::Byte _padding1[0x8];
		::Il2CppArray<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyState*>* states; // 0x40
		::Il2CppArray<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodySim*>* sims; // 0x48
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ArraySegment_1<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ContactConstraintSIMD> simdContactConstraints; // 0x50
		::System::Byte _padding2[0x8];
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ArraySegment_1<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ContactSim*> contacts; // 0x60
		::System::Byte _padding3[0x8];
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World* world; // 0x70
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ArraySegment_1<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointSim*> joints; // 0x78
		::System::Byte _padding4[0x8];
		::System::Single h; // 0x88
		::System::Int32 stageCount; // 0x8C
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Softness staticSoftness; // 0x90
		::System::Single maxLinearVelocity; // 0x9C
		::System::Single inv_dt; // 0xA0
		::System::Boolean enableWarmStarting; // 0xA4
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FixedArray64_1<::System::Byte> dummy2; // 0xA5
		::System::Byte _padding5[0x38];
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FixedArray64_1<::System::Byte> dummy1; // 0xE5
		::System::Byte _padding6[0x3B];
		::System::Single inv_h; // 0x128
		::System::Byte _padding7[0x4];
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2AtomicU32 atomicSyncBits; // 0x130
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Softness contactSoftness; // 0x138
		::System::Int32 enlargedShapeCount; // 0x144
		::System::Single restitutionThreshold; // 0x148
		::System::Int32 subStepCount; // 0x14C
		::System::Single dt; // 0x150
		::System::Int32 activeColorCount; // 0x154
		::System::Int32 workerCount; // 0x158
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2AtomicInt bulletBodyCount; // 0x15C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2STEPCONTEXT_CTOR_OFFSET))(this);
		}

	};
}
