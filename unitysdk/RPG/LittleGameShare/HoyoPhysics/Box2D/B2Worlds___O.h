#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2ExplosionContext.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2WorldMoverCastContext.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2WorldMoverContext.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2WorldOverlapContext.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2WorldQueryContext.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2WorldRayCastContext.h"
#include "unitysdk/System/Object.h"
namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class b2EnqueueTaskCallback; }
namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class b2FinishTaskCallback; }
namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class b2FrictionCallback; }
namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class b2RestitutionCallback; }
namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class b2TaskCallback; }
namespace RPG::LittleGameShare::HoyoPhysics::Box2D { template <typename T> class b2TreeQueryCallbackFcn_1; }
namespace RPG::LittleGameShare::HoyoPhysics::Box2D { template <typename T> class b2TreeRayCastCallbackFcn_1; }
namespace RPG::LittleGameShare::HoyoPhysics::Box2D { template <typename T> class b2TreeShapeCastCallbackFcn_1; }

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2Worlds___O_TypeDefinitionIndex = 37750;

	class B2Worlds___O : public ::System::Object
	{
	public:
		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::b2TreeRayCastCallbackFcn_1<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2WorldRayCastContext>** StaticGet__9___RayCastClosestCallback()
		{
			return (::RPG::LittleGameShare::HoyoPhysics::Box2D::b2TreeRayCastCallbackFcn_1<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2WorldRayCastContext>**)UnitySDK::FromName("RPG.LittleGameShare.HoyoPhysics.Box2D", "<>O")->GetStaticField(0x1FC90);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::b2TreeQueryCallbackFcn_1<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ExplosionContext>** StaticGet__13___ExplosionCallback()
		{
			return (::RPG::LittleGameShare::HoyoPhysics::Box2D::b2TreeQueryCallbackFcn_1<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ExplosionContext>**)UnitySDK::FromName("RPG.LittleGameShare.HoyoPhysics.Box2D", "<>O")->GetStaticField(0x1FC98);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::b2FinishTaskCallback** StaticGet__3___b2DefaultFinishTaskFcn()
		{
			return (::RPG::LittleGameShare::HoyoPhysics::Box2D::b2FinishTaskCallback**)UnitySDK::FromName("RPG.LittleGameShare.HoyoPhysics.Box2D", "<>O")->GetStaticField(0x1FCA0);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::b2TreeShapeCastCallbackFcn_1<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2WorldRayCastContext>** StaticGet__10___ShapeCastCallback()
		{
			return (::RPG::LittleGameShare::HoyoPhysics::Box2D::b2TreeShapeCastCallbackFcn_1<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2WorldRayCastContext>**)UnitySDK::FromName("RPG.LittleGameShare.HoyoPhysics.Box2D", "<>O")->GetStaticField(0x1FCA8);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::b2TreeQueryCallbackFcn_1<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2WorldOverlapContext>** StaticGet__7___TreeOverlapCallback()
		{
			return (::RPG::LittleGameShare::HoyoPhysics::Box2D::b2TreeQueryCallbackFcn_1<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2WorldOverlapContext>**)UnitySDK::FromName("RPG.LittleGameShare.HoyoPhysics.Box2D", "<>O")->GetStaticField(0x1FCB0);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::b2TaskCallback** StaticGet__4___b2UpdateTreesTask()
		{
			return (::RPG::LittleGameShare::HoyoPhysics::Box2D::b2TaskCallback**)UnitySDK::FromName("RPG.LittleGameShare.HoyoPhysics.Box2D", "<>O")->GetStaticField(0x1FCB8);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::b2TreeQueryCallbackFcn_1<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2WorldQueryContext>** StaticGet__6___TreeQueryCallback()
		{
			return (::RPG::LittleGameShare::HoyoPhysics::Box2D::b2TreeQueryCallbackFcn_1<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2WorldQueryContext>**)UnitySDK::FromName("RPG.LittleGameShare.HoyoPhysics.Box2D", "<>O")->GetStaticField(0x1FCC0);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::b2TreeShapeCastCallbackFcn_1<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2WorldMoverCastContext>** StaticGet__11___MoverCastCallback()
		{
			return (::RPG::LittleGameShare::HoyoPhysics::Box2D::b2TreeShapeCastCallbackFcn_1<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2WorldMoverCastContext>**)UnitySDK::FromName("RPG.LittleGameShare.HoyoPhysics.Box2D", "<>O")->GetStaticField(0x1FCC8);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::b2FrictionCallback** StaticGet__0___b2DefaultFrictionCallback()
		{
			return (::RPG::LittleGameShare::HoyoPhysics::Box2D::b2FrictionCallback**)UnitySDK::FromName("RPG.LittleGameShare.HoyoPhysics.Box2D", "<>O")->GetStaticField(0x1FCD0);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::b2TreeQueryCallbackFcn_1<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2WorldMoverContext>** StaticGet__12___TreeCollideCallback()
		{
			return (::RPG::LittleGameShare::HoyoPhysics::Box2D::b2TreeQueryCallbackFcn_1<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2WorldMoverContext>**)UnitySDK::FromName("RPG.LittleGameShare.HoyoPhysics.Box2D", "<>O")->GetStaticField(0x1FCD8);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::b2TreeRayCastCallbackFcn_1<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2WorldRayCastContext>** StaticGet__8___RayCastCallback()
		{
			return (::RPG::LittleGameShare::HoyoPhysics::Box2D::b2TreeRayCastCallbackFcn_1<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2WorldRayCastContext>**)UnitySDK::FromName("RPG.LittleGameShare.HoyoPhysics.Box2D", "<>O")->GetStaticField(0x1FCE0);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::b2RestitutionCallback** StaticGet__1___b2DefaultRestitutionCallback()
		{
			return (::RPG::LittleGameShare::HoyoPhysics::Box2D::b2RestitutionCallback**)UnitySDK::FromName("RPG.LittleGameShare.HoyoPhysics.Box2D", "<>O")->GetStaticField(0x1FCE8);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::b2EnqueueTaskCallback** StaticGet__2___b2DefaultAddTaskFcn()
		{
			return (::RPG::LittleGameShare::HoyoPhysics::Box2D::b2EnqueueTaskCallback**)UnitySDK::FromName("RPG.LittleGameShare.HoyoPhysics.Box2D", "<>O")->GetStaticField(0x1FCF0);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::b2TaskCallback** StaticGet__5___b2CollideTask()
		{
			return (::RPG::LittleGameShare::HoyoPhysics::Box2D::b2TaskCallback**)UnitySDK::FromName("RPG.LittleGameShare.HoyoPhysics.Box2D", "<>O")->GetStaticField(0x1FCF8);
		}

	};
}
