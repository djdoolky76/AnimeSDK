#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CakeRaceOwlbertAnim; }
namespace RPG::GameCore { class CakeRaceOwlbertAnimConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_CAKERACEOWLBERTANIMCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D524180)
#define RPG_GAMECORE_CAKERACEOWLBERTANIMCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5240A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRaceOwlbertAnimConfig_TypeDefinitionIndex = 18372;

	class CakeRaceOwlbertAnimConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::CakeRaceOwlbertAnim*>* AnimMap; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEOWLBERTANIMCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CakeRaceOwlbertAnimConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CakeRaceOwlbertAnimConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEOWLBERTANIMCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
