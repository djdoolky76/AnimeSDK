#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AOFHFKPKKJI;
class GJBIPAMPICI;
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GJBIPAMPICI___C__DISPLAYCLASS1_0_CTOR_OFFSET UNITYSDK_OFFSET(0x15A59C10)
#define GJBIPAMPICI___C__DISPLAYCLASS1_0__SYNCHRONIZEALL_B__0_OFFSET UNITYSDK_OFFSET(0x15A5A670)

	class GJBIPAMPICI___c__DisplayClass1_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::TurnBasedModifierInstance*, ::AOFHFKPKKJI*>* oldMap; // 0x10
		::System::Collections::Generic::List_1<::AOFHFKPKKJI*>* model; // 0x18
		::GJBIPAMPICI* __4__this; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJBIPAMPICI___C__DISPLAYCLASS1_0_CTOR_OFFSET))(this);
		}

		::System::Void _SynchronizeAll_b__0(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + GJBIPAMPICI___C__DISPLAYCLASS1_0__SYNCHRONIZEALL_B__0_OFFSET))(this, a1);
		}

	};
