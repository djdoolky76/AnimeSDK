#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetupAlleyTransportGuide; }

#define RPG_GAMECORE_SETUPALLEYTRANSPORTGUIDE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA9EF90)
#define RPG_GAMECORE_SETUPALLEYTRANSPORTGUIDE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA9EFA0)
#define RPG_GAMECORE_SETUPALLEYTRANSPORTGUIDE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA9EF60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetupAlleyTransportGuide_TypeDefinitionIndex = 24290;

	class SetupAlleyTransportGuide : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean LockHorizon; // 0x18
		::System::Boolean LockVertical; // 0x19
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETUPALLEYTRANSPORTGUIDE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetupAlleyTransportGuide* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetupAlleyTransportGuide*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETUPALLEYTRANSPORTGUIDE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetupAlleyTransportGuide* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetupAlleyTransportGuide*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETUPALLEYTRANSPORTGUIDE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
