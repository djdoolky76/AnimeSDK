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

#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMCLEANERBOTPHYSICSPROXYVIEW_BOGNEMMLEBI_OFFSET UNITYSDK_OFFSET(0x1C37D320)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMCLEANERBOTPHYSICSPROXYVIEW_CTOR_OFFSET UNITYSDK_OFFSET(0x1C37EA30)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMCLEANERBOTPHYSICSPROXYVIEW_FLMEOEFMBMF_OFFSET UNITYSDK_OFFSET(0x1C37E810)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMCLEANERBOTPHYSICSPROXYVIEW_ILKBMEBIAHE_OFFSET UNITYSDK_OFFSET(0x1C37D4B0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMCLEANERBOTPHYSICSPROXYVIEW_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1C37D760)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMCLEANERBOTPHYSICSPROXYVIEW_KNBOMLJBMNP_OFFSET UNITYSDK_OFFSET(0x1C37E970)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMCLEANERBOTPHYSICSPROXYVIEW_LJGIBEEKAGP_OFFSET UNITYSDK_OFFSET(0x1C37E540)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMCLEANERBOTPHYSICSPROXYVIEW_PFKCNLJHLNH_OFFSET UNITYSDK_OFFSET(0x1C37E310)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMCLEANERBOTPHYSICSPROXYVIEW_POPDKFFPMLB_OFFSET UNITYSDK_OFFSET(0x1C37E6C0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMCLEANERBOTPHYSICSPROXYVIEW_RELEASE_OFFSET UNITYSDK_OFFSET(0x1C37DD40)

namespace RPG::Client::LittleGame::FiveDim
{
	inline static constexpr unsigned int FiveDimCleanerBotPhysicsProxyView_TypeDefinitionIndex = 79529;

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
