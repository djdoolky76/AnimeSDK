#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }

#define RPG_CLIENT_GRIDFIGHTMONSTERHPSETRATIOMODIFIER___C__DISPLAYCLASS19_0_CTOR_OFFSET UNITYSDK_OFFSET(0xDC08710)
#define RPG_CLIENT_GRIDFIGHTMONSTERHPSETRATIOMODIFIER___C__DISPLAYCLASS19_0__STARTEDIT_B__0_OFFSET UNITYSDK_OFFSET(0xDC08720)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightMonsterHPSetRatioModifier___c__DisplayClass19_0_TypeDefinitionIndex = 66622;

	class GridFightMonsterHPSetRatioModifier___c__DisplayClass19_0 : public ::System::Object
	{
	public:
		::System::Action* editEndCallback; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMONSTERHPSETRATIOMODIFIER___C__DISPLAYCLASS19_0_CTOR_OFFSET))(this);
		}

		::System::Void _StartEdit_b__0(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMONSTERHPSETRATIOMODIFIER___C__DISPLAYCLASS19_0__STARTEDIT_B__0_OFFSET))(this, a1);
		}

	};
}
