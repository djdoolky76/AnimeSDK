#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DevPlayPerformanceE; }
namespace RPG::GameCore { class DevTalkInfo; }

#define RPG_GAMECORE_DEVPLAYPERFORMANCEE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5FDE40)
#define RPG_GAMECORE_DEVPLAYPERFORMANCEE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5FDE50)
#define RPG_GAMECORE_DEVPLAYPERFORMANCEE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5FDE10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DevPlayPerformanceE_TypeDefinitionIndex = 21135;

	class DevPlayPerformanceE : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::DevTalkInfo*>* TalkList; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEVPLAYPERFORMANCEE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DevPlayPerformanceE* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DevPlayPerformanceE*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEVPLAYPERFORMANCEE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::DevPlayPerformanceE* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DevPlayPerformanceE*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEVPLAYPERFORMANCEE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
