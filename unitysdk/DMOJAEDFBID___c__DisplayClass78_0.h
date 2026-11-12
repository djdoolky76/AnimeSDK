#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GEDMHFPPBHN;
namespace RPG::GameCore { class GameEntity; }

#define DMOJAEDFBID___C__DISPLAYCLASS78_0_CTOR_OFFSET UNITYSDK_OFFSET(0x10C3B640)
#define DMOJAEDFBID___C__DISPLAYCLASS78_0___FINDITEM_B__0_OFFSET UNITYSDK_OFFSET(0x10C3B650)

inline static constexpr unsigned int DMOJAEDFBID___c__DisplayClass78_0_TypeDefinitionIndex = 73300;

	class DMOJAEDFBID___c__DisplayClass78_0 : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* entity; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMOJAEDFBID___C__DISPLAYCLASS78_0_CTOR_OFFSET))(this);
		}

		::System::Boolean __FindItem_b__0(::GEDMHFPPBHN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GEDMHFPPBHN*))((::PBYTE)hIl2Cpp + DMOJAEDFBID___C__DISPLAYCLASS78_0___FINDITEM_B__0_OFFSET))(this, a1);
		}

	};
