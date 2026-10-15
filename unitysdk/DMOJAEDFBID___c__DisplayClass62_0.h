#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MEDGOLOBNJM;
class PIOGONCBKIF;
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DMOJAEDFBID___C__DISPLAYCLASS62_0_CTOR_OFFSET UNITYSDK_OFFSET(0xFECBE00)
#define DMOJAEDFBID___C__DISPLAYCLASS62_0___SETUPMODIFIERHINTS_B__0_OFFSET UNITYSDK_OFFSET(0xFECD830)
#define DMOJAEDFBID___C__DISPLAYCLASS62_0___SETUPMODIFIERHINTS_B__2_OFFSET UNITYSDK_OFFSET(0xFECD980)

	class DMOJAEDFBID___c__DisplayClass62_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::MEDGOLOBNJM*>* displayData; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMOJAEDFBID___C__DISPLAYCLASS62_0_CTOR_OFFSET))(this);
		}

		::System::Void __SetupModifierHints_b__0(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + DMOJAEDFBID___C__DISPLAYCLASS62_0___SETUPMODIFIERHINTS_B__0_OFFSET))(this, a1);
		}

		::System::Void __SetupModifierHints_b__2(::PIOGONCBKIF* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::PIOGONCBKIF*, ::System::Int32))((::PBYTE)hIl2Cpp + DMOJAEDFBID___C__DISPLAYCLASS62_0___SETUPMODIFIERHINTS_B__2_OFFSET))(this, a1, a2);
		}

	};
