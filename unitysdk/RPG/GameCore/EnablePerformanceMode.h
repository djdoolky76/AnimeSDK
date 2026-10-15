#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class EnablePerformanceMode; }

#define RPG_GAMECORE_ENABLEPERFORMANCEMODE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6127D0)
#define RPG_GAMECORE_ENABLEPERFORMANCEMODE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6127E0)
#define RPG_GAMECORE_ENABLEPERFORMANCEMODE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6127A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EnablePerformanceMode_TypeDefinitionIndex = 21580;

	class EnablePerformanceMode : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Enable; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENABLEPERFORMANCEMODE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::EnablePerformanceMode* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::EnablePerformanceMode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENABLEPERFORMANCEMODE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::EnablePerformanceMode* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::EnablePerformanceMode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENABLEPERFORMANCEMODE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
