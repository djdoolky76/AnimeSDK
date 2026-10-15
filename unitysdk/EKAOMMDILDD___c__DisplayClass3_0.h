#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EKAOMMDILDD;
class FOPJIACKHCC;
namespace RPG::GameCore { class GameEntity; }

#define EKAOMMDILDD___C__DISPLAYCLASS3_0_CTOR_OFFSET UNITYSDK_OFFSET(0x154EEC70)
#define EKAOMMDILDD___C__DISPLAYCLASS3_0__SETFOLLOW_B__0_OFFSET UNITYSDK_OFFSET(0x154EF970)

inline static constexpr unsigned int EKAOMMDILDD___c__DisplayClass3_0_TypeDefinitionIndex = 71539;

	class EKAOMMDILDD___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::EKAOMMDILDD* __4__this; // 0x10
		::FOPJIACKHCC* follow; // 0x18
		::RPG::GameCore::GameEntity* entity; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKAOMMDILDD___C__DISPLAYCLASS3_0_CTOR_OFFSET))(this);
		}

		::System::Void _SetFollow_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKAOMMDILDD___C__DISPLAYCLASS3_0__SETFOLLOW_B__0_OFFSET))(this);
		}

	};
