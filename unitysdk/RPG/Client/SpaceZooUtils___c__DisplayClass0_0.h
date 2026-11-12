#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class LuaUIController; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_SPACEZOOUTILS___C__DISPLAYCLASS0_0_CTOR_OFFSET UNITYSDK_OFFSET(0xEB65BA0)
#define RPG_CLIENT_SPACEZOOUTILS___C__DISPLAYCLASS0_0__SHOWSPACEZOOMAINPAGE_B__0_OFFSET UNITYSDK_OFFSET(0xEB69CC0)

namespace RPG::Client
{
	inline static constexpr unsigned int SpaceZooUtils___c__DisplayClass0_0_TypeDefinitionIndex = 69923;

	class SpaceZooUtils___c__DisplayClass0_0 : public ::System::Object
	{
	public:
		::System::Action_1<::RPG::Client::LuaUIController*>* callback; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOUTILS___C__DISPLAYCLASS0_0_CTOR_OFFSET))(this);
		}

		::System::Void _ShowSpaceZooMainPage_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOUTILS___C__DISPLAYCLASS0_0__SHOWSPACEZOOMAINPAGE_B__0_OFFSET))(this);
		}

	};
}
