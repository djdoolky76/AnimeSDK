#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ENGBNDIPDJL;
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define IMPJHPPEDIG___C__DISPLAYCLASS4_0_CTOR_OFFSET UNITYSDK_OFFSET(0x164E5810)
#define IMPJHPPEDIG___C__DISPLAYCLASS4_0___PRECHECKFORCONDITION_B__0_OFFSET UNITYSDK_OFFSET(0x164E5820)

	class IMPJHPPEDIG___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* pAbiOwnerEntity; // 0x10
		::System::String* sAbilityName; // 0x18
		::System::Int32 nCount; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMPJHPPEDIG___C__DISPLAYCLASS4_0_CTOR_OFFSET))(this);
		}

		::System::Void __PreCheckForCondition_b__0(::ENGBNDIPDJL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ENGBNDIPDJL*))((::PBYTE)hIl2Cpp + IMPJHPPEDIG___C__DISPLAYCLASS4_0___PRECHECKFORCONDITION_B__0_OFFSET))(this, a1);
		}

	};
