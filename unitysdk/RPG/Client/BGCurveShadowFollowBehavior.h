#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"
namespace BansheeGz::BGSpline::Components { class BGCcMath; }
namespace RPG::Client { class BGCurveShadowFollowMonoPlugin; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_BGCURVESHADOWFOLLOWBEHAVIOR_CGEJMGFOLMP_OFFSET UNITYSDK_OFFSET(0xD13DFE0)
#define RPG_CLIENT_BGCURVESHADOWFOLLOWBEHAVIOR_CTOR_OFFSET UNITYSDK_OFFSET(0xD13F3B0)
#define RPG_CLIENT_BGCURVESHADOWFOLLOWBEHAVIOR_DFJGEBHINKM_OFFSET UNITYSDK_OFFSET(0xD13ED50)
#define RPG_CLIENT_BGCURVESHADOWFOLLOWBEHAVIOR_EINEMNNNCAI_OFFSET UNITYSDK_OFFSET(0xD13EF70)
#define RPG_CLIENT_BGCURVESHADOWFOLLOWBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET UNITYSDK_OFFSET(0xD13E270)
#define RPG_CLIENT_BGCURVESHADOWFOLLOWBEHAVIOR_JPKHCNDFAEL_OFFSET UNITYSDK_OFFSET(0xD13E040)
#define RPG_CLIENT_BGCURVESHADOWFOLLOWBEHAVIOR_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xD13DE90)
#define RPG_CLIENT_BGCURVESHADOWFOLLOWBEHAVIOR_MFCDKJIHDEH_OFFSET UNITYSDK_OFFSET(0xD13DF80)
#define RPG_CLIENT_BGCURVESHADOWFOLLOWBEHAVIOR_NEKGALPLEOH_OFFSET UNITYSDK_OFFSET(0xD13F350)
#define RPG_CLIENT_BGCURVESHADOWFOLLOWBEHAVIOR_OIBPOPCFDHA_OFFSET UNITYSDK_OFFSET(0xD13E0A0)
#define RPG_CLIENT_BGCURVESHADOWFOLLOWBEHAVIOR_PBAPKCPOOFE_OFFSET UNITYSDK_OFFSET(0xD13E2F0)
#define RPG_CLIENT_BGCURVESHADOWFOLLOWBEHAVIOR_PCNAKDOLCCD_OFFSET UNITYSDK_OFFSET(0xD13DF20)
#define RPG_CLIENT_BGCURVESHADOWFOLLOWBEHAVIOR_POOKPLGCKFE_OFFSET UNITYSDK_OFFSET(0xD13F310)
#define RPG_CLIENT_BGCURVESHADOWFOLLOWBEHAVIOR_TICK_OFFSET UNITYSDK_OFFSET(0xD13E100)

namespace RPG::Client
{
	inline static constexpr unsigned int BGCurveShadowFollowBehavior_TypeDefinitionIndex = 72322;

	class BGCurveShadowFollowBehavior : public ::RPG::Client::TABehaviorBase
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* shadowList; // 0x38
		::System::Collections::Generic::List_1<::System::Single>* ShadowDistanceRecord; // 0x40
		::BansheeGz::BGSpline::Components::BGCcMath* bgCurveMath; // 0x48
		::System::Single CurrentDistance; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BGCURVESHADOWFOLLOWBEHAVIOR_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BGCURVESHADOWFOLLOWBEHAVIOR_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void PCNAKDOLCCD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BGCURVESHADOWFOLLOWBEHAVIOR_PCNAKDOLCCD_OFFSET))(this);
		}

		::System::Void MFCDKJIHDEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BGCURVESHADOWFOLLOWBEHAVIOR_MFCDKJIHDEH_OFFSET))(this);
		}

		::System::Void CGEJMGFOLMP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BGCURVESHADOWFOLLOWBEHAVIOR_CGEJMGFOLMP_OFFSET))(this);
		}

		::System::Void JPKHCNDFAEL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BGCURVESHADOWFOLLOWBEHAVIOR_JPKHCNDFAEL_OFFSET))(this);
		}

		::System::Void OIBPOPCFDHA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BGCURVESHADOWFOLLOWBEHAVIOR_OIBPOPCFDHA_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_BGCURVESHADOWFOLLOWBEHAVIOR_TICK_OFFSET))(this, a1);
		}

		::System::Void EINEMNNNCAI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BGCURVESHADOWFOLLOWBEHAVIOR_EINEMNNNCAI_OFFSET))(this);
		}

		::System::Void PBAPKCPOOFE(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_BGCURVESHADOWFOLLOWBEHAVIOR_PBAPKCPOOFE_OFFSET))(this, a1);
		}

		::System::Void DFJGEBHINKM(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_BGCURVESHADOWFOLLOWBEHAVIOR_DFJGEBHINKM_OFFSET))(this, a1);
		}

		::System::Boolean POOKPLGCKFE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BGCURVESHADOWFOLLOWBEHAVIOR_POOKPLGCKFE_OFFSET))(this);
		}

		::System::Void NEKGALPLEOH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BGCURVESHADOWFOLLOWBEHAVIOR_NEKGALPLEOH_OFFSET))(this);
		}

		::RPG::Client::BGCurveShadowFollowMonoPlugin* get__OwnerMonoPlugin()
		{
			return ((::RPG::Client::BGCurveShadowFollowMonoPlugin*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BGCURVESHADOWFOLLOWBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET))(this);
		}

	};
}
