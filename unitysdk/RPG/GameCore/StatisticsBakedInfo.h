#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class StatisticsBakedInfo; }

#define RPG_GAMECORE_STATISTICSBAKEDINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAF3670)
#define RPG_GAMECORE_STATISTICSBAKEDINFO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAF35B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StatisticsBakedInfo_TypeDefinitionIndex = 16724;

	class StatisticsBakedInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::System::UInt32>* CoinIDList; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSBAKEDINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::StatisticsBakedInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StatisticsBakedInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSBAKEDINFO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
