#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ST_Main_Escape; }

#define RPG_GAMECORE_ST_MAIN_ESCAPE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA7DCC0)
#define RPG_GAMECORE_ST_MAIN_ESCAPE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA7DD00)
#define RPG_GAMECORE_ST_MAIN_ESCAPE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA7DC60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_Main_Escape_TypeDefinitionIndex = 20111;

	class ST_Main_Escape : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::System::Single Radius; // 0x18
		::System::Single MoveRadius; // 0x1C
		::System::Single Angle; // 0x20
		::System::UInt32 CandidatePoint; // 0x24
		::System::Single ConstC; // 0x28
		::System::Single Pow; // 0x2C
		::System::Single MaxRunAwayDistance; // 0x30
		::System::Single MaxRunAwayTime; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_ESCAPE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_Main_Escape* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_Main_Escape*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_ESCAPE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_Main_Escape* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_Main_Escape*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_ESCAPE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
