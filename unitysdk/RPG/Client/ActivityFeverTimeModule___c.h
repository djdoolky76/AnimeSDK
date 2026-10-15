#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::AvatarSystem { class IAvatar; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_ACTIVITYFEVERTIMEMODULE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xC3F21B0)
#define RPG_CLIENT_ACTIVITYFEVERTIMEMODULE___C_CTOR_OFFSET UNITYSDK_OFFSET(0xC3F21F0)
#define RPG_CLIENT_ACTIVITYFEVERTIMEMODULE___C__GETTRIALAVATARS_B__23_0_OFFSET UNITYSDK_OFFSET(0xC3F2200)

namespace RPG::Client
{
	class ActivityFeverTimeModule___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::UInt32, ::RPG::AvatarSystem::IAvatar*>** StaticGet___9__23_0()
		{
			return (::System::Func_2<::System::UInt32, ::RPG::AvatarSystem::IAvatar*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x15190);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x15198);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEMODULE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEMODULE___C_CTOR_OFFSET))(this);
		}

		::RPG::AvatarSystem::IAvatar* _GetTrialAvatars_b__23_0(::System::UInt32 a1)
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEMODULE___C__GETTRIALAVATARS_B__23_0_OFFSET))(this, a1);
		}

	};
}
