#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ModifierDispelFilterType.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System { class Object; }

#define EFKIODJNHHJ___C__DISPLAYCLASS3_1_CTOR_OFFSET UNITYSDK_OFFSET(0x13A56490)
#define EFKIODJNHHJ___C__DISPLAYCLASS3_1__FILTERMODIFIERTOINFECT_B__3_OFFSET UNITYSDK_OFFSET(0x13A56590)

	template <typename T>
	class EFKIODJNHHJ___c__DisplayClass3_1 : public ::System::Object
	{
	public:
		::System::Object* CS___8__locals1; // 0x10
		::RPG::GameCore::ModifierDispelFilterType dispelFilterType; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFKIODJNHHJ___C__DISPLAYCLASS3_1_CTOR_OFFSET))(this);
		}

		::System::Boolean _FilterModifierToInfect_b__3(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + EFKIODJNHHJ___C__DISPLAYCLASS3_1__FILTERMODIFIERTOINFECT_B__3_OFFSET))(this, a1);
		}

	};
