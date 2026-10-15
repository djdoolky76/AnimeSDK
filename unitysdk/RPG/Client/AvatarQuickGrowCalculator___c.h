#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class AvatarExpItemConfigRow; }
namespace RPG::GameCore { class ItemConfig; }
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }
namespace System { template <typename T> class Predicate_1; }

#define RPG_CLIENT_AVATARQUICKGROWCALCULATOR___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xC70DD60)
#define RPG_CLIENT_AVATARQUICKGROWCALCULATOR___C_CTOR_OFFSET UNITYSDK_OFFSET(0xC70DDA0)
#define RPG_CLIENT_AVATARQUICKGROWCALCULATOR___C___BUILDEXPPLAN_B__34_0_OFFSET UNITYSDK_OFFSET(0xC70DDF0)
#define RPG_CLIENT_AVATARQUICKGROWCALCULATOR___C___ENSUREAVATAREXPROWS_B__18_0_OFFSET UNITYSDK_OFFSET(0xC70DDB0)

namespace RPG::Client
{
	class AvatarQuickGrowCalculator___c : public ::System::Object
	{
	public:
		static ::System::Predicate_1<::RPG::GameCore::ItemConfig*>** StaticGet___9__34_0()
		{
			return (::System::Predicate_1<::RPG::GameCore::ItemConfig*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x5C370);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x5C378);
		}

		static ::System::Comparison_1<::RPG::GameCore::AvatarExpItemConfigRow*>** StaticGet___9__18_0()
		{
			return (::System::Comparison_1<::RPG::GameCore::AvatarExpItemConfigRow*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x5C380);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARQUICKGROWCALCULATOR___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARQUICKGROWCALCULATOR___C_CTOR_OFFSET))(this);
		}

		::System::Int32 __EnsureAvatarExpRows_b__18_0(::RPG::GameCore::AvatarExpItemConfigRow* a1, ::RPG::GameCore::AvatarExpItemConfigRow* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::AvatarExpItemConfigRow*, ::RPG::GameCore::AvatarExpItemConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARQUICKGROWCALCULATOR___C___ENSUREAVATAREXPROWS_B__18_0_OFFSET))(this, a1, a2);
		}

		::System::Boolean __BuildExpPlan_b__34_0(::RPG::GameCore::ItemConfig* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ItemConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARQUICKGROWCALCULATOR___C___BUILDEXPPLAN_B__34_0_OFFSET))(this, a1);
		}

	};
}
