#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MDEAJLBINBD;
namespace RPG::GameCore { class GameEntity; }

#define MDEAJLBINBD___C__DISPLAYCLASS8_0_CTOR_OFFSET UNITYSDK_OFFSET(0x183D8AE0)
#define MDEAJLBINBD___C__DISPLAYCLASS8_0___SETBOX_B__0_OFFSET UNITYSDK_OFFSET(0x183D8E50)

inline static constexpr unsigned int MDEAJLBINBD___c__DisplayClass8_0_TypeDefinitionIndex = 61496;

	class MDEAJLBINBD___c__DisplayClass8_0 : public ::System::Object
	{
	public:
		::MDEAJLBINBD* __4__this; // 0x10
		::RPG::GameCore::GameEntity* boxEntity; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDEAJLBINBD___C__DISPLAYCLASS8_0_CTOR_OFFSET))(this);
		}

		::System::Void __SetBox_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDEAJLBINBD___C__DISPLAYCLASS8_0___SETBOX_B__0_OFFSET))(this);
		}

	};
