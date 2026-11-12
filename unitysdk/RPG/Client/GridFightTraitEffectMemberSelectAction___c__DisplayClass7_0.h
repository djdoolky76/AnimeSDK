#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightGridMember; }

#define RPG_CLIENT_GRIDFIGHTTRAITEFFECTMEMBERSELECTACTION___C__DISPLAYCLASS7_0_CTOR_OFFSET UNITYSDK_OFFSET(0xDCDD9C0)
#define RPG_CLIENT_GRIDFIGHTTRAITEFFECTMEMBERSELECTACTION___C__DISPLAYCLASS7_0__GETSELECTEDROLEUIDS_B__1_OFFSET UNITYSDK_OFFSET(0xDCDD9F0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTraitEffectMemberSelectAction___c__DisplayClass7_0_TypeDefinitionIndex = 66721;

	class GridFightTraitEffectMemberSelectAction___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::System::UInt32 uid; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITEFFECTMEMBERSELECTACTION___C__DISPLAYCLASS7_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _GetSelectedRoleUIDs_b__1(::RPG::Client::GridFightGridMember* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightGridMember*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITEFFECTMEMBERSELECTACTION___C__DISPLAYCLASS7_0__GETSELECTEDROLEUIDS_B__1_OFFSET))(this, a1);
		}

	};
}
