#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightGameFormationEditor; }
namespace RPG::Client { class GridFightRoleConfig; }

#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR___C__DISPLAYCLASS73_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1D686000)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR___C__DISPLAYCLASS73_0__GETFIRSTEMPTYINDEX_B__0_OFFSET UNITYSDK_OFFSET(0x1D68BBA0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameFormationEditor___c__DisplayClass73_0_TypeDefinitionIndex = 66190;

	class GridFightGameFormationEditor___c__DisplayClass73_0 : public ::System::Object
	{
	public:
		::RPG::Client::GridFightGameFormationEditor* __4__this; // 0x10
		::RPG::Client::GridFightRoleConfig* config; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR___C__DISPLAYCLASS73_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _GetFirstEmptyIndex_b__0(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR___C__DISPLAYCLASS73_0__GETFIRSTEMPTYINDEX_B__0_OFFSET))(this, a1);
		}

	};
}
