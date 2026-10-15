#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MEFBMDDEBNB;
namespace RPG::GameCore { class TurnBasedModifierInstance; }

#define ILHDPGNPIOK___C__DISPLAYCLASS2_0_CTOR_OFFSET UNITYSDK_OFFSET(0x164B4270)
#define ILHDPGNPIOK___C__DISPLAYCLASS2_0__REMOVEBUFF_B__0_OFFSET UNITYSDK_OFFSET(0x164B4690)

inline static constexpr unsigned int ILHDPGNPIOK___c__DisplayClass2_0_TypeDefinitionIndex = 72350;

	class ILHDPGNPIOK___c__DisplayClass2_0 : public ::System::Object
	{
	public:
		::RPG::GameCore::TurnBasedModifierInstance* buff; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILHDPGNPIOK___C__DISPLAYCLASS2_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _RemoveBuff_b__0(::MEFBMDDEBNB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MEFBMDDEBNB*))((::PBYTE)hIl2Cpp + ILHDPGNPIOK___C__DISPLAYCLASS2_0__REMOVEBUFF_B__0_OFFSET))(this, a1);
		}

	};
