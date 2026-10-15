#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HHCKNGMIAKL;
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define HHCKNGMIAKL___C__DISPLAYCLASS3_0_CTOR_OFFSET UNITYSDK_OFFSET(0x15CB5E80)
#define HHCKNGMIAKL___C__DISPLAYCLASS3_0__CREATESUMMONUNIT_B__0_OFFSET UNITYSDK_OFFSET(0x15CB8F10)

inline static constexpr unsigned int HHCKNGMIAKL___c__DisplayClass3_0_TypeDefinitionIndex = 60775;

	class HHCKNGMIAKL___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::System::Action_1<::RPG::GameCore::GameEntity*>* onLoadFinish; // 0x10
		::System::String* uniqueName; // 0x18
		::HHCKNGMIAKL* __4__this; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHCKNGMIAKL___C__DISPLAYCLASS3_0_CTOR_OFFSET))(this);
		}

		::System::Void _CreateSummonUnit_b__0(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + HHCKNGMIAKL___C__DISPLAYCLASS3_0__CREATESUMMONUNIT_B__0_OFFSET))(this, a1);
		}

	};
