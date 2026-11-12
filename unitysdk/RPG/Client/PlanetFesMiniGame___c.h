#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class PlanetFesMiniGameReward; }
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_PLANETFESMINIGAME___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xE637CD0)
#define RPG_CLIENT_PLANETFESMINIGAME___C_CTOR_OFFSET UNITYSDK_OFFSET(0xE637D10)
#define RPG_CLIENT_PLANETFESMINIGAME___C__GETREWARDS_B__3_0_OFFSET UNITYSDK_OFFSET(0xE637D20)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesMiniGame___c_TypeDefinitionIndex = 68542;

	class PlanetFesMiniGame___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x3DEB0);
		}

		static ::System::Comparison_1<::RPG::Client::PlanetFesMiniGameReward*>** StaticGet___9__3_0()
		{
			return (::System::Comparison_1<::RPG::Client::PlanetFesMiniGameReward*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x3DEB8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMINIGAME___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMINIGAME___C_CTOR_OFFSET))(this);
		}

		::System::Int32 _GetRewards_b__3_0(::RPG::Client::PlanetFesMiniGameReward* a1, ::RPG::Client::PlanetFesMiniGameReward* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::PlanetFesMiniGameReward*, ::RPG::Client::PlanetFesMiniGameReward*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMINIGAME___C__GETREWARDS_B__3_0_OFFSET))(this, a1, a2);
		}

	};
}
