#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::AvatarSystem { class IAvatar; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_ACTIVITYTELEVISIONDATA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xC5B87C0)
#define RPG_CLIENT_ACTIVITYTELEVISIONDATA___C_CTOR_OFFSET UNITYSDK_OFFSET(0xC5B8800)
#define RPG_CLIENT_ACTIVITYTELEVISIONDATA___C__GETTRIALAVATARS_B__5_0_OFFSET UNITYSDK_OFFSET(0xC5B8810)
#define RPG_CLIENT_ACTIVITYTELEVISIONDATA___C__ISPRELEVELFINISHED_B__6_0_OFFSET UNITYSDK_OFFSET(0xC5B8820)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityTelevisionData___c_TypeDefinitionIndex = 61997;

	class ActivityTelevisionData___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x348E0);
		}

		static ::System::Func_2<::System::UInt32, ::System::Boolean>** StaticGet___9__6_0()
		{
			return (::System::Func_2<::System::UInt32, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x348E8);
		}

		static ::System::Func_2<::System::UInt32, ::RPG::AvatarSystem::IAvatar*>** StaticGet___9__5_0()
		{
			return (::System::Func_2<::System::UInt32, ::RPG::AvatarSystem::IAvatar*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x348F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONDATA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONDATA___C_CTOR_OFFSET))(this);
		}

		::RPG::AvatarSystem::IAvatar* _GetTrialAvatars_b__5_0(::System::UInt32 a1)
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONDATA___C__GETTRIALAVATARS_B__5_0_OFFSET))(this, a1);
		}

		::System::Boolean _IsPreLevelFinished_b__6_0(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONDATA___C__ISPRELEVELFINISHED_B__6_0_OFFSET))(this, a1);
		}

	};
}
