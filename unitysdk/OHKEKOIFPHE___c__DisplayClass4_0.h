#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FOPJIACKHCC;
class OHKEKOIFPHE;
namespace RPG::GameCore { class GameEntity; }

#define OHKEKOIFPHE___C__DISPLAYCLASS4_0_CTOR_OFFSET UNITYSDK_OFFSET(0xC729B60)
#define OHKEKOIFPHE___C__DISPLAYCLASS4_0__SETFOLLOW_B__0_OFFSET UNITYSDK_OFFSET(0xC72B7F0)

inline static constexpr unsigned int OHKEKOIFPHE___c__DisplayClass4_0_TypeDefinitionIndex = 73519;

	class OHKEKOIFPHE___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* entity; // 0x10
		::FOPJIACKHCC* follow; // 0x18
		::OHKEKOIFPHE* __4__this; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHKEKOIFPHE___C__DISPLAYCLASS4_0_CTOR_OFFSET))(this);
		}

		::System::Void _SetFollow_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHKEKOIFPHE___C__DISPLAYCLASS4_0__SETFOLLOW_B__0_OFFSET))(this);
		}

	};
