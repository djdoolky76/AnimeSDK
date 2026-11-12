#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FOPJIACKHCC;
class ILHMIOLLLJI;
namespace RPG::GameCore { class GameEntity; }

#define ILHMIOLLLJI___C__DISPLAYCLASS4_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1748A850)
#define ILHMIOLLLJI___C__DISPLAYCLASS4_0__SETFOLLOW_B__0_OFFSET UNITYSDK_OFFSET(0x1748B050)

inline static constexpr unsigned int ILHMIOLLLJI___c__DisplayClass4_0_TypeDefinitionIndex = 73381;

	class ILHMIOLLLJI___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* entity; // 0x10
		::ILHMIOLLLJI* __4__this; // 0x18
		::FOPJIACKHCC* follow; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILHMIOLLLJI___C__DISPLAYCLASS4_0_CTOR_OFFSET))(this);
		}

		::System::Void _SetFollow_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILHMIOLLLJI___C__DISPLAYCLASS4_0__SETFOLLOW_B__0_OFFSET))(this);
		}

	};
