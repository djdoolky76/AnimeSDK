#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OFABBAJJIBL;
class PushBoxGameView;
namespace System { class String; }

#define PUSHBOXGAMEVIEW___C__DISPLAYCLASS25_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1374C820)
#define PUSHBOXGAMEVIEW___C__DISPLAYCLASS25_0__PLAYRESETANIM_B__0_OFFSET UNITYSDK_OFFSET(0x1374C830)
#define PUSHBOXGAMEVIEW___C__DISPLAYCLASS25_0__PLAYRESETANIM_G____GETDURATION_1_OFFSET UNITYSDK_OFFSET(0x1374C860)

inline static constexpr unsigned int PushBoxGameView___c__DisplayClass25_0_TypeDefinitionIndex = 61723;

class PushBoxGameView___c__DisplayClass25_0 : public ::System::Object
{
public:
	::PushBoxGameView* __4__this; // 0x10
	::System::String* textureKey; // 0x18
	::OFABBAJJIBL* eventModel; // 0x20
	::System::Boolean beginFromMiddle; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PUSHBOXGAMEVIEW___C__DISPLAYCLASS25_0__CTOR_OFFSET))(this);
	}

	::System::Void _PlayResetAnim_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PUSHBOXGAMEVIEW___C__DISPLAYCLASS25_0__PLAYRESETANIM_B__0_OFFSET))(this);
	}

	::System::Single _PlayResetAnim_g____getDuration_1(::System::Int32 x, ::System::Int32 y)
	{
		return ((::System::Single(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + PUSHBOXGAMEVIEW___C__DISPLAYCLASS25_0__PLAYRESETANIM_G____GETDURATION_1_OFFSET))(this, x, y);
	}
};
