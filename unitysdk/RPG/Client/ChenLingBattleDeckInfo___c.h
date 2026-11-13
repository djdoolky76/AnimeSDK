#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class ChenLingBattleDeckData; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_CHENLINGBATTLEDECKINFO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E266B60)
#define RPG_CLIENT_CHENLINGBATTLEDECKINFO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E266BA0)
#define RPG_CLIENT_CHENLINGBATTLEDECKINFO___C__GETUNLOCKEDDECKS_B__9_0_OFFSET UNITYSDK_OFFSET(0x1E266BB0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChenLingBattleDeckInfo___c_TypeDefinitionIndex = 62814;

	class ChenLingBattleDeckInfo___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::ChenLingBattleDeckData*, ::System::Boolean>** StaticGet___9__9_0()
		{
			return (::System::Func_2<::RPG::Client::ChenLingBattleDeckData*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x722A0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x722A8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLEDECKINFO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLEDECKINFO___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _GetUnlockedDecks_b__9_0(::RPG::Client::ChenLingBattleDeckData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChenLingBattleDeckData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLEDECKINFO___C__GETUNLOCKEDDECKS_B__9_0_OFFSET))(this, a1);
		}

	};
}
