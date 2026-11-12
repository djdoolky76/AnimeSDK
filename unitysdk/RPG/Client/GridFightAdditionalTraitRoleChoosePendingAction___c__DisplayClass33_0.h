#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightRole; }

#define RPG_CLIENT_GRIDFIGHTADDITIONALTRAITROLECHOOSEPENDINGACTION___C__DISPLAYCLASS33_0_CTOR_OFFSET UNITYSDK_OFFSET(0xDA54A40)
#define RPG_CLIENT_GRIDFIGHTADDITIONALTRAITROLECHOOSEPENDINGACTION___C__DISPLAYCLASS33_0__SELECTROLE_B__0_OFFSET UNITYSDK_OFFSET(0xDA55570)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightAdditionalTraitRoleChoosePendingAction___c__DisplayClass33_0_TypeDefinitionIndex = 66697;

	class GridFightAdditionalTraitRoleChoosePendingAction___c__DisplayClass33_0 : public ::System::Object
	{
	public:
		::System::UInt32 roleID; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTADDITIONALTRAITROLECHOOSEPENDINGACTION___C__DISPLAYCLASS33_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _SelectRole_b__0(::RPG::Client::GridFightRole* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTADDITIONALTRAITROLECHOOSEPENDINGACTION___C__DISPLAYCLASS33_0__SELECTROLE_B__0_OFFSET))(this, a1);
		}

	};
}
