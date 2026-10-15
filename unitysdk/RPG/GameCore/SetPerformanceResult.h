#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetPerformanceResult; }

#define RPG_GAMECORE_SETPERFORMANCERESULT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DABE950)
#define RPG_GAMECORE_SETPERFORMANCERESULT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DABE960)
#define RPG_GAMECORE_SETPERFORMANCERESULT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DABE920)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetPerformanceResult_TypeDefinitionIndex = 21934;

	class SetPerformanceResult : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 Value; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETPERFORMANCERESULT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetPerformanceResult* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetPerformanceResult*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETPERFORMANCERESULT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetPerformanceResult* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetPerformanceResult*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETPERFORMANCERESULT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
