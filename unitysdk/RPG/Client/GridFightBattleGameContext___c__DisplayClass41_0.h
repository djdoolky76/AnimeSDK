#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightRole; }

#define RPG_CLIENT_GRIDFIGHTBATTLEGAMECONTEXT___C__DISPLAYCLASS41_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1C734240)
#define RPG_CLIENT_GRIDFIGHTBATTLEGAMECONTEXT___C__DISPLAYCLASS41_0__GETONBOARDROLEBYID_B__0_OFFSET UNITYSDK_OFFSET(0x1C738070)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightBattleGameContext___c__DisplayClass41_0_TypeDefinitionIndex = 65852;

	class GridFightBattleGameContext___c__DisplayClass41_0 : public ::System::Object
	{
	public:
		::System::UInt32 id; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLEGAMECONTEXT___C__DISPLAYCLASS41_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _GetOnBoardRoleByID_b__0(::RPG::Client::GridFightRole* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLEGAMECONTEXT___C__DISPLAYCLASS41_0__GETONBOARDROLEBYID_B__0_OFFSET))(this, a1);
		}

	};
}
