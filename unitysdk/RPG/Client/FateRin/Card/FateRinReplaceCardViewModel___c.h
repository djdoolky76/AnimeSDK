#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::FateRin::Card { class IFateRinSystemCardViewModel; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xD90FCF0)
#define RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL___C_CTOR_OFFSET UNITYSDK_OFFSET(0xD90FD30)
#define RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL___C___REPORTREPLACECARD_B__7_0_OFFSET UNITYSDK_OFFSET(0xD90FD40)
#define RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL___C___REPORTREPLACECARD_B__7_1_OFFSET UNITYSDK_OFFSET(0xD90FE50)

namespace RPG::Client::FateRin::Card
{
	inline static constexpr unsigned int FateRinReplaceCardViewModel___c_TypeDefinitionIndex = 83949;

	class FateRinReplaceCardViewModel___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client.FateRin.Card", "<>c")->GetStaticField(0x5E380);
		}

		static ::System::Func_2<::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel*, ::System::Boolean>** StaticGet___9__7_1()
		{
			return (::System::Func_2<::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client.FateRin.Card", "<>c")->GetStaticField(0x5E388);
		}

		static ::System::Func_2<::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel*, ::System::UInt32>** StaticGet___9__7_0()
		{
			return (::System::Func_2<::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel*, ::System::UInt32>**)UnitySDK::FromName("RPG.Client.FateRin.Card", "<>c")->GetStaticField(0x5E390);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL___C_CTOR_OFFSET))(this);
		}

		::System::UInt32 __ReportReplaceCard_b__7_0(::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL___C___REPORTREPLACECARD_B__7_0_OFFSET))(this, a1);
		}

		::System::Boolean __ReportReplaceCard_b__7_1(::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL___C___REPORTREPLACECARD_B__7_1_OFFSET))(this, a1);
		}

	};
}
