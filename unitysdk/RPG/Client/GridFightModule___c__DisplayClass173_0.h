#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightTraitConfig; }

#define RPG_CLIENT_GRIDFIGHTMODULE___C__DISPLAYCLASS173_0_CTOR_OFFSET UNITYSDK_OFFSET(0xDBED630)
#define RPG_CLIENT_GRIDFIGHTMODULE___C__DISPLAYCLASS173_0__GETDIFFNAMESINHANDBOOK_B__0_OFFSET UNITYSDK_OFFSET(0xDC02DE0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightModule___c__DisplayClass173_0_TypeDefinitionIndex = 66420;

	class GridFightModule___c__DisplayClass173_0 : public ::System::Object
	{
	public:
		::RPG::Client::GridFightTraitConfig* trait; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C__DISPLAYCLASS173_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _GetDiffNamesInHandBook_b__0(::RPG::Client::GridFightTraitConfig* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightTraitConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C__DISPLAYCLASS173_0__GETDIFFNAMESINHANDBOOK_B__0_OFFSET))(this, a1);
		}

	};
}
