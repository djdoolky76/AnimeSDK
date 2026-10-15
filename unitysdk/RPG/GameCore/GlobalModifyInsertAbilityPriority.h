#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GlobalModifyInsertAbilityPriority; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_GLOBALMODIFYINSERTABILITYPRIORITY_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6F1610)
#define RPG_GAMECORE_GLOBALMODIFYINSERTABILITYPRIORITY_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6F1620)
#define RPG_GAMECORE_GLOBALMODIFYINSERTABILITYPRIORITY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6F15E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GlobalModifyInsertAbilityPriority_TypeDefinitionIndex = 22667;

	class GlobalModifyInsertAbilityPriority : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* PriorityKeyMapping; // 0x18
		::System::Boolean ResetToDefault; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GLOBALMODIFYINSERTABILITYPRIORITY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GlobalModifyInsertAbilityPriority* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GlobalModifyInsertAbilityPriority*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GLOBALMODIFYINSERTABILITYPRIORITY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GlobalModifyInsertAbilityPriority* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GlobalModifyInsertAbilityPriority*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GLOBALMODIFYINSERTABILITYPRIORITY_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
