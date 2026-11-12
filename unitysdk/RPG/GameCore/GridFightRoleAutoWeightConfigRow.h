#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightRoleAutoWeightConfigRow; }

#define RPG_GAMECORE_GRIDFIGHTROLEAUTOWEIGHTCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1E94CDE0)
#define RPG_GAMECORE_GRIDFIGHTROLEAUTOWEIGHTCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E94CC00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightRoleAutoWeightConfigRow_TypeDefinitionIndex = 13631;

	class GridFightRoleAutoWeightConfigRow : public ::System::Object
	{
	public:
		::RPG::GameCore::FixPoint OverWriteDamageCarry; // 0x10
		::System::UInt32 RoleID; // 0x18
		::System::Boolean IsDamageEnhancedByEquip; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTROLEAUTOWEIGHTCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightRoleAutoWeightConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightRoleAutoWeightConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTROLEAUTOWEIGHTCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
