#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/FiveDimPropPhysicsProxyView.h"
class EMJIDLCDFMI;
namespace Entitas { class IContext; }
namespace Entitas { class IEntity; }
namespace System { class String; }
namespace UnityEngine { class CapsuleCollider; }
namespace UnityEngine { class Collider; }

#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMMISSILEPHYSICSPROXYVIEW_BOGNEMMLEBI_OFFSET UNITYSDK_OFFSET(0xD446280)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMMISSILEPHYSICSPROXYVIEW_CILFPIOIIEH_OFFSET UNITYSDK_OFFSET(0xD446800)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMMISSILEPHYSICSPROXYVIEW_CTOR_OFFSET UNITYSDK_OFFSET(0xD4468B0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMMISSILEPHYSICSPROXYVIEW_DECAFLPLMID_OFFSET UNITYSDK_OFFSET(0xD446660)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMMISSILEPHYSICSPROXYVIEW_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xD4464F0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMMISSILEPHYSICSPROXYVIEW_POJDHPCCBFH_OFFSET UNITYSDK_OFFSET(0xD4466D0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMMISSILEPHYSICSPROXYVIEW_RELEASE_OFFSET UNITYSDK_OFFSET(0xD446570)

namespace RPG::Client::LittleGame::FiveDim
{
	inline static constexpr unsigned int FiveDimMissilePhysicsProxyView_TypeDefinitionIndex = 77204;

	class FiveDimMissilePhysicsProxyView : public ::RPG::Client::LittleGame::FiveDim::FiveDimPropPhysicsProxyView
	{
	public:
		::UnityEngine::CapsuleCollider* KDPFKMCHCEF; // 0x230
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMMISSILEPHYSICSPROXYVIEW_CTOR_OFFSET))(this);
		}

		::System::Void BOGNEMMLEBI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMMISSILEPHYSICSPROXYVIEW_BOGNEMMLEBI_OFFSET))(this);
		}

		::System::Void Initialize(::Entitas::IContext* a1, ::EMJIDLCDFMI* a2, ::Entitas::IEntity* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IContext*, ::EMJIDLCDFMI*, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMMISSILEPHYSICSPROXYVIEW_INITIALIZE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Release(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMMISSILEPHYSICSPROXYVIEW_RELEASE_OFFSET))(this, a1);
		}

		::System::Void POJDHPCCBFH(::UnityEngine::Collider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMMISSILEPHYSICSPROXYVIEW_POJDHPCCBFH_OFFSET))(this, a1);
		}

		::System::Void CILFPIOIIEH(::UnityEngine::Collider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMMISSILEPHYSICSPROXYVIEW_CILFPIOIIEH_OFFSET))(this, a1);
		}

		::System::Void DECAFLPLMID()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMMISSILEPHYSICSPROXYVIEW_DECAFLPLMID_OFFSET))(this);
		}

	};
}
