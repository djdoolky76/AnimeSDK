#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightTrait; }

#define RPG_CLIENT_GRIDFIGHTTRAITCOMPONENT___C__DISPLAYCLASS4_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3ED980)
#define RPG_CLIENT_GRIDFIGHTTRAITCOMPONENT___C__DISPLAYCLASS4_0___APPLYTRAITIDS_B__0_OFFSET UNITYSDK_OFFSET(0x1D3F28F0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTraitComponent___c__DisplayClass4_0_TypeDefinitionIndex = 67339;

	class GridFightTraitComponent___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::System::UInt32 traitID; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOMPONENT___C__DISPLAYCLASS4_0_CTOR_OFFSET))(this);
		}

		::System::Boolean __ApplyTraitIDs_b__0(::RPG::Client::GridFightTrait* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightTrait*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOMPONENT___C__DISPLAYCLASS4_0___APPLYTRAITIDS_B__0_OFFSET))(this, a1);
		}

	};
}
