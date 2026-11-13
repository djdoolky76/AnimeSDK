#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightGridMember; }

#define RPG_CLIENT_GRIDFIGHTBATTLEGAMECONTEXT___C__DISPLAYCLASS28_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1C733DF0)
#define RPG_CLIENT_GRIDFIGHTBATTLEGAMECONTEXT___C__DISPLAYCLASS28_0__GETMEMBERBYPOS_B__0_OFFSET UNITYSDK_OFFSET(0x1C737F20)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightBattleGameContext___c__DisplayClass28_0_TypeDefinitionIndex = 65849;

	class GridFightBattleGameContext___c__DisplayClass28_0 : public ::System::Object
	{
	public:
		::System::UInt32 pos; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLEGAMECONTEXT___C__DISPLAYCLASS28_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _GetMemberByPos_b__0(::RPG::Client::GridFightGridMember* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightGridMember*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLEGAMECONTEXT___C__DISPLAYCLASS28_0__GETMEMBERBYPOS_B__0_OFFSET))(this, a1);
		}

	};
}
