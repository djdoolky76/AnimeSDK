#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class Object; }

#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xC81B3F0)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT___C_CTOR_OFFSET UNITYSDK_OFFSET(0xC81B430)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT___C___TOGGLEAVATARPANEL_B__64_0_OFFSET UNITYSDK_OFFSET(0xC81B440)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleGamePageContext___c_TypeDefinitionIndex = 71652;

	class BattleGamePageContext___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__64_0()
		{
			return (::System::Action**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x5E440);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x5E448);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT___C_CTOR_OFFSET))(this);
		}

		::System::Void __ToggleAvatarPanel_b__64_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT___C___TOGGLEAVATARPANEL_B__64_0_OFFSET))(this);
		}

	};
}
