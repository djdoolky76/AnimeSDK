#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightDragOpGridSelector; }
namespace RPG::GameCore { class GridFightDragOpRoleSelector; }
namespace RPG::GameCore { class GridFightWaitDragRole; }

#define RPG_GAMECORE_GRIDFIGHTWAITDRAGROLE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D749B10)
#define RPG_GAMECORE_GRIDFIGHTWAITDRAGROLE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D749B20)
#define RPG_GAMECORE_GRIDFIGHTWAITDRAGROLE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D749AE0)

namespace RPG::GameCore
{
	class GridFightWaitDragRole : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::GridFightDragOpRoleSelector* Role; // 0x18
		::RPG::GameCore::GridFightDragOpRoleSelector* TargetRole; // 0x20
		::RPG::GameCore::GridFightDragOpGridSelector* TargetGrid; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTWAITDRAGROLE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightWaitDragRole* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightWaitDragRole*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTWAITDRAGROLE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightWaitDragRole* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightWaitDragRole*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTWAITDRAGROLE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
