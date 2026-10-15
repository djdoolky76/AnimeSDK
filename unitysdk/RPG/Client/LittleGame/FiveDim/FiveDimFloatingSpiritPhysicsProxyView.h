#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/FiveDimPropPhysicsProxyView.h"
class EMJIDLCDFMI;
namespace Entitas { class IContext; }
namespace Entitas { class IEntity; }
namespace System { class String; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Collision; }

#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFLOATINGSPIRITPHYSICSPROXYVIEW_BOGNEMMLEBI_OFFSET UNITYSDK_OFFSET(0xD4356D0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFLOATINGSPIRITPHYSICSPROXYVIEW_CILFPIOIIEH_OFFSET UNITYSDK_OFFSET(0xD436280)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFLOATINGSPIRITPHYSICSPROXYVIEW_CTOR_OFFSET UNITYSDK_OFFSET(0xD436640)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFLOATINGSPIRITPHYSICSPROXYVIEW_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xD435AD0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFLOATINGSPIRITPHYSICSPROXYVIEW_PFKCNLJHLNH_OFFSET UNITYSDK_OFFSET(0xD435C30)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFLOATINGSPIRITPHYSICSPROXYVIEW_POJDHPCCBFH_OFFSET UNITYSDK_OFFSET(0xD435F30)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFLOATINGSPIRITPHYSICSPROXYVIEW_RELEASE_OFFSET UNITYSDK_OFFSET(0xD435B80)

namespace RPG::Client::LittleGame::FiveDim
{
	inline static constexpr unsigned int FiveDimFloatingSpiritPhysicsProxyView_TypeDefinitionIndex = 77200;

	class FiveDimFloatingSpiritPhysicsProxyView : public ::RPG::Client::LittleGame::FiveDim::FiveDimPropPhysicsProxyView
	{
	public:
		::UnityEngine::Collider* KDPFKMCHCEF; // 0x230
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFLOATINGSPIRITPHYSICSPROXYVIEW_CTOR_OFFSET))(this);
		}

		::System::Void BOGNEMMLEBI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFLOATINGSPIRITPHYSICSPROXYVIEW_BOGNEMMLEBI_OFFSET))(this);
		}

		::System::Void Initialize(::Entitas::IContext* a1, ::EMJIDLCDFMI* a2, ::Entitas::IEntity* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IContext*, ::EMJIDLCDFMI*, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFLOATINGSPIRITPHYSICSPROXYVIEW_INITIALIZE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Release(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFLOATINGSPIRITPHYSICSPROXYVIEW_RELEASE_OFFSET))(this, a1);
		}

		::System::Void PFKCNLJHLNH(::UnityEngine::Collision* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collision*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFLOATINGSPIRITPHYSICSPROXYVIEW_PFKCNLJHLNH_OFFSET))(this, a1);
		}

		::System::Void POJDHPCCBFH(::UnityEngine::Collider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFLOATINGSPIRITPHYSICSPROXYVIEW_POJDHPCCBFH_OFFSET))(this, a1);
		}

		::System::Void CILFPIOIIEH(::UnityEngine::Collider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFLOATINGSPIRITPHYSICSPROXYVIEW_CILFPIOIIEH_OFFSET))(this, a1);
		}

	};
}
