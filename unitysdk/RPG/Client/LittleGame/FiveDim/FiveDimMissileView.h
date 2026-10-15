#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/FiveDimPropView.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
class EMJIDLCDFMI;
namespace Entitas { class IContext; }
namespace Entitas { class IEntity; }
namespace System { class String; }
namespace UnityEngine { class CapsuleCollider; }

#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMMISSILEVIEW_CTOR_OFFSET UNITYSDK_OFFSET(0xD43DF60)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMMISSILEVIEW_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xD43DBD0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMMISSILEVIEW_RELEASE_OFFSET UNITYSDK_OFFSET(0xD43DE70)

namespace RPG::Client::LittleGame::FiveDim
{
	inline static constexpr unsigned int FiveDimMissileView_TypeDefinitionIndex = 77186;

	class FiveDimMissileView : public ::RPG::Client::LittleGame::FiveDim::FiveDimPropView
	{
	public:
		::UnityEngine::CapsuleCollider* MissileCollider; // 0x208
		::UnityEngine::Vector2 EJLBICDOEPN; // 0x210
		::UnityEngine::Vector3 EIKLCFAGEKP; // 0x218
		::System::Boolean AGDANMMCNOM; // 0x224
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMMISSILEVIEW_CTOR_OFFSET))(this);
		}

		::System::Void Initialize(::Entitas::IContext* a1, ::EMJIDLCDFMI* a2, ::Entitas::IEntity* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IContext*, ::EMJIDLCDFMI*, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMMISSILEVIEW_INITIALIZE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Release(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMMISSILEVIEW_RELEASE_OFFSET))(this, a1);
		}

	};
}
