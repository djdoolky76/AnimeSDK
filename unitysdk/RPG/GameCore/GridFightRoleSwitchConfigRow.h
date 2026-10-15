#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RoleSwitchCondType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightRoleSwitchConfigRow; }

#define RPG_GAMECORE_GRIDFIGHTROLESWITCHCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D712550)
#define RPG_GAMECORE_GRIDFIGHTROLESWITCHCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D712380)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightRoleSwitchConfigRow_TypeDefinitionIndex = 13534;

	class GridFightRoleSwitchConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* ParamList; // 0x10
		::RPG::GameCore::RoleSwitchCondType Condition; // 0x18
		::System::UInt32 RoleID; // 0x1C
		::System::UInt32 BaseRoleID; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTROLESWITCHCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightRoleSwitchConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightRoleSwitchConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTROLESWITCHCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
