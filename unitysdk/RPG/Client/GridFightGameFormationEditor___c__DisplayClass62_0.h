#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightFormationRole; }

#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR___C__DISPLAYCLASS62_0_CTOR_OFFSET UNITYSDK_OFFSET(0xDB12040)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR___C__DISPLAYCLASS62_0__CONTAINSROLEID_B__0_OFFSET UNITYSDK_OFFSET(0xDB18430)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameFormationEditor___c__DisplayClass62_0_TypeDefinitionIndex = 66188;

	class GridFightGameFormationEditor___c__DisplayClass62_0 : public ::System::Object
	{
	public:
		::System::UInt32 roleID; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR___C__DISPLAYCLASS62_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _ContainsRoleID_b__0(::RPG::Client::GridFightFormationRole* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightFormationRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR___C__DISPLAYCLASS62_0__CONTAINSROLEID_B__0_OFFSET))(this, a1);
		}

	};
}
