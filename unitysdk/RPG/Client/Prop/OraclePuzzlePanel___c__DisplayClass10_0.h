#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::Prop { class OraclePuzzlePanel; }
namespace System { class Action; }

#define RPG_CLIENT_PROP_ORACLEPUZZLEPANEL___C__DISPLAYCLASS10_0_CTOR_OFFSET UNITYSDK_OFFSET(0x17200EC0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEPANEL___C__DISPLAYCLASS10_0__STARTFADEOUTPERFORM_B__0_OFFSET UNITYSDK_OFFSET(0x17202010)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int OraclePuzzlePanel___c__DisplayClass10_0_TypeDefinitionIndex = 81473;

	class OraclePuzzlePanel___c__DisplayClass10_0 : public ::System::Object
	{
	public:
		::RPG::Client::Prop::OraclePuzzlePanel* __4__this; // 0x10
		::System::Action* OnFinish; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEPANEL___C__DISPLAYCLASS10_0_CTOR_OFFSET))(this);
		}

		::System::Void _StartFadeoutPerform_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEPANEL___C__DISPLAYCLASS10_0__STARTFADEOUTPERFORM_B__0_OFFSET))(this);
		}

	};
}
