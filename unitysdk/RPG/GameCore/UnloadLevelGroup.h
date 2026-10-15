#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class UnloadLevelGroup; }

#define RPG_GAMECORE_UNLOADLEVELGROUP_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC4A6D0)
#define RPG_GAMECORE_UNLOADLEVELGROUP_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC4A6E0)
#define RPG_GAMECORE_UNLOADLEVELGROUP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC4A6A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int UnloadLevelGroup_TypeDefinitionIndex = 20428;

	class UnloadLevelGroup : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::System::UInt32>* GroupIDList; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNLOADLEVELGROUP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::UnloadLevelGroup* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::UnloadLevelGroup*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNLOADLEVELGROUP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::UnloadLevelGroup* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::UnloadLevelGroup*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNLOADLEVELGROUP_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
