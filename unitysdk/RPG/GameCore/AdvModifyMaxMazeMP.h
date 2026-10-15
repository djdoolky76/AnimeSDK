#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PropertyModifyFunction.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvModifyMaxMazeMP; }
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_ADVMODIFYMAXMAZEMP_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3A3990)
#define RPG_GAMECORE_ADVMODIFYMAXMAZEMP_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D3A3A00)
#define RPG_GAMECORE_ADVMODIFYMAXMAZEMP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3A3900)

namespace RPG::GameCore
{
	class AdvModifyMaxMazeMP : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::PropertyModifyFunction ModifyFunction; // 0x18
		::System::Byte _padding0[0x4];
		::RPG::GameCore::DynamicFloat* ModifyValue; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVMODIFYMAXMAZEMP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvModifyMaxMazeMP* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvModifyMaxMazeMP*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVMODIFYMAXMAZEMP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvModifyMaxMazeMP* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvModifyMaxMazeMP*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVMODIFYMAXMAZEMP_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
