#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class WaitStartMarbleGame; }

#define RPG_GAMECORE_WAITSTARTMARBLEGAME_CTOR_OFFSET UNITYSDK_OFFSET(0x1DCA2450)
#define RPG_GAMECORE_WAITSTARTMARBLEGAME_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DCA2460)
#define RPG_GAMECORE_WAITSTARTMARBLEGAME_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DCA2420)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitStartMarbleGame_TypeDefinitionIndex = 22041;

	class WaitStartMarbleGame : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnStart; // 0x20
		::RPG::MVector3 LocalPosition; // 0x28
		::RPG::MVector3 localRotation; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITSTARTMARBLEGAME_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitStartMarbleGame* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitStartMarbleGame*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITSTARTMARBLEGAME_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitStartMarbleGame* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitStartMarbleGame*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITSTARTMARBLEGAME_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
