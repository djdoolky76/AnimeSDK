#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GridFightRoleConfigRow; }

#define RPG_CLIENT_GRIDFIGHTMODULE___C__DISPLAYCLASS260_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1CC4A630)
#define RPG_CLIENT_GRIDFIGHTMODULE___C__DISPLAYCLASS260_0__GETROLECONFIGBYAVATARID_B__0_OFFSET UNITYSDK_OFFSET(0x1CC55CE0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightModule___c__DisplayClass260_0_TypeDefinitionIndex = 66425;

	class GridFightModule___c__DisplayClass260_0 : public ::System::Object
	{
	public:
		::System::UInt32 avatarID; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C__DISPLAYCLASS260_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _GetRoleConfigByAvatarID_b__0(::RPG::GameCore::GridFightRoleConfigRow* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GridFightRoleConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C__DISPLAYCLASS260_0__GETROLECONFIGBYAVATARID_B__0_OFFSET))(this, a1);
		}

	};
}
