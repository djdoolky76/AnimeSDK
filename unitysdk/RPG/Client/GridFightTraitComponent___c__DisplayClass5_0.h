#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightTrait; }

#define RPG_CLIENT_GRIDFIGHTTRAITCOMPONENT___C__DISPLAYCLASS5_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3ED990)
#define RPG_CLIENT_GRIDFIGHTTRAITCOMPONENT___C__DISPLAYCLASS5_0__CONTAINSTRAITID_B__0_OFFSET UNITYSDK_OFFSET(0x1D3F2920)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTraitComponent___c__DisplayClass5_0_TypeDefinitionIndex = 67340;

	class GridFightTraitComponent___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::System::UInt32 traitID; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOMPONENT___C__DISPLAYCLASS5_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _ContainsTraitID_b__0(::RPG::Client::GridFightTrait* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightTrait*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOMPONENT___C__DISPLAYCLASS5_0__CONTAINSTRAITID_B__0_OFFSET))(this, a1);
		}

	};
}
