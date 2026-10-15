#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/FiveDimPropPhysicsProxyView.h"
class EMJIDLCDFMI;
namespace Entitas { class IContext; }
namespace Entitas { class IEntity; }
namespace System { class String; }
namespace UnityEngine { class CapsuleCollider; }
namespace UnityEngine { class Collider; }

#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFEATHERPHYSICSPROXYVIEW_BOGNEMMLEBI_OFFSET UNITYSDK_OFFSET(0xD434550)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFEATHERPHYSICSPROXYVIEW_CILFPIOIIEH_OFFSET UNITYSDK_OFFSET(0xD434B10)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFEATHERPHYSICSPROXYVIEW_CTOR_OFFSET UNITYSDK_OFFSET(0xD434BC0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFEATHERPHYSICSPROXYVIEW_DECAFLPLMID_OFFSET UNITYSDK_OFFSET(0xD434930)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFEATHERPHYSICSPROXYVIEW_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xD4347C0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFEATHERPHYSICSPROXYVIEW_POJDHPCCBFH_OFFSET UNITYSDK_OFFSET(0xD4349A0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFEATHERPHYSICSPROXYVIEW_RELEASE_OFFSET UNITYSDK_OFFSET(0xD434840)

namespace RPG::Client::LittleGame::FiveDim
{
	inline static constexpr unsigned int FiveDimFeatherPhysicsProxyView_TypeDefinitionIndex = 77199;

	class FiveDimFeatherPhysicsProxyView : public ::RPG::Client::LittleGame::FiveDim::FiveDimPropPhysicsProxyView
	{
	public:
		::UnityEngine::CapsuleCollider* KDPFKMCHCEF; // 0x230
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFEATHERPHYSICSPROXYVIEW_CTOR_OFFSET))(this);
		}

		::System::Void BOGNEMMLEBI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFEATHERPHYSICSPROXYVIEW_BOGNEMMLEBI_OFFSET))(this);
		}

		::System::Void Initialize(::Entitas::IContext* a1, ::EMJIDLCDFMI* a2, ::Entitas::IEntity* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IContext*, ::EMJIDLCDFMI*, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFEATHERPHYSICSPROXYVIEW_INITIALIZE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Release(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFEATHERPHYSICSPROXYVIEW_RELEASE_OFFSET))(this, a1);
		}

		::System::Void POJDHPCCBFH(::UnityEngine::Collider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFEATHERPHYSICSPROXYVIEW_POJDHPCCBFH_OFFSET))(this, a1);
		}

		::System::Void CILFPIOIIEH(::UnityEngine::Collider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFEATHERPHYSICSPROXYVIEW_CILFPIOIIEH_OFFSET))(this, a1);
		}

		::System::Void DECAFLPLMID()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFEATHERPHYSICSPROXYVIEW_DECAFLPLMID_OFFSET))(this);
		}

	};
}
