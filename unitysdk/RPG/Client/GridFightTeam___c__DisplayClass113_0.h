#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightGridData; }

#define RPG_CLIENT_GRIDFIGHTTEAM___C__DISPLAYCLASS113_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3C8970)
#define RPG_CLIENT_GRIDFIGHTTEAM___C__DISPLAYCLASS113_0___GETGRIDBYUID_B__0_OFFSET UNITYSDK_OFFSET(0x1D3C8980)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTeam___c__DisplayClass113_0_TypeDefinitionIndex = 66863;

	class GridFightTeam___c__DisplayClass113_0 : public ::System::Object
	{
	public:
		::System::UInt32 uid; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM___C__DISPLAYCLASS113_0_CTOR_OFFSET))(this);
		}

		::System::Boolean __GetGridByUID_b__0(::RPG::Client::GridFightGridData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightGridData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM___C__DISPLAYCLASS113_0___GETGRIDBYUID_B__0_OFFSET))(this, a1);
		}

	};
}
