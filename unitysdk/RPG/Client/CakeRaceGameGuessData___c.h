#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class CakeRaceGameGuessCatData; }
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_CAKERACEGAMEGUESSDATA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xC918D60)
#define RPG_CLIENT_CAKERACEGAMEGUESSDATA___C_CTOR_OFFSET UNITYSDK_OFFSET(0xC918DA0)
#define RPG_CLIENT_CAKERACEGAMEGUESSDATA___C___INITCATDATALIST_B__16_0_OFFSET UNITYSDK_OFFSET(0xC918DB0)

namespace RPG::Client
{
	inline static constexpr unsigned int CakeRaceGameGuessData___c_TypeDefinitionIndex = 63041;

	class CakeRaceGameGuessData___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::RPG::Client::CakeRaceGameGuessCatData*>** StaticGet___9__16_0()
		{
			return (::System::Comparison_1<::RPG::Client::CakeRaceGameGuessCatData*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x65850);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x65858);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEGAMEGUESSDATA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEGAMEGUESSDATA___C_CTOR_OFFSET))(this);
		}

		::System::Int32 __InitCatDataList_b__16_0(::RPG::Client::CakeRaceGameGuessCatData* a1, ::RPG::Client::CakeRaceGameGuessCatData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::CakeRaceGameGuessCatData*, ::RPG::Client::CakeRaceGameGuessCatData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEGAMEGUESSDATA___C___INITCATDATALIST_B__16_0_OFFSET))(this, a1, a2);
		}

	};
}
