#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StackWeakResistanceType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ResistanceItem; }
namespace RPG::GameCore { class StackWeakResistance; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_STACKWEAKRESISTANCE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB04B40)
#define RPG_GAMECORE_STACKWEAKRESISTANCE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB04B50)
#define RPG_GAMECORE_STACKWEAKRESISTANCE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB04B10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StackWeakResistance_TypeDefinitionIndex = 23073;

	class StackWeakResistance : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::StackWeakResistanceType StackType; // 0x18
		::System::Byte _padding0[0x4];
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::Il2CppArray<::RPG::GameCore::ResistanceItem*>* StackResistanceList; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STACKWEAKRESISTANCE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::StackWeakResistance* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StackWeakResistance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STACKWEAKRESISTANCE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::StackWeakResistance* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StackWeakResistance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STACKWEAKRESISTANCE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
