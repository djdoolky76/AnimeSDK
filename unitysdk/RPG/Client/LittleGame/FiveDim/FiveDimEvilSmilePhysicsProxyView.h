#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/FiveDimPropPhysicsProxyView.h"
class EMJIDLCDFMI;
namespace Entitas { class IContext; }
namespace Entitas { class IEntity; }
namespace System { class String; }
namespace UnityEngine { class Collider; }

#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMEVILSMILEPHYSICSPROXYVIEW_BOGNEMMLEBI_OFFSET UNITYSDK_OFFSET(0xD433E90)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMEVILSMILEPHYSICSPROXYVIEW_CILFPIOIIEH_OFFSET UNITYSDK_OFFSET(0xD4343A0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMEVILSMILEPHYSICSPROXYVIEW_CTOR_OFFSET UNITYSDK_OFFSET(0xD4344F0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMEVILSMILEPHYSICSPROXYVIEW_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xD434090)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMEVILSMILEPHYSICSPROXYVIEW_POJDHPCCBFH_OFFSET UNITYSDK_OFFSET(0xD4341A0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMEVILSMILEPHYSICSPROXYVIEW_RELEASE_OFFSET UNITYSDK_OFFSET(0xD434110)

namespace RPG::Client::LittleGame::FiveDim
{
	inline static constexpr unsigned int FiveDimEvilSmilePhysicsProxyView_TypeDefinitionIndex = 77198;

	class FiveDimEvilSmilePhysicsProxyView : public ::RPG::Client::LittleGame::FiveDim::FiveDimPropPhysicsProxyView
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMEVILSMILEPHYSICSPROXYVIEW_CTOR_OFFSET))(this);
		}

		::System::Void BOGNEMMLEBI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMEVILSMILEPHYSICSPROXYVIEW_BOGNEMMLEBI_OFFSET))(this);
		}

		::System::Void Initialize(::Entitas::IContext* a1, ::EMJIDLCDFMI* a2, ::Entitas::IEntity* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IContext*, ::EMJIDLCDFMI*, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMEVILSMILEPHYSICSPROXYVIEW_INITIALIZE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Release(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMEVILSMILEPHYSICSPROXYVIEW_RELEASE_OFFSET))(this, a1);
		}

		::System::Void POJDHPCCBFH(::UnityEngine::Collider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMEVILSMILEPHYSICSPROXYVIEW_POJDHPCCBFH_OFFSET))(this, a1);
		}

		::System::Void CILFPIOIIEH(::UnityEngine::Collider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMEVILSMILEPHYSICSPROXYVIEW_CILFPIOIIEH_OFFSET))(this, a1);
		}

	};
}
