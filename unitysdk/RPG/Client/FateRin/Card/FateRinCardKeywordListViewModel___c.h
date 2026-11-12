#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KMGFDBOANJO;
namespace RPG::Client::FateRin::Card { class FateRinCardKeywordViewModel; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_FATERIN_CARD_FATERINCARDKEYWORDLISTVIEWMODEL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xD902BB0)
#define RPG_CLIENT_FATERIN_CARD_FATERINCARDKEYWORDLISTVIEWMODEL___C_CTOR_OFFSET UNITYSDK_OFFSET(0xD902BF0)
#define RPG_CLIENT_FATERIN_CARD_FATERINCARDKEYWORDLISTVIEWMODEL___C___CTOR_B__0_0_OFFSET UNITYSDK_OFFSET(0xD902C00)
#define RPG_CLIENT_FATERIN_CARD_FATERINCARDKEYWORDLISTVIEWMODEL___C___CTOR_B__0_1_OFFSET UNITYSDK_OFFSET(0xD902C20)

namespace RPG::Client::FateRin::Card
{
	inline static constexpr unsigned int FateRinCardKeywordListViewModel___c_TypeDefinitionIndex = 83921;

	class FateRinCardKeywordListViewModel___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::KMGFDBOANJO*, ::System::Boolean>** StaticGet___9__0_0()
		{
			return (::System::Func_2<::KMGFDBOANJO*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client.FateRin.Card", "<>c")->GetStaticField(0x5D960);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client.FateRin.Card", "<>c")->GetStaticField(0x5D968);
		}

		static ::System::Func_2<::KMGFDBOANJO*, ::RPG::Client::FateRin::Card::FateRinCardKeywordViewModel*>** StaticGet___9__0_1()
		{
			return (::System::Func_2<::KMGFDBOANJO*, ::RPG::Client::FateRin::Card::FateRinCardKeywordViewModel*>**)UnitySDK::FromName("RPG.Client.FateRin.Card", "<>c")->GetStaticField(0x5D970);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINCARDKEYWORDLISTVIEWMODEL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINCARDKEYWORDLISTVIEWMODEL___C_CTOR_OFFSET))(this);
		}

		::System::Boolean __ctor_b__0_0(::KMGFDBOANJO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KMGFDBOANJO*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINCARDKEYWORDLISTVIEWMODEL___C___CTOR_B__0_0_OFFSET))(this, a1);
		}

		::RPG::Client::FateRin::Card::FateRinCardKeywordViewModel* __ctor_b__0_1(::KMGFDBOANJO* a1)
		{
			return ((::RPG::Client::FateRin::Card::FateRinCardKeywordViewModel*(*)(::PVOID, ::KMGFDBOANJO*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINCARDKEYWORDLISTVIEWMODEL___C___CTOR_B__0_1_OFFSET))(this, a1);
		}

	};
}
