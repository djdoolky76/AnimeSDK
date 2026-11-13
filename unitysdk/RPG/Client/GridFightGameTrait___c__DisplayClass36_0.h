#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightRole; }

#define RPG_CLIENT_GRIDFIGHTGAMETRAIT___C__DISPLAYCLASS36_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1CD6CD80)
#define RPG_CLIENT_GRIDFIGHTGAMETRAIT___C__DISPLAYCLASS36_0__GETROLESBYTRAIT_B__0_OFFSET UNITYSDK_OFFSET(0x1CD6DD90)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameTrait___c__DisplayClass36_0_TypeDefinitionIndex = 67305;

	class GridFightGameTrait___c__DisplayClass36_0 : public ::System::Object
	{
	public:
		::RPG::Client::GridFightRole* role; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETRAIT___C__DISPLAYCLASS36_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _GetRolesByTrait_b__0(::RPG::Client::GridFightRole* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETRAIT___C__DISPLAYCLASS36_0__GETROLESBYTRAIT_B__0_OFFSET))(this, a1);
		}

	};
}
