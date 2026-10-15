#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class AvatarDemoModuleConfigRow; }
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_ROLETRIALUTILS___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xE06C0C0)
#define RPG_CLIENT_ROLETRIALUTILS___C_CTOR_OFFSET UNITYSDK_OFFSET(0xE06C0F0)
#define RPG_CLIENT_ROLETRIALUTILS___C__GETSORTEDAVATARDEMOLIST_B__0_0_OFFSET UNITYSDK_OFFSET(0xE06C100)

namespace RPG::Client
{
	class RoleTrialUtils___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::RPG::GameCore::AvatarDemoModuleConfigRow*>** StaticGet___9__0_0()
		{
			return (::System::Comparison_1<::RPG::GameCore::AvatarDemoModuleConfigRow*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6E1A0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6E1A8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROLETRIALUTILS___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROLETRIALUTILS___C_CTOR_OFFSET))(this);
		}

		::System::Int32 _GetSortedAvatarDemoList_b__0_0(::RPG::GameCore::AvatarDemoModuleConfigRow* a1, ::RPG::GameCore::AvatarDemoModuleConfigRow* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::AvatarDemoModuleConfigRow*, ::RPG::GameCore::AvatarDemoModuleConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROLETRIALUTILS___C__GETSORTEDAVATARDEMOLIST_B__0_0_OFFSET))(this, a1, a2);
		}

	};
}
