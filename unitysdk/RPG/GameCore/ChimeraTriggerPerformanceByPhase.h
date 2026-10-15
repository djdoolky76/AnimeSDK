#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChimeraTriggerPerformanceByPhase; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_CHIMERATRIGGERPERFORMANCEBYPHASE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5B0780)
#define RPG_GAMECORE_CHIMERATRIGGERPERFORMANCEBYPHASE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5B0790)
#define RPG_GAMECORE_CHIMERATRIGGERPERFORMANCEBYPHASE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5B0750)

namespace RPG::GameCore
{
	class ChimeraTriggerPerformanceByPhase : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnPerfect; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnComplete; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnJustSoSo; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERATRIGGERPERFORMANCEBYPHASE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraTriggerPerformanceByPhase* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraTriggerPerformanceByPhase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERATRIGGERPERFORMANCEBYPHASE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraTriggerPerformanceByPhase* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraTriggerPerformanceByPhase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERATRIGGERPERFORMANCEBYPHASE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
