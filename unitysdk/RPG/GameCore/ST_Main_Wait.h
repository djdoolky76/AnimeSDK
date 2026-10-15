#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ST_Main_Wait; }

#define RPG_GAMECORE_ST_MAIN_WAIT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA81BC0)
#define RPG_GAMECORE_ST_MAIN_WAIT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA81BD0)
#define RPG_GAMECORE_ST_MAIN_WAIT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA81B90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_Main_Wait_TypeDefinitionIndex = 20098;

	class ST_Main_Wait : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::System::Single Time; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_WAIT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_Main_Wait* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_Main_Wait*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_WAIT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_Main_Wait* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_Main_Wait*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_WAIT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
