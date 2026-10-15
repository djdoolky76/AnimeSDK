#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AirlockEvent.h"
#include "unitysdk/System/Object.h"
class CIGJBHFHHAD;

#define CIGJBHFHHAD___C__DISPLAYCLASS2_0_CTOR_OFFSET UNITYSDK_OFFSET(0xCF717A0)
#define CIGJBHFHHAD___C__DISPLAYCLASS2_0___ONGROUPLOADED_B__0_OFFSET UNITYSDK_OFFSET(0xCF71D00)

	class CIGJBHFHHAD___c__DisplayClass2_0 : public ::System::Object
	{
	public:
		::CIGJBHFHHAD* __4__this; // 0x10
		::System::Int32 regionAIndex; // 0x18
		::System::Int32 regionBIndex; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIGJBHFHHAD___C__DISPLAYCLASS2_0_CTOR_OFFSET))(this);
		}

		::System::Void __OnGroupLoaded_b__0(::System::Int32 a1, ::RPG::GameCore::AirlockEvent a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::GameCore::AirlockEvent))((::PBYTE)hIl2Cpp + CIGJBHFHHAD___C__DISPLAYCLASS2_0___ONGROUPLOADED_B__0_OFFSET))(this, a1, a2);
		}

	};
