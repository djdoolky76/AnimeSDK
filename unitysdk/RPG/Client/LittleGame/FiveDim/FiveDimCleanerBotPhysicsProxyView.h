#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/FiveDimPropPhysicsProxyView.h"
class EMJIDLCDFMI;
namespace Entitas { class IContext; }
namespace Entitas { class IEntity; }
namespace RPG::GameCore { class FiveDimPropBakedMoveConfig; }
namespace System { class String; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Collision; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMCLEANERBOTPHYSICSPROXYVIEW_BOGNEMMLEBI_OFFSET UNITYSDK_OFFSET(0xDE9C240)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMCLEANERBOTPHYSICSPROXYVIEW_CTOR_OFFSET UNITYSDK_OFFSET(0xDE9D950)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMCLEANERBOTPHYSICSPROXYVIEW_FLMEOEFMBMF_OFFSET UNITYSDK_OFFSET(0xDE9D730)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMCLEANERBOTPHYSICSPROXYVIEW_ILKBMEBIAHE_OFFSET UNITYSDK_OFFSET(0xDE9C3D0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMCLEANERBOTPHYSICSPROXYVIEW_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xDE9C680)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMCLEANERBOTPHYSICSPROXYVIEW_KNBOMLJBMNP_OFFSET UNITYSDK_OFFSET(0xDE9D890)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMCLEANERBOTPHYSICSPROXYVIEW_LJGIBEEKAGP_OFFSET UNITYSDK_OFFSET(0xDE9D460)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMCLEANERBOTPHYSICSPROXYVIEW_PFKCNLJHLNH_OFFSET UNITYSDK_OFFSET(0xDE9D230)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMCLEANERBOTPHYSICSPROXYVIEW_POPDKFFPMLB_OFFSET UNITYSDK_OFFSET(0xDE9D5E0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMCLEANERBOTPHYSICSPROXYVIEW_RELEASE_OFFSET UNITYSDK_OFFSET(0xDE9CC60)

namespace RPG::Client::LittleGame::FiveDim
{
	inline static constexpr unsigned int FiveDimCleanerBotPhysicsProxyView_TypeDefinitionIndex = 79530;

	class FiveDimCleanerBotPhysicsProxyView : public ::RPG::Client::LittleGame::FiveDim::FiveDimPropPhysicsProxyView
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMCLEANERBOTPHYSICSPROXYVIEW_CTOR_OFFSET))(this);
		}

		::System::Void BOGNEMMLEBI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMCLEANERBOTPHYSICSPROXYVIEW_BOGNEMMLEBI_OFFSET))(this);
		}

		::System::Void ILKBMEBIAHE(::UnityEngine::Transform* a1, ::RPG::GameCore::FiveDimPropBakedMoveConfig* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::RPG::GameCore::FiveDimPropBakedMoveConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMCLEANERBOTPHYSICSPROXYVIEW_ILKBMEBIAHE_OFFSET))(this, a1, a2);
		}

		::System::Void Initialize(::Entitas::IContext* a1, ::EMJIDLCDFMI* a2, ::Entitas::IEntity* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IContext*, ::EMJIDLCDFMI*, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMCLEANERBOTPHYSICSPROXYVIEW_INITIALIZE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Release(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMCLEANERBOTPHYSICSPROXYVIEW_RELEASE_OFFSET))(this, a1);
		}

		::System::Void PFKCNLJHLNH(::UnityEngine::Collision* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collision*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMCLEANERBOTPHYSICSPROXYVIEW_PFKCNLJHLNH_OFFSET))(this, a1);
		}

		::System::Void KNBOMLJBMNP(::UnityEngine::Collision* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collision*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMCLEANERBOTPHYSICSPROXYVIEW_KNBOMLJBMNP_OFFSET))(this, a1);
		}

		::System::Boolean FLMEOEFMBMF(::UnityEngine::Collider* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMCLEANERBOTPHYSICSPROXYVIEW_FLMEOEFMBMF_OFFSET))(this, a1);
		}

		::System::Boolean LJGIBEEKAGP(::UnityEngine::Collider* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMCLEANERBOTPHYSICSPROXYVIEW_LJGIBEEKAGP_OFFSET))(this, a1);
		}

		::System::Void POPDKFFPMLB(::UnityEngine::Collider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMCLEANERBOTPHYSICSPROXYVIEW_POPDKFFPMLB_OFFSET))(this, a1);
		}

	};
}
