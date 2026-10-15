#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class OpenTrainPartyEntrancePage; }

#define RPG_GAMECORE_OPENTRAINPARTYENTRANCEPAGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8E2BB0)
#define RPG_GAMECORE_OPENTRAINPARTYENTRANCEPAGE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D8E2BC0)
#define RPG_GAMECORE_OPENTRAINPARTYENTRANCEPAGE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8E2AF0)

namespace RPG::GameCore
{
	class OpenTrainPartyEntrancePage : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OPENTRAINPARTYENTRANCEPAGE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::OpenTrainPartyEntrancePage* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::OpenTrainPartyEntrancePage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OPENTRAINPARTYENTRANCEPAGE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::OpenTrainPartyEntrancePage* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::OpenTrainPartyEntrancePage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OPENTRAINPARTYENTRANCEPAGE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
