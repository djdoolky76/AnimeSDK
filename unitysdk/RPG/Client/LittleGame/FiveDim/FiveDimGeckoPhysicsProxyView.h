#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/FiveDimPropPhysicsProxyView.h"
class EMJIDLCDFMI;
namespace Entitas { class IContext; }
namespace Entitas { class IEntity; }
namespace System { class String; }
namespace UnityEngine { class Collision; }

#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGECKOPHYSICSPROXYVIEW_ANFCEOPMCMB_OFFSET UNITYSDK_OFFSET(0x1C38D690)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGECKOPHYSICSPROXYVIEW_BMGNHFLGAFK_OFFSET UNITYSDK_OFFSET(0x1C38D590)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGECKOPHYSICSPROXYVIEW_BOGNEMMLEBI_OFFSET UNITYSDK_OFFSET(0x1C38D250)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGECKOPHYSICSPROXYVIEW_CTOR_OFFSET UNITYSDK_OFFSET(0x1C38D7C0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGECKOPHYSICSPROXYVIEW_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1C38D470)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGECKOPHYSICSPROXYVIEW_RELEASE_OFFSET UNITYSDK_OFFSET(0x1C38D4F0)

namespace RPG::Client::LittleGame::FiveDim
{
	inline static constexpr unsigned int FiveDimGeckoPhysicsProxyView_TypeDefinitionIndex = 79535;

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
