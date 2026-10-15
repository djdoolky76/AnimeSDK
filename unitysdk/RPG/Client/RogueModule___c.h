#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class RogueEndlessAreaData; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_ROGUEMODULE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xDF54930)
#define RPG_CLIENT_ROGUEMODULE___C_CTOR_OFFSET UNITYSDK_OFFSET(0xDF54970)
#define RPG_CLIENT_ROGUEMODULE___C__HASROGUEENDLESSINDOING_B__25_0_OFFSET UNITYSDK_OFFSET(0xDF54980)
#define RPG_CLIENT_ROGUEMODULE___C___SHOWBUFFAEONFIRSTTALK_B__130_0_OFFSET UNITYSDK_OFFSET(0xDF549E0)

namespace RPG::Client
{
	class RogueModule___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x656A0);
		}

		static ::System::Action** StaticGet___9__130_0()
		{
			return (::System::Action**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x656A8);
		}

		static ::System::Func_2<::RPG::Client::RogueEndlessAreaData*, ::System::Boolean>** StaticGet___9__25_0()
		{
			return (::System::Func_2<::RPG::Client::RogueEndlessAreaData*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x656B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _HasRogueEndlessInDoing_b__25_0(::RPG::Client::RogueEndlessAreaData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RogueEndlessAreaData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE___C__HASROGUEENDLESSINDOING_B__25_0_OFFSET))(this, a1);
		}

		::System::Void __ShowBuffAeonFirstTalk_b__130_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE___C___SHOWBUFFAEONFIRSTTALK_B__130_0_OFFSET))(this);
		}

	};
}
