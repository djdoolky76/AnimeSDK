#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PropStartPuzzle; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_PROPSTARTPUZZLE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D958300)
#define RPG_GAMECORE_PROPSTARTPUZZLE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D958330)
#define RPG_GAMECORE_PROPSTARTPUZZLE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9582B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropStartPuzzle_TypeDefinitionIndex = 21984;

	class PropStartPuzzle : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnStart; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPSTARTPUZZLE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PropStartPuzzle* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PropStartPuzzle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPSTARTPUZZLE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PropStartPuzzle* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PropStartPuzzle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPSTARTPUZZLE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
