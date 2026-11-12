#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightStageNode; }

#define RPG_CLIENT_GRIDFIGHTSTAGEROUTE___C__DISPLAYCLASS19_0_CTOR_OFFSET UNITYSDK_OFFSET(0xDC98C20)
#define RPG_CLIENT_GRIDFIGHTSTAGEROUTE___C__DISPLAYCLASS19_0__GETNODE_B__0_OFFSET UNITYSDK_OFFSET(0xDC99160)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightStageRoute___c__DisplayClass19_0_TypeDefinitionIndex = 67000;

	class GridFightStageRoute___c__DisplayClass19_0 : public ::System::Object
	{
	public:
		::System::UInt32 SectionID; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGEROUTE___C__DISPLAYCLASS19_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _GetNode_b__0(::RPG::Client::GridFightStageNode* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightStageNode*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGEROUTE___C__DISPLAYCLASS19_0__GETNODE_B__0_OFFSET))(this, a1);
		}

	};
}
