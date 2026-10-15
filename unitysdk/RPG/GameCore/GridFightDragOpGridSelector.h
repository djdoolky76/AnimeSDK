#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightDragOpParamBase.h"
#include "unitysdk/RPG/GameCore/GridFightRegion.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightDragOpGridSelector; }

#define RPG_GAMECORE_GRIDFIGHTDRAGOPGRIDSELECTOR_CTOR_OFFSET UNITYSDK_OFFSET(0x1D72AE90)
#define RPG_GAMECORE_GRIDFIGHTDRAGOPGRIDSELECTOR_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D72AEA0)
#define RPG_GAMECORE_GRIDFIGHTDRAGOPGRIDSELECTOR_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D72AE40)

namespace RPG::GameCore
{
	class GridFightDragOpGridSelector : public ::RPG::GameCore::GridFightDragOpParamBase
	{
	public:
		::System::UInt32 PosIndex; // 0x10
		::System::Boolean FindEmpty; // 0x14
		::System::Byte _padding0[0x3];
		::Il2CppArray<::RPG::GameCore::GridFightRegion>* EmptyGridRegion; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTDRAGOPGRIDSELECTOR_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightDragOpGridSelector* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightDragOpGridSelector*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTDRAGOPGRIDSELECTOR_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightDragOpGridSelector* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightDragOpGridSelector*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTDRAGOPGRIDSELECTOR_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
