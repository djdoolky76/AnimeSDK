#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightRole; }

#define RPG_CLIENT_GRIDFIGHTTEAM___C__DISPLAYCLASS74_0_CTOR_OFFSET UNITYSDK_OFFSET(0xDCA5D40)
#define RPG_CLIENT_GRIDFIGHTTEAM___C__DISPLAYCLASS74_0__CONTAINSUNIQUEROLEONBOARD_B__0_OFFSET UNITYSDK_OFFSET(0xDCAC050)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTeam___c__DisplayClass74_0_TypeDefinitionIndex = 66871;

	class GridFightTeam___c__DisplayClass74_0 : public ::System::Object
	{
	public:
		::System::UInt32 uniqueID; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM___C__DISPLAYCLASS74_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _ContainsUniqueRoleOnBoard_b__0(::RPG::Client::GridFightRole* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM___C__DISPLAYCLASS74_0__CONTAINSUNIQUEROLEONBOARD_B__0_OFFSET))(this, a1);
		}

	};
}
