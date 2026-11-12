#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"
namespace System { class Object; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_ACTIVITYSTARTHINTMODULE_CANSHOWTOAST_OFFSET UNITYSDK_OFFSET(0xCEF8700)
#define RPG_CLIENT_ACTIVITYSTARTHINTMODULE_CCTOR_OFFSET UNITYSDK_OFFSET(0xCEF8A50)
#define RPG_CLIENT_ACTIVITYSTARTHINTMODULE_CTOR_OFFSET UNITYSDK_OFFSET(0xCEF8A30)
#define RPG_CLIENT_ACTIVITYSTARTHINTMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xCEF8180)
#define RPG_CLIENT_ACTIVITYSTARTHINTMODULE__REFRESHACTIVITYICONTRANSFORM_OFFSET UNITYSDK_OFFSET(0xCEF89B0)
#define RPG_CLIENT_ACTIVITYSTARTHINTMODULE__TRYSHOWTOAST_OFFSET UNITYSDK_OFFSET(0xCEF82E0)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityStartHintModule_TypeDefinitionIndex = 63317;

	class ActivityStartHintModule : public ::RPG::Client::BaseModule
	{
	public:
		::UnityEngine::Transform* ActivityIconTransform; // 0x10
		::System::Boolean _IsToastShown; // 0x18
		static ::System::UInt32* StaticGet__ACTIVITY_UNLOCK_ID()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.Client", "ActivityStartHintModule")->GetStaticField(0xAFE0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTARTHINTMODULE_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTARTHINTMODULE_CCTOR_OFFSET))();
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTARTHINTMODULE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void _TryShowToast(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTARTHINTMODULE__TRYSHOWTOAST_OFFSET))(this, a1);
		}

		static ::System::Boolean CanShowToast(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTARTHINTMODULE_CANSHOWTOAST_OFFSET))(a1);
		}

		::System::Void _RefreshActivityIconTransform(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTARTHINTMODULE__REFRESHACTIVITYICONTRANSFORM_OFFSET))(this, a1);
		}

	};
}
