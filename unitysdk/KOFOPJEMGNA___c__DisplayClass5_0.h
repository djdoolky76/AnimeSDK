#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KOFOPJEMGNA;
namespace RPG::GameCore { class LevelGraph; }

#define KOFOPJEMGNA___C__DISPLAYCLASS5_0_CTOR_OFFSET UNITYSDK_OFFSET(0x190FE2C0)
#define KOFOPJEMGNA___C__DISPLAYCLASS5_0__TRYSTARTOWNINTERACTION_B__0_OFFSET UNITYSDK_OFFSET(0x190FF290)

inline static constexpr unsigned int KOFOPJEMGNA___c__DisplayClass5_0_TypeDefinitionIndex = 54705;

	class KOFOPJEMGNA___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::RPG::GameCore::LevelGraph* graph; // 0x10
		::KOFOPJEMGNA* __4__this; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOFOPJEMGNA___C__DISPLAYCLASS5_0_CTOR_OFFSET))(this);
		}

		::System::Void _TryStartOwnInteraction_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOFOPJEMGNA___C__DISPLAYCLASS5_0__TRYSTARTOWNINTERACTION_B__0_OFFSET))(this);
		}

	};
