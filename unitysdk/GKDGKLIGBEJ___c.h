#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class RPGAnimationEvent_AnimationEventCallBack; }
namespace System { class Object; }

#define GKDGKLIGBEJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1A8CEA10)
#define GKDGKLIGBEJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1A8CEA40)
#define GKDGKLIGBEJ___C___ONBIND_B__1_0_OFFSET UNITYSDK_OFFSET(0x1A8CEA50)

inline static constexpr unsigned int GKDGKLIGBEJ___c_TypeDefinitionIndex = 74077;

	class GKDGKLIGBEJ___c : public ::System::Object
	{
	public:
		static ::RPG::Client::RPGAnimationEvent_AnimationEventCallBack** StaticGet___9__1_0()
		{
			return (::RPG::Client::RPGAnimationEvent_AnimationEventCallBack**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6FF70);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6FF78);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GKDGKLIGBEJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKDGKLIGBEJ___C_CTOR_OFFSET))(this);
		}

		::System::Void __OnBind_b__1_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKDGKLIGBEJ___C___ONBIND_B__1_0_OFFSET))(this);
		}

	};
