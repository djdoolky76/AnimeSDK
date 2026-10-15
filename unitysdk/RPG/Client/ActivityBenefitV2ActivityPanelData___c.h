#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class Object; }

#define RPG_CLIENT_ACTIVITYBENEFITV2ACTIVITYPANELDATA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xC3DA750)
#define RPG_CLIENT_ACTIVITYBENEFITV2ACTIVITYPANELDATA___C_CTOR_OFFSET UNITYSDK_OFFSET(0xC3DA790)
#define RPG_CLIENT_ACTIVITYBENEFITV2ACTIVITYPANELDATA___C___ONINIT_B__3_1_OFFSET UNITYSDK_OFFSET(0xC3DA7A0)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityBenefitV2ActivityPanelData___c_TypeDefinitionIndex = 61578;

	class ActivityBenefitV2ActivityPanelData___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x13DF0);
		}

		static ::System::Action** StaticGet___9__3_1()
		{
			return (::System::Action**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x13DF8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITV2ACTIVITYPANELDATA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITV2ACTIVITYPANELDATA___C_CTOR_OFFSET))(this);
		}

		::System::Void __OnInit_b__3_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITV2ACTIVITYPANELDATA___C___ONINIT_B__3_1_OFFSET))(this);
		}

	};
}
