#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }

#define EFKIODJNHHJ___C__DISPLAYCLASS3_2_CTOR_OFFSET UNITYSDK_OFFSET(0x13A564A0)
#define EFKIODJNHHJ___C__DISPLAYCLASS3_2__FILTERMODIFIERTOINFECT_B__4_OFFSET UNITYSDK_OFFSET(0x13A56690)

inline static constexpr unsigned int EFKIODJNHHJ___c__DisplayClass3_2_TypeDefinitionIndex = 55112;

	template <typename T1, typename T2>
	class EFKIODJNHHJ___c__DisplayClass3_2 : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* caster; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFKIODJNHHJ___C__DISPLAYCLASS3_2_CTOR_OFFSET))(this);
		}

		::System::Boolean _FilterModifierToInfect_b__4(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + EFKIODJNHHJ___C__DISPLAYCLASS3_2__FILTERMODIFIERTOINFECT_B__4_OFFSET))(this, a1);
		}

	};
