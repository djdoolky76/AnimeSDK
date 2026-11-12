#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightRole; }

#define RPG_CLIENT_GRIDFIGHTHANDBOOKROLE___C__DISPLAYCLASS14_0_CTOR_OFFSET UNITYSDK_OFFSET(0xDBD6250)
#define RPG_CLIENT_GRIDFIGHTHANDBOOKROLE___C__DISPLAYCLASS14_0__PROMOTETODEFAULT_B__0_OFFSET UNITYSDK_OFFSET(0xDBD72A0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightHandbookRole___c__DisplayClass14_0_TypeDefinitionIndex = 66460;

	class GridFightHandbookRole___c__DisplayClass14_0 : public ::System::Object
	{
	public:
		::RPG::Client::GridFightRole* role; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTHANDBOOKROLE___C__DISPLAYCLASS14_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _PromoteToDefault_b__0(::RPG::Client::GridFightRole* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTHANDBOOKROLE___C__DISPLAYCLASS14_0__PROMOTETODEFAULT_B__0_OFFSET))(this, a1);
		}

	};
}
