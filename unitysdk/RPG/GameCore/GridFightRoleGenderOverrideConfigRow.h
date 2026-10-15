#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightRoleGenderOverrideConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_GRIDFIGHTROLEGENDEROVERRIDECONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D710290)
#define RPG_GAMECORE_GRIDFIGHTROLEGENDEROVERRIDECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D7100E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightRoleGenderOverrideConfigRow_TypeDefinitionIndex = 13558;

	class GridFightRoleGenderOverrideConfigRow : public ::System::Object
	{
	public:
		::System::String* JsonOverridePath; // 0x10
		::System::UInt32 RoleID; // 0x18
		::System::UInt32 Star; // 0x1C
		::System::UInt32 AvatarID; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTROLEGENDEROVERRIDECONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightRoleGenderOverrideConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightRoleGenderOverrideConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTROLEGENDEROVERRIDECONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
