#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetDynamicValueByRoguePassReplicateCell; }

#define RPG_GAMECORE_SETDYNAMICVALUEBYROGUEPASSREPLICATECELL_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA7C7E0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYROGUEPASSREPLICATECELL_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA7C7F0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYROGUEPASSREPLICATECELL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA7C7B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueByRoguePassReplicateCell_TypeDefinitionIndex = 21786;

	class SetDynamicValueByRoguePassReplicateCell : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYROGUEPASSREPLICATECELL_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueByRoguePassReplicateCell* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueByRoguePassReplicateCell*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYROGUEPASSREPLICATECELL_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueByRoguePassReplicateCell* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueByRoguePassReplicateCell*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYROGUEPASSREPLICATECELL_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
