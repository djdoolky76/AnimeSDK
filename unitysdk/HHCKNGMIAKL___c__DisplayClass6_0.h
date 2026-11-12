#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HHCKNGMIAKL;
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define HHCKNGMIAKL___C__DISPLAYCLASS6_0_CTOR_OFFSET UNITYSDK_OFFSET(0x16C02740)
#define HHCKNGMIAKL___C__DISPLAYCLASS6_0__CREATESUMMONUNIT_B__0_OFFSET UNITYSDK_OFFSET(0x16C06960)

inline static constexpr unsigned int HHCKNGMIAKL___c__DisplayClass6_0_TypeDefinitionIndex = 62154;

	class HHCKNGMIAKL___c__DisplayClass6_0 : public ::System::Object
	{
	public:
		::System::String* uniqueName; // 0x10
		::System::Action_1<::RPG::GameCore::GameEntity*>* onLoadFinish; // 0x18
		::HHCKNGMIAKL* __4__this; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHCKNGMIAKL___C__DISPLAYCLASS6_0_CTOR_OFFSET))(this);
		}

		::System::Void _CreateSummonUnit_b__0(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + HHCKNGMIAKL___C__DISPLAYCLASS6_0__CREATESUMMONUNIT_B__0_OFFSET))(this, a1);
		}

	};
