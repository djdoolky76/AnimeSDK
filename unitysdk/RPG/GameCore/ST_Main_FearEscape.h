#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ST_Main_FearEscape; }

#define RPG_GAMECORE_ST_MAIN_FEARESCAPE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA7E0A0)
#define RPG_GAMECORE_ST_MAIN_FEARESCAPE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA7E0B0)
#define RPG_GAMECORE_ST_MAIN_FEARESCAPE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA7DFE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_Main_FearEscape_TypeDefinitionIndex = 20142;

	class ST_Main_FearEscape : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_FEARESCAPE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_Main_FearEscape* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_Main_FearEscape*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_FEARESCAPE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_Main_FearEscape* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_Main_FearEscape*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_FEARESCAPE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
