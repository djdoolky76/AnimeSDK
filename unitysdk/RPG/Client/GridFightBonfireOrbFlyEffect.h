#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightOrbType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::Client { class QuadricBezier; }
namespace RPG::Client { class RPGAnimationEvent; }
namespace RPG::Client { class UIStateCtrl; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class AnimationClip; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_GRIDFIGHTBONFIREORBFLYEFFECT_CTOR_OFFSET UNITYSDK_OFFSET(0xDA81FA0)
#define RPG_CLIENT_GRIDFIGHTBONFIREORBFLYEFFECT_DESPAWNED_OFFSET UNITYSDK_OFFSET(0xDA81190)
#define RPG_CLIENT_GRIDFIGHTBONFIREORBFLYEFFECT_GETRANDOMFLYCLIP_OFFSET UNITYSDK_OFFSET(0xDA81E90)
#define RPG_CLIENT_GRIDFIGHTBONFIREORBFLYEFFECT_ONCREATE_OFFSET UNITYSDK_OFFSET(0xDA811E0)
#define RPG_CLIENT_GRIDFIGHTBONFIREORBFLYEFFECT_PLAY_OFFSET UNITYSDK_OFFSET(0xDA81600)
#define RPG_CLIENT_GRIDFIGHTBONFIREORBFLYEFFECT_SPAWNED_OFFSET UNITYSDK_OFFSET(0xDA81150)
#define RPG_CLIENT_GRIDFIGHTBONFIREORBFLYEFFECT__GETORBSTATENAME_OFFSET UNITYSDK_OFFSET(0xDA81DD0)
#define RPG_CLIENT_GRIDFIGHTBONFIREORBFLYEFFECT__RANDOMCONTROLPOINT_OFFSET UNITYSDK_OFFSET(0xDA81A30)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightBonfireOrbFlyEffect_TypeDefinitionIndex = 65962;

	class GridFightBonfireOrbFlyEffect : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::QuadricBezier* _Bezier; // 0x18
		::UnityEngine::Transform* _StartPoint; // 0x20
		::UnityEngine::Transform* _ControlPoint; // 0x28
		::UnityEngine::Transform* _EndPoint; // 0x30
		::UnityEngine::Animation* _Animation; // 0x38
		::RPG::Client::UIStateCtrl* _StateCtrl; // 0x40
		::RPG::Client::RPGAnimationEvent* _AnimEvent; // 0x48
		// static const ::System::Object CONTROL_POINT_SCREEN_Y_OFFSET; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONFIREORBFLYEFFECT_CTOR_OFFSET))(this);
		}

		::System::Void Spawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONFIREORBFLYEFFECT_SPAWNED_OFFSET))(this);
		}

		::System::Void Despawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONFIREORBFLYEFFECT_DESPAWNED_OFFSET))(this);
		}

		::System::Void OnCreate(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONFIREORBFLYEFFECT_ONCREATE_OFFSET))(this, a1);
		}

		::System::Void Play(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::RPG::GameCore::GridFightOrbType a3, ::System::Action* a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::RPG::GameCore::GridFightOrbType, ::System::Action*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONFIREORBFLYEFFECT_PLAY_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		static ::System::String* _GetOrbStateName(::RPG::GameCore::GridFightOrbType a1)
		{
			return ((::System::String*(*)(::RPG::GameCore::GridFightOrbType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONFIREORBFLYEFFECT__GETORBSTATENAME_OFFSET))(a1);
		}

		::UnityEngine::AnimationClip* GetRandomFlyClip(::System::Boolean a1)
		{
			return ((::UnityEngine::AnimationClip*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONFIREORBFLYEFFECT_GETRANDOMFLYCLIP_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 _RandomControlPoint(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONFIREORBFLYEFFECT__RANDOMCONTROLPOINT_OFFSET))(this, a1, a2, a3);
		}

	};
}
