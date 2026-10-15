#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::FateRin::Card { class IFateRinSystemCardViewModel; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_FATERIN_CARD_FATERINSINGLEDECKEDITVIEWMODEL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xCEFA350)
#define RPG_CLIENT_FATERIN_CARD_FATERINSINGLEDECKEDITVIEWMODEL___C_CTOR_OFFSET UNITYSDK_OFFSET(0xCEFA390)
#define RPG_CLIENT_FATERIN_CARD_FATERINSINGLEDECKEDITVIEWMODEL___C___CREATEACQUIREDLISTFROMOWNERTYPE_B__10_0_OFFSET UNITYSDK_OFFSET(0xCEFA3A0)

namespace RPG::Client::FateRin::Card
{
	inline static constexpr unsigned int FateRinSingleDeckEditViewModel___c_TypeDefinitionIndex = 81175;

	class FateRinSingleDeckEditViewModel___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client.FateRin.Card", "<>c")->GetStaticField(0x56020);
		}

		static ::System::Func_2<::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel*, ::System::UInt32>** StaticGet___9__10_0()
		{
			return (::System::Func_2<::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel*, ::System::UInt32>**)UnitySDK::FromName("RPG.Client.FateRin.Card", "<>c")->GetStaticField(0x56028);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINSINGLEDECKEDITVIEWMODEL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINSINGLEDECKEDITVIEWMODEL___C_CTOR_OFFSET))(this);
		}

		::System::UInt32 __CreateAcquiredListFromOwnerType_b__10_0(::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINSINGLEDECKEDITVIEWMODEL___C___CREATEACQUIREDLISTFROMOWNERTYPE_B__10_0_OFFSET))(this, a1);
		}

	};
}
