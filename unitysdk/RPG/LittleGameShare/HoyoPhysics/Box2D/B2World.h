#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Array_1.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2BodyMoveEvent.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2ConstraintGraph.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2ContactBeginTouchEvent.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2ContactEndTouchEvent.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2ContactHitEvent.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2JointEvent.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Profile.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2SensorBeginTouchEvent.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2SensorEndTouchEvent.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Vec2.h"
#include "unitysdk/System/Object.h"
namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class B2ArenaAllocator; }
namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class B2Body; }
namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class B2BroadPhase; }
namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class B2ChainShape; }
namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class B2Contact; }
namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class B2IdPool; }
namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class B2Island; }
namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class B2Joint; }
namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class B2Sensor; }
namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class B2SensorTaskContext; }
namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class B2Shape; }
namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class B2SolverSet; }
namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class B2TaskContext; }
namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class B2WorkerContext; }
namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class b2CustomFilterFcn; }
namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class b2EnqueueTaskCallback; }
namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class b2FinishTaskCallback; }
namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class b2FrictionCallback; }
namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class b2PreSolveFcn; }
namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class b2RestitutionCallback; }
namespace System { class Object; }

#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WORLD_CLEAR_OFFSET UNITYSDK_OFFSET(0x1D9EAD30)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WORLD_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9EAF90)

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2World_TypeDefinitionIndex = 37742;

	class B2World : public ::System::Object
	{
	public:
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2IdPool* jointIdPool; // 0x10
		::RPG::LittleGameShare::HoyoPhysics::Box2D::b2PreSolveFcn* preSolveFcn; // 0x18
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Array_1<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ChainShape*> chainShapes; // 0x20
		::System::Byte _padding0[0x8];
		::RPG::LittleGameShare::HoyoPhysics::Box2D::b2FrictionCallback* frictionCallback; // 0x30
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2IdPool* shapeIdPool; // 0x38
		::System::Object* userTreeTask; // 0x40
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2IdPool* chainIdPool; // 0x48
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ConstraintGraph constraintGraph; // 0x50
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Array_1<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ContactBeginTouchEvent> contactBeginEvents; // 0x58
		::System::Byte _padding1[0x8];
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BroadPhase* broadPhase; // 0x68
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2IdPool* bodyIdPool; // 0x70
		::System::Object* userTaskContext; // 0x78
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Array_1<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Sensor*> sensors; // 0x80
		::System::Byte _padding2[0x8];
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Array_1<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Shape*> shapes; // 0x90
		::System::Byte _padding3[0x8];
		::RPG::LittleGameShare::HoyoPhysics::Box2D::b2FinishTaskCallback* finishTaskFcn; // 0xA0
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Array_1<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyMoveEvent> bodyMoveEvents; // 0xA8
		::System::Byte _padding4[0x8];
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Array_1<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ContactHitEvent> contactHitEvents; // 0xB8
		::System::Byte _padding5[0x8];
		::System::Object* userData; // 0xC8
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Array_1<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2TaskContext*> taskContexts; // 0xD0
		::System::Byte _padding6[0x8];
		::RPG::LittleGameShare::HoyoPhysics::Box2D::b2CustomFilterFcn* customFilterFcn; // 0xE0
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Array_1<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Island*> islands; // 0xE8
		::System::Byte _padding7[0x8];
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2IdPool* contactIdPool; // 0xF8
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Array_1<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointEvent> jointEvents; // 0x100
		::System::Byte _padding8[0x8];
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2IdPool* islandIdPool; // 0x110
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ArenaAllocator* arena; // 0x118
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Array_1<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Contact*> contacts; // 0x120
		::System::Byte _padding9[0x8];
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Array_1<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2SolverSet*> solverSets; // 0x130
		::System::Byte _padding10[0x8];
		::RPG::LittleGameShare::HoyoPhysics::Box2D::b2RestitutionCallback* restitutionCallback; // 0x140
		::System::Object* preSolveContext; // 0x148
		::Il2CppArray<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Array_1<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2SensorEndTouchEvent>>* sensorEndEvents; // 0x150
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2IdPool* solverSetIdPool; // 0x158
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Array_1<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2SensorTaskContext*> sensorTaskContexts; // 0x160
		::System::Byte _padding11[0x8];
		::RPG::LittleGameShare::HoyoPhysics::Box2D::b2EnqueueTaskCallback* enqueueTaskFcn; // 0x170
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Array_1<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2SensorBeginTouchEvent> sensorBeginEvents; // 0x178
		::System::Byte _padding12[0x8];
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Array_1<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Body*> bodies; // 0x188
		::System::Byte _padding13[0x8];
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Array_1<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Joint*> joints; // 0x198
		::System::Byte _padding14[0x8];
		::Il2CppArray<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Array_1<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ContactEndTouchEvent>>* contactEndEvents; // 0x1A8
		::System::Object* customFilterContext; // 0x1B0
		::Il2CppArray<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2WorkerContext*>* tempWorkerContext; // 0x1B8
		::System::UInt64 stepIndex; // 0x1C0
		::System::Single contactHertz; // 0x1C8
		::System::Int32 endEventArrayIndex; // 0x1CC
		::System::Single contactSpeed; // 0x1D0
		::System::Single restitutionThreshold; // 0x1D4
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 gravity; // 0x1D8
		::System::Int32 taskCount; // 0x1E0
		::System::UInt16 worldId; // 0x1E4
		::System::Boolean enableWarmStarting; // 0x1E6
		::System::Boolean enableContinuous; // 0x1E7
		::System::Int32 activeTaskCount; // 0x1E8
		::System::Boolean enableSleep; // 0x1EC
		::System::Boolean locked; // 0x1ED
		::System::Boolean enableSpeculative; // 0x1EE
		::System::Byte _padding15[0x1];
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Profile profile; // 0x1F0
		::System::Single maxLinearSpeed; // 0x250
		::System::Single hitEventThreshold; // 0x254
		::System::Single contactDampingRatio; // 0x258
		::System::Single inv_h; // 0x25C
		::System::Int32 splitIslandId; // 0x260
		::System::Int32 workerCount; // 0x264
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WORLD_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WORLD_CLEAR_OFFSET))(this);
		}

	};
}
