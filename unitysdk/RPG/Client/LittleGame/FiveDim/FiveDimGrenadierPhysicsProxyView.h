#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/FiveDimPropPhysicsProxyView.h"
class EMJIDLCDFMI;
namespace Entitas { class IContext; }
namespace Entitas { class IEntity; }
namespace System { class String; }
namespace UnityEngine { class Collision; }
namespace UnityEngine { class SphereCollider; }

#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGRENADIERPHYSICSPROXYVIEW_BOGNEMMLEBI_OFFSET UNITYSDK_OFFSET(0xD436610)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGRENADIERPHYSICSPROXYVIEW_CTOR_OFFSET UNITYSDK_OFFSET(0xD436C20)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGRENADIERPHYSICSPROXYVIEW_DECAFLPLMID_OFFSET UNITYSDK_OFFSET(0xD4369B0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGRENADIERPHYSICSPROXYVIEW_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xD436840)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGRENADIERPHYSICSPROXYVIEW_KNBOMLJBMNP_OFFSET UNITYSDK_OFFSET(0xD436B60)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGRENADIERPHYSICSPROXYVIEW_PFKCNLJHLNH_OFFSET UNITYSDK_OFFSET(0xD436A20)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGRENADIERPHYSICSPROXYVIEW_RELEASE_OFFSET UNITYSDK_OFFSET(0xD4368C0)

namespace RPG::Client::LittleGame::FiveDim
{
	inline static constexpr unsigned int FiveDimGrenadierPhysicsProxyView_TypeDefinitionIndex = 77202;

	class FiveDimGrenadierPhysicsProxyView : public ::RPG::Client::LittleGame::FiveDim::FiveDimPropPhysicsProxyView
	{
	public:
		::UnityEngine::SphereCollider* KDPFKMCHCEF; // 0x230
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGRENADIERPHYSICSPROXYVIEW_CTOR_OFFSET))(this);
		}

		::System::Void BOGNEMMLEBI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGRENADIERPHYSICSPROXYVIEW_BOGNEMMLEBI_OFFSET))(this);
		}

		::System::Void Initialize(::Entitas::IContext* a1, ::EMJIDLCDFMI* a2, ::Entitas::IEntity* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IContext*, ::EMJIDLCDFMI*, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGRENADIERPHYSICSPROXYVIEW_INITIALIZE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Release(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGRENADIERPHYSICSPROXYVIEW_RELEASE_OFFSET))(this, a1);
		}

		::System::Void PFKCNLJHLNH(::UnityEngine::Collision* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collision*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGRENADIERPHYSICSPROXYVIEW_PFKCNLJHLNH_OFFSET))(this, a1);
		}

		::System::Void KNBOMLJBMNP(::UnityEngine::Collision* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collision*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGRENADIERPHYSICSPROXYVIEW_KNBOMLJBMNP_OFFSET))(this, a1);
		}

		::System::Void DECAFLPLMID()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGRENADIERPHYSICSPROXYVIEW_DECAFLPLMID_OFFSET))(this);
		}

	};
}
