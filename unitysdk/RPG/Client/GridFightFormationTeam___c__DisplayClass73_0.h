#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightFormationRole; }

#define RPG_CLIENT_GRIDFIGHTFORMATIONTEAM___C__DISPLAYCLASS73_0_CTOR_OFFSET UNITYSDK_OFFSET(0xDAFF270)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightFormationTeam___c__DisplayClass73_0_TypeDefinitionIndex = 66212;

	class GridFightFormationTeam___c__DisplayClass73_0 : public ::System::Object
	{
	public:
		::RPG::Client::GridFightFormationRole* role; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORMATIONTEAM___C__DISPLAYCLASS73_0_CTOR_OFFSET))(this);
		}

	};
}
