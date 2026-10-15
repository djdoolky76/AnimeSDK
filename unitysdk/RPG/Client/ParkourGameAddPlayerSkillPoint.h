#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::Client { class ParkourGameAddPlayerSkillPoint; }

#define RPG_CLIENT_PARKOURGAMEADDPLAYERSKILLPOINT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D2FB250)
#define RPG_CLIENT_PARKOURGAMEADDPLAYERSKILLPOINT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D2FB260)
#define RPG_CLIENT_PARKOURGAMEADDPLAYERSKILLPOINT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D2FB220)

namespace RPG::Client
{
	inline static constexpr unsigned int ParkourGameAddPlayerSkillPoint_TypeDefinitionIndex = 10260;

	class ParkourGameAddPlayerSkillPoint : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 AddValue; // 0x18
		::System::UInt32 MaxValue; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEADDPLAYERSKILLPOINT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::Client::ParkourGameAddPlayerSkillPoint* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::Client::ParkourGameAddPlayerSkillPoint*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEADDPLAYERSKILLPOINT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::Client::ParkourGameAddPlayerSkillPoint* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::Client::ParkourGameAddPlayerSkillPoint*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEADDPLAYERSKILLPOINT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
