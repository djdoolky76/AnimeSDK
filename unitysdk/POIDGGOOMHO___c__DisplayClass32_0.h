#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class POIDGGOOMHO;
namespace RPG::GameCore { class GameEntity; }

#define POIDGGOOMHO___C__DISPLAYCLASS32_0_CTOR_OFFSET UNITYSDK_OFFSET(0xC36A770)
#define POIDGGOOMHO___C__DISPLAYCLASS32_0___SHOW_B__0_OFFSET UNITYSDK_OFFSET(0xC36B6F0)

inline static constexpr unsigned int POIDGGOOMHO___c__DisplayClass32_0_TypeDefinitionIndex = 80238;

	class POIDGGOOMHO___c__DisplayClass32_0 : public ::System::Object
	{
	public:
		::POIDGGOOMHO* __4__this; // 0x10
		::System::Int32 generation; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POIDGGOOMHO___C__DISPLAYCLASS32_0_CTOR_OFFSET))(this);
		}

		::System::Void __Show_b__0(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + POIDGGOOMHO___C__DISPLAYCLASS32_0___SHOW_B__0_OFFSET))(this, a1, a2);
		}

	};
