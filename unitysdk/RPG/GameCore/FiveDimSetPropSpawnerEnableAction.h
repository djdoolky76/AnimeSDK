#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimSetPropSpawnerEnableAction; }

#define RPG_GAMECORE_FIVEDIMSETPROPSPAWNERENABLEACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6ACEE0)
#define RPG_GAMECORE_FIVEDIMSETPROPSPAWNERENABLEACTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6ACEF0)
#define RPG_GAMECORE_FIVEDIMSETPROPSPAWNERENABLEACTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6ACEB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimSetPropSpawnerEnableAction_TypeDefinitionIndex = 18672;

	class FiveDimSetPropSpawnerEnableAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Boolean Enabled; // 0x10
		::System::Boolean DontDestroyMinion; // 0x11
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETPROPSPAWNERENABLEACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimSetPropSpawnerEnableAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimSetPropSpawnerEnableAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETPROPSPAWNERENABLEACTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimSetPropSpawnerEnableAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimSetPropSpawnerEnableAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETPROPSPAWNERENABLEACTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
