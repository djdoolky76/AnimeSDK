#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/GridFightRoleRemarkParamSource.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightRoleRemarkConfigRow; }

#define RPG_GAMECORE_GRIDFIGHTROLEREMARKCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA5D5F0)
#define RPG_GAMECORE_GRIDFIGHTROLEREMARKCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EA5D3D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightRoleRemarkConfigRow_TypeDefinitionIndex = 13639;

	class GridFightRoleRemarkConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* ParamList; // 0x10
		::RPG::GameCore::GridFightRoleRemarkParamSource SkillType; // 0x18
		::System::UInt32 RoleID; // 0x1C
		::RPG::Client::TextID RoleRemark; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTROLEREMARKCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightRoleRemarkConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightRoleRemarkConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTROLEREMARKCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
