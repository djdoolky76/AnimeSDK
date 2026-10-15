#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class TraceHeartDialNPC; }

#define RPG_GAMECORE_TRACEHEARTDIALNPC_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC28530)
#define RPG_GAMECORE_TRACEHEARTDIALNPC_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC28540)
#define RPG_GAMECORE_TRACEHEARTDIALNPC_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC28500)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TraceHeartDialNPC_TypeDefinitionIndex = 21222;

	class TraceHeartDialNPC : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* TraceID; // 0x18
		::RPG::Client::TextID Desc; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnSubmitConfirm; // 0x30
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnSubmitCancel; // 0x38
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnFailedFindNpc; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACEHEARTDIALNPC_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TraceHeartDialNPC* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TraceHeartDialNPC*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACEHEARTDIALNPC_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TraceHeartDialNPC* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TraceHeartDialNPC*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACEHEARTDIALNPC_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
