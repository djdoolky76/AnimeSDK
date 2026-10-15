#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AITryInsertUltra; }

#define RPG_GAMECORE_AITRYINSERTULTRA_CTOR_OFFSET UNITYSDK_OFFSET(0x1D30DD10)
#define RPG_GAMECORE_AITRYINSERTULTRA_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D30DD20)
#define RPG_GAMECORE_AITRYINSERTULTRA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D30DCD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AITryInsertUltra_TypeDefinitionIndex = 22835;

	class AITryInsertUltra : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean ContinuousInsert; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AITRYINSERTULTRA_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AITryInsertUltra* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AITryInsertUltra*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AITRYINSERTULTRA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AITryInsertUltra* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AITryInsertUltra*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AITRYINSERTULTRA_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
