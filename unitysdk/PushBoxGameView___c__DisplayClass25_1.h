#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class PushBoxTileView;
namespace System { class Action; }

#define PUSHBOXGAMEVIEW___C__DISPLAYCLASS25_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2C9C50)
#define PUSHBOXGAMEVIEW___C__DISPLAYCLASS25_1__PLAYRESETANIM_B__2_OFFSET UNITYSDK_OFFSET(0x1C2C9C60)
#define PUSHBOXGAMEVIEW___C__DISPLAYCLASS25_1__PLAYRESETANIM_B__3_OFFSET UNITYSDK_OFFSET(0x1C2C9D50)

inline static constexpr unsigned int PushBoxGameView___c__DisplayClass25_1_TypeDefinitionIndex = 61724;

template <typename T>
class PushBoxGameView___c__DisplayClass25_1 : public ::System::Object
{
public:
	::System::Object* CS___8__locals1; // 0x10
	::System::Action* __9__3; // 0x18
	::PushBoxTileView* tile; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PUSHBOXGAMEVIEW___C__DISPLAYCLASS25_1__CTOR_OFFSET))(this);
	}

	::System::Void _PlayResetAnim_b__2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PUSHBOXGAMEVIEW___C__DISPLAYCLASS25_1__PLAYRESETANIM_B__2_OFFSET))(this);
	}

	::System::Void _PlayResetAnim_b__3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PUSHBOXGAMEVIEW___C__DISPLAYCLASS25_1__PLAYRESETANIM_B__3_OFFSET))(this);
	}
};
