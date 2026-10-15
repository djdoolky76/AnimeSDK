#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class ItemDisplayData; }
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLERESULTINFO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xCC1F310)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLERESULTINFO___C_CTOR_OFFSET UNITYSDK_OFFSET(0xCC1F350)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLERESULTINFO___C__CREATEPVERESULT_B__1_0_OFFSET UNITYSDK_OFFSET(0xCC1F360)

namespace RPG::Client::DiceCombat
{
	class DiceCombatBattleResultInfo___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::RPG::Client::ItemDisplayData*>** StaticGet___9__1_0()
		{
			return (::System::Comparison_1<::RPG::Client::ItemDisplayData*>**)UnitySDK::FromName("RPG.Client.DiceCombat", "<>c")->GetStaticField(0x253F0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client.DiceCombat", "<>c")->GetStaticField(0x253F8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLERESULTINFO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLERESULTINFO___C_CTOR_OFFSET))(this);
		}

		::System::Int32 _CreatePVEResult_b__1_0(::RPG::Client::ItemDisplayData* a1, ::RPG::Client::ItemDisplayData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ItemDisplayData*, ::RPG::Client::ItemDisplayData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLERESULTINFO___C__CREATEPVERESULT_B__1_0_OFFSET))(this, a1, a2);
		}

	};
}
