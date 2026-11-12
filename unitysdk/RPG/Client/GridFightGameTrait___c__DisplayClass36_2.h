#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightRole; }

#define RPG_CLIENT_GRIDFIGHTGAMETRAIT___C__DISPLAYCLASS36_2_CTOR_OFFSET UNITYSDK_OFFSET(0xDB58BE0)
#define RPG_CLIENT_GRIDFIGHTGAMETRAIT___C__DISPLAYCLASS36_2__GETROLESBYTRAIT_B__2_OFFSET UNITYSDK_OFFSET(0xDB59B00)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameTrait___c__DisplayClass36_2_TypeDefinitionIndex = 67307;

	template <typename T1, typename T2>
	class GridFightGameTrait___c__DisplayClass36_2 : public ::System::Object
	{
	public:
		::System::UInt32 roleID; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETRAIT___C__DISPLAYCLASS36_2_CTOR_OFFSET))(this);
		}

		::System::Boolean _GetRolesByTrait_b__2(::RPG::Client::GridFightRole* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETRAIT___C__DISPLAYCLASS36_2__GETROLESBYTRAIT_B__2_OFFSET))(this, a1);
		}

	};
}
