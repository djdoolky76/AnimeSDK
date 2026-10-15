#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CEOLPPINFHP;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PropSpecialVisionConfig; }

#define CEOLPPINFHP___C__DISPLAYCLASS1_0_CTOR_OFFSET UNITYSDK_OFFSET(0xC9F6550)
#define CEOLPPINFHP___C__DISPLAYCLASS1_0__ONTASKBEGIN_B__0_OFFSET UNITYSDK_OFFSET(0xC9F6B70)

inline static constexpr unsigned int CEOLPPINFHP___c__DisplayClass1_0_TypeDefinitionIndex = 58572;

	class CEOLPPINFHP___c__DisplayClass1_0 : public ::System::Object
	{
	public:
		::RPG::GameCore::PropSpecialVisionConfig* config; // 0x10
		::CEOLPPINFHP* __4__this; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEOLPPINFHP___C__DISPLAYCLASS1_0_CTOR_OFFSET))(this);
		}

		::System::Void _OnTaskBegin_b__0(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CEOLPPINFHP___C__DISPLAYCLASS1_0__ONTASKBEGIN_B__0_OFFSET))(this, a1);
		}

	};
