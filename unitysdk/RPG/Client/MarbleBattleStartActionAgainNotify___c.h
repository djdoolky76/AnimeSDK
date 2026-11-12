#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class MarbleBattleSealData; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_MARBLEBATTLESTARTACTIONAGAINNOTIFY___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xDFC49B0)
#define RPG_CLIENT_MARBLEBATTLESTARTACTIONAGAINNOTIFY___C_CTOR_OFFSET UNITYSDK_OFFSET(0xDFC49F0)
#define RPG_CLIENT_MARBLEBATTLESTARTACTIONAGAINNOTIFY___C___CTOR_B__0_0_OFFSET UNITYSDK_OFFSET(0xDFC4A00)

namespace RPG::Client
{
	inline static constexpr unsigned int MarbleBattleStartActionAgainNotify___c_TypeDefinitionIndex = 67754;

	class MarbleBattleStartActionAgainNotify___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x5A2E0);
		}

		static ::System::Func_2<::RPG::Client::MarbleBattleSealData*, ::System::Boolean>** StaticGet___9__0_0()
		{
			return (::System::Func_2<::RPG::Client::MarbleBattleSealData*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x5A2E8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEBATTLESTARTACTIONAGAINNOTIFY___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEBATTLESTARTACTIONAGAINNOTIFY___C_CTOR_OFFSET))(this);
		}

		::System::Boolean __ctor_b__0_0(::RPG::Client::MarbleBattleSealData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MarbleBattleSealData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEBATTLESTARTACTIONAGAINNOTIFY___C___CTOR_B__0_0_OFFSET))(this, a1);
		}

	};
}
