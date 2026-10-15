#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class QuestData; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_VORACITYINVASIONPERSONALPROGRESS___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xE45DDE0)
#define RPG_CLIENT_VORACITYINVASIONPERSONALPROGRESS___C_CTOR_OFFSET UNITYSDK_OFFSET(0xE45DE20)
#define RPG_CLIENT_VORACITYINVASIONPERSONALPROGRESS___C__GET_QUESTDATALIST_B__6_0_OFFSET UNITYSDK_OFFSET(0xE45DE30)

namespace RPG::Client
{
	class VoracityInvasionPersonalProgress___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::QuestData*, ::System::Boolean>** StaticGet___9__6_0()
		{
			return (::System::Func_2<::RPG::Client::QuestData*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x4BF50);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x4BF58);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_VORACITYINVASIONPERSONALPROGRESS___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VORACITYINVASIONPERSONALPROGRESS___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _get_QuestDataList_b__6_0(::RPG::Client::QuestData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::QuestData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_VORACITYINVASIONPERSONALPROGRESS___C__GET_QUESTDATALIST_B__6_0_OFFSET))(this, a1);
		}

	};
}
