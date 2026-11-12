#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class Object; }

#define RPG_CLIENT_BATTLEUIUTILS___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xD1D3800)
#define RPG_CLIENT_BATTLEUIUTILS___C_CTOR_OFFSET UNITYSDK_OFFSET(0xD1D3840)
#define RPG_CLIENT_BATTLEUIUTILS___C__SHOWTEAMDETAILDIALOG_B__4_0_OFFSET UNITYSDK_OFFSET(0xD1D3850)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleUIUtils___c_TypeDefinitionIndex = 74114;

	class BattleUIUtils___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x59860);
		}

		static ::System::Action** StaticGet___9__4_0()
		{
			return (::System::Action**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x59868);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUIUTILS___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUIUTILS___C_CTOR_OFFSET))(this);
		}

		::System::Void _ShowTeamDetailDialog_b__4_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUIUTILS___C__SHOWTEAMDETAILDIALOG_B__4_0_OFFSET))(this);
		}

	};
}
