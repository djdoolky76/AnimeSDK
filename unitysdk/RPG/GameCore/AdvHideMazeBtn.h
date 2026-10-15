#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdventureSkillType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvHideMazeBtn; }

#define RPG_GAMECORE_ADVHIDEMAZEBTN_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3A1940)
#define RPG_GAMECORE_ADVHIDEMAZEBTN_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D3A1950)
#define RPG_GAMECORE_ADVHIDEMAZEBTN_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3A1900)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvHideMazeBtn_TypeDefinitionIndex = 23842;

	class AdvHideMazeBtn : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::AdventureSkillType SkillType; // 0x18
		::System::Boolean IsHide; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVHIDEMAZEBTN_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvHideMazeBtn* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvHideMazeBtn*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVHIDEMAZEBTN_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvHideMazeBtn* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvHideMazeBtn*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVHIDEMAZEBTN_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
