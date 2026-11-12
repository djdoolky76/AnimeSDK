#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightRole; }

#define RPG_CLIENT_GRIDFIGHTGAMETRAIT___C__DISPLAYCLASS36_3_CTOR_OFFSET UNITYSDK_OFFSET(0xDB58BF0)
#define RPG_CLIENT_GRIDFIGHTGAMETRAIT___C__DISPLAYCLASS36_3__GETROLESBYTRAIT_B__3_OFFSET UNITYSDK_OFFSET(0xDB59B60)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameTrait___c__DisplayClass36_3_TypeDefinitionIndex = 67308;

	template <typename T1, typename T2, typename T3>
	class GridFightGameTrait___c__DisplayClass36_3 : public ::System::Object
	{
	public:
		::System::UInt32 roleID; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETRAIT___C__DISPLAYCLASS36_3_CTOR_OFFSET))(this);
		}

		::System::Boolean _GetRolesByTrait_b__3(::RPG::Client::GridFightRole* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETRAIT___C__DISPLAYCLASS36_3__GETROLESBYTRAIT_B__3_OFFSET))(this, a1);
		}

	};
}
