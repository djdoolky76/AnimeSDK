#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ClientFinishMission; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_CLIENTFINISHMISSION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5B7A80)
#define RPG_GAMECORE_CLIENTFINISHMISSION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5B7A90)
#define RPG_GAMECORE_CLIENTFINISHMISSION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5B7A50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ClientFinishMission_TypeDefinitionIndex = 20356;

	class ClientFinishMission : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 SubmissionID; // 0x18
		::System::Boolean IsWaitServer; // 0x1C
		::System::Byte _padding0[0x3];
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnComplete; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLIENTFINISHMISSION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ClientFinishMission* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ClientFinishMission*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLIENTFINISHMISSION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ClientFinishMission* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ClientFinishMission*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLIENTFINISHMISSION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
