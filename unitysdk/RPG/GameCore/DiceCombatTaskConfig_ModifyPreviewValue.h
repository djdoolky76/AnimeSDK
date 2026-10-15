#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatTaskConfig.h"
#include "unitysdk/RPG/GameCore/DiceCombatValueOperation.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DiceCombatTaskConfig_ModifyPreviewValue; }
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_DICECOMBATTASKCONFIG_MODIFYPREVIEWVALUE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D612E00)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_MODIFYPREVIEWVALUE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D612E10)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_MODIFYPREVIEWVALUE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D612DB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatTaskConfig_ModifyPreviewValue_TypeDefinitionIndex = 16158;

	class DiceCombatTaskConfig_ModifyPreviewValue : public ::RPG::GameCore::DiceCombatTaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* Value; // 0x10
		::RPG::GameCore::DiceCombatValueOperation Operation; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_MODIFYPREVIEWVALUE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DiceCombatTaskConfig_ModifyPreviewValue* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DiceCombatTaskConfig_ModifyPreviewValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_MODIFYPREVIEWVALUE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::DiceCombatTaskConfig_ModifyPreviewValue* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DiceCombatTaskConfig_ModifyPreviewValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_MODIFYPREVIEWVALUE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
