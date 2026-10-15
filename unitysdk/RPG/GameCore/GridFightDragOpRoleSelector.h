#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightDragOpParamBase.h"
#include "unitysdk/RPG/GameCore/GridFightRegion.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightDragOpRoleSelector; }

#define RPG_GAMECORE_GRIDFIGHTDRAGOPROLESELECTOR_CTOR_OFFSET UNITYSDK_OFFSET(0x1D72B390)
#define RPG_GAMECORE_GRIDFIGHTDRAGOPROLESELECTOR_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D72B3A0)
#define RPG_GAMECORE_GRIDFIGHTDRAGOPROLESELECTOR_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D72B5E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightDragOpRoleSelector_TypeDefinitionIndex = 19957;

	class GridFightDragOpRoleSelector : public ::RPG::GameCore::GridFightDragOpParamBase
	{
	public:
		::System::UInt32 RoleID; // 0x10
		::System::Byte _padding0[0x4];
		::Il2CppArray<::RPG::GameCore::GridFightRegion>* GridRegion; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTDRAGOPROLESELECTOR_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightDragOpRoleSelector* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightDragOpRoleSelector*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTDRAGOPROLESELECTOR_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightDragOpRoleSelector* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightDragOpRoleSelector*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTDRAGOPROLESELECTOR_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
