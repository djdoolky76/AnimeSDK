#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MEFBMDDEBNB;
namespace RPG::GameCore { class TurnBasedModifierInstance; }

#define ILHDPGNPIOK___C__DISPLAYCLASS1_0_CTOR_OFFSET UNITYSDK_OFFSET(0x164B3EF0)
#define ILHDPGNPIOK___C__DISPLAYCLASS1_0__ADDBUFF_B__0_OFFSET UNITYSDK_OFFSET(0x164B4630)

inline static constexpr unsigned int ILHDPGNPIOK___c__DisplayClass1_0_TypeDefinitionIndex = 72349;

	class ILHDPGNPIOK___c__DisplayClass1_0 : public ::System::Object
	{
	public:
		::RPG::GameCore::TurnBasedModifierInstance* buff; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILHDPGNPIOK___C__DISPLAYCLASS1_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _AddBuff_b__0(::MEFBMDDEBNB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MEFBMDDEBNB*))((::PBYTE)hIl2Cpp + ILHDPGNPIOK___C__DISPLAYCLASS1_0__ADDBUFF_B__0_OFFSET))(this, a1);
		}

	};
