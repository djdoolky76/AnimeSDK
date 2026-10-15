#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PerformanceEndSeq; }
namespace RPG::GameCore { class PerformanceResultCase; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_PERFORMANCEENDSEQ_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8CE540)
#define RPG_GAMECORE_PERFORMANCEENDSEQ_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D8CE550)
#define RPG_GAMECORE_PERFORMANCEENDSEQ_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8CE510)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PerformanceEndSeq_TypeDefinitionIndex = 21244;

	class PerformanceEndSeq : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::PerformanceResultCase*>* Cases; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* BeforeCases; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEENDSEQ_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PerformanceEndSeq* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PerformanceEndSeq*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEENDSEQ_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PerformanceEndSeq* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PerformanceEndSeq*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEENDSEQ_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
