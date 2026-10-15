#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/LittleGameSTTaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::Client::LittleGameShare { class ST_Main_LittleGameShare_DoNothing; }

#define RPG_CLIENT_LITTLEGAMESHARE_ST_MAIN_LITTLEGAMESHARE_DONOTHING_CTOR_OFFSET UNITYSDK_OFFSET(0x1D327F60)
#define RPG_CLIENT_LITTLEGAMESHARE_ST_MAIN_LITTLEGAMESHARE_DONOTHING_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D327F70)
#define RPG_CLIENT_LITTLEGAMESHARE_ST_MAIN_LITTLEGAMESHARE_DONOTHING_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D327F10)

namespace RPG::Client::LittleGameShare
{
	inline static constexpr unsigned int ST_Main_LittleGameShare_DoNothing_TypeDefinitionIndex = 10328;

	class ST_Main_LittleGameShare_DoNothing : public ::RPG::Client::LittleGameShare::LittleGameSTTaskConfig
	{
	public:
		::System::Int32 DurationMs; // 0x18
		::System::Boolean UseRandom; // 0x1C
		::System::Byte _padding0[0x3];
		::System::UInt32 MinDurationMs; // 0x20
		::System::UInt32 MaxDurationMs; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_ST_MAIN_LITTLEGAMESHARE_DONOTHING_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::Client::LittleGameShare::ST_Main_LittleGameShare_DoNothing* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::Client::LittleGameShare::ST_Main_LittleGameShare_DoNothing*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_ST_MAIN_LITTLEGAMESHARE_DONOTHING_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::Client::LittleGameShare::ST_Main_LittleGameShare_DoNothing* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::Client::LittleGameShare::ST_Main_LittleGameShare_DoNothing*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_ST_MAIN_LITTLEGAMESHARE_DONOTHING_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
