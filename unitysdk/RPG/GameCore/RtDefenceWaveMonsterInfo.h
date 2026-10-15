#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RtDefenceBatchMonsterInfo; }
namespace RPG::GameCore { class RtDefenceWaveMonsterInfo; }

#define RPG_GAMECORE_RTDEFENCEWAVEMONSTERINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA5CB40)
#define RPG_GAMECORE_RTDEFENCEWAVEMONSTERINFO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA5C9B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtDefenceWaveMonsterInfo_TypeDefinitionIndex = 18069;

	class RtDefenceWaveMonsterInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::FixPoint Delay; // 0x10
		::Il2CppArray<::RPG::GameCore::RtDefenceBatchMonsterInfo*>* BatchList; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTDEFENCEWAVEMONSTERINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RtDefenceWaveMonsterInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RtDefenceWaveMonsterInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTDEFENCEWAVEMONSTERINFO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
