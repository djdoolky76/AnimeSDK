#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/FiveDimPropPhysicsProxyView.h"
class EMJIDLCDFMI;
namespace Entitas { class IContext; }
namespace Entitas { class IEntity; }
namespace System { class String; }
namespace UnityEngine { class Collision; }

#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGECKOPHYSICSPROXYVIEW_ANFCEOPMCMB_OFFSET UNITYSDK_OFFSET(0xD436480)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGECKOPHYSICSPROXYVIEW_BMGNHFLGAFK_OFFSET UNITYSDK_OFFSET(0xD436380)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGECKOPHYSICSPROXYVIEW_BOGNEMMLEBI_OFFSET UNITYSDK_OFFSET(0xD4350C0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGECKOPHYSICSPROXYVIEW_CTOR_OFFSET UNITYSDK_OFFSET(0xD4365B0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGECKOPHYSICSPROXYVIEW_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xD4352E0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGECKOPHYSICSPROXYVIEW_RELEASE_OFFSET UNITYSDK_OFFSET(0xD435B30)

namespace RPG::Client::LittleGame::FiveDim
{
	inline static constexpr unsigned int FiveDimGeckoPhysicsProxyView_TypeDefinitionIndex = 77201;

	class FiveDimGeckoPhysicsProxyView : public ::RPG::Client::LittleGame::FiveDim::FiveDimPropPhysicsProxyView
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGECKOPHYSICSPROXYVIEW_CTOR_OFFSET))(this);
		}

		::System::Void BOGNEMMLEBI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGECKOPHYSICSPROXYVIEW_BOGNEMMLEBI_OFFSET))(this);
		}

		::System::Void Initialize(::Entitas::IContext* a1, ::EMJIDLCDFMI* a2, ::Entitas::IEntity* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IContext*, ::EMJIDLCDFMI*, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGECKOPHYSICSPROXYVIEW_INITIALIZE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Release(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGECKOPHYSICSPROXYVIEW_RELEASE_OFFSET))(this, a1);
		}

		::System::Void ANFCEOPMCMB(::UnityEngine::Collision* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collision*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGECKOPHYSICSPROXYVIEW_ANFCEOPMCMB_OFFSET))(this, a1);
		}

		::System::Void BMGNHFLGAFK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGECKOPHYSICSPROXYVIEW_BMGNHFLGAFK_OFFSET))(this);
		}

	};
}
