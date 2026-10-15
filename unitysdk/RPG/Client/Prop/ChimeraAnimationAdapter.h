#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/ChimeraAnimationType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace UnityEngine { class Animator; }

#define RPG_CLIENT_PROP_CHIMERAANIMATIONADAPTER_CCTOR_OFFSET UNITYSDK_OFFSET(0xDC47740)
#define RPG_CLIENT_PROP_CHIMERAANIMATIONADAPTER_CTOR_OFFSET UNITYSDK_OFFSET(0xDC47730)
#define RPG_CLIENT_PROP_CHIMERAANIMATIONADAPTER_LAMNNMIAFIM_OFFSET UNITYSDK_OFFSET(0xDC47670)
#define RPG_CLIENT_PROP_CHIMERAANIMATIONADAPTER_LPCNFDDCKEB_OFFSET UNITYSDK_OFFSET(0xDC475D0)
#define RPG_CLIENT_PROP_CHIMERAANIMATIONADAPTER_PLAY_OFFSET UNITYSDK_OFFSET(0xDC47560)

namespace RPG::Client::Prop
{
	class ChimeraAnimationAdapter : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Animator* ChimeraAnimator; // 0x18
		static ::System::Int32* StaticGet_MEKAIIEIDHC()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.Prop", "ChimeraAnimationAdapter")->GetStaticField(0x11420);
		}

		static ::System::Int32* StaticGet_KMKPGPIDKJF()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.Prop", "ChimeraAnimationAdapter")->GetStaticField(0x11424);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAANIMATIONADAPTER_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAANIMATIONADAPTER_CCTOR_OFFSET))();
		}

		::System::Void Play(::RPG::Client::Prop::ChimeraAnimationType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::ChimeraAnimationType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAANIMATIONADAPTER_PLAY_OFFSET))(this, a1);
		}

		::System::Void LAMNNMIAFIM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAANIMATIONADAPTER_LAMNNMIAFIM_OFFSET))(this);
		}

		::System::Void LPCNFDDCKEB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAANIMATIONADAPTER_LPCNFDDCKEB_OFFSET))(this);
		}

	};
}
