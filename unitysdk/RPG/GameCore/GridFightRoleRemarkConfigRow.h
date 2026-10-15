#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightRoleRemarkConfigRow; }

#define RPG_GAMECORE_GRIDFIGHTROLEREMARKCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D710EF0)
#define RPG_GAMECORE_GRIDFIGHTROLEREMARKCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D710D70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightRoleRemarkConfigRow_TypeDefinitionIndex = 13544;

	class GridFightRoleRemarkConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 RoleID; // 0x10
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID RoleRemark; // 0x18
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
