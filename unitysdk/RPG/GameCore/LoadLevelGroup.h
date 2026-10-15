#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LoadLevelGroup; }

#define RPG_GAMECORE_LOADLEVELGROUP_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7BC6C0)
#define RPG_GAMECORE_LOADLEVELGROUP_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7BC6D0)
#define RPG_GAMECORE_LOADLEVELGROUP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7BC690)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LoadLevelGroup_TypeDefinitionIndex = 22071;

	class LoadLevelGroup : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::System::UInt32>* GroupIDList; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOADLEVELGROUP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LoadLevelGroup* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LoadLevelGroup*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOADLEVELGROUP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::LoadLevelGroup* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LoadLevelGroup*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOADLEVELGROUP_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
