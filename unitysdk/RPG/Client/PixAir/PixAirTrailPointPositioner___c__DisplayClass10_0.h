#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class MonoAnimationTrigger; }
namespace RPG::Client { class RPGAnimationEvent; }
namespace RPG::Client::PixAir { class PixAirTrailPointPositioner; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_PIXAIR_PIXAIRTRAILPOINTPOSITIONER___C__DISPLAYCLASS10_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1D82F2E0)
#define RPG_CLIENT_PIXAIR_PIXAIRTRAILPOINTPOSITIONER___C__DISPLAYCLASS10_0__PLAY_B__0_OFFSET UNITYSDK_OFFSET(0x1D82F300)
#define RPG_CLIENT_PIXAIR_PIXAIRTRAILPOINTPOSITIONER___C__DISPLAYCLASS10_0__PLAY_B__1_OFFSET UNITYSDK_OFFSET(0x1D82F340)

namespace RPG::Client::PixAir
{
	inline static constexpr unsigned int PixAirTrailPointPositioner___c__DisplayClass10_0_TypeDefinitionIndex = 82170;

	class PixAirTrailPointPositioner___c__DisplayClass10_0 : public ::System::Object
	{
	public:
		::System::Action* onComplete; // 0x10
		::RPG::Client::PixAir::PixAirTrailPointPositioner* __4__this; // 0x18
		::RPG::Client::MonoAnimationTrigger* animTrigger; // 0x20
		::System::Action_1<::System::String*>* animationCallback; // 0x28
		::RPG::Client::RPGAnimationEvent* animEventCmpt; // 0x30
		::System::Action_1<::System::String*>* onAnimEvent; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRTRAILPOINTPOSITIONER___C__DISPLAYCLASS10_0_CTOR_OFFSET))(this);
		}

		::System::Void _Play_b__0(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRTRAILPOINTPOSITIONER___C__DISPLAYCLASS10_0__PLAY_B__0_OFFSET))(this, a1);
		}

		::System::Void _Play_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRTRAILPOINTPOSITIONER___C__DISPLAYCLASS10_0__PLAY_B__1_OFFSET))(this);
		}

	};
}
