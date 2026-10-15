#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class FateTraitBuffItem; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_FATETRAITDATA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xCFE1E30)
#define RPG_CLIENT_FATETRAITDATA___C_CTOR_OFFSET UNITYSDK_OFFSET(0xCFE1E70)
#define RPG_CLIENT_FATETRAITDATA___C__ISANYBUFFACTIVE_B__6_0_OFFSET UNITYSDK_OFFSET(0xCFE1E80)

namespace RPG::Client
{
	class FateTraitData___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::FateTraitBuffItem*, ::System::Boolean>** StaticGet___9__6_0()
		{
			return (::System::Func_2<::RPG::Client::FateTraitBuffItem*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x5A380);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x5A388);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITDATA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITDATA___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _IsAnyBuffActive_b__6_0(::RPG::Client::FateTraitBuffItem* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::FateTraitBuffItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITDATA___C__ISANYBUFFACTIVE_B__6_0_OFFSET))(this, a1);
		}

	};
}
