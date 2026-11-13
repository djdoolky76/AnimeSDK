#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightEffectController; }
namespace RPG::Client { class GridFightParticleEffect; }
namespace RPG::Client { class MonoAnimationTrigger; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS45_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5AC1A0)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS45_0__PLAYASTROPOLISSHOPTOASTEFFECT_B__0_OFFSET UNITYSDK_OFFSET(0x1D5B5690)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS45_0__PLAYASTROPOLISSHOPTOASTEFFECT_B__1_OFFSET UNITYSDK_OFFSET(0x1D5B5760)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightEffectController___c__DisplayClass45_0_TypeDefinitionIndex = 65975;

	class GridFightEffectController___c__DisplayClass45_0 : public ::System::Object
	{
	public:
		::System::Action_1<::System::String*>* onAnimationTrigger; // 0x10
		::RPG::Client::GridFightParticleEffect* effect; // 0x18
		::RPG::Client::MonoAnimationTrigger* animationTrigger; // 0x20
		::System::Action* onShopBtnActive; // 0x28
		::RPG::Client::GridFightEffectController* __4__this; // 0x30
		::System::Action* onFinish; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS45_0_CTOR_OFFSET))(this);
		}

		::System::Void _PlayAstropolisShopToastEffect_b__0(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS45_0__PLAYASTROPOLISSHOPTOASTEFFECT_B__0_OFFSET))(this, a1);
		}

		::System::Void _PlayAstropolisShopToastEffect_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS45_0__PLAYASTROPOLISSHOPTOASTEFFECT_B__1_OFFSET))(this);
		}

	};
}
