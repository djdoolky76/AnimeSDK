#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class RPGAnimationEvent_AnimationEventCallBack; }
namespace System { class Object; }

#define GKDGKLIGBEJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x15A93410)
#define GKDGKLIGBEJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x15A93440)
#define GKDGKLIGBEJ___C___ONBIND_B__0_0_OFFSET UNITYSDK_OFFSET(0x15A93450)

	class GKDGKLIGBEJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x642F0);
		}

		static ::RPG::Client::RPGAnimationEvent_AnimationEventCallBack** StaticGet___9__0_0()
		{
			return (::RPG::Client::RPGAnimationEvent_AnimationEventCallBack**)UnitySDK::FromName("", "<>c")->GetStaticField(0x642F8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GKDGKLIGBEJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKDGKLIGBEJ___C_CTOR_OFFSET))(this);
		}

		::System::Void __OnBind_b__0_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKDGKLIGBEJ___C___ONBIND_B__0_0_OFFSET))(this);
		}

	};
