#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightGridMember; }

#define RPG_CLIENT_GRIDFIGHTTRAITEFFECTMEMBERSELECTACTION___C__DISPLAYCLASS3_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3F9C70)
#define RPG_CLIENT_GRIDFIGHTTRAITEFFECTMEMBERSELECTACTION___C__DISPLAYCLASS3_0___UPDATESELECTEDROLES_B__0_OFFSET UNITYSDK_OFFSET(0x1D3FAA80)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTraitEffectMemberSelectAction___c__DisplayClass3_0_TypeDefinitionIndex = 66720;

	class GridFightTraitEffectMemberSelectAction___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::System::UInt32 memberUID; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITEFFECTMEMBERSELECTACTION___C__DISPLAYCLASS3_0_CTOR_OFFSET))(this);
		}

		::System::Boolean __UpdateSelectedRoles_b__0(::RPG::Client::GridFightGridMember* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightGridMember*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITEFFECTMEMBERSELECTACTION___C__DISPLAYCLASS3_0___UPDATESELECTEDROLES_B__0_OFFSET))(this, a1);
		}

	};
}
